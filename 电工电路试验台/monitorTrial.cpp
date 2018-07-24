#include "monitorTrial.h"
#include "tool/xml/xml.h"
#include "ʵ�����ͷ�ļ�.h"
#include "������.h"
using namespace Threading;

void monitorTrialssc::SendTrial() {
	Thread ^t = gcnew Thread(gcnew ThreadStart(this,&monitorTrialssc::_SendTrial));
	t->Start();
}

void monitorTrialssc::_SendTrial() {
	protocolDemo pd;
	SynchroShortConnection ssc;
	ssc.Start(configXml.TeacherIp, configXml.GradeMonitorPort);
	bool S = true;
	int TrialCode = 0;
	Form^f = GetNowTrialForm(TrialCode);
	try {
		if (f == nullptr) {
			ST_Ԫ���������Բ��� sT_Ԫ���������Բ���;
			memset(&sT_Ԫ���������Բ���, 0x00, sizeof(ST_Ԫ���������Բ���));
			SendMonitorData(ssc.sc, string((char*)(&sT_Ԫ���������Բ���), sizeof(ST_Ԫ���������Բ���)));
		}
		else if (TrialCode == 1) {
			Ԫ���������ԵĲ���ʵ������^ f_ = (Ԫ���������ԵĲ���ʵ������^)f;
			while (S ) {
				Sleep(1000);
                ST_Ԫ���������Բ��� s = ((Ԫ���������ԵĲ���ʵ������^)f)->LoadGradeData();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[1].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_Ԫ���������Բ���)));
			}
		}
		else if (TrialCode == 2) {
			����������ʵ������^ f_ = (����������ʵ������^)f;
			while (S) {
				Sleep(1000);
				ST_���������� s = ((����������ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_����������)));
			}
		}
		else if (TrialCode == 3) {
			����ԭ��ʵ������^ f_ = (����ԭ��ʵ������^)f;
			while (S) {
				Sleep(1000);
				ST_����ԭ�� s = ((����ԭ��ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_����ԭ��)));
			}
		}
	}
	catch (System::Exception ^e) {
		Console::Write(e->Message);
	}
	ssc.Destroy();
}

Form^ monitorTrialssc::GetNowTrialForm(int &TrialCode) {
	for each (Form^f in Application::OpenForms)
	{
		if (f->Name == "������") {
			for each (Form^f_c in ((������^)f)->panel4->Controls)
			{
				if (f_c->Name == "Ԫ���������ԵĲ���ʵ������") {
					TrialCode = 1;
					return f_c;
				}
				else if (f_c->Name == "����������ʵ������") {
					TrialCode = 2;
					return f_c;
				}
				else if (f_c->Name == "����ԭ��ʵ������") {
					TrialCode = 3;
					return f_c;
				}
			}
		}
		return nullptr;
	}

	return nullptr;
}


bool monitorTrialssc::SendMonitorData(SOCKET s,string &data) {
	protocolDemo pd;
	string Hdata = "head";
	string l_f = pd.GenerateFIRSTBYTES(Hdata.length());
	string l_s = pd.GenerateSECONDBYTES(data.length());
	string final = l_f + l_s + Hdata + data;
	return pd.Send(s, final);
}

