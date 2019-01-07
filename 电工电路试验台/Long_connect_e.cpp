#include "Long_connection_control.h"
#include "capture.h"
#include "data_transf.h"
#include "monitorTrial.h"
#include "loginWnd.h"
#include "ʵ�����ͷ�ļ�.h"
#include "������.h"
using namespace System::Threading;
using namespace System::Windows::Forms;

vector<ClassElement> g_ClassList; //ѧ�������б�
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
			if (req == Long_connection_Req[1]) { //������Ļ������
				Capture ^c = gcnew Capture;
				c->Open();
			}else if (req == Long_connection_Req[2]) { //����ǿ��ֹͣʵ������
                for each (Form^f in Application::OpenForms)
				{
					if (f->Name == "������") {
						f->Enabled = false;
						f->Text = "���ѱ�ǿ��ֹͣʵ��";
						break;
					}
				}
			}
			else if (req == Long_connection_Req[5]) {
				for each (Form^f in Application::OpenForms)
				{
					if (f->Name == "������") {
						f->Enabled = true;
						f->Text = "�繤��·ʵ����";
						break;
					}
				}
			}
			else if (req == Long_connection_Req[3]) { //ǿ���ύʵ��
					ForceCommitGrade();
			}
			else if (req == Long_connection_Req[6]) { //��ȡѧ����������ʵ����Ŀ
				monitorTrialssc m;
				m.SendTrial();
			}
		}
		else if (reply.length() != 0) {
			if (reply == Long_connection_Req[4]) { //��ȡѧ����Ϣ����

				FormCollection^ collection = Application::OpenForms;
				for each(Form ^form in collection)
				{
					if (form->Name == "loginWnd") {
						((loginWnd^)form)->ShowMsgRet(s_s);
						break;
					}
				}
			}
			if (reply == Long_connection_Req[7]) { //��ȡѧ���б�
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



//ǿ�ƽ���


void Long_connection_control::SendBack_NowTrial(string &Data) {

}


Form^ GetWnd(Form^fz,String ^Name) {
	for each (Form^f in ((������^)fz)->panel4->Controls)
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
		if (fz->Name == "������") {
				switch (NowTrial::NowTrailCode) {
				case 1:
					f = GetWnd(fz, "Ԫ���������ԵĲ���ʵ������");
					if (f == nullptr) return;
					((Ԫ���������ԵĲ���ʵ������^)f)->SendGrade();
					break;
				case 2:
					f = GetWnd(fz, "����������ʵ������");
					if (f == nullptr) return;
					((����������ʵ������^)f)->SendGrade();
					break;
				case 3:
					f = GetWnd(fz, "����ԭ��ʵ������");
					if (f == nullptr) return;
					((����ԭ��ʵ������^)f)->SendData();
					break;
				case 4:
					f = GetWnd(fz, "��ά�϶���ʵ������");
					if (f == nullptr) return;
					((��ά�϶���ʵ������^)f)->SendData();
					break;
				case 5:
					f = GetWnd(fz, "��ѹԴ�����Դ�ĵ�Ч�任ʵ������");
					if (f == nullptr) return;
					((��ѹԴ�����Դ�ĵ�Ч�任ʵ������^)f)->SendData();
					break;
				case 6:
					f = GetWnd(fz, "һ�׵�·����Ӧ����ʵ������");
					if (f == nullptr) return;
					((һ�׵�·����Ӧ����ʵ������^)f)->SendData();
					break;
				case 7:
					f = GetWnd(fz, "���׶�̬��·��Ӧ���о�ʵ������");
					if (f == nullptr) return;
					((���׶�̬��·��Ӧ���о�ʵ������^)f)->SendData();
					break;
				case 8:
					f = GetWnd(fz, "VCVSʵ��ʵ������");
					if (f == nullptr) return;
					((VCVSʵ��ʵ������^)f)->SendData();
					break;
				case 9:
					f = GetWnd(fz, "���˿�������о�ʵ������");
					if (f == nullptr) return;
					((���˿�������о�ʵ������^)f)->SendGrade();
					break;
				case 10:
					f = GetWnd(fz, "����ʴ��������Ĳⶨʵ������");
					if (f == nullptr) return;
					((����ʴ��������Ĳⶨʵ������^)f)->SendData();
					break;

				case 11:
					f = GetWnd(fz, "��·״̬�켣�Ĺ۲�ʵ������");
					if (f == nullptr) return;
					((��·״̬�켣�Ĺ۲�ʵ������^)f)->SendData();
					break;
				case 12:
					f = GetWnd(fz, "RLCԪ���迹���ԵĲⶨʵ������");
					if (f == nullptr) return;
					((RLCԪ���迹���ԵĲⶨʵ������^)f)->SendData();
					break;

				case 13:
					f = GetWnd(fz, "RLC����г���·���о�ʵ������");
					if (f == nullptr) return;
					((RLC����г���·���о�ʵ������^)f)->SendData();
					break;
				case 14:
					f = GetWnd(fz, "�������ı�ѹ�����ԵĲ���ʵ������");
					if (f == nullptr) return;
					((�������ı�ѹ�����ԵĲ���ʵ������^)f)->SendData();
					break;
				case 15:
					f = GetWnd(fz, "�����ȱ�ʵ��ʵ������");
					if (f == nullptr) return;
					((�����ȱ�ʵ��ʵ������^)f)->SendData();
					break;
				case 16:
					f = GetWnd(fz, "���ཻ����·��ѹ�����Ĳ���ʵ������");
					if (f == nullptr) return;
					((���ཻ����·��ѹ�����Ĳ���ʵ������^)f)->SendData();
					break;
				case 17:
					f = GetWnd(fz, "�չ�ƹ������������ʵ������");
					if (f == nullptr) return;
					((�չ�ƹ������������ʵ������^)f)->SendData();
					break;
				case 18:
					f = GetWnd(fz, "��ת��ʵ������");
					if (f == nullptr) return;
					((��ת��ʵ������^)f)->SendData();
					break;

				case 19:
					f = GetWnd(fz, "�����·���ʵĲ���ʵ������");
					if (f == nullptr) return;
					((�����·���ʵĲ���ʵ������^)f)->SendData();
					break;

				case 20:
					f = GetWnd(fz, "���迹�任��ʵ������");
					if (f == nullptr) return;
					((���迹�任��ʵ������^)f)->SendData();
					break;

				case 21:
					f = GetWnd(fz, "RC�����Ƶ������ʵ������");
					if (f == nullptr) return;
					((RC�����Ƶ������ʵ������^)f)->SendData();
					break;
				case 22:
					f = GetWnd(fz, "�Ǳ����̵���չʵ������");
					if (f == nullptr) return;
					((�Ǳ����̵���չʵ������^)f)->SendData();
					break;
				case 23:
					f = GetWnd(fz, "������ʵ������");
					if (f == nullptr) return;
					((������ʵ������^)f)->SendData();
					break;
				case 24:
					f = GetWnd(fz, "�����繤�Ǳ��ʹ����������ļ���ʵ������");
					if (f == nullptr) return;
					((�����繤�Ǳ��ʹ����������ļ���ʵ������^)f)->SendData();
					break;
				case 25:
					f = GetWnd(fz, "��������������Ĳ���ʵ������");
					if (f == nullptr) return;
					((��������������Ĳ���ʵ������^)f)->SendData();
					break;
				default:;
				}
		}
	}

}

