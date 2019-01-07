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
	int TrialCode = NowTrial::NowTrailCode;
	Console::Write(TrialCode);
	try {
		if (TrialCode == 0) {
			ST_Ԫ���������Բ��� sT_Ԫ���������Բ���;
			memset(&sT_Ԫ���������Բ���, 0x00, sizeof(ST_Ԫ���������Բ���));
			SendMonitorData(ssc.sc, string((char*)(&sT_Ԫ���������Բ���), sizeof(ST_Ԫ���������Բ���)));
		}
		else if (TrialCode == 1) {
			SendԪ���������ԵĲ���ʵ������(ssc.sc);
		}
		else if (TrialCode == 2) {
			Send����������ʵ������(ssc.sc);
		}
		else if (TrialCode == 3) {
			Send����ԭ��ʵ������(ssc.sc);
		}
		else if (TrialCode == 4) {
			Send��ά�϶���ʵ������(ssc.sc);
		}
		else if (TrialCode == 5) {
			Send��ѹԴ�����Դ�ĵ�Ч�任ʵ������(ssc.sc);
		}
		else if (TrialCode == 6) {
			Sendһ�׵�·����Ӧ����ʵ������(ssc.sc);
		}
		else if (TrialCode == 7) {
			Send���׶�̬��·��Ӧ���о�ʵ������(ssc.sc);
		}
		else if (TrialCode == 8) {
			SendVCVSʵ��ʵ������(ssc.sc);
		}
		else if (TrialCode == 9) {
			Send���˿�������о�ʵ������(ssc.sc);
		}
		else if (TrialCode == 10) {
			Send����ʴ��������Ĳⶨʵ������(ssc.sc);
		}
		else if (TrialCode == 11) {
			Send��·״̬�켣�Ĺ۲�ʵ������(ssc.sc);
		}
		else if (TrialCode == 12) {
			SendRLCԪ���迹���ԵĲⶨʵ������(ssc.sc);
		}
		else if (TrialCode == 13) {
			SendRLC����г���·���о�ʵ������(ssc.sc);
		}
		else if (TrialCode == 14) {
			Send�������ı�ѹ�����ԵĲ���ʵ������(ssc.sc);
		}
		else if (TrialCode == 15) {
			Send�����ȱ�ʵ��ʵ������(ssc.sc);
		}
		else if (TrialCode == 16) {
			Send���ཻ����·��ѹ�����Ĳ���ʵ������(ssc.sc);
		}
		else if (TrialCode == 17) {
			Send�չ�ƹ������������ʵ������(ssc.sc);
		}
		else if (TrialCode == 18) {
			Send��ת��ʵ������(ssc.sc);
		}
		else if (TrialCode == 19) {
			Send�����·���ʵĲ���ʵ������(ssc.sc);
		}
		else if (TrialCode == 20) {
			Send���迹�任��ʵ������(ssc.sc);
		}
		else if (TrialCode == 21) {
			SendRC�����Ƶ������ʵ������(ssc.sc);
		}
		else if (TrialCode == 22) {
			Send�Ǳ����̵���չʵ������(ssc.sc);
		}
		else if (TrialCode == 23) {
			Send������ʵ������(ssc.sc);
		}
		else if (TrialCode == 24) {
			Send�����繤�Ǳ��ʹ����������ļ���ʵ������(ssc.sc);
		}
		else if (TrialCode == 25) {
			Send��������������Ĳ���ʵ������(ssc.sc);
		}
	}
	catch (System::Exception ^e) {
		Console::Write(e->Message);
	}
	ssc.Destroy();
	cout << "�˳����" << endl;
}


void monitorTrialssc::SendԪ���������ԵĲ���ʵ������(SOCKET s_c) {
	bool S = true;
	Ԫ���������ԵĲ���ʵ������^ f_ = (Ԫ���������ԵĲ���ʵ������^)NowTrial::NowTrailForm;
	int TrialCode = NowTrial::NowTrailCode;
	if(TrialCode != 1) return;
	while (S) {
		Sleep(1000);
		ST_Ԫ���������Բ��� s = f_->LoadGradeData();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_Ԫ���������Բ���)));
	}
}
void monitorTrialssc::Send����������ʵ������(SOCKET s_c) {
	����������ʵ������^ f_ = (����������ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 2) return;
	while (S) {
		Sleep(1000);
		ST_���������� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_����������)));
	}
}

