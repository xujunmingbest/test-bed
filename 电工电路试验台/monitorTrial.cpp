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
		else if (TrialCode == 4) {
			��ά�϶���ʵ������^ f_ = (��ά�϶���ʵ������^)f;
			while (S) {
				Sleep(1000);
				ST_��ά�϶��� s = ((��ά�϶���ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_��ά�϶���)));
			}
		}
		else if (TrialCode == 5) {
			��ѹԴ�����Դ�ĵ�Ч�任ʵ������^ f_ = (��ѹԴ�����Դ�ĵ�Ч�任ʵ������^)f;
			while (S) {
				Sleep(1000);
				ST_��ѹԴ�����Դ�ĵ�Ч�任 s = ((��ѹԴ�����Դ�ĵ�Ч�任ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任)));
			}
		}
		else if (TrialCode == 6) {
			һ�׵�·����Ӧ����ʵ������^ f_ = (һ�׵�·����Ӧ����ʵ������^)f;
			while (S) {
				ST_һ�׵�·����Ӧ���� s = ((һ�׵�·����Ӧ����ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_һ�׵�·����Ӧ����)));
				Sleep(5000);
			}
		}
		else if (TrialCode == 7) {
			���׶�̬��·��Ӧ���о�ʵ������^ f_ = (���׶�̬��·��Ӧ���о�ʵ������^)f;
			while (S) {
				ST_���׶�̬��·��Ӧ���о� s = ((���׶�̬��·��Ӧ���о�ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_���׶�̬��·��Ӧ���о�)));
				Sleep(5000);
			}
		}
		else if (TrialCode == 8) {
			VCVSʵ��ʵ������^ f_ = (VCVSʵ��ʵ������^)f;
			while (S) {
				ST_VCVSʵ�� s = ((VCVSʵ��ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_VCVSʵ��)));
				Sleep(2000);
			}
		}
		else if (TrialCode == 9) {
			���˿�������о�ʵ������^ f_ = (���˿�������о�ʵ������^)f;
			while (S) {
				ST_���˿�������о� s = ((���˿�������о�ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_���˿�������о�)));
				Sleep(2000);
			} 
		}
		else if (TrialCode == 10) {
			����ʴ��������Ĳⶨʵ������^ f_ = (����ʴ��������Ĳⶨʵ������^)f;
			while (S) {
				ST_����ʴ��������Ĳⶨ s = ((����ʴ��������Ĳⶨʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_����ʴ��������Ĳⶨ)));
				Sleep(2000);
			}
		}
		else if (TrialCode == 11) {
			��·״̬�켣�Ĺ۲�ʵ������^ f_ = (��·״̬�켣�Ĺ۲�ʵ������^)f;
			while (S) {
				ST_��·״̬�켣�Ĺ۲� s = ((��·״̬�켣�Ĺ۲�ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_��·״̬�켣�Ĺ۲�)));
				Sleep(2000);
			}
		}
		else if (TrialCode == 12) {
			RLCԪ���迹���ԵĲⶨʵ������^ f_ = (RLCԪ���迹���ԵĲⶨʵ������^)f;
			while (S) {
				ST_RLCԪ���迹���ԵĲⶨ s = ((RLCԪ���迹���ԵĲⶨʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_RLCԪ���迹���ԵĲⶨ)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 13) {
			RLC����г���·���о�ʵ������^ f_ = (RLC����г���·���о�ʵ������^)f;
			while (S) {
				ST_RLC����г���·���о� s = ((RLC����г���·���о�ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_RLC����г���·���о�)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 14) {
			�������ı�ѹ�����ԵĲ���ʵ������^ f_ = (�������ı�ѹ�����ԵĲ���ʵ������^)f;
			while (S) {
				ST_�������ı�ѹ�����ԵĲ��� s = ((�������ı�ѹ�����ԵĲ���ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_�������ı�ѹ�����ԵĲ���)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 15) {
			�����ȱ�ʵ��ʵ������^ f_ = (�����ȱ�ʵ��ʵ������^)f;
			while (S) {
				ST_�����ȱ�ʵ�� s = ((�����ȱ�ʵ��ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_�����ȱ�ʵ��)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 16) {
			���ཻ����·��ѹ�����Ĳ���ʵ������^ f_ = (���ཻ����·��ѹ�����Ĳ���ʵ������^)f;
			while (S) {
				ST_���ཻ����·��ѹ�����Ĳ��� s = ((���ཻ����·��ѹ�����Ĳ���ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_���ཻ����·��ѹ�����Ĳ���)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 17) {
			�չ�ƹ������������ʵ������^ f_ = (�չ�ƹ������������ʵ������^)f;
			while (S) {
				ST_�չ�ƹ������������ s = ((�չ�ƹ������������ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_�չ�ƹ������������)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 18) {
			��ת��ʵ������^ f_ = (��ת��ʵ������^)f;
			while (S) {
				ST_��ת�� s = ((��ת��ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_��ת��)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 19) {
			�����·���ʵĲ���ʵ������^ f_ = (�����·���ʵĲ���ʵ������^)f;
			while (S) {
				ST_�����·���ʵĲ��� s = ((�����·���ʵĲ���ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_�����·���ʵĲ���)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 20) {
			���迹�任��ʵ������^ f_ = (���迹�任��ʵ������^)f;
			while (S) {
				ST_���迹�任�� s = ((���迹�任��ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_���迹�任��)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 21) {
			RC�����Ƶ������ʵ������^ f_ = (RC�����Ƶ������ʵ������^)f;
			while (S) {
				ST_RC�����Ƶ������ s = ((RC�����Ƶ������ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_RC�����Ƶ������)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 22) {
			�Ǳ����̵���չʵ������^ f_ = (�Ǳ����̵���չʵ������^)f;
			while (S) {
				ST_�Ǳ����̵���չ s = ((�Ǳ����̵���չʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_�Ǳ����̵���չ)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 24) {
			�����繤�Ǳ��ʹ����������ļ���ʵ������^ f_ = (�����繤�Ǳ��ʹ����������ļ���ʵ������^)f;
			while (S) {
				ST_�����繤�Ǳ��ʹ����������ļ��� s = ((�����繤�Ǳ��ʹ����������ļ���ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_�����繤�Ǳ��ʹ����������ļ���)));
				Sleep(3000);
			}
		}
		else if (TrialCode == 25) {
			��������������Ĳ���ʵ������^ f_ = (��������������Ĳ���ʵ������^)f;
			while (S) {
				ST_��������������Ĳ��� s = ((��������������Ĳ���ʵ������^)f)->Load_Grade_data();
				s.ti = trialInfo;
				s.ti.TrialCode = TrialCode;
				snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
				snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
				snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
				S = SendMonitorData(ssc.sc, string((char*)(&s), sizeof(ST_��������������Ĳ���)));
				Sleep(3000);
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
				else if (f_c->Name == "��ά�϶���ʵ������") {
					TrialCode = 4;
					return f_c;
				}
				else if (f_c->Name == "��ѹԴ�����Դ�ĵ�Ч�任ʵ������") {
					TrialCode = 5;
					return f_c;
				}
				else if (f_c->Name == "һ�׵�·����Ӧ����ʵ������") {
					TrialCode = 6;
					return f_c;
				}
				else if (f_c->Name == "���׶�̬��·��Ӧ���о�ʵ������") {
					TrialCode = 7;
					return f_c;
				}
				else if (f_c->Name == "VCVSʵ��ʵ������") {
					TrialCode = 8;
					return f_c;
				}
				else if (f_c->Name == "���˿�������о�ʵ������") {
					TrialCode = 9;
					return f_c;
				}
				else if (f_c->Name == "����ʴ��������Ĳⶨʵ������") {
					TrialCode = 10;
					return f_c;
				}
				else if (f_c->Name == "��·״̬�켣�Ĺ۲�ʵ������") {
					TrialCode = 11;
					return f_c;
				}
				else if (f_c->Name == "RLCԪ���迹���ԵĲⶨʵ������") {
					TrialCode = 12;
					return f_c;
				}
				else if (f_c->Name == "RLC����г���·���о�ʵ������") {
					TrialCode = 13;
					return f_c;
				}
				else if (f_c->Name == "�������ı�ѹ�����ԵĲ���ʵ������") {
					TrialCode = 14;
					return f_c;
				}
				else if (f_c->Name == "�����ȱ�ʵ��ʵ������") {
					TrialCode = 15;
					return f_c;
				}
				else if (f_c->Name == "���ཻ����·��ѹ�����Ĳ���ʵ������") {
					TrialCode = 16;
					return f_c;
				}
				else if (f_c->Name == "�չ�ƹ������������ʵ������") {
					TrialCode = 17;
					return f_c;
				}
				else if (f_c->Name == "��ת��ʵ������") {
					TrialCode = 18;
					return f_c;
				}
				else if (f_c->Name == "�����·���ʵĲ���ʵ������") {
					TrialCode = 19;
					return f_c;
				}
				else if (f_c->Name == "���迹�任��ʵ������") {
					TrialCode = 20;
					return f_c;
				}
				else if (f_c->Name == "RC�����Ƶ������ʵ������") {
					TrialCode = 21;
					return f_c;
				}
				else if (f_c->Name == "�Ǳ����̵���չʵ������") {
					TrialCode = 22;
					return f_c;
				}
				else if (f_c->Name == "�����繤�Ǳ��ʹ����������ļ���ʵ������") {
					TrialCode = 24;
					return f_c;
				}
				else if (f_c->Name == "��������������Ĳ���ʵ������") {
					TrialCode = 25;
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

