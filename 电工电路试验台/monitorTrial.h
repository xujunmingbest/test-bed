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
};