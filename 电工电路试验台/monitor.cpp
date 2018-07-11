#include "monitor.h"
#include "tool/message_Queue.h"
#include "tool/底部.h"

using namespace System::Windows::Forms;
using namespace System::Threading;
using namespace System;
MsgQueue  monitorQueue;
StuInfo stuInfo;
void moniter::Start() {
	monitorQueue.QueueRegister(string("monitorQueue"));
	cshd.SetServfun(moniter::MonterHandle);
	if (cshd.Open(1234)) {
		cshd.Acpt();
		return;
	}
	MessageBox::Show("TCP连接失败");
}
void moniter::MonterHandle(SOCKET s) {
	MoniterProtocol md;

	uint f_l = 0;
	if (!md.RecvFIRSTBYTES(s, f_l)) {
		closesocket(s);
		return;
	}
	uint s_l = 0;
	if (!md.RecvSECONDBYTES(s, s_l)) {
		closesocket(s);
		return;
	}
	string f_s ;
	if (!md.RecvFIRST(s, f_l, f_s)) {
		closesocket(s);
		return;
	}
	
	string s_s;
	if (!md.RecvSECOND(s, s_l, s_s)) {
		closesocket(s);
		return;
	}

	moniterHead H;
	memcpy(&H, f_s.c_str(), f_s.length());
	string RequestType(H.RequestType);
	if (RequestType == "停止实验") {
		string r = md.GenerateErrRet(f_s, 1);
		md.Send(s, r);
		MessageBox::Show("你已被强制停止实验");
		closesocket(s);
		return;
	}
	else if(RequestType == mapMonRequest[4]){ //获取机台信息
		snprintf(H.ReturnType, sizeof(H.ReturnType), "%s", mapMonRequest[4].c_str());
		JiTaiInfo jti;
		snprintf(jti.Stu1Name, sizeof(jti.Stu1Name), "%s", stuInfo.stu1Name.c_str());
		snprintf(jti.Stu2Name, sizeof(jti.Stu2Name), "%s", stuInfo.stu2Name.c_str());
		snprintf(jti.XueHao1, sizeof(jti.XueHao1), "%s", stuInfo.XueHao1.c_str());
		snprintf(jti.XueHao2, sizeof(jti.XueHao2), "%s", stuInfo.XueHao2.c_str());
		snprintf(jti.stuclass, sizeof(jti.stuclass), "%s", stuInfo.Class.c_str());
		string r = md.GenerateRet(H, string((char*)(&jti),sizeof(JiTaiInfo)));
		md.Send(s, r);	
		closesocket(s);

		return;
	}
}


bool moniter::close() {

	return true;
}

string MoniterProtocol::GenerateErrRet(string &OriginHead, int errorCode) {
	string f = GenerateFIRSTBYTES(OriginHead.length());

	moniterHead H;
	memcpy(&H, OriginHead.c_str(), OriginHead.length());
	snprintf(H.ReturnType, sizeof(H.ReturnType), "RETMSG");
	string f_s((char*)&H, OriginHead.length());

	string s_s = mapMonReturn[errorCode];
	string s = GenerateSECONDBYTES(s_s.length());
	string fina = f + s + f_s + s_s;
	return fina;


}

string MoniterProtocol::GenerateRet(moniterHead &H, string &second) {
	string f = GenerateFIRSTBYTES(sizeof(moniterHead));

	string f_s((char*)&H, sizeof(moniterHead));

	string s_s = second;
	string s = GenerateSECONDBYTES(s_s.length());
	string fina = f + s + f_s + s_s;
	return fina;
}