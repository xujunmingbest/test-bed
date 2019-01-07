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
	int TrialCode = NowTrial::NowTrailCode;
	Console::Write(TrialCode);
	try {
		if (TrialCode == 0) {
			ST_元件伏安特性测试 sT_元件伏安特性测试;
			memset(&sT_元件伏安特性测试, 0x00, sizeof(ST_元件伏安特性测试));
			SendMonitorData(ssc.sc, string((char*)(&sT_元件伏安特性测试), sizeof(ST_元件伏安特性测试)));
		}
		else if (TrialCode == 1) {
			Send元件伏安特性的测试实验内容(ssc.sc);
		}
		else if (TrialCode == 2) {
			Send基尔霍夫定律实验内容(ssc.sc);
		}
		else if (TrialCode == 3) {
			Send叠加原理实验内容(ssc.sc);
		}
		else if (TrialCode == 4) {
			Send戴维南定理实验内容(ssc.sc);
		}
		else if (TrialCode == 5) {
			Send电压源与电流源的等效变换实验内容(ssc.sc);
		}
		else if (TrialCode == 6) {
			Send一阶电路的响应测试实验内容(ssc.sc);
		}
		else if (TrialCode == 7) {
			Send二阶动态电路响应的研究实验内容(ssc.sc);
		}
		else if (TrialCode == 8) {
			SendVCVS实验实验内容(ssc.sc);
		}
		else if (TrialCode == 9) {
			Send二端口网络的研究实验内容(ssc.sc);
		}
		else if (TrialCode == 10) {
			Send最大功率传输条件的测定实验内容(ssc.sc);
		}
		else if (TrialCode == 11) {
			Send电路状态轨迹的观测实验内容(ssc.sc);
		}
		else if (TrialCode == 12) {
			SendRLC元件阻抗特性的测定实验内容(ssc.sc);
		}
		else if (TrialCode == 13) {
			SendRLC串联谐振电路的研究实验内容(ssc.sc);
		}
		else if (TrialCode == 14) {
			Send单相铁心变压器特性的测试实验内容(ssc.sc);
		}
		else if (TrialCode == 15) {
			Send单相电度表实验实验内容(ssc.sc);
		}
		else if (TrialCode == 16) {
			Send三相交流电路电压电流的测量实验内容(ssc.sc);
		}
		else if (TrialCode == 17) {
			Send日光灯功率因数的提高实验内容(ssc.sc);
		}
		else if (TrialCode == 18) {
			Send回转器实验内容(ssc.sc);
		}
		else if (TrialCode == 19) {
			Send三相电路功率的测量实验内容(ssc.sc);
		}
		else if (TrialCode == 20) {
			Send负阻抗变换器实验内容(ssc.sc);
		}
		else if (TrialCode == 21) {
			SendRC网络的频率特性实验内容(ssc.sc);
		}
		else if (TrialCode == 22) {
			Send仪表量程的扩展实验内容(ssc.sc);
		}
		else if (TrialCode == 23) {
			Send互感器实验内容(ssc.sc);
		}
		else if (TrialCode == 24) {
			Send基本电工仪表的使用与测量误差的计算实验内容(ssc.sc);
		}
		else if (TrialCode == 25) {
			Send功率因数及相序的测量实验内容(ssc.sc);
		}
	}
	catch (System::Exception ^e) {
		Console::Write(e->Message);
	}
	ssc.Destroy();
	cout << "退出监控" << endl;
}


void monitorTrialssc::Send元件伏安特性的测试实验内容(SOCKET s_c) {
	bool S = true;
	元件伏安特性的测试实验内容^ f_ = (元件伏安特性的测试实验内容^)NowTrial::NowTrailForm;
	int TrialCode = NowTrial::NowTrailCode;
	if(TrialCode != 1) return;
	while (S) {
		Sleep(1000);
		ST_元件伏安特性测试 s = f_->LoadGradeData();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_元件伏安特性测试)));
	}
}
void monitorTrialssc::Send基尔霍夫定律实验内容(SOCKET s_c) {
	基尔霍夫定律实验内容^ f_ = (基尔霍夫定律实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 2) return;
	while (S) {
		Sleep(1000);
		ST_基尔霍夫定律 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_基尔霍夫定律)));
	}
}

