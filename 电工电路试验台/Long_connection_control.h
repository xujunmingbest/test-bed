#pragma once

/************
长连接控制

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
状态:
    开机
	试验中
	已交卷
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
	{ 1,"CAPTURE" }, // 获取屏幕截图监控
	{ 2,"STOPTRIAL" }, // 强制停止实验
	{ 3,"FORCESENDGRADE" }, // 强制交卷
	{ 4,"SENDCOMPUTERINFO" }, // 发送自己的机台信息
	{ 5,"RECOVERTRIAL" }, // 恢复实验
	{ 6,"GETNOWTRIAL" },// 获取当前实验内容信息
	{ 7,"GETSTUDENTLIST" },// 获取当前学生列表
	{ 8,"CALLTEACHER"}, //呼叫老师
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
