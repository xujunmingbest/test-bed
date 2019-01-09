#pragma once

/************
�����ӿ���

************/
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "tool/gradeSubmit.h"
#include <vector>
using namespace std;
#pragma pack(push,1)

extern vector<ClassElement> g_ClassList;
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
struct S_CallTeacher {
	TrialInfo ti;
	char msg[100];
};
#pragma pack(pop)

static map<int, string> Long_connection_Req = {
	{ 1,"CAPTURE" }, // ��ȡ��Ļ��ͼ���
	{ 2,"STOPTRIAL" }, // ǿ��ֹͣʵ��
	{ 3,"FORCESENDGRADE" }, // ǿ�ƽ���
	{ 4,"SENDCOMPUTERINFO" }, // �����Լ��Ļ�̨��Ϣ
	{ 5,"RECOVERTRIAL" }, // �ָ�ʵ��
	{ 6,"GETNOWTRIAL" },// ��ȡ��ǰʵ��������Ϣ
	{ 7,"GETSTUDENTLIST" },// ��ȡ��ǰѧ���б�
	{ 8,"CALLTEACHER"}, //������ʦ
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
	void GetStudentList();
	void CallTeacher(string &body);
};

extern Long_connection_control lcc;
