#include "Long_connection_control.h"
#include "capture.h"
#include "data_transf.h"
#include "monitorTrial.h"
#include "loginWnd.h"
#include "实验汇总头文件.h"
#include "主窗体.h"
using namespace System::Threading;
using namespace System::Windows::Forms;



void ForceCommitGrade();

void Long_connection_control::RecvHandle() {
	protocolDemo pd;
	while (true) {
		protocolDemo md;
		SOCKET s = ssc.sc;
		uint f_l = 0;
		if (!md.RecvFIRSTBYTES(s, f_l)) {
			closesocket(s);
			break;
		}
		uint s_l = 0;
		if (!md.RecvSECONDBYTES(s, s_l)) {
			closesocket(s);
			break;
		}
		string f_s;
		if (!md.RecvFIRST(s, f_l, f_s)) {
			closesocket(s);
			break;
		}

		string s_s;
		if (!md.RecvSECOND(s, s_l, s_s)) {
			closesocket(s);
			break;
		}
		Long_connection_Head H;
		memcpy(&H, f_s.c_str(), f_s.length());

		string reply = H.reply;
		string req = H.req;
		if (req.length() != 0) {
			if (req == Long_connection_Req[1]) { //发送屏幕接命令
				Capture ^c = gcnew Capture;
				c->Open();
			}else if (req == Long_connection_Req[2]) { //发送强制停止实验命令
                for each (Form^f in Application::OpenForms)
				{
					if (f->Name == "主窗体") {
						f->Enabled = false;
						f->Text = "您已被强制停止实验";
						break;
					}
				}
			}
			else if (req == Long_connection_Req[5]) {
				for each (Form^f in Application::OpenForms)
				{
					if (f->Name == "主窗体") {
						f->Enabled = true;
						f->Text = "电工电路实验中";
						break;
					}
				}
			}
			else if (req == Long_connection_Req[3]) { //强制提交实验
					ForceCommitGrade();
			}
			else if (req == Long_connection_Req[6]) { //获取学生正在做的实验项目
				monitorTrialssc m;
				m.SendTrial();
			}
		}
		else if (reply.length() != 0) {
			if (reply == Long_connection_Req[4]) { //获取学生信息接收

				FormCollection^ collection = Application::OpenForms;
				for each(Form ^form in collection)
				{
					if (form->Name == "loginWnd") {
						((loginWnd^)form)->ShowMsgRet(s_s);
						break;
					}
				}
			}
		
		}
	}
	open();
}



//强制交卷


void Long_connection_control::SendBack_NowTrial(string &Data) {

}

