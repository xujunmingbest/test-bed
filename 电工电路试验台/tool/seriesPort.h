#pragma once

#include <iostream>
using namespace std;
#include "xml/xml.h"
#include "�ײ�.h"
string T_to_string(System::String^in);

#define uint unsigned int
#define uchar unsigned char
uint crc16(uchar *buf, uchar len);
string ATOH(string &in);

typedef unsigned char       BYTE;
struct S_PLCRecv {
	BYTE MId;		//��Ƭ����� 01
	BYTE FunCode;	//������	 03
	BYTE Bytes;		//�ֽ���     0E

	uint HeaderId;	//��ͷ���  2�ǵ�ѹ�� 5��ma ������
	uint U;
	uint I;
	uint P;
	uint COS;
	uint Fhz;
	BYTE DCsymbol;
	BYTE Usymbol;
	BYTE Isymbol;
};



namespace �繤��·����̨ {
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System;
	using namespace System::Threading;

	/***************
	clr ���ڿ���Э��
	���ڴ���ֻ�ܴ�һ�Σ����� ֻ��һ����Ϳ���
	****************/
	public ref class SerialControl {
	private:
		SerialPort^  serialPort1 = gcnew SerialPort;
	public:
		bool serialPortOpen(String ^ PortName);
		void serialPort1Close();
		bool Send(string &s);
		bool SendNoCrc(string &s);
		string Recv(int len);
		string RecvNoCrc(int len);
		bool check_crc16(string &in);
	};

	/******����ҵ���*****/
	public ref class SerialHandle {
	private:
		SerialControl ^sc = gcnew SerialControl;
	public:
		bool SerialHandleInit();
		void SerialHandleClose();
		/********��ȡ�豸��********/
		uint GetMonitorTesterId(); //���豸��
		bool GetliKongData(S_PLCRecv *pr); //��ȡ
		void MonitorTesterId(uint TesterId); //д�豸��
	};

#define SINWAVE 0
#define TRIANGULARWAVE 1
#define SQUAREWAVE 2
	/******���Ƶ�Դҵ���*****/
	public ref class SerialControlSource {
	private:
		SerialControl ^sc = gcnew SerialControl;
	public:
		bool SerialHandleInit();
		void SerialHandleClose();
		/********���õ�Դ********/
		bool SetDirectVoltage(int Voltage);
		bool SetDirectCurrent(int Current);
		bool SetAlternatingVoltage(char Id,int Voltage);
		bool OpenSource(int Id);
		bool CloseSource(int Id);
		/********���ο���********/
		bool SetWaveForm(int WaveType);
		bool SetFrequency(int f);
		/*******��ȡ�������ݰ�***/
		bool GetMeterData(uint Id, S_PLCRecv &data);  //Id �Ǽ�صı�� 0-255
	};

}

