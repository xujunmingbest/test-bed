#pragma once

/************
长连接控制

************/
#include "E:/c++/libsocket/libsocket/libsocket.h"

#pragma pack(push,1)
struct Long_connection_Head {
	char req[50]; // CAPTURE|STOPTRIAL|FORCESENDGRADE
	char reply[50]; // CAPTURE|STOPTRIAL|FORCESENDGRADE
};
#pragma pack(pop)

static map<int, string> Long_connection_Req = {
	{1,"CAPTURE" },
	{ 2,"STOPTRIAL" },
	{ 3,"FORCESENDGRADE" },
	{ 4,"SENDCOMPUTERINFO" },
	{ 5,"RECOVERTRIAL" },
};


class Long_connection_control {
	SynchroShortConnection ssc;
public :
	bool open();
	void RecvHandle(); 
	void SendKaiJi();
	void SendScreeCapture();
	void SendComputerInfo();
	void close();
};

extern Long_connection_control lcc;
