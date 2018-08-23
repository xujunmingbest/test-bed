#include "Long_connection_control.h"
#include "capture.h"
#include "data_transf.h"
#include "monitorTrial.h"
#include "loginWnd.h"
#include "ʵ�����ͷ�ļ�.h"
#include "������.h"
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
		
		}
	}
	open();
}



//ǿ�ƽ���


void Long_connection_control::SendBack_NowTrial(string &Data) {

}

void ForceCommitGrade() {

	for each (Form^fz in Application::OpenForms)
	{
		if (fz->Name == "������") {
			for each (Form^f in ((������^)fz)->panel4->Controls)
			{
				if (f->Name == "Ԫ���������ԵĲ���ʵ������") {
					ST_Ԫ���������Բ��� s;
					memset(&s, 0x00, sizeof(ST_Ԫ���������Բ���));
					s = ((Ԫ���������ԵĲ���ʵ������^)f)->LoadGradeData();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_Ԫ���������Բ���)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[1] + "�ѽ���");
				}
				else if (f->Name == "����������ʵ������") {
					ST_���������� s;
					memset(&s, 0x00, sizeof(ST_����������));
					s = ((����������ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_����������)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "����ԭ��ʵ������") {
					ST_����ԭ�� s;
					memset(&s, 0x00, sizeof(ST_����ԭ��));
					s = ((����ԭ��ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_����ԭ��)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "��ά�϶���ʵ������") {
					ST_��ά�϶��� s;
					memset(&s, 0x00, sizeof(ST_��ά�϶���));
					s = ((��ά�϶���ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_��ά�϶���)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "��ѹԴ�����Դ�ĵ�Ч�任ʵ������") {
					ST_��ѹԴ�����Դ�ĵ�Ч�任 s;
					memset(&s, 0x00, sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任));
					s = ((��ѹԴ�����Դ�ĵ�Ч�任ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "һ�׵�·����Ӧ����ʵ������") {
					ST_һ�׵�·����Ӧ���� s;
					memset(&s, 0x00, sizeof(ST_һ�׵�·����Ӧ����));
					s = ((һ�׵�·����Ӧ����ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_һ�׵�·����Ӧ����)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "���׶�̬��·��Ӧ���о�ʵ������") {

					ST_���׶�̬��·��Ӧ���о� s;
					memset(&s, 0x00, sizeof(ST_���׶�̬��·��Ӧ���о�));
					s = ((���׶�̬��·��Ӧ���о�ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_���׶�̬��·��Ӧ���о�)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "VCVSʵ��ʵ������") {

					ST_VCVSʵ�� s;
					memset(&s, 0x00, sizeof(ST_VCVSʵ��));
					s = ((VCVSʵ��ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_VCVSʵ��)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "VCVSʵ��ʵ������") {

					ST_���˿�������о� s;
					memset(&s, 0x00, sizeof(ST_���˿�������о�));
					s = ((���˿�������о�ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_���˿�������о�)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "����ʴ��������Ĳⶨʵ������") {

					ST_����ʴ��������Ĳⶨ s;
					memset(&s, 0x00, sizeof(ST_����ʴ��������Ĳⶨ));
					s = ((����ʴ��������Ĳⶨʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_����ʴ��������Ĳⶨ)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "��·״̬�켣�Ĺ۲�ʵ������") {

					ST_��·״̬�켣�Ĺ۲� s;
					memset(&s, 0x00, sizeof(ST_��·״̬�켣�Ĺ۲�));
					s = ((��·״̬�켣�Ĺ۲�ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_��·״̬�켣�Ĺ۲�)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "RLCԪ���迹���ԵĲⶨʵ������") {

					ST_RLCԪ���迹���ԵĲⶨ s;
					memset(&s, 0x00, sizeof(ST_RLCԪ���迹���ԵĲⶨ));
					s = ((RLCԪ���迹���ԵĲⶨʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLCԪ���迹���ԵĲⶨ)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "RLC����г���·���о�ʵ������") {

					ST_RLC����г���·���о� s;
					memset(&s, 0x00, sizeof(ST_RLC����г���·���о�));
					s = ((RLC����г���·���о�ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLC����г���·���о�)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "�������ı�ѹ�����ԵĲ���ʵ������") {

					ST_�������ı�ѹ�����ԵĲ��� s;
					memset(&s, 0x00, sizeof(ST_�������ı�ѹ�����ԵĲ���));
					s = ((�������ı�ѹ�����ԵĲ���ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_�������ı�ѹ�����ԵĲ���)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "�����ȱ�ʵ��ʵ������") {

					ST_�����ȱ�ʵ�� s;
					memset(&s, 0x00, sizeof(ST_�����ȱ�ʵ��));
					s = ((�����ȱ�ʵ��ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_�����ȱ�ʵ��)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "���ཻ����·��ѹ�����Ĳ���ʵ������") {

					ST_���ཻ����·��ѹ�����Ĳ��� s;
					memset(&s, 0x00, sizeof(ST_���ཻ����·��ѹ�����Ĳ���));
					s = ((���ཻ����·��ѹ�����Ĳ���ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_���ཻ����·��ѹ�����Ĳ���)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "�չ�ƹ������������ʵ������") {

					ST_�չ�ƹ������������ s;
					memset(&s, 0x00, sizeof(ST_�չ�ƹ������������));
					s = ((�չ�ƹ������������ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_�չ�ƹ������������)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "��ת��ʵ������") {

					ST_��ת�� s;
					memset(&s, 0x00, sizeof(ST_��ת��));
					s = ((��ת��ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_��ת��)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "�����·���ʵĲ���ʵ������") {

					ST_�����·���ʵĲ��� s;
					memset(&s, 0x00, sizeof(ST_�����·���ʵĲ���));
					s = ((�����·���ʵĲ���ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_�����·���ʵĲ���)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "���迹�任��ʵ������") {

					ST_���迹�任�� s;
					memset(&s, 0x00, sizeof(ST_���迹�任��));
					s = ((���迹�任��ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_���迹�任��)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "RC�����Ƶ������ʵ������") {

					ST_RC�����Ƶ������ s;
					memset(&s, 0x00, sizeof(ST_RC�����Ƶ������));
					s = ((RC�����Ƶ������ʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RC�����Ƶ������)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
				else if (f->Name == "�Ǳ����̵���չʵ������") {

					ST_�Ǳ����̵���չ s;
					memset(&s, 0x00, sizeof(ST_�Ǳ����̵���չ));
					s = ((�Ǳ����̵���չʵ������^)f)->Load_Grade_data();
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
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					if (!d.SendGrade(H, string((char*)&s, sizeof(ST_�Ǳ����̵���չ)))) {
						MessageBox::Show("TCP����ʧ��");
						return;
					}
					d.RecvHandle(false);
					d.close();
					lcc.SendComputerInfo(Grades[trialCode] + "�ѽ���");
				}
			}
		}
	}
}

