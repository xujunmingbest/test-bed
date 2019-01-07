#pragma once
#ifndef TOOL_h__
#define TOOL_h__
#include <windows.h>
#include <iostream>
#include "xml/xml.h"
#include "log.h"
#include "SysLog.h"
#include "message_Queue.h"
#include "seriesPort.h"
#include "gradeSubmit.h"
#include "../Long_connection_control.h"
using namespace std;
#include "�ײ�.h"
using namespace �繤��·����̨;

void Exceptioninit();
int String_to_Int(String^in);
string Int_to_string(int in);


class CControl
{
	HANDLE hMutex1;
public:
	CControl(char *Name);
	void Stop();
	void Start();
	~CControl();

};

extern CControl g_c;
void voice_speek(String^ in);



//using namespace System;
using namespace Microsoft::Speech::Synthesis;
using namespace System::Media;
using namespace System::Threading;
namespace �繤��·����̨ {
	/*
	public ref class Voice
	{
		SoundPlayer ^ player = gcnew SoundPlayer;
		SpeechSynthesizer^ tts = gcnew SpeechSynthesizer();
	public:Voice() {
			tts->SpeakCompleted += gcnew EventHandler<SpeakCompletedEventArgs^>(this, &Voice::tts_SpeakCompleted);
	}
	public:void Close() {
		player->Stop(); 
	}
	public:void SetVolume(int Volume) {
		tts->Volume = Volume;
	}
	public:void SetRate(int Rate) {
		tts->Rate = Rate;
	}
	private: System::Void tts_SpeakCompleted(System::Object^ sender, SpeakCompletedEventArgs^ e)
	{
		try {
			player->Stream->Position = 0;

			player->Play();
		}
		catch (System::Exception^ e) {
			Console::Write(e->ToString());
		}
	}
	public:void Speak(String ^text)
	{
		try {
			player->Stop();

			player->Stream = gcnew System::IO::MemoryStream();
			tts->SetOutputToWaveStream(player->Stream);
			tts->SpeakAsync(text);

		}
		catch (System::Exception^ e) {
			Console::Write(e->ToString());
		}
	}
		   // TODO:  �ڴ˴���Ӵ���ķ�����
	};
	*/
	public ref class Waver
	{
		Hashtable ^LabelHt ;
		Hashtable ^PicboxHt ;

	public:void Init();
	public:void Add(Label^ll,Color a);
	public:void Add(PictureBox^ pb);
	public:void waver();
	public:void twaver();
	};
	/**************************
	����������ŵ�ʱ�� �ڹ̶��������Ŷ�Ӧ��
	label ���� pictureBox

	�������� ���ſؼ�
	****************************/
	public ref class VideoShowWidget
	{
	private: Hashtable ^ht = gcnew Hashtable;
			 Mutex ^ mutex = gcnew Mutex;
			 int NowTime = 0;
			 ~VideoShowWidget() {
				 t->Abort();
			 }
			 void TShow() {
				 mutex->WaitOne();
				 try {
					 for each (Object^ var in ht)
					 {
						 DictionaryEntry^ d = (DictionaryEntry^)var;
						 int v = (int)d->Value;
						 if (v < NowTime) {
							 ((Label^)d->Key)->Visible = false;
						 }
						 else if (v > NowTime) {
							 ((Label^)d->Key)->Visible = true;
						 }
						 else if (v == NowTime) {
							 ((Label^)d->Key)->BackColor = Color::Red;
						 }
					 }
					 for (int i = 0; i < 2; i++) {
						 for each (Object^ var in ht)
						 {
							 DictionaryEntry^ d = (DictionaryEntry^)var;
							 if ((int)d->Value == NowTime) {
								 ((Label^)d->Key)->Visible = true;
							 }
						 }
						 Thread::Sleep(500);

						 for each (Object^ var in ht)
						 {
							 DictionaryEntry^ d = (DictionaryEntry^)var;
							 if ((int)d->Value == NowTime)
								 ((Label^)d->Key)->Visible = false;
						 }
						 Thread::Sleep(500);
					 }
					 for each (Object^ var in ht)
					 {
						 DictionaryEntry^ d = (DictionaryEntry^)var;
						 if ((int)d->Value == NowTime) {
							 ((Label^)d->Key)->BackColor = Color::White;
						 }
					 }
				 }
				 catch (System::Exception ^e ) {
					 LOG_EXCEPTION(T_to_string(e->ToString()));
				 }
				 mutex->ReleaseMutex();
			 }
			 Thread^ t;
	public:
		void Clear() {
			ht->Clear();
		}

		void AddLabel(Label^l, int showTime) {
			ht->Add(l, showTime);
			ht->Add(l, Color::Red);
		}
		void ShowLabel(int second) {
			NowTime = second;
			t = gcnew Thread(gcnew ThreadStart(this, &VideoShowWidget::TShow));
			t->Start();
		}
		/***************************
		����ͻȻ�仯�����������ļ��ļ��


		**************************/
		void SuddenChange(int second) {

			mutex->WaitOne();
			NowTime = second;
			for each (Object^ var in ht)
			{
				DictionaryEntry^ d = (DictionaryEntry^)var;
				int v = (int)d->Value;
				if (v <= NowTime) {
					((Label^)d->Key)->Visible = false;
				}
				else if (v > NowTime) {
					((Label^)d->Key)->Visible = true;
				}
			}
			mutex->ReleaseMutex();
		}
	};
}