void monitorTrialssc::Send叠加原理实验内容(SOCKET s_c) {
	叠加原理实验内容^ f_ = (叠加原理实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 3) return;
	while (S) {
		Sleep(1000);
		ST_叠加原理 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_叠加原理)));
	}
}
void monitorTrialssc::Send戴维南定理实验内容(SOCKET s_c) {
	戴维南定理实验内容^ f_ = (戴维南定理实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 4) return;
	while (S) {
		Sleep(1000);
		ST_戴维南定理 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_戴维南定理)));
	}
}
void monitorTrialssc::Send电压源与电流源的等效变换实验内容(SOCKET s_c) {
	电压源与电流源的等效变换实验内容^ f_ = (电压源与电流源的等效变换实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 5) return;

	while (S) {
		Sleep(1000);
		ST_电压源与电流源的等效变换 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_电压源与电流源的等效变换)));
	}
}
void monitorTrialssc::Send一阶电路的响应测试实验内容(SOCKET s_c) {
	一阶电路的响应测试实验内容^ f_ = (一阶电路的响应测试实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 6) return;
	while (S) {
		ST_一阶电路的响应测试 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_一阶电路的响应测试)));
		Sleep(5000);
	}

}
void monitorTrialssc::Send二阶动态电路响应的研究实验内容(SOCKET s_c) {
	二阶动态电路响应的研究实验内容^ f_ = (二阶动态电路响应的研究实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 7) return;
	while (S) {
		ST_二阶动态电路响应的研究 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_二阶动态电路响应的研究)));
		Sleep(5000);
	}

}

void monitorTrialssc::SendVCVS实验实验内容(SOCKET s_c) {
	VCVS实验实验内容^ f_ = (VCVS实验实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 8) return;
	while (S) {
		ST_VCVS实验 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_VCVS实验)));
		Sleep(2000);
	}
}
void monitorTrialssc::Send二端口网络的研究实验内容(SOCKET s_c) {
	二端口网络的研究实验内容^ f_ = (二端口网络的研究实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 9) return;
	while (S) {
		ST_二端口网络的研究 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_二端口网络的研究)));
		Sleep(2000);
	}
}
void monitorTrialssc::Send最大功率传输条件的测定实验内容(SOCKET s_c) {
	最大功率传输条件的测定实验内容^ f_ = (最大功率传输条件的测定实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 10) return;
	while (S) {
		ST_最大功率传输条件的测定 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_最大功率传输条件的测定)));
		Sleep(2000);
	}
}
void monitorTrialssc::Send电路状态轨迹的观测实验内容(SOCKET s_c) {
	电路状态轨迹的观测实验内容^ f_ = (电路状态轨迹的观测实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 11) return;
	while (S) {
		ST_电路状态轨迹的观测 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_电路状态轨迹的观测)));
		Sleep(2000);
	}
}
void monitorTrialssc::SendRLC元件阻抗特性的测定实验内容(SOCKET s_c) {
	RLC元件阻抗特性的测定实验内容^ f_ = (RLC元件阻抗特性的测定实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 12) return;
	while (S) {
		ST_RLC元件阻抗特性的测定 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_RLC元件阻抗特性的测定)));
		Sleep(3000);
	}
}
void monitorTrialssc::SendRLC串联谐振电路的研究实验内容(SOCKET s_c) {
	RLC串联谐振电路的研究实验内容^ f_ = (RLC串联谐振电路的研究实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 13) return;
	while (S) {
		ST_RLC串联谐振电路的研究 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_RLC串联谐振电路的研究)));
		Sleep(3000);
	}
}

void monitorTrialssc::Send单相铁心变压器特性的测试实验内容(SOCKET s_c) {
	单相铁心变压器特性的测试实验内容^ f_ = (单相铁心变压器特性的测试实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 14) return;
	while (S) {
		ST_单相铁心变压器特性的测试 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_单相铁心变压器特性的测试)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send单相电度表实验实验内容(SOCKET s_c) {
	单相电度表实验实验内容^ f_ = (单相电度表实验实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 15) return;
	while (S) {
		ST_单相电度表实验 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_单相电度表实验)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send三相交流电路电压电流的测量实验内容(SOCKET s_c) {
	三相交流电路电压电流的测量实验内容^ f_ = (三相交流电路电压电流的测量实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 16) return;
	while (S) {
		ST_三相交流电路电压电流的测量 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_三相交流电路电压电流的测量)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send日光灯功率因数的提高实验内容(SOCKET s_c) {
	日光灯功率因数的提高实验内容^ f_ = (日光灯功率因数的提高实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 17) return;
	while (S) {
		ST_日光灯功率因数的提高 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_日光灯功率因数的提高)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send回转器实验内容(SOCKET s_c) {
	回转器实验内容^ f_ = (回转器实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 18) return;
	while (S) {
		ST_回转器 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_回转器)));
		Sleep(3000);
	}

}
void monitorTrialssc::Send三相电路功率的测量实验内容(SOCKET s_c) {
	三相电路功率的测量实验内容^ f_ = (三相电路功率的测量实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 19) return;
	while (S) {
		ST_三相电路功率的测量 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_三相电路功率的测量)));
		Sleep(3000);
	}

}

