#include "Long_connection_control.h"
#include "tool/xml/xml.h"
#include <thread>
using namespace std;
//#include "tool/µ×²¿.h"

Long_connection_control lcc;
	bool Long_connection_control::open() {
		ssc.Connect(configXml.TeacherIp, configXml.LongConnectPort);
		thread t(&Long_connection_control::RecvHandle,this);
		t.detach();
		return true;
	}

	void Long_connection_control::close() {
		ssc.Destroy();
	
	}
	TrialStatus Long_connection_control::GenerateTrialStatus(string trialStatus) {
		TrialStatus ts;
		ts.ti = trialInfo;
		snprintf(ts.trialStatus, sizeof(ts.trialStatus), "%s", trialStatus.c_str());
	    snprintf(ts.computerId,  sizeof(ts.computerId), "%s", configXml.ComputerId.c_str());
		return ts;
	}

	void Long_connection_control::SendComputerInfo(string trialStatus) {
		TrialStatus Ts = GenerateTrialStatus(trialStatus);
		protocolDemo pd;
		Long_connection_Head H;
		memset(&H, 0x00, sizeof(Long_connection_Head));
		snprintf(H.req, sizeof(H.req), "%s", Long_connection_Req[4].c_str());

		string l_f = pd.GenerateFIRSTBYTES(sizeof(Long_connection_Head));
		string l_s = pd.GenerateSECONDBYTES(sizeof(TrialStatus));
		string final = l_f + l_s + string((char*)&H, sizeof(Long_connection_Head)) + string( (char*)&Ts,sizeof(TrialStatus));
		pd.Send(ssc.sc,final);
	}


	void Long_connection_control::GetStudentList() {
		protocolDemo pd;
		Long_connection_Head H;
		memset(&H, 0x00, sizeof(Long_connection_Head));
		snprintf(H.req, sizeof(H.req), "%s", Long_connection_Req[7].c_str());
		string l_f = pd.GenerateFIRSTBYTES(sizeof(Long_connection_Head));
		string body = "null";
		string l_s = pd.GenerateSECONDBYTES(body.length());
		string final = l_f + l_s + string((char*)&H, sizeof(Long_connection_Head)) + body;
		pd.Send(ssc.sc, final);
	}

	void Long_connection_control::CallTeacher(string &body) {
		protocolDemo pd;
		Long_connection_Head H;
		memset(&H, 0x00, sizeof(Long_connection_Head));
		snprintf(H.req, sizeof(H.req), "%s", Long_connection_Req[8].c_str());
		string l_f = pd.GenerateFIRSTBYTES(sizeof(Long_connection_Head));
		string l_s = pd.GenerateSECONDBYTES(body.length());
		string final = l_f + l_s + string((char*)&H, sizeof(Long_connection_Head)) + body;
		pd.Send(ssc.sc, final);
	}