void monitorTrialssc::Send����ԭ��ʵ������(SOCKET s_c) {
	����ԭ��ʵ������^ f_ = (����ԭ��ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 3) return;
	while (S) {
		Sleep(1000);
		ST_����ԭ�� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_����ԭ��)));
	}
}
void monitorTrialssc::Send��ά�϶���ʵ������(SOCKET s_c) {
	��ά�϶���ʵ������^ f_ = (��ά�϶���ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 4) return;
	while (S) {
		Sleep(1000);
		ST_��ά�϶��� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_��ά�϶���)));
	}
}
void monitorTrialssc::Send��ѹԴ�����Դ�ĵ�Ч�任ʵ������(SOCKET s_c) {
	��ѹԴ�����Դ�ĵ�Ч�任ʵ������^ f_ = (��ѹԴ�����Դ�ĵ�Ч�任ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 5) return;

	while (S) {
		Sleep(1000);
		ST_��ѹԴ�����Դ�ĵ�Ч�任 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任)));
	}
}
void monitorTrialssc::Sendһ�׵�·����Ӧ����ʵ������(SOCKET s_c) {
	һ�׵�·����Ӧ����ʵ������^ f_ = (һ�׵�·����Ӧ����ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 6) return;
	while (S) {
		ST_һ�׵�·����Ӧ���� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_һ�׵�·����Ӧ����)));
		Sleep(5000);
	}

}
void monitorTrialssc::Send���׶�̬��·��Ӧ���о�ʵ������(SOCKET s_c) {
	���׶�̬��·��Ӧ���о�ʵ������^ f_ = (���׶�̬��·��Ӧ���о�ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 7) return;
	while (S) {
		ST_���׶�̬��·��Ӧ���о� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_���׶�̬��·��Ӧ���о�)));
		Sleep(5000);
	}

}

void monitorTrialssc::SendVCVSʵ��ʵ������(SOCKET s_c) {
	VCVSʵ��ʵ������^ f_ = (VCVSʵ��ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 8) return;
	while (S) {
		ST_VCVSʵ�� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_VCVSʵ��)));
		Sleep(2000);
	}
}
void monitorTrialssc::Send���˿�������о�ʵ������(SOCKET s_c) {
	���˿�������о�ʵ������^ f_ = (���˿�������о�ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 9) return;
	while (S) {
		ST_���˿�������о� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_���˿�������о�)));
		Sleep(2000);
	}
}
void monitorTrialssc::Send����ʴ��������Ĳⶨʵ������(SOCKET s_c) {
	����ʴ��������Ĳⶨʵ������^ f_ = (����ʴ��������Ĳⶨʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 10) return;
	while (S) {
		ST_����ʴ��������Ĳⶨ s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_����ʴ��������Ĳⶨ)));
		Sleep(2000);
	}
}
void monitorTrialssc::Send��·״̬�켣�Ĺ۲�ʵ������(SOCKET s_c) {
	��·״̬�켣�Ĺ۲�ʵ������^ f_ = (��·״̬�켣�Ĺ۲�ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 11) return;
	while (S) {
		ST_��·״̬�켣�Ĺ۲� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_��·״̬�켣�Ĺ۲�)));
		Sleep(2000);
	}
}
void monitorTrialssc::SendRLCԪ���迹���ԵĲⶨʵ������(SOCKET s_c) {
	RLCԪ���迹���ԵĲⶨʵ������^ f_ = (RLCԪ���迹���ԵĲⶨʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 12) return;
	while (S) {
		ST_RLCԪ���迹���ԵĲⶨ s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_RLCԪ���迹���ԵĲⶨ)));
		Sleep(3000);
	}
}
void monitorTrialssc::SendRLC����г���·���о�ʵ������(SOCKET s_c) {
	RLC����г���·���о�ʵ������^ f_ = (RLC����г���·���о�ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 13) return;
	while (S) {
		ST_RLC����г���·���о� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_RLC����г���·���о�)));
		Sleep(3000);
	}
}