void monitorTrialssc::Send负阻抗变换器实验内容(SOCKET s_c) {
	负阻抗变换器实验内容^ f_ = (负阻抗变换器实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 20) return;
	while (S) {
		ST_负阻抗变换器 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_负阻抗变换器)));
		Sleep(3000);
	}
}


void monitorTrialssc::SendRC网络的频率特性实验内容(SOCKET s_c) {
	RC网络的频率特性实验内容^ f_ = (RC网络的频率特性实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 21) return;
	while (S) {
		ST_RC网络的频率特性 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_RC网络的频率特性)));
		Sleep(3000);
	}

}
void monitorTrialssc::Send仪表量程的扩展实验内容(SOCKET s_c) {
	仪表量程的扩展实验内容^ f_ = (仪表量程的扩展实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 22) return;
	while (S) {
		ST_仪表量程的扩展 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_仪表量程的扩展)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send互感器实验内容(SOCKET s_c) {
	互感器实验内容^ f_ = (互感器实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 23) return;
	while (S) {
		ST_互感器 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_互感器)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send基本电工仪表的使用与测量误差的计算实验内容(SOCKET s_c) {
	基本电工仪表的使用与测量误差的计算实验内容^ f_ = (基本电工仪表的使用与测量误差的计算实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 24) return;
	while (S) {
		ST_基本电工仪表的使用与测量误差的计算 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_基本电工仪表的使用与测量误差的计算)));
		Sleep(3000);
	}
}
void monitorTrialssc::Send功率因数及相序的测量实验内容(SOCKET s_c) {
	功率因数及相序的测量实验内容^ f_ = (功率因数及相序的测量实验内容^)NowTrial::NowTrailForm;
	bool S = true;
	int TrialCode = NowTrial::NowTrailCode;
	if (TrialCode != 25) return;
	while (S) {
		ST_功率因数及相序的测量 s = f_->Load_Grade_data();
		s.ti = trialInfo;
		s.ti.TrialCode = TrialCode;
		snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
		snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy/MM/dd HH:mm:ss"));
		snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
		S = SendMonitorData(s_c, string((char*)(&s), sizeof(ST_功率因数及相序的测量)));
		Sleep(3000);
	}
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
				else if (f_c->Name == "戴维南定理实验内容") {
					TrialCode = 4;
					return f_c;
				}
				else if (f_c->Name == "电压源与电流源的等效变换实验内容") {
					TrialCode = 5;
					return f_c;
				}
				else if (f_c->Name == "一阶电路的响应测试实验内容") {
					TrialCode = 6;
					return f_c;
				}
				else if (f_c->Name == "二阶动态电路响应的研究实验内容") {
					TrialCode = 7;
					return f_c;
				}
				else if (f_c->Name == "VCVS实验实验内容") {
					TrialCode = 8;
					return f_c;
				}
				else if (f_c->Name == "二端口网络的研究实验内容") {
					TrialCode = 9;
					return f_c;
				}
				else if (f_c->Name == "最大功率传输条件的测定实验内容") {
					TrialCode = 10;
					return f_c;
				}
				else if (f_c->Name == "电路状态轨迹的观测实验内容") {
					TrialCode = 11;
					return f_c;
				}
				else if (f_c->Name == "RLC元件阻抗特性的测定实验内容") {
					TrialCode = 12;
					return f_c;
				}
				else if (f_c->Name == "RLC串联谐振电路的研究实验内容") {
					TrialCode = 13;
					return f_c;
				}
				else if (f_c->Name == "单相铁心变压器特性的测试实验内容") {
					TrialCode = 14;
					return f_c;
				}
				else if (f_c->Name == "单相电度表实验实验内容") {
					TrialCode = 15;
					return f_c;
				}
				else if (f_c->Name == "三相交流电路电压电流的测量实验内容") {
					TrialCode = 16;
					return f_c;
				}
				else if (f_c->Name == "日光灯功率因数的提高实验内容") {
					TrialCode = 17;
					return f_c;
				}
				else if (f_c->Name == "回转器实验内容") {
					TrialCode = 18;
					return f_c;
				}
				else if (f_c->Name == "三相电路功率的测量实验内容") {
					TrialCode = 19;
					return f_c;
				}
				else if (f_c->Name == "负阻抗变换器实验内容") {
					TrialCode = 20;
					return f_c;
				}
				else if (f_c->Name == "RC网络的频率特性实验内容") {
					TrialCode = 21;
					return f_c;
				}
				else if (f_c->Name == "仪表量程的扩展实验内容") {
					TrialCode = 22;
					return f_c;
				}
				else if (f_c->Name == "互感器实验内容") {
					TrialCode = 23;
					return f_c;
				}
				else if (f_c->Name == "基本电工仪表的使用与测量误差的计算实验内容") {
					TrialCode = 24;
					return f_c;
				}
				else if (f_c->Name == "功率因数及相序的测量实验内容") {
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

