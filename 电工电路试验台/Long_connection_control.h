#pragma once

/************
�����ӿ���

************/
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "tool/gradeSubmit.h"
#pragma pack(push,1)
struct Long_connection_Head {
	char req[50]; // CAPTURE|STOPTRIAL|FORCESENDGRADE
	char reply[50]; // CAPTURE|STOPTRIAL|FORCESENDGRADE
};

/*******
״̬:
    ����
	������
	�ѽ���
*****/

struct TrialStatus {
	TrialInfo ti;
	char trialStatus[50];
	char computerId[50];
};
#pragma pack(pop)

static map<int, string> Long_connection_Req = {
	{ 1,"CAPTURE" }, // ��ȡ��Ļ��ͼ���
	{ 2,"STOPTRIAL" }, // ǿ��ֹͣʵ��
	{ 3,"FORCESENDGRADE" }, // ǿ�ƽ���
	{ 4,"SENDCOMPUTERINFO" }, // �����Լ��Ļ�̨��Ϣ
	{ 5,"RECOVERTRIAL" }, // �ָ�ʵ��
	{ 6,"GETNOWTRIAL" },// ��ȡ��ǰʵ��������Ϣ
};

class Long_connection_control {
	SynchroShortConnection ssc;
	TrialStatus GenerateTrialStatus(string trialStatus);
public :
	bool open();
	void RecvHandle(); 
	void close();

	void SendComputerInfo(string trialStatus);
	void SendBack_NowTrial(string &trialName);
};

extern Long_connection_control lcc;