/* IsDClegal
�����: ��λС�����ַ�������
����ֵ: ���� string ���͵�����ֵ
������� ""���ǲ��Ϸ�
*/
string IsDClegal(String^in); /* string Ϊ�շ��ز��Ϸ�  ��Ϊ���ǺϷ�*/
//String^ CompleteDCNum(String In);

/* GetDcNum
�����: ��λС�����ַ�������
����ֵ: ��������100֮���intֵ
 */
int GetDcNum(string &in);


/* DcNumToString
�����: ʵ�����ֳ���100��� �޷���int���޷��� ������ѹ�����
����ֵ: ʵ������ ������λС����  String ���������ַ���
*/
String^ DcNumToString(uint in, BYTE DcSymbol); /*������ֵ �� ������С��*/


bool SetDVNum(String ^text,int min,int max);


struct oscillographParam {
	string MP_MAX; //���ֵ		
	string MP_MIN;     //��Сֵ		
	string MP_HIGH;    //High(Top)-�ߵ�ƽ(����ֵ)		
	string MP_MIDDLE;  //Middle-�м�ֵ		
	string 	MP_LOW;     //Low(Bottom) - �͵�ƽ(�׶�ֵ)	

	string 	MP_PKPK;    //VPP-���ֵ		
	string 	MP_AMP;     //��Сֵ	
	string 	MP_MEAN;    //ƽ��ֵ		
	string  MP_CYCMEAN; //		
	string 	MP_RMS;     //������

	string MP_CYCRMS;   //���ھ���ֵ		
	string 	MP_AREA;     //���		
	string 	MP_CYCAREA;  //�������		
	string 	MP_OVERSHOOT;//����		
	string 	MP_PRESHOOT; //Ԥ��

	string 	MP_PERIOD;   //����		
	string MP_FREQ;     //Ƶ��	
	string MP_RISE_TIME;//����ʱ��	
	string MP_FALL_TIME;//�½�ʱ��		
	string 	MP_PWIDTH;   //������

	string 	MP_NWIDTH;   //������
	string 	MP_PDUTY;    //��ռ�ձ�		
	string  MP_NDUTY;    //��ռ�ձ�		
	string MP_RISEDELAY;//������ʱ		
	string MP_FALLDELAY;//������ʱ

	string MP_PHASE;	 //��λ		
	string MP_FRR;	     //
	string MP_FRF;
	string MP_FFR;
	string MP_FFF;

	string MP_LRF;
	string MP_LRR;
	string MP_LFR;
	string MP_LFF;
	string MP_BURST_WIDTH; //ͻ������
};

#include "uci/uci.h"
class oscillograph {
public:
	static bool SetParam(string &CMD);
	static bool SetVP(string &CH,string &value);
	static bool SetHP(string &CH, string &value);
	static bool SetTB(string &CH, string &value);
	static bool SetVB(string &CH, string &value);
	static oscillographParam GetoscillographParam();
	static bool oscillographOpen();
	static bool GetOscilloscopePrtScnBmp(string &bmpName);
	static bool oscillographClose();
};





#define LOGINNORMAL 1;
#define LOGINYOUKE 2;
#define BMPSAVEPATH "bmp/"
#define FORMDATASAVEPATH "FormData/"
extern QueueMutex g_ClassListMutex; //����������

