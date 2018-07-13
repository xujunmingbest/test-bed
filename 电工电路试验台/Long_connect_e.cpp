#include "Long_connection_control.h"
#include "capture.h"
using namespace System::Threading;
using namespace System::Windows::Forms;

void Long_connection_control::RecvHandle() {
	SendComputerInfo(); //�����ӷ���  ��̨���
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
			if (req == Long_connection_Req[1]) { //������Ļ������
				Capture ^c = gcnew Capture;
				c->Open();
			}else if (req == Long_connection_Req[2]) { //����ǿ��ֹͣʵ������
                for each (Form^f in Application::OpenForms)
				{
					if (f->Name  == "������") f->Enabled = false; 
					f->Text = "���ѱ�ǿ��ֹͣʵ��";
				}
			}
			else if (req == Long_connection_Req[5]) {
				for each (Form^f in Application::OpenForms)
				{
					if (f->Name == "������") f->Enabled = true;
					f->Text = "�繤��·ʵ����";
				}
			}
		}
	}
	open();
}