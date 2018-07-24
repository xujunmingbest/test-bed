#include "monitorTrial.h"
#include "tool/xml/xml.h"
#include "实验汇总头文件.h"
#include "主窗体.h"
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
			ST_元件伏安特性测试 sT_元件伏安特性测试;
			memset(&sT_元件伏安特性测试, 0x00, sizeof(ST_元件伏安特性测试));
			SendMonitorData(ssc.sc, string((char*)(&sT_元件伏安特性测试), sizeof(ST_元件伏安特性测试)));
		}
		else if (TrialCode == 1) {
			元件伏安特性的测试实验内容^ f_ = (元件伏安特性的测试实验内容^)f;
			while (S ) {
				Sleep(1000);
                ST_元件伏安特性测试 s = ((元件伏安特性的测试实验内容^)f)->LoadGradeData();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[1].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_元件伏安特性测试)));
			}
		}
		else if (TrialCode == 2) {
			基尔霍夫定律实验内容^ f_ = (基尔霍夫定律实验内容^)f;
			while (S) {
				Sleep(1000);
				ST_基尔霍夫定律 s = ((基尔霍夫定律实验内容^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_基尔霍夫定律)));
			}
		}
		else if (TrialCode == 3) {
			叠加原理实验内容^ f_ = (叠加原理实验内容^)f;
			while (S) {
				Sleep(1000);
				ST_叠加原理 s = ((叠加原理实验内容^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_叠加原理)));
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
		if (f->Name == "主窗体") {
			for each (Form^f_c in ((主窗体^)f)->panel4->Controls)
			{
				if (f_c->Name == "元件伏安特性的测试实验内容") {
					TrialCode = 1;
					return f_c;
				}
				else if (f_c->Name == "基尔霍夫定律实验内容") {
					TrialCode = 2;
					return f_c;
				}
				else if (f_c->Name == "叠加原理实验内容") {
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

