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

	void SendԪ���������ԵĲ���ʵ������ (SOCKET s );  
	void Send����������ʵ������ (SOCKET s );  
	void Send����ԭ��ʵ������ (SOCKET s );  
	void Send��ά�϶���ʵ������ (SOCKET s );  
	void Send��ѹԴ�����Դ�ĵ�Ч�任ʵ������ (SOCKET s );  
	void Sendһ�׵�·����Ӧ����ʵ������ (SOCKET s );  
	void Send���׶�̬��·��Ӧ���о�ʵ������ (SOCKET s );  
	void SendVCVSʵ��ʵ������ (SOCKET s );  
	void Send���˿�������о�ʵ������ (SOCKET s );  
	void Send����ʴ��������Ĳⶨʵ������ (SOCKET s );  
	void Send��·״̬�켣�Ĺ۲�ʵ������ (SOCKET s );  
	void SendRLCԪ���迹���ԵĲⶨʵ������ (SOCKET s );  
	void SendRLC����г���·���о�ʵ������ (SOCKET s );  
	void Send�������ı�ѹ�����ԵĲ���ʵ������ (SOCKET s );  
	void Send�����ȱ�ʵ��ʵ������ (SOCKET s );  
	void Send���ཻ����·��ѹ�����Ĳ���ʵ������ (SOCKET s );  
	void Send�չ�ƹ������������ʵ������ (SOCKET s );  
	void Send��ת��ʵ������ (SOCKET s );  
	void Send�����·���ʵĲ���ʵ������ (SOCKET s );  
	void Send���迹�任��ʵ������ (SOCKET s );  
	void SendRC�����Ƶ������ʵ������ (SOCKET s );  
	void Send�Ǳ����̵���չʵ������ (SOCKET s );  
	void Send������ʵ������ (SOCKET s );  
	void Send�����繤�Ǳ��ʹ����������ļ���ʵ������ (SOCKET s );  
	void Send��������������Ĳ���ʵ������ (SOCKET s );  

};