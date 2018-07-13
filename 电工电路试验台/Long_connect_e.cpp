#include "Long_connection_control.h"
#include "capture.h"
using namespace System::Threading;
using namespace System::Windows::Forms;

void Long_connection_control::RecvHandle() {
	SendComputerInfo(); //长连接发送  机台编号
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

		string req = H.req;
		if (req.length() != 0) {
			if (req == Long_connection_Req[1]) { //发送屏幕接命令
				Capture ^c = gcnew Capture;
				c->Open();
			}else if (req == Long_connection_Req[2]) { //发送强制停止实验命令
                for each (Form^f in Application::OpenForms)
				{
					if (f->Name  == "主窗体") f->Enabled = false; 
					f->Text = "您已被强制停止实验";
				}
			}
			else if (req == Long_connection_Req[5]) {
				for each (Form^f in Application::OpenForms)
				{
					if (f->Name == "主窗体") f->Enabled = true;
					f->Text = "电工电路实验中";
				}
			}
		}
	}
	open();
}