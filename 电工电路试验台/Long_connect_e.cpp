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
			}
		}
	}
}

