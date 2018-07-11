#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "tool/gradeSubmit.h"

class data_transf {
	SynchroShortConnection ssc;
public:
	bool open();
	bool SendGrade(GradesHead &H, string &Data);
	void close();

	void RecvHandle();
};