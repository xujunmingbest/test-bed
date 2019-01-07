#pragma once


#include "E:/c++/libsocket/libsocket/libsocket.h"


/*****


*****/
using namespace System::Windows::Forms;

public ref class monitorTrialssc {
public:
	void SendTrial();
	void _SendTrial();
	Form^ GetNowTrialForm(int &TrialCode);
	bool SendMonitorData(SOCKET s, string &data);

	void Send元件伏安特性的测试实验内容 (SOCKET s );  
	void Send基尔霍夫定律实验内容 (SOCKET s );  
	void Send叠加原理实验内容 (SOCKET s );  
	void Send戴维南定理实验内容 (SOCKET s );  
	void Send电压源与电流源的等效变换实验内容 (SOCKET s );  
	void Send一阶电路的响应测试实验内容 (SOCKET s );  
	void Send二阶动态电路响应的研究实验内容 (SOCKET s );  
	void SendVCVS实验实验内容 (SOCKET s );  
	void Send二端口网络的研究实验内容 (SOCKET s );  
	void Send最大功率传输条件的测定实验内容 (SOCKET s );  
	void Send电路状态轨迹的观测实验内容 (SOCKET s );  
	void SendRLC元件阻抗特性的测定实验内容 (SOCKET s );  
	void SendRLC串联谐振电路的研究实验内容 (SOCKET s );  
	void Send单相铁心变压器特性的测试实验内容 (SOCKET s );  
	void Send单相电度表实验实验内容 (SOCKET s );  
	void Send三相交流电路电压电流的测量实验内容 (SOCKET s );  
	void Send日光灯功率因数的提高实验内容 (SOCKET s );  
	void Send回转器实验内容 (SOCKET s );  
	void Send三相电路功率的测量实验内容 (SOCKET s );  
	void Send负阻抗变换器实验内容 (SOCKET s );  
	void SendRC网络的频率特性实验内容 (SOCKET s );  
	void Send仪表量程的扩展实验内容 (SOCKET s );  
	void Send互感器实验内容 (SOCKET s );  
	void Send基本电工仪表的使用与测量误差的计算实验内容 (SOCKET s );  
	void Send功率因数及相序的测量实验内容 (SOCKET s );  

};