public ref class global {
public:
	static String ^Pupilage;
	static Thread ^ t;

	static void SystemStart();
	static void SystemShortDown();

	static S_PLCRecv *PLCRecv ;
	//static SerialHandle^ sh = gcnew SerialHandle;  //ȫ��seriesPort ����
	static SerialControlSource^ scs = gcnew SerialControlSource;
	//static Voice^ voice = gcnew Voice();


	/* LiKongMonter
	����: ���������߳̿��ٵĺ���
	*/
	//static void LiKongMonter();
	static void SetDV(String^t);
	static uint MeterId = 2;

#define MeterHeBing
	static S_PLCRecv GetMData() {
		S_PLCRecv pr;
		memset(&pr,0x00,sizeof(S_PLCRecv));
		int time = 3;
		int act_time = 0;
		for (int i = 0; i < time;i++) { //������ȡ5��  // ��������
			Sleep(400);
			S_PLCRecv prTemp;
#ifndef MeterHeBing
			if (!global::sh->GetliKongData(&pr))
#else
			if (!global::scs->GetMeterData(MeterId, prTemp))
#endif
			{ //��ȡʧ��
				
			}
			else {
				pr = prTemp;
				act_time++;
			}
		}
		if (act_time == 0) MessageBox::Show("���ݻ�ȡʧ��");
		return pr;
	}
	static String^ GetU30_U400VData() {
		S_PLCRecv p = GetMData();

		if (p.HeaderId == 6 || p.HeaderId == 2) {
			return  DcNumToString(p.U, p.Usymbol);
		}
		else {
			return "0.00";
		}
	}
	static String^ GetI500Data() {
		S_PLCRecv p = GetMData();

		if (p.HeaderId == 5) {
			return  DcNumToString(p.I, p.Isymbol);
		}
		else {
			return "0.00";
		}
	}
	static String^ GetPData() {
		S_PLCRecv p = GetMData();

		if (p.HeaderId == 4) {
			return  DcNumToString(p.U, 0);
		}
		else {
			return "0.00";
		}
	}
	static String^ GetGongPingU() {
		S_PLCRecv p = GetMData();

		if (p.HeaderId < 11 || p.HeaderId >15) return "0.00";
		uint zs = p.U / 100;
		uint xs = p.U % 100;

		return zs.ToString() + "." + String::Format("{0:00}", xs);
	}

	static String^ GetGongPingI() {
		S_PLCRecv p = GetMData();
		if (p.HeaderId < 11 || p.HeaderId >15) return "0.000";
		uint zs = p.I / 1000;
		uint xs = p.I % 1000;

		return zs.ToString() + "." + String::Format("{0:000}",xs);
	}
	static String^ GetGongPingP() {

		S_PLCRecv p = GetMData();
		if (p.HeaderId < 11 || p.HeaderId >15) return "0";
		return p.P.ToString();
	}	
	static String^ GetGongPingCos() {

		S_PLCRecv p = GetMData();
		if (p.HeaderId < 11 || p.HeaderId >15) return "0.000";
		uint zs = p.COS / 1000;
		uint xs = p.COS % 1000;
		return zs.ToString() + "." + String::Format("{0:000}", xs);
	}

	static String^ GetKuangPingURMS1() {

		S_PLCRecv p = GetMData();
		if (p.HeaderId != 21) return "0.000";
		uint zs = p.U / 1000;
		uint xs = p.U % 1000;

		return zs.ToString() + "." + String::Format("{0:000}", xs);
	}	
	static String^ GetKuangPingURMS2() {
		S_PLCRecv p = GetMData();
		if (p.HeaderId != 22) return "0.00";
		uint zs = p.U / 100;
		uint xs = p.U % 100;

		return zs.ToString() + "." + String::Format("{0:00}", xs);
	}

};


void CloseAllMidchild(Form ^Parent);
Form^ GetWindowsChild(String ^FormName, Form ^Parent);

void MsgQueueRegister();


#define DATATEMP "datatemp/"

#define LAYSIZE  16


String ^GenerateOrderNumber();
string GenerateStuCheckInfo();

template<typename T>
void QuickSort(T a[], int low, int high); //low �ǿ�ʼ�±� һ��Ϊ0 ��high �����һ��Ԫ�ص��±� һ�������鳤�ȼ�1

#endif
