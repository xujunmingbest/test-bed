#include "Long_connection_control.h"
#include "capture.h"
#include "data_transf.h"
#include "monitorTrial.h"
#include "loginWnd.h"
#include "实验汇总头文件.h"
#include "主窗体.h"
using namespace System::Threading;
using namespace System::Windows::Forms;

vector<ClassElement> g_ClassList; //学生名单列表
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
			if (reply == Long_connection_Req[7]) { //获取学生列表
				g_ClassListMutex.Lock();
				g_ClassList.clear();
				if (s_s == MsgRet[-5]) continue;
				int CElength = sizeof(ClassElement);
				int ClassNumber = s_s.length()  / CElength;
				for (int i = 0; i < ClassNumber; i++) {
					ClassElement CE;
					memcpy(&CE, s_s.c_str() + i * CElength, CElength);
					g_ClassList.push_back(CE);
				}
				g_ClassListMutex.UnLock();
			}
		}
	}
	open();
}



//强制交卷


void Long_connection_control::SendBack_NowTrial(string &Data) {

}


Form^ GetWnd(Form^fz,String ^Name) {
	for each (Form^f in ((主窗体^)fz)->panel4->Controls)
	{
		if (f->Name == Name) {
			return f;
		}
	}
	return nullptr;
}


void ForceCommitGrade() {
	Form ^f;
	for each (Form^fz in Application::OpenForms)
	{
		if (fz->Name == "主窗体") {
				switch (NowTrial::NowTrailCode) {
				case 1:
					f = GetWnd(fz, "元件伏安特性的测试实验内容");
					if (f == nullptr) return;
					((元件伏安特性的测试实验内容^)f)->SendGrade();
					break;
				case 2:
					f = GetWnd(fz, "基尔霍夫定律实验内容");
					if (f == nullptr) return;
					((基尔霍夫定律实验内容^)f)->SendGrade();
					break;
				case 3:
					f = GetWnd(fz, "叠加原理实验内容");
					if (f == nullptr) return;
					((叠加原理实验内容^)f)->SendData();
					break;
				case 4:
					f = GetWnd(fz, "戴维南定理实验内容");
					if (f == nullptr) return;
					((戴维南定理实验内容^)f)->SendData();
					break;
				case 5:
					f = GetWnd(fz, "电压源与电流源的等效变换实验内容");
					if (f == nullptr) return;
					((电压源与电流源的等效变换实验内容^)f)->SendData();
					break;
				case 6:
					f = GetWnd(fz, "一阶电路的响应测试实验内容");
					if (f == nullptr) return;
					((一阶电路的响应测试实验内容^)f)->SendData();
					break;
				case 7:
					f = GetWnd(fz, "二阶动态电路响应的研究实验内容");
					if (f == nullptr) return;
					((二阶动态电路响应的研究实验内容^)f)->SendData();
					break;
				case 8:
					f = GetWnd(fz, "VCVS实验实验内容");
					if (f == nullptr) return;
					((VCVS实验实验内容^)f)->SendData();
					break;
				case 9:
					f = GetWnd(fz, "二端口网络的研究实验内容");
					if (f == nullptr) return;
					((二端口网络的研究实验内容^)f)->SendGrade();
					break;
				case 10:
					f = GetWnd(fz, "最大功率传输条件的测定实验内容");
					if (f == nullptr) return;
					((最大功率传输条件的测定实验内容^)f)->SendData();
					break;

				case 11:
					f = GetWnd(fz, "电路状态轨迹的观测实验内容");
					if (f == nullptr) return;
					((电路状态轨迹的观测实验内容^)f)->SendData();
					break;
				case 12:
					f = GetWnd(fz, "RLC元件阻抗特性的测定实验内容");
					if (f == nullptr) return;
					((RLC元件阻抗特性的测定实验内容^)f)->SendData();
					break;

				case 13:
					f = GetWnd(fz, "RLC串联谐振电路的研究实验内容");
					if (f == nullptr) return;
					((RLC串联谐振电路的研究实验内容^)f)->SendData();
					break;
				case 14:
					f = GetWnd(fz, "单相铁心变压器特性的测试实验内容");
					if (f == nullptr) return;
					((单相铁心变压器特性的测试实验内容^)f)->SendData();
					break;
				case 15:
					f = GetWnd(fz, "单相电度表实验实验内容");
					if (f == nullptr) return;
					((单相电度表实验实验内容^)f)->SendData();
					break;
				case 16:
					f = GetWnd(fz, "三相交流电路电压电流的测量实验内容");
					if (f == nullptr) return;
					((三相交流电路电压电流的测量实验内容^)f)->SendData();
					break;
				case 17:
					f = GetWnd(fz, "日光灯功率因数的提高实验内容");
					if (f == nullptr) return;
					((日光灯功率因数的提高实验内容^)f)->SendData();
					break;
				case 18:
					f = GetWnd(fz, "回转器实验内容");
					if (f == nullptr) return;
					((回转器实验内容^)f)->SendData();
					break;

				case 19:
					f = GetWnd(fz, "三相电路功率的测量实验内容");
					if (f == nullptr) return;
					((三相电路功率的测量实验内容^)f)->SendData();
					break;

				case 20:
					f = GetWnd(fz, "负阻抗变换器实验内容");
					if (f == nullptr) return;
					((负阻抗变换器实验内容^)f)->SendData();
					break;

				case 21:
					f = GetWnd(fz, "RC网络的频率特性实验内容");
					if (f == nullptr) return;
					((RC网络的频率特性实验内容^)f)->SendData();
					break;
				case 22:
					f = GetWnd(fz, "仪表量程的扩展实验内容");
					if (f == nullptr) return;
					((仪表量程的扩展实验内容^)f)->SendData();
					break;
				case 23:
					f = GetWnd(fz, "互感器实验内容");
					if (f == nullptr) return;
					((互感器实验内容^)f)->SendData();
					break;
				case 24:
					f = GetWnd(fz, "基本电工仪表的使用与测量误差的计算实验内容");
					if (f == nullptr) return;
					((基本电工仪表的使用与测量误差的计算实验内容^)f)->SendData();
					break;
				case 25:
					f = GetWnd(fz, "功率因数及相序的测量实验内容");
					if (f == nullptr) return;
					((功率因数及相序的测量实验内容^)f)->SendData();
					break;
				default:;
				}
		}
	}

}

