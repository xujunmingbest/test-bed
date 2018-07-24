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
	string GradePort;    //�ɼ��ύ�˿�
	string LongConnectPort; //�����Ӷ˿�
	string CapturePort;  //��Ļ��ض˿�
	string GradeMonitorPort; //��ͼ�˿�

	string ComputerId;
};


extern ConfigXml configXml;
bool writeXmlConfigFile(ConfigXml &configXml);
bool readXmlConfigFile(ConfigXml &configXml);