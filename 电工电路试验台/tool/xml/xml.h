#pragma once
#include <stdio.h>  
#include "tinyxml.h"  
#include <iostream>  
#include <cstring>  
using namespace std;

struct ConfigXml {
	string DesMac;
	string RepeaterPort;
	string RepeaterIp;
	string SerialHandle;
	string SerialControlSource;

	string TeacherIp;
	string GradePort;    //成绩提交端口
	string LongConnectPort; //长连接端口
	string CapturePort;  //屏幕监控端口
	string GradeMonitorPort; //截图端口

	string ComputerId;
};


extern ConfigXml configXml;
bool writeXmlConfigFile(ConfigXml &configXml);
bool readXmlConfigFile(ConfigXml &configXml);