void ForceCommitGrade() {

	for each (Form^fz in Application::OpenForms)
	{
		if (fz->Name == "主窗体") {
			for each (Form^f in ((主窗体^)fz)->panel4->Controls)
			{
				if (f->Name == "元件伏安特性的测试实验内容") {
					ST_元件伏安特性测试 s;
					memset(&s, 0x00, sizeof(ST_元件伏安特性测试));
					s = ((元件伏安特性的测试实验内容^)f)->LoadGradeData();
					s.ti = trialInfo;
					s.ti.TrialCode = 1;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[1].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = 1;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[1].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_元件伏安特性测试)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[1] + "已交卷");
				}
				else if (f->Name == "基尔霍夫定律实验内容") {
					ST_基尔霍夫定律 s;
					memset(&s, 0x00, sizeof(ST_基尔霍夫定律));
					s = ((基尔霍夫定律实验内容^)f)->Load_Grade_data();
					int trialCode = 2;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_基尔霍夫定律)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "叠加原理实验内容") {
					ST_叠加原理 s;
					memset(&s, 0x00, sizeof(ST_叠加原理));
					s = ((叠加原理实验内容^)f)->Load_Grade_data();
					int trialCode = 3;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_叠加原理)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "戴维南定理实验内容") {
					ST_戴维南定理 s;
					memset(&s, 0x00, sizeof(ST_戴维南定理));
					s = ((戴维南定理实验内容^)f)->Load_Grade_data();
					int trialCode = 4;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_戴维南定理)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "电压源与电流源的等效变换实验内容") {
					ST_电压源与电流源的等效变换 s;
					memset(&s, 0x00, sizeof(ST_电压源与电流源的等效变换));
					s = ((电压源与电流源的等效变换实验内容^)f)->Load_Grade_data();
					int trialCode = 5;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_电压源与电流源的等效变换)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "一阶电路的响应测试实验内容") {
					ST_一阶电路的响应测试 s;
					memset(&s, 0x00, sizeof(ST_一阶电路的响应测试));
					s = ((一阶电路的响应测试实验内容^)f)->Load_Grade_data();
					int trialCode = 6;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_一阶电路的响应测试)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "二阶动态电路响应的研究实验内容") {

					ST_二阶动态电路响应的研究 s;
					memset(&s, 0x00, sizeof(ST_二阶动态电路响应的研究));
					s = ((二阶动态电路响应的研究实验内容^)f)->Load_Grade_data();
					int trialCode = 7;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_二阶动态电路响应的研究)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "VCVS实验实验内容") {

					ST_VCVS实验 s;
					memset(&s, 0x00, sizeof(ST_VCVS实验));
					s = ((VCVS实验实验内容^)f)->Load_Grade_data();
					int trialCode = 8;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_VCVS实验)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "VCVS实验实验内容") {

					ST_二端口网络的研究 s;
					memset(&s, 0x00, sizeof(ST_二端口网络的研究));
					s = ((二端口网络的研究实验内容^)f)->Load_Grade_data();
					int trialCode = 9;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_二端口网络的研究)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "最大功率传输条件的测定实验内容") {

					ST_最大功率传输条件的测定 s;
					memset(&s, 0x00, sizeof(ST_最大功率传输条件的测定));
					s = ((最大功率传输条件的测定实验内容^)f)->Load_Grade_data();
					int trialCode = 10;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_最大功率传输条件的测定)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "电路状态轨迹的观测实验内容") {

					ST_电路状态轨迹的观测 s;
					memset(&s, 0x00, sizeof(ST_电路状态轨迹的观测));
					s = ((电路状态轨迹的观测实验内容^)f)->Load_Grade_data();
					int trialCode = 11;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_电路状态轨迹的观测)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "RLC元件阻抗特性的测定实验内容") {

					ST_RLC元件阻抗特性的测定 s;
					memset(&s, 0x00, sizeof(ST_RLC元件阻抗特性的测定));
					s = ((RLC元件阻抗特性的测定实验内容^)f)->Load_Grade_data();
					int trialCode = 12;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLC元件阻抗特性的测定)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "RLC串联谐振电路的研究实验内容") {

					ST_RLC串联谐振电路的研究 s;
					memset(&s, 0x00, sizeof(ST_RLC串联谐振电路的研究));
					s = ((RLC串联谐振电路的研究实验内容^)f)->Load_Grade_data();
					int trialCode = 13;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLC串联谐振电路的研究)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "单相铁心变压器特性的测试实验内容") {

					ST_单相铁心变压器特性的测试 s;
					memset(&s, 0x00, sizeof(ST_单相铁心变压器特性的测试));
					s = ((单相铁心变压器特性的测试实验内容^)f)->Load_Grade_data();
					int trialCode = 14;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_单相铁心变压器特性的测试)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "单相电度表实验实验内容") {

					ST_单相电度表实验 s;
					memset(&s, 0x00, sizeof(ST_单相电度表实验));
					s = ((单相电度表实验实验内容^)f)->Load_Grade_data();
					int trialCode = 15;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_单相电度表实验)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "三相交流电路电压电流的测量实验内容") {

					ST_三相交流电路电压电流的测量 s;
					memset(&s, 0x00, sizeof(ST_三相交流电路电压电流的测量));
					s = ((三相交流电路电压电流的测量实验内容^)f)->Load_Grade_data();
					int trialCode = 16;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_三相交流电路电压电流的测量)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "日光灯功率因数的提高实验内容") {

					ST_日光灯功率因数的提高 s;
					memset(&s, 0x00, sizeof(ST_日光灯功率因数的提高));
					s = ((日光灯功率因数的提高实验内容^)f)->Load_Grade_data();
					int trialCode = 17;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_日光灯功率因数的提高)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "回转器实验内容") {

					ST_回转器 s;
					memset(&s, 0x00, sizeof(ST_回转器));
					s = ((回转器实验内容^)f)->Load_Grade_data();
					int trialCode = 18;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_回转器)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "三相电路功率的测量实验内容") {

					ST_三相电路功率的测量 s;
					memset(&s, 0x00, sizeof(ST_三相电路功率的测量));
					s = ((三相电路功率的测量实验内容^)f)->Load_Grade_data();
					int trialCode = 19;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_三相电路功率的测量)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "负阻抗变换器实验内容") {

					ST_负阻抗变换器 s;
					memset(&s, 0x00, sizeof(ST_负阻抗变换器));
					s = ((负阻抗变换器实验内容^)f)->Load_Grade_data();
					int trialCode = 20;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_负阻抗变换器)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "RC网络的频率特性实验内容") {

					ST_RC网络的频率特性 s;
					memset(&s, 0x00, sizeof(ST_RC网络的频率特性));
					s = ((RC网络的频率特性实验内容^)f)->Load_Grade_data();
					int trialCode = 21;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RC网络的频率特性)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
				else if (f->Name == "仪表量程的扩展实验内容") {

					ST_仪表量程的扩展 s;
					memset(&s, 0x00, sizeof(ST_仪表量程的扩展));
					s = ((仪表量程的扩展实验内容^)f)->Load_Grade_data();
					int trialCode = 22;
					s.ti = trialInfo;
					s.ti.TrialCode = trialCode;
					s.ti.totalscore = -1;
					snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
					snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
					data_transf d;
					GradesHead H;
					H.TrialCode = trialCode;
					snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[trialCode].c_str());
					snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
					if (!d.open()) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_仪表量程的扩展)))) {
						MessageBox::Show("TCP连接失败");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "已交卷");
				}
			}
		}
	}
}