void monitorTrialssc::Send�������ı�ѹ�����ԵĲ���ʵ������(SOCKET s_c) {
	�������ı�ѹ�����ԵĲ���ʵ������^ f_ = (�������ı�ѹ�����ԵĲ���ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 14) return;
	while (S) {
		ST_�������ı�ѹ�����ԵĲ��� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_�������ı�ѹ�����ԵĲ���)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send�����ȱ�ʵ��ʵ������(SOCKET s_c) {
	�����ȱ�ʵ��ʵ������^ f_ = (�����ȱ�ʵ��ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 15) return;
	while (S) {
		ST_�����ȱ�ʵ�� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_�����ȱ�ʵ��)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send���ཻ����·��ѹ�����Ĳ���ʵ������(SOCKET s_c) {
	���ཻ����·��ѹ�����Ĳ���ʵ������^ f_ = (���ཻ����·��ѹ�����Ĳ���ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 16) return;
	while (S) {
		ST_���ཻ����·��ѹ�����Ĳ��� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_���ཻ����·��ѹ�����Ĳ���)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send�չ�ƹ������������ʵ������(SOCKET s_c) {
	�չ�ƹ������������ʵ������^ f_ = (�չ�ƹ������������ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 17) return;
	while (S) {
		ST_�չ�ƹ������������ s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_�չ�ƹ������������)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send��ת��ʵ������(SOCKET s_c) {
	��ת��ʵ������^ f_ = (��ת��ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 18) return;
	while (S) {
		ST_��ת�� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_��ת��)));
		Sleep(3000);
	}

}
void monitorTrialssc::Send�����·���ʵĲ���ʵ������(SOCKET s_c) {
	�����·���ʵĲ���ʵ������^ f_ = (�����·���ʵĲ���ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 19) return;
	while (S) {
		ST_�����·���ʵĲ��� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_�����·���ʵĲ���)));
		Sleep(3000);
	}

}

void monitorTrialssc::Send���迹�任��ʵ������(SOCKET s_c) {
	���迹�任��ʵ������^ f_ = (���迹�任��ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 20) return;
	while (S) {
		ST_���迹�任�� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_���迹�任��)));
		Sleep(3000);
	}
}


void monitorTrialssc::SendRC�����Ƶ������ʵ������(SOCKET s_c) {
	RC�����Ƶ������ʵ������^ f_ = (RC�����Ƶ������ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 21) return;
	while (S) {
		ST_RC�����Ƶ������ s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_RC�����Ƶ������)));
		Sleep(3000);
	}

}
void monitorTrialssc::Send�Ǳ����̵���չʵ������(SOCKET s_c) {
	�Ǳ����̵���չʵ������^ f_ = (�Ǳ����̵���չʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 22) return;
	while (S) {
		ST_�Ǳ����̵���չ s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_�Ǳ����̵���չ)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send������ʵ������(SOCKET s_c) {
	������ʵ������^ f_ = (������ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 23) return;
	while (S) {
		ST_������ s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_������)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send�����繤�Ǳ��ʹ����������ļ���ʵ������(SOCKET s_c) {
	�����繤�Ǳ��ʹ����������ļ���ʵ������^ f_ = (�����繤�Ǳ��ʹ����������ļ���ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 24) return;
	while (S) {
		ST_�����繤�Ǳ��ʹ����������ļ��� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_�����繤�Ǳ��ʹ����������ļ���)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send��������������Ĳ���ʵ������(SOCKET s_c) {
	��������������Ĳ���ʵ������^ f_ = (��������������Ĳ���ʵ������^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 25) return;
	while (S) {
		ST_��������������Ĳ��� s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_��������������Ĳ���)));
		Sleep(3000);
	}
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
				else if (f_c->Name == "������ʵ������") {
					TrialCode = 23;
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

