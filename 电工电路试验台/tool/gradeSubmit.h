#pragma once


#include<map>
using namespace std;


#define uint unsigned int 
#define RECVGRADEPORT 10000
#define GRADESAVEPATH "data/"
#define STUINFOCSV "ѧ����Ϣ/"
/*****ʵ����****/

static map<int, string> MsgRet = {
	{2,"����ɹ�"},
	{1,"�����ɹ�"},
	{-1,"δ֪����"},
	{ -2,"ʵ�������ʵ�����Ʋ�һ��" },
	{ -3,"�ļ��洢ʧ��" },
	{ -4,"������ѧ�������У����ܽ���ʵ��" },
};

 static map<int, string> Grades = {
	{ 1,"Ԫ���������Բ���" },
	{ 2,"����������" },
	{ 3,"����ԭ��" },
	{ 4,"��ά�϶���" },
	{ 5,"��ѹԴ�����Դ�ĵ�Ч�任" },
	{ 6,"һ�׵�·����Ӧ����"},
	{ 7,"���׶�̬��·��Ӧ���о�" },
	{ 8,"VCVS��VCCS��CCVS��CCCSʵ��" },
	{ 9,"���˿�������о�" },
	{ 10,"����ʴ��������Ĳⶨ" },
	{ 11,"��·״̬�켣�Ĺ۲�" },
	{ 12,"R��L��CԪ���迹���ԵĲⶨ" },
	{ 13,"R��L��C����г���·���о�" },
	{ 14,"�������ı�ѹ�����ԵĲ���" },
	{ 15,"�����ȱ�ʵ��" },
	{ 16,"���ཻ����·��ѹ�������Ĳ���" },
	{ 17,"�չ�ƹ������������" },
	{ 18,"��ת��" },
	{ 19,"�����·���ʵĲ���" },
	{ 20,"���迹�任��" },
	{ 21,"RC�����Ƶ������" },
	{ 22,"�Ǳ����̵���չ" },
	{ 23,"������" },
	{ 24,"�����繤�Ǳ��ʹ����������ļ���" },
	{ 25,"��������������Ĳ���" },
};


#pragma pack(push,1)


struct GradesHead {
	char RequestType[50]; //�������� SAVEFILE|RETMSG|GRADEDATA
	char MsgType[50];  // �������� XML/JSON/PIC/STRUCT
	int TrialCode; 
	char TrialName[100];
};

struct TrialInfo {
	char stuName1[100];
	char stuName2[100];
	char XueHao1[50];
	char XueHao2[50];
	char Class[50];
	char SeriaNumber[50];
	char date[20];
	int TrialCode;
	char TrialName[100];
	char Lab[100];
	char teacher[100];
	char major[100];
	int totalscore;  //�ܷ�
};
extern TrialInfo trialInfo;

struct ST_Ԫ���������Բ��� {

	TrialInfo ti;
	char ����SU1[10];
	char ����SU2[10];
	char ����SU3[10];
	char ����SU4[10];
	char ����SU5[10];
	char ����SU6[10];
	char ����SU7[10];
	char ����SU8[10];
	char ����SU9[10];
	char ����SU10[10];
	char ����U1[10];
	char ����U2[10];
	char ����U3[10];
	char ����U4[10];
	char ����U5[10];
	char ����U6[10];
	char ����U7[10];
	char ����U8[10];
	char ����U9[10];
	char ����U10[10];
	char ����I1[10];
	char ����I2[10];
	char ����I3[10];
	char ����I4[10];
	char ����I5[10];
	char ����I6[10];
	char ����I7[10];
	char ����I8[10];
	char ����I9[10];
	char ����I10[10];
	char ����summing_up[100];
	int ����score;

	char �׳�SU1[10];
	char �׳�SU2[10];
	char �׳�SU3[10];
	char �׳�SU4[10];
	char �׳�SU5[10];
	char �׳�SU6[10];
	char �׳�SU7[10];
	char �׳�SU8[10];
	char �׳�SU9[10];
	char �׳�SU10[10];
	char �׳�U1[10];
	char �׳�U2[10];
	char �׳�U3[10];
	char �׳�U4[10];
	char �׳�U5[10];
	char �׳�U6[10];
	char �׳�U7[10];
	char �׳�U8[10];
	char �׳�U9[10];
	char �׳�U10[10];
	char �׳�I1[10];
	char �׳�I2[10];
	char �׳�I3[10];
	char �׳�I4[10];
	char �׳�I5[10];
	char �׳�I6[10];
	char �׳�I7[10];
	char �׳�I8[10];
	char �׳�I9[10];
	char �׳�I10[10];
	char �׳�summing_up[100];
	int �׳�score;

    char ���ZSU1[10];
	char ���ZSU2[10];
	char ���ZSU3[10];
	char ���ZSU4[10];
	char ���ZSU5[10];
	char ���ZSU6[10];
	char ���ZSU7[10];
	char ���ZSU8[10];
	char ���ZSU9[10];
	char ���ZSU10[10];
	char ���ZU1[10];
	char ���ZU2[10];
	char ���ZU3[10];
	char ���ZU4[10];
	char ���ZU5[10];
	char ���ZU6[10];
	char ���ZU7[10];
	char ���ZU8[10];
	char ���ZU9[10];
	char ���ZU10[10];
	char ���ZI1[10];
	char ���ZI2[10];
	char ���ZI3[10];
	char ���ZI4[10];
	char ���ZI5[10];
	char ���ZI6[10];
	char ���ZI7[10];
	char ���ZI8[10];
	char ���ZI9[10];
	char ���ZI10[10];

	char ���FSU1[10];
	char ���FSU2[10];
	char ���FSU3[10];
	char ���FSU4[10];
	char ���FSU5[10];
	char ���FSU6[10];
	char ���FSU7[10];
	char ���FSU8[10];
	char ���FSU9[10];
	char ���FSU10[10];
	char ���FU1[10];
	char ���FU2[10];
	char ���FU3[10];
	char ���FU4[10];
	char ���FU5[10];
	char ���FU6[10];
	char ���FU7[10];
	char ���FU8[10];
	char ���FU9[10];
	char ���FU10[10];
	char ���FI1[10];
	char ���FI2[10];
	char ���FI3[10];
	char ���FI4[10];
	char ���FI5[10];
	char ���FI6[10];
	char ���FI7[10];
	char ���FI8[10];
	char ���FI9[10];
	char ���FI10[10];
	char ���summing_up[100];
	int ���score;

    char ���ZSU1[10];
	char ���ZSU2[10];
	char ���ZSU3[10];
	char ���ZSU4[10];
	char ���ZSU5[10];
	char ���ZSU6[10];
	char ���ZSU7[10];
	char ���ZSU8[10];
	char ���ZSU9[10];
	char ���ZSU10[10];
	char ���ZU1[10];
	char ���ZU2[10];
	char ���ZU3[10];
	char ���ZU4[10];
	char ���ZU5[10];
	char ���ZU6[10];
	char ���ZU7[10];
	char ���ZU8[10];
	char ���ZU9[10];
	char ���ZU10[10];
	char ���ZI1[10];
	char ���ZI2[10];
	char ���ZI3[10];
	char ���ZI4[10];
	char ���ZI5[10];
	char ���ZI6[10];
	char ���ZI7[10];
	char ���ZI8[10];
	char ���ZI9[10];
	char ���ZI10[10];

	char ���FSU1[10];
	char ���FSU2[10];
	char ���FSU3[10];
	char ���FSU4[10];
	char ���FSU5[10];
	char ���FSU6[10];
	char ���FSU7[10];
	char ���FSU8[10];
	char ���FSU9[10];
	char ���FSU10[10];
	char ���FU1[10];
	char ���FU2[10];
	char ���FU3[10];
	char ���FU4[10];
	char ���FU5[10];
	char ���FU6[10];
	char ���FU7[10];
	char ���FU8[10];
	char ���FU9[10];
	char ���FU10[10];
	char ���FI1[10];
	char ���FI2[10];
	char ���FI3[10];
	char ���FI4[10];
	char ���FI5[10];
	char ���FI6[10];
	char ���FI7[10];
	char ���FI8[10];
	char ���FI9[10];
	char ���FI10[10];
	char ���summing_up[100];
	int ���score;

	char ��ѹZSU1[10];
	char ��ѹZSU2[10];
	char ��ѹZSU3[10];
	char ��ѹZSU4[10];
	char ��ѹZSU5[10];
	char ��ѹZSU6[10];
	char ��ѹZSU7[10];
	char ��ѹZSU8[10];
	char ��ѹZSU9[10];
	char ��ѹZSU10[10];
	char ��ѹZU1[10];
	char ��ѹZU2[10];
	char ��ѹZU3[10];
	char ��ѹZU4[10];
	char ��ѹZU5[10];
	char ��ѹZU6[10];
	char ��ѹZU7[10];
	char ��ѹZU8[10];
	char ��ѹZU9[10];
	char ��ѹZU10[10];
	char ��ѹZI1[10];
	char ��ѹZI2[10];
	char ��ѹZI3[10];
	char ��ѹZI4[10];
	char ��ѹZI5[10];
	char ��ѹZI6[10];
	char ��ѹZI7[10];
	char ��ѹZI8[10];
	char ��ѹZI9[10];
	char ��ѹZI10[10];

	char ��ѹFSU1[10];
	char ��ѹFSU2[10];
	char ��ѹFSU3[10];
	char ��ѹFSU4[10];
	char ��ѹFSU5[10];
	char ��ѹFSU6[10];
	char ��ѹFSU7[10];
	char ��ѹFSU8[10];
	char ��ѹFSU9[10];
	char ��ѹFSU10[10];
	char ��ѹFU1[10];
	char ��ѹFU2[10];
	char ��ѹFU3[10];
	char ��ѹFU4[10];
	char ��ѹFU5[10];
	char ��ѹFU6[10];
	char ��ѹFU7[10];
	char ��ѹFU8[10];
	char ��ѹFU9[10];
	char ��ѹFU10[10];
	char ��ѹFI1[10];
	char ��ѹFI2[10];
	char ��ѹFI3[10];
	char ��ѹFI4[10];
	char ��ѹFI5[10];
	char ��ѹFI6[10];
	char ��ѹFI7[10];
	char ��ѹFI8[10];
	char ��ѹFI9[10];
	char ��ѹFI10[10];
	char ��ѹsumming_up[100];
	int ��ѹscore;
};

struct ST_���������� {
	TrialInfo ti;

	char ����I1[10];
	char ����I2[10];
	char ����I3[10];
	char ����U11[10];
	char ����U12[10];
	char ����UFA[10];
	char ����UAB[10];
	char ����UBC[10];
	char ����UCD[10];
	char ����UDE[10];

	char ����I1[10];
	char ����I2[10];
	char ����I3[10];
	char ����U11[10];
	char ����U12[10];
	char ����UFA[10];
	char ����UAB[10];
	char ����UBC[10];
	char ����UCD[10];
	char ����UDE[10];

	char ���I1[10];
	char ���I2[10];
	char ���I3[10];
	char ���U11[10];
	char ���U12[10];
	char ���UFA[10];
	char ���UAB[10];
	char ���UBC[10];
	char ���UCD[10];
	char ���UDE[10];

	char summing_up[100];
};

struct ST_����ԭ�� {
	TrialInfo ti;
	char Line1I1[10];
	char Line1I2[10];
	char Line1I3[10];
	char Line1U11[10];
	char Line1U12[10];
	char Line1UFA[10];
	char Line1UAB[10];
	char Line1UBC[10];
	char Line1UCD[10];
	char Line1UDE[10];

	char Line2I1[10];
	char Line2I2[10];
	char Line2I3[10];
	char Line2U11[10];
	char Line2U12[10];
	char Line2UFA[10];
	char Line2UAB[10];
	char Line2UBC[10];
	char Line2UCD[10];
	char Line2UDE[10];

	char Line3I1[10];
	char Line3I2[10];
	char Line3I3[10];
	char Line3U11[10];
	char Line3U12[10];
	char Line3UFA[10];
	char Line3UAB[10];
	char Line3UBC[10];
	char Line3UCD[10];
	char Line3UDE[10];

	char Line4I1[10];
	char Line4I2[10];
	char Line4I3[10];
	char Line4U11[10];
	char Line4U12[10];
	char Line4UFA[10];
	char Line4UAB[10];
	char Line4UBC[10];
	char Line4UCD[10];
	char Line4UDE[10];
	int Score1;

	char Line5I1[10];
	char Line5I2[10];
	char Line5I3[10];
	char Line5U11[10];
	char Line5U12[10];
	char Line5UFA[10];
	char Line5UAB[10];
	char Line5UBC[10];
	char Line5UCD[10];
	char Line5UDE[10];

	char Line6I1[10];
	char Line6I2[10];
	char Line6I3[10];
	char Line6U11[10];
	char Line6U12[10];
	char Line6UFA[10];
	char Line6UAB[10];
	char Line6UBC[10];
	char Line6UCD[10];
	char Line6UDE[10];

	char Line7I1[10];
	char Line7I2[10];
	char Line7I3[10];
	char Line7U11[10];
	char Line7U12[10];
	char Line7UFA[10];
	char Line7UAB[10];
	char Line7UBC[10];
	char Line7UCD[10];
	char Line7UDE[10];

	char Line8I1[10];
	char Line8I2[10];
	char Line8I3[10];
	char Line8U11[10];
	char Line8U12[10];
	char Line8UFA[10];
	char Line8UAB[10];
	char Line8UBC[10];
	char Line8UCD[10];
	char Line8UDE[10];
	char summing_up[100];
	int Score2;
};

struct ST_��ά�϶��� {
	TrialInfo ti;
	char Method1Uoc[10];
	char Method1Isc[10];
	char Method1Ro[10];
	char Method1Us[10];
	char Method1I[10];
	int scoreMethod1;

	char Method2RL1[10];
	char Method2RL2[10];
	char Method2RL3[10];
	char Method2RL4[10];
	char Method2RL5[10];
	char Method2RL6[10];
	char Method2RL7[10];
	char Method2RL8[10];
	char Method2RL9[10];
	char Method2RL10[10];
	char Method2URL1[10];
	char Method2URL2[10];
	char Method2URL3[10];
	char Method2URL4[10];
	char Method2URL5[10];
	char Method2URL6[10];
	char Method2URL7[10];
	char Method2URL8[10];
	char Method2URL9[10];
	char Method2URL10[10];
	char Method2I1[10];
	char Method2I2[10];
	char Method2I3[10];
	char Method2I4[10];
	char Method2I5[10];
	char Method2I6[10];
	char Method2I7[10];
	char Method2I8[10];
	char Method2I9[10];
	char Method2I10[10];
	char Method2Ro[10];
	int scoreMethod2;
	char Method3Uoc[10];
	char Method3Ro[10];
	int scoreMethod3;
	char Method4Uoc[10];
	int scoreMethod4;
	char Method5R0[10];
	int scoreMethod5; 

	char Method6RL1[10];
	char Method6RL2[10];
	char Method6RL3[10];
	char Method6RL4[10];
	char Method6RL5[10];
	char Method6RL6[10];
	char Method6RL7[10];
	char Method6RL8[10];
	char Method6RL9[10];
	char Method6RL10[10];
	char Method6URL1[10];
	char Method6URL2[10];
	char Method6URL3[10];
	char Method6URL4[10];
	char Method6URL5[10];
	char Method6URL6[10];
	char Method6URL7[10];
	char Method6URL8[10];
	char Method6URL9[10];
	char Method6URL10[10];
	char Method6I1[10];
	char Method6I2[10];
	char Method6I3[10];
	char Method6I4[10];
	char Method6I5[10];
	char Method6I6[10];
	char Method6I7[10];
	char Method6I8[10];
	char Method6I9[10];
	char Method6I10[10];
	int scoreMethod6;
	char summing_up[100];
};

struct ST_��ѹԴ�����Դ�ĵ�Ч�任 {
	TrialInfo ti;
	char Trial11UP1[10];
	char Trial11UP2[10];
	char Trial11Load1[10];
	char Trial11Load2[10];
	char Trial11Load3[10];
	char Trial11Load4[10];
	char Trial11Load5[10];
	char Trial11Load6[10];
	char Trial11Load7[10];
	char Trial11Load8[10];
	char Trial11Load9[10];
	char Trial11Load10[10];

	char Trial11U1[10];
	char Trial11U2[10];
	char Trial11U3[10];
	char Trial11U4[10];
	char Trial11U5[10];
	char Trial11U6[10];
	char Trial11U7[10];
	char Trial11U8[10];
	char Trial11U9[10];
	char Trial11U10[10];
	
	char Trial11I1[10];
	char Trial11I2[10];
	char Trial11I3[10];
	char Trial11I4[10];
	char Trial11I5[10];
	char Trial11I6[10];
	char Trial11I7[10];
	char Trial11I8[10];
	char Trial11I9[10];
	char Trial11I10[10];
	int Trial11Score;

	char Trial12Load1[10];
	char Trial12Load2[10];
	char Trial12Load3[10];
	char Trial12Load4[10];
	char Trial12Load5[10];
	char Trial12Load6[10];
	char Trial12Load7[10];
	char Trial12Load8[10];
	char Trial12Load9[10];
	char Trial12Load10[10];

	char Trial12U1[10];
	char Trial12U2[10];
	char Trial12U3[10];
	char Trial12U4[10];
	char Trial12U5[10];
	char Trial12U6[10];
	char Trial12U7[10];
	char Trial12U8[10];
	char Trial12U9[10];
	char Trial12U10[10];

	char Trial12I1[10];
	char Trial12I2[10];
	char Trial12I3[10];
	char Trial12I4[10];
	char Trial12I5[10];
	char Trial12I6[10];
	char Trial12I7[10];
	char Trial12I8[10];
	char Trial12I9[10];
	char Trial12I10[10];
	int Trial12Score;

	char Trial2Load1[10];
	char Trial2Load2[10];
	char Trial2Load3[10];
	char Trial2Load4[10];
	char Trial2Load5[10];
	char Trial2Load6[10];
	char Trial2Load7[10];
	char Trial2Load8[10];
	char Trial2Load9[10];
	char Trial2Load10[10];

	char Trial2I1[10];
	char Trial2I2[10];
	char Trial2I3[10];
	char Trial2I4[10];
	char Trial2I5[10];
	char Trial2I6[10];
	char Trial2I7[10];
	char Trial2I8[10];
	char Trial2I9[10];
	char Trial2I10[10];
	char Trial2Is[10];
	int Trial2Score;

	char summing_up[100];
};

struct ST_һ�׵�·����Ӧ���� {
	TrialInfo ti;
	char ��[10];
	char Trial1Bmp_in[387072];
	char Trial1Bmp_out[387072];
	int Trial1Score;
	char Trial2Bmp_in[387072];
	char Trial2Bmp_out[387072];
	int Trial2Score;
	char Trial3Bmp_in[387072];
	char Trial3Bmp_out[387072];
	int Trial3Score;
	char summing_up[100];
};

struct ST_���׶�̬��·��Ӧ���о� {
	TrialInfo ti; 
	char Trial1_1Bmp[387072];
	char Trial1_2Bmp[387072];
	char Trial1_3Bmp[387072];
	int ScoreTrial1;
	char Trial2_1Bmp[387072];
	char trial2_��[10];
	char trial2_w[10];
	int ScoreTrial2;
	char Trial3_1Bmp[387072];
	char trial3_1��[10];
	char trial3_1w[10];
	char Trial3_2Bmp[387072];
	char trial3_2��[10];
	char trial3_2w[10];
	char Trial3_3Bmp[387072];
	char trial3_3��[10];
	char trial3_3w[10];
	char Trial3_4Bmp[387072];
	char trial3_4��[10];
	char trial3_4w[10];
	int ScoreTrial3;
	char summing_up[100];
};
struct ST_VCVSʵ�� {
	TrialInfo ti;
	char trial1_1U1_1[10];
	char trial1_1U1_2[10];
	char trial1_1U1_3[10];
	char trial1_1U1_4[10];
	char trial1_1U1_5[10];
	char trial1_1U1_6[10];
	char trial1_1U1_7[10];
	char trial1_1U1_8[10];
	char trial1_1U1_9[10];

	char trial1_1U2_1[10];
	char trial1_1U2_2[10];
	char trial1_1U2_3[10];
	char trial1_1U2_4[10];
	char trial1_1U2_5[10];
	char trial1_1U2_6[10];
	char trial1_1U2_7[10];
	char trial1_1U2_8[10];
	char trial1_1U2_9[10];
	char trial1_1u[10];
	int scoretrial1_1;

	char trial1_2V2_1[10];
	char trial1_2V2_2[10];
	char trial1_2V2_3[10];
	char trial1_2V2_4[10];
	char trial1_2V2_5[10];
	char trial1_2V2_6[10];
	char trial1_2V2_7[10];
	char trial1_2V2_8[10];


	char trial1_2IL_1[10];
	char trial1_2IL_2[10];
	char trial1_2IL_3[10];
	char trial1_2IL_4[10];
	char trial1_2IL_5[10];
	char trial1_2IL_6[10];
	char trial1_2IL_7[10];
	char trial1_2IL_8[10];
	int scoretrial1_2;

	char trial2_1U1_1[10];
	char trial2_1U1_2[10];
	char trial2_1U1_3[10];
	char trial2_1U1_4[10];
	char trial2_1U1_5[10];
	char trial2_1U1_6[10];
	char trial2_1U1_7[10];
	char trial2_1U1_8[10];

	char trial2_1IL_1[10];
	char trial2_1IL_2[10];
	char trial2_1IL_3[10];
	char trial2_1IL_4[10];
	char trial2_1IL_5[10];
	char trial2_1IL_6[10];
	char trial2_1IL_7[10];
	char trial2_1IL_8[10];
	char trial2_1gm[10];
	int scoretrial2_1;


	char trial2_2IL_1[10];
	char trial2_2IL_2[10];
	char trial2_2IL_3[10];
	char trial2_2IL_4[10];
	char trial2_2IL_5[10];
	char trial2_2IL_6[10];
	char trial2_2IL_7[10];

	char trial2_2V2_1[10];
	char trial2_2V2_2[10];
	char trial2_2V2_3[10];
	char trial2_2V2_4[10];
	char trial2_2V2_5[10];
	char trial2_2V2_6[10];
	char trial2_2V2_7[10];

	char trial2_2RL_1[10];
	char trial2_2RL_2[10];
	char trial2_2RL_3[10];
	char trial2_2RL_4[10];
	char trial2_2RL_5[10];
	char trial2_2RL_6[10];
	char trial2_2RL_7[10];


	int scoretrial2_2;

	char trial3_1I1_1[10];
	char trial3_1I1_2[10];
	char trial3_1I1_3[10];
	char trial3_1I1_4[10];
	char trial3_1I1_5[10];
	char trial3_1I1_6[10];
	char trial3_1I1_7[10];
	char trial3_1I1_8[10];

	char trial3_1V2_1[10];
	char trial3_1V2_2[10];
	char trial3_1V2_3[10];
	char trial3_1V2_4[10];
	char trial3_1V2_5[10];
	char trial3_1V2_6[10];
	char trial3_1V2_7[10];
	char trial3_1V2_8[10];
	char trial3_1rm[10];
	int scoretrial3_1;

	char trial3_2RL_1[10];
	char trial3_2RL_2[10];
	char trial3_2RL_3[10];
	char trial3_2RL_4[10];
	char trial3_2RL_5[10];
	char trial3_2RL_6[10];
	char trial3_2RL_7[10];
	char trial3_2RL_8[10];

	char trial3_2U2_1[10];
	char trial3_2U2_2[10];
	char trial3_2U2_3[10];
	char trial3_2U2_4[10];
	char trial3_2U2_5[10];
	char trial3_2U2_6[10];
	char trial3_2U2_7[10];
	char trial3_2U2_8[10];

	char trial3_2IL_1[10];
	char trial3_2IL_2[10];
	char trial3_2IL_3[10];
	char trial3_2IL_4[10];
	char trial3_2IL_5[10];
	char trial3_2IL_6[10];
	char trial3_2IL_7[10];
	char trial3_2IL_8[10];
	int scoretrial3_2;


	char trial4_1I1_1[10];
	char trial4_1I1_2[10];
	char trial4_1I1_3[10];
	char trial4_1I1_4[10];
	char trial4_1I1_5[10];
	char trial4_1I1_6[10];
	char trial4_1I1_7[10];
	char trial4_1I1_8[10];

	char trial4_1IL_1[10];
	char trial4_1IL_2[10];
	char trial4_1IL_3[10];
	char trial4_1IL_4[10];
	char trial4_1IL_5[10];
	char trial4_1IL_6[10];
	char trial4_1IL_7[10];
	char trial4_1IL_8[10];
	char trial4_1��[10];
	int scoretrial4_1;

	char trial4_2RL_1[10];
	char trial4_2RL_2[10];
	char trial4_2RL_3[10];
	char trial4_2RL_4[10];
	char trial4_2RL_5[10];
	char trial4_2RL_6[10];
	char trial4_2RL_7[10];
	char trial4_2RL_8[10];

	char trial4_2IL_1[10];
	char trial4_2IL_2[10];
	char trial4_2IL_3[10];
	char trial4_2IL_4[10];
	char trial4_2IL_5[10];
	char trial4_2IL_6[10];
	char trial4_2IL_7[10];
	char trial4_2IL_8[10];

	char trial4_2U2_1[10];
	char trial4_2U2_2[10];
	char trial4_2U2_3[10];
	char trial4_2U2_4[10];
	char trial4_2U2_5[10];
	char trial4_2U2_6[10];
	char trial4_2U2_7[10];
	char trial4_2U2_8[10];
	int scoretrial4_2;
};

struct ST_���˿�������о� {
	TrialInfo ti;
	char Trial1_1_U110[10];
	char Trial1_1_U120[10];
	char Trial1_1_I110[10];
	char Trial1_1_A1[10];
	char Trial1_1_B1[10];
	char Trial1_1_U11S[10];
	char Trial1_1_I11S[10];
	char Trial1_1_U12S[10];
	char Trial1_1_C1[10];
	char Trial1_1_D1[10];
	char Trial1_1_U11[10];
	char Trial1_1_U21[10];
	char Trial2_1_U[10];

	char Trial1_2_U210[10];
	char Trial1_2_U220[10];
	char Trial1_2_I210[10];
	char Trial1_2_A2[10];
	char Trial1_2_B2[10];
	char Trial1_2_U21S[10];
	char Trial1_2_I21S[10];
	char Trial1_2_I22S[10];
	char Trial1_2_C2[10];
	char Trial1_2_D2[10];
	int score1;

	char Trial2_1_U10[10];
	char Trial2_1_I10[10];
	char Trial2_1_I110[10];
	char Trial2_1_U1S[10];
	char Trial2_1_I1S[10];
	char Trial2_1_R1S[10];
	char Trial2_1_U20[10];
	char Trial2_1_I20[10];
	char Trial2_1_R20[10];
	char Trial2_1_U2S[10];
	char Trial2_1_I2S[10];
	char Trial2_1_R2S[10];
	char Trial2_1_A[10];
	char Trial2_1_B[10];
	char Trial2_1_C[10];
	char Trial2_1_D[10];
	int score2;
};

struct ST_����ʴ��������Ĳⶨ {
	TrialInfo ti;
	char Trial1_RL2[10];
	char Trial1_RL3[10];
	char Trial1_RL4[10];
	char Trial1_RL5[10];
	char Trial1_RL6[10];
	char Trial1_RL7[10];
	char Trial1_RL8[10];
	char Trial1_RL9[10];

	char Trial1_IUL1[10];
	char Trial1_IUL2[10];
	char Trial1_IUL3[10];
	char Trial1_IUL4[10];
	char Trial1_IUL5[10];
	char Trial1_IUL6[10];
	char Trial1_IUL7[10];
	char Trial1_IUL8[10];
	char Trial1_IUL9[10];

	char Trial1_I1[10];
	char Trial1_I2[10];
	char Trial1_I3[10];
	char Trial1_I4[10];
	char Trial1_I5[10];
	char Trial1_I6[10];
	char Trial1_I7[10];
	char Trial1_I8[10];
	char Trial1_I9[10];

	char Trial1_PL1[10];
	char Trial1_PL2[10];
	char Trial1_PL3[10];
	char Trial1_PL4[10];
	char Trial1_PL5[10];
	char Trial1_PL6[10];
	char Trial1_PL7[10];
	char Trial1_PL8[10];
	char Trial1_PL9[10];

	char Trial1_Uo1[10];
	char Trial1_Uo2[10];
	char Trial1_Uo3[10];
	char Trial1_Uo4[10];
	char Trial1_Uo5[10];
	char Trial1_Uo6[10];
	char Trial1_Uo7[10];
	char Trial1_Uo8[10];
	char Trial1_Uo9[10];

	char trial1_Po1[10];
	char trial1_Po2[10];
	char trial1_Po3[10];
	char trial1_Po4[10];
	char trial1_Po5[10];
	char trial1_Po6[10];
	char trial1_Po7[10];
	char trial1_Po8[10];
	char trial1_Po9[10];
	int trial1Score;

	char Trial2_RL2[10];
	char Trial2_RL3[10];
	char Trial2_RL4[10];
	char Trial2_RL5[10];
	char Trial2_RL6[10];
	char Trial2_RL7[10];
	char Trial2_RL8[10];

	char Trial2_UL1[10];
	char Trial2_UL2[10];
	char Trial2_UL3[10];
	char Trial2_UL4[10];
	char Trial2_UL5[10];
	char Trial2_UL6[10];
	char Trial2_UL7[10];
	char Trial2_UL8[10];
	char Trial2_UL9[10];

	char Trial2_I1[10];
	char Trial2_I2[10];
	char Trial2_I3[10];
	char Trial2_I4[10];
	char Trial2_I5[10];
	char Trial2_I6[10];
	char Trial2_I7[10];
	char Trial2_I8[10];
	char Trial2_I9[10];

	char Trial2_PL1[10];
	char Trial2_PL2[10];
	char Trial2_PL3[10];
	char Trial2_PL4[10];
	char Trial2_PL5[10];
	char Trial2_PL6[10];
	char Trial2_PL7[10];
	char Trial2_PL8[10];
	char Trial2_PL9[10];

	char Trial2_Uo1[10];
	char Trial2_Uo2[10];
	char Trial2_Uo3[10];
	char Trial2_Uo4[10];
	char Trial2_Uo5[10];
	char Trial2_Uo6[10];
	char Trial2_Uo7[10];
	char Trial2_Uo8[10];
	char Trial2_Uo9[10];

	char trial2_Po1[10];
	char trial2_Po2[10];
	char trial2_Po3[10];
	char trial2_Po4[10];
	char trial2_Po5[10];
	char trial2_Po6[10];
	char trial2_Po7[10];
	char trial2_Po8[10];
	char trial2_Po9[10];
	int  trial2Score;

	char summing_up[100];

};


struct ST_��·״̬�켣�Ĺ۲� {
	TrialInfo ti;
	char Trial1Bmp[387072];
	char Trial2Bmp[387072];
	char Trial3Bmp[387072];
	char summing_up[100];
};

struct ST_RLCԪ���迹���ԵĲⶨ {
	TrialInfo ti;

	char Trial1_F_1[10];
	char Trial1_F_2[10];
	char Trial1_F_3[10];
	char Trial1_F_4[10];
	char Trial1_F_5[10];
	char Trial1_F_6[10];

	char Trial1_R_Ur1[10];
	char Trial1_R_Ur2[10];
	char Trial1_R_Ur3[10];
	char Trial1_R_Ur4[10];
	char Trial1_R_Ur5[10];
	char Trial1_R_Ur6[10];

	char Trial1_R_IR1[10];
	char Trial1_R_IR2[10];
	char Trial1_R_IR3[10];
	char Trial1_R_IR4[10];
	char Trial1_R_IR5[10];
	char Trial1_R_IR6[10];

	char Trial1_R_R1[10];
	char Trial1_R_R2[10];
	char Trial1_R_R3[10];
	char Trial1_R_R4[10];
	char Trial1_R_R5[10];
	char Trial1_R_R6[10];

	char Trial1_L_Ur1[10];
	char Trial1_L_Ur2[10];
	char Trial1_L_Ur3[10];
	char Trial1_L_Ur4[10];
	char Trial1_L_Ur5[10];
	char Trial1_L_Ur6[10];

	char Trial1_L_IL1[10];
	char Trial1_L_IL2[10];
	char Trial1_L_IL3[10];
	char Trial1_L_IL4[10];
	char Trial1_L_IL5[10];
	char Trial1_L_IL6[10];


	char Trial1_L_XL1[10];
	char Trial1_L_XL2[10];
	char Trial1_L_XL3[10];
	char Trial1_L_XL4[10];
	char Trial1_L_XL5[10];
	char Trial1_L_XL6[10];

	char Trial1_C_Ur1[10];
	char Trial1_C_Ur2[10];
	char Trial1_C_Ur3[10];
	char Trial1_C_Ur4[10];
	char Trial1_C_Ur5[10];
	char Trial1_C_Ur6[10];

	char Trial1_C_IC1[10];
	char Trial1_C_IC2[10];
	char Trial1_C_IC3[10];
	char Trial1_C_IC4[10];
	char Trial1_C_IC5[10];
	char Trial1_C_IC6[10];

	char Trial1_C_XC1[10];
	char Trial1_C_XC2[10];
	char Trial1_C_XC3[10];
	char Trial1_C_XC4[10];
	char Trial1_C_XC5[10];
	char Trial1_C_XC6[10];

	int score1;


	char Trial2_1Bmp[387072];
	char Trial2_2Bmp[387072];
	int score2;

	char Trial3_1Bmp[387072];
	char Trial3_2Bmp[387072];
	char Trial3_3Bmp[387072];
	char Trial3_4Bmp[387072];
	char Trial3_5Bmp[387072];
	char Trial3_6Bmp[387072];

	char Trial3_F_1[10];
	char Trial3_F_2[10];
	char Trial3_F_3[10];
	char Trial3_F_4[10];
	char Trial3_F_5[10];
	char Trial3_F_6[10];

	char Trial3_n1[10];
	char Trial3_n2[10];
	char Trial3_n3[10];
	char Trial3_n4[10];
	char Trial3_n5[10];
	char Trial3_n6[10];

	char Trial3_m1[10];
	char Trial3_m2[10];
	char Trial3_m3[10];
	char Trial3_m4[10];
	char Trial3_m5[10];
	char Trial3_m6[10];


	char Trial3_��1[10];
	char Trial3_��2[10];
	char Trial3_��3[10];
	char Trial3_��4[10];
	char Trial3_��5[10];
	char Trial3_��6[10];
	int score3;

	char summing_up[100];
};

struct ST_RLC����г���·���о� {
	TrialInfo ti;
	char Trial1Bmp[387072];
	int score1;

	char Trial2_F[10];
	char Trial2_Uc[10];
	char Trial2_UL[10];
	int score2;

	char Trial3_F1[10];
	char Trial3_F2[10];
	char Trial3_F3[10];
	char Trial3_F4[10];
	char Trial3_F5[10];
	char Trial3_F6[10];
	char Trial3_F7[10];
	char Trial3_F8[10];

	char Trial3_U0_1[10];
	char Trial3_U0_2[10];
	char Trial3_U0_3[10];
	char Trial3_U0_4[10];
	char Trial3_U0_5[10];
	char Trial3_U0_6[10];
	char Trial3_U0_7[10];
	char Trial3_U0_8[10];

	char Trial3_UL_1[10];
	char Trial3_UL_2[10];
	char Trial3_UL_3[10];
	char Trial3_UL_4[10];
	char Trial3_UL_5[10];
	char Trial3_UL_6[10];
	char Trial3_UL_7[10];
	char Trial3_UL_8[10];

	
	char Trial3_Uc_1[10];
	char Trial3_Uc_2[10];
	char Trial3_Uc_3[10];
	char Trial3_Uc_4[10];
	char Trial3_Uc_5[10];
	char Trial3_Uc_6[10];
	char Trial3_Uc_7[10];
	char Trial3_Uc_8[10];
    char Trial3_Fo[10];
	char Trial3_Q[10];
	char Trial3F2_F1[10];
	int score3;

	char Trial4_F[10];
	char Trial4_Uc[10];
	char Trial4_UL[10];
	int score4;

	char Trial5_F1[10];
	char Trial5_F2[10];
	char Trial5_F3[10];
	char Trial5_F4[10];
	char Trial5_F5[10];
	char Trial5_F6[10];
	char Trial5_F7[10];
	char Trial5_F8[10];
	char Trial5_F9[10];
	char Trial5_F10[10];
	char Trial5_F11[10];
	char Trial5_F12[10];
	char Trial5_F13[10];
	char Trial5_F14[10];
	char Trial5_F15[10];
	char Trial5_F16[10];

	char Trial5_U0_1[10];
	char Trial5_U0_2[10];
	char Trial5_U0_3[10];
	char Trial5_U0_4[10];
	char Trial5_U0_5[10];
	char Trial5_U0_6[10];
	char Trial5_U0_7[10];
	char Trial5_U0_8[10];

	char Trial5_UL_1[10];
	char Trial5_UL_2[10];
	char Trial5_UL_3[10];
	char Trial5_UL_4[10];
	char Trial5_UL_5[10];
	char Trial5_UL_6[10];
	char Trial5_UL_7[10];
	char Trial5_UL_8[10];


	char Trial5_Uc_1[10];
	char Trial5_Uc_2[10];
	char Trial5_Uc_3[10];
	char Trial5_Uc_4[10];
	char Trial5_Uc_5[10];
	char Trial5_Uc_6[10];
	char Trial5_Uc_7[10];
	char Trial5_Uc_8[10];
	char Trial5_Fo[10];
	char Trial5_Q[10];
	char Trial5F2_F1[10];

	int score5;

	char summing_up[100];
};


struct ST_�������ı�ѹ�����ԵĲ��� {
	TrialInfo ti;
	char Trial2_Line1_I1[10];
	char Trial2_Line1_U1[10];
	char Trial2_Line1_W[10];
	char Trial2_Line1_I2[10];
	char Trial2_Line1_U2[10];

	char Trial2_Line2_I1[10];
	char Trial2_Line2_U1[10];
	char Trial2_Line2_W[10];
	char Trial2_Line2_I2[10];
	char Trial2_Line2_U2[10];

	char Trial2_Line3_I1[10];
	char Trial2_Line3_U1[10];
	char Trial2_Line3_W[10];
	char Trial2_Line3_I2[10];
	char Trial2_Line3_U2[10];
	int Score2;

	char Trial3_U1_1[10];
	char Trial3_U1_2[10];
	char Trial3_U1_3[10];
	char Trial3_U1_4[10];
	char Trial3_U1_5[10];
	char Trial3_U1_6[10];
	char Trial3_U1_7[10];
	char Trial3_U1_8[10];
	char Trial3_U1_9[10];
	char Trial3_U1_10[10];

	char Trial3_U20_1[10];
	char Trial3_U20_2[10];
	char Trial3_U20_3[10];
	char Trial3_U20_4[10];
	char Trial3_U20_5[10];
	char Trial3_U20_6[10];
	char Trial3_U20_7[10];
	char Trial3_U20_8[10];
	char Trial3_U20_9[10];
	char Trial3_U20_10[10];

	char Trial3_I10_1[10];
	char Trial3_I10_2[10];
	char Trial3_I10_3[10];
	char Trial3_I10_4[10];
	char Trial3_I10_5[10];
	char Trial3_I10_6[10];
	char Trial3_I10_7[10];
	char Trial3_I10_8[10];
	char Trial3_I10_9[10];
	char Trial3_I10_10[10];
	int Score3;
	char summing_up[100];
};

struct ST_�����ȱ�ʵ�� {
	TrialInfo ti;
	char Trial1_IN[10];
	char Trial1_N[10];
	char Trial1_UN[10];
	char Trial1_accuracy[10];
	char Trial1_mea_V[10];
	char Trial1_mea_I[10];
	char Trial1_mea_P[10];
	char Trial1_mea_time[10];
	char Trial1_mea_n[10];
	char Trial1_cal_meaW[10];
	char Trial1_cal_calW[10];
	char Trial1_cal_WW[10];
	char Trial1_cal_N[10];
};

struct ST_���ཻ����·��ѹ�����Ĳ��� {
	TrialInfo ti;
	char Trial1_Line1_IA[10];
	char Trial1_Line2_IA[10];
	char Trial1_Line3_IA[10];
	char Trial1_Line4_IA[10];
	char Trial1_Line5_IA[10];
	char Trial1_Line1_IB[10];
	char Trial1_Line2_IB[10];
	char Trial1_Line3_IB[10];
	char Trial1_Line4_IB[10];
	char Trial1_Line5_IB[10];
	char Trial1_Line1_IC[10];
	char Trial1_Line2_IC[10];
	char Trial1_Line3_IC[10];
	char Trial1_Line4_IC[10];
	char Trial1_Line5_IC[10];
	char Trial1_Line1_UAB[10];
	char Trial1_Line2_UAB[10];
	char Trial1_Line3_UAB[10];
	char Trial1_Line4_UAB[10];
	char Trial1_Line5_UAB[10];
	char Trial1_Line1_UBC[10];
	char Trial1_Line2_UBC[10];
	char Trial1_Line3_UBC[10];
	char Trial1_Line4_UBC[10];
	char Trial1_Line5_UBC[10];
	char Trial1_Line1_UCA[10];
	char Trial1_Line2_UCA[10];
	char Trial1_Line3_UCA[10];
	char Trial1_Line4_UCA[10];
	char Trial1_Line5_UCA[10];
	char Trial1_Line1_UAO[10];
	char Trial1_Line2_UAO[10];
	char Trial1_Line3_UAO[10];
	char Trial1_Line4_UAO[10];
	char Trial1_Line5_UAO[10];
	char Trial1_Line1_UBO[10];
	char Trial1_Line2_UBO[10];
	char Trial1_Line3_UBO[10];
	char Trial1_Line4_UBO[10];
	char Trial1_Line5_UBO[10];
	char Trial1_Line1_UCO[10];
	char Trial1_Line2_UCO[10];
	char Trial1_Line3_UCO[10];
	char Trial1_Line4_UCO[10];
	char Trial1_Line5_UCO[10];
	char Trial1_Line1_IO[10];
	char Trial1_Line2_IO[10];
	char Trial1_Line3_IO[10];
	char Trial1_Line4_IO[10];
	char Trial1_Line5_IO[10];
	char lTrial1_Line1_UNO[10];
	char lTrial1_Line2_UNO[10];
	char lTrial1_Line3_UNO[10];
	char lTrial1_Line4_UNO[10];
	char lTrial1_Line5_UNO[10];

	char Trial2_Line1_UAB[10];
	char Trial2_Line2_UAB[10];
	char Trial2_Line1_UBC[10];
	char Trial2_Line2_UBC[10];
	char Trial2_Line1_UCA[10];
	char Trial2_Line2_UCA[10];
	char Trial2_Line1_IA[10];
	char Trial2_Line2_IA[10];
	char Trial2_Line1_IB[10];
	char Trial2_Line2_IB[10];
	char Trial2_Line1_IC[10];
	char Trial2_Line2_IC[10];
	char Trial2_Line1_IAB[10];
	char Trial2_Line2_IAB[10];
	char Trial2_Line1_IBC[10];
	char Trial2_Line2_IBC[10];
	char Trial2_Line1_ICA[10];
	char Trial2_Line2_ICA[10];
	int score1;
	int score2;
};

struct ST_�չ�ƹ������������ {
	TrialInfo ti;
	char Trial1_Mea_U[10];
	char Trial1_Mea_UR[10];
	char Trial1_Mea_UC[10];
	char Trial1_Cal_U[10];
	char Trial1_Mea_DU[10];
	char Trial1_Cal_UU[10];
	int score1;

	char Trial2_P_line1[10];
	char Trial2_P_line2[10];
	char Trial2_cos_line1[10];
	char Trial2_cos_line2[10];
	char Trial2_I_line1[10];
	char Trial2_I_line2[10];
	char Trial2_U_line1[10];
	char Trial2_U_line2[10];
	char Trial2_UL_line1[10];
	char Trial2_UL_line2[10];
	char Trial2_UA_line1[10];
	char Trial2_UA_line2[10];
	char Trial2_R_line1[10];
	char Trial2_R_line2[10];
	char Trial2_cos_cal_line1[10];
	char Trial2_cos_cal_line2[10];
	int score2;

	char Trial3_mea_P_line1[10];
	char Trial3_mea_P_line2[10];
	char Trial3_mea_P_line3[10];
	char Trial3_mea_P_line4[10];
	char Trial3_mea_U_line1[10];
	char Trial3_mea_U_line2[10];
	char Trial3_mea_U_line3[10];
	char Trial3_mea_U_line4[10];
	char Trial3_mea_I_line1[10];
	char Trial3_mea_I_line2[10];
	char Trial3_mea_I_line3[10];
	char Trial3_mea_I_line4[10];
	char Trial3_mea_IL_line1[10];
	char Trial3_mea_IL_line2[10];
	char Trial3_mea_IL_line3[10];
	char Trial3_mea_IL_line4[10];
	char Trial3_mea_IC_line1[10];
	char Trial3_mea_IC_line2[10];
	char Trial3_mea_IC_line3[10];
	char Trial3_mea_IC_line4[10];
	char Trial3_cal_I_line1[10];
	char Trial3_cal_I_line2[10];
	char Trial3_cal_I_line3[10];
	char Trial3_cal_I_line4[10];
	char Trial3_cal_cos_line1[10];
	char Trial3_cal_cos_line2[10];
	char Trial3_cal_cos_line3[10];
	char Trial3_cal_cos_line4[10];
	int score3;
};


struct ST_��ת�� {
	TrialInfo ti;
	char Trial1_U1_line1[10];
	char Trial1_U1_line2[10];
	char Trial1_U1_line3[10];
	char Trial1_U1_line4[10];
	char Trial1_U1_line5[10];
	char Trial1_U1_line6[10];
	char Trial1_U1_line7[10];
	char Trial1_Bmp_U[387072];
	char Trial1_Bmp_I[387072];

	char Trial1_U2_line1[10];
	char Trial1_U2_line2[10];
	char Trial1_U2_line3[10];
	char Trial1_U2_line4[10];
	char Trial1_U2_line5[10];
	char Trial1_U2_line6[10];
	char Trial1_U2_line7[10];

	char Trial1_I1_line1[10];
	char Trial1_I1_line2[10];
	char Trial1_I1_line3[10];
	char Trial1_I1_line4[10];
	char Trial1_I1_line5[10];
	char Trial1_I1_line6[10];
	char Trial1_I1_line7[10];

	char Trial1_I2_line1[10];
	char Trial1_I2_line2[10];
	char Trial1_I2_line3[10];
	char Trial1_I2_line4[10];
	char Trial1_I2_line5[10];
	char Trial1_I2_line6[10];
	char Trial1_I2_line7[10];

	char Trial1_G1_line1[10];
	char Trial1_G1_line2[10];
	char Trial1_G1_line3[10];
	char Trial1_G1_line4[10];
	char Trial1_G1_line5[10];
	char Trial1_G1_line6[10];
	char Trial1_G1_line7[10];

	char Trial1_G2_line1[10];
	char Trial1_G2_line2[10];
	char Trial1_G2_line3[10];
	char Trial1_G2_line4[10];
	char Trial1_G2_line5[10];
	char Trial1_G2_line6[10];
	char Trial1_G2_line7[10];

	char Trial1_GAver_line1[10]; 
	char Trial1_GAver_line2[10];
	char Trial1_GAver_line3[10];
	char Trial1_GAver_line4[10];
	char Trial1_GAver_line5[10];
	char Trial1_GAver_line6[10];
	char Trial1_GAver_line7[10];
	int score1;

	char Trial2_F200_line1[10]; 
	char Trial2_F200_line2[10];
	char Trial2_F200_line3[10];
	char Trial2_F200_line4[10];
	char Trial2_F200_line5[10];
	char Trial2_F200_line6[10];
	char Trial2_F200_line7[10];

	char Trial2_F400_line1[10];
	char Trial2_F400_line2[10];
	char Trial2_F400_line3[10];
	char Trial2_F400_line4[10];
	char Trial2_F400_line5[10];
	char Trial2_F400_line6[10];
	char Trial2_F400_line7[10];

	char Trial2_F500_line1[10];
	char Trial2_F500_line2[10];
	char Trial2_F500_line3[10];
	char Trial2_F500_line4[10];
	char Trial2_F500_line5[10];
	char Trial2_F500_line6[10];
	char Trial2_F500_line7[10];
	
	char Trial2_F700_line1[10];
	char Trial2_F700_line2[10];
	char Trial2_F700_line3[10];
	char Trial2_F700_line4[10];
	char Trial2_F700_line5[10];
	char Trial2_F700_line6[10];
	char Trial2_F700_line7[10];

	char Trial2_F800_line1[10];
	char Trial2_F800_line2[10];
	char Trial2_F800_line3[10];
	char Trial2_F800_line4[10];
	char Trial2_F800_line5[10];
	char Trial2_F800_line6[10];
	char Trial2_F800_line7[10];


	char Trial2_F900_line1[10];
	char Trial2_F900_line2[10];
	char Trial2_F900_line3[10];
	char Trial2_F900_line4[10];
	char Trial2_F900_line5[10];
	char Trial2_F900_line6[10];
	char Trial2_F900_line7[10];

	char Trial2_F1000_line1[10];
	char Trial2_F1000_line2[10];
	char Trial2_F1000_line3[10];
	char Trial2_F1000_line4[10];
	char Trial2_F1000_line5[10];
	char Trial2_F1000_line6[10];
	char Trial2_F1000_line7[10];

	char Trial2_F1200_line1[10];
	char Trial2_F1200_line2[10];
	char Trial2_F1200_line3[10];
	char Trial2_F1200_line4[10];
	char Trial2_F1200_line5[10];
	char Trial2_F1200_line6[10];
	char Trial2_F1200_line7[10];

	char Trial2_F1300_line1[10];
	char Trial2_F1300_line2[10];
	char Trial2_F1300_line3[10];
	char Trial2_F1300_line4[10];
	char Trial2_F1300_line5[10];
	char Trial2_F1300_line6[10];
	char Trial2_F1300_line7[10];

	char Trial2_F1500_line1[10];
	char Trial2_F1500_line2[10];
	char Trial2_F1500_line3[10];
	char Trial2_F1500_line4[10];
	char Trial2_F1500_line5[10];
	char Trial2_F1500_line6[10];
	char Trial2_F1500_line7[10];

	char Trial2_F2000_line1[10];
	char Trial2_F2000_line2[10];
	char Trial2_F2000_line3[10];
	char Trial2_F2000_line4[10];
	char Trial2_F2000_line5[10];
	char Trial2_F2000_line6[10];
	char Trial2_F2000_line7[10];
	int score2;
	char Trial3_200[10];
	char Trial3_400[10];
	char Trial3_500[10];
	char Trial3_700[10];
	char Trial3_800[10];
	char Trial3_900[10];
	char Trial3_1000[10];
	char Trial3_1200[10];
	char Trial3_1300[10];
	char Trial3_1500[10];
	char Trial3_2000[10];
	int score3;
};

struct ST_�����·���ʵĲ��� {
	TrialInfo ti;
	char Trial1_PA_1[10];
	char Trial1_PA_2[10];
	char Trial1_PB_1[10];
	char Trial1_PB_2[10];
	char Trial1_PC_1[10];
	char Trial1_PC_2[10];
	char Trial1_P_1[10];
	char Trial1_P_2[10];
	int score1;

	char Trial2_P1_1[10];
	char Trial2_P1_2[10];
	char Trial2_P1_3[10];
	char Trial2_P1_4[10];
	char Trial2_P2_1[10];
	char Trial2_P2_2[10];
	char Trial2_P2_3[10];
	char Trial2_P2_4[10];
	char Trial2_P_1[10];
	char Trial2_P_2[10];
	char Trial2_P_3[10];
	char Trial2_P_4[10];
	int score2;


	char Trial3_U_1[10];
	char Trial3_U_2[10];
	char Trial3_U_3[10];
	char Trial3_I_1[10];
	char Trial3_I_2[10];
	char Trial3_I_3[10];
	char Trial3_Q_1[10];
	char Trial3_Q_2[10];
	char Trial3_Q_3[10];
	char Trial3_QQ_1[10];
	char Trial3_QQ_2[10];
	char Trial3_QQ_3[10];
	int score3;

};

struct ST_���迹�任�� {
	TrialInfo ti;
	char Trial1_300_U1_1[10];
	char Trial1_300_U1_2[10];
	char Trial1_300_U1_3[10];
	char Trial1_300_U1_4[10];
	char Trial1_300_U1_5[10];
	char Trial1_300_U1_6[10];

	char Trial1_300_I1_1[10];
	char Trial1_300_I1_2[10];
	char Trial1_300_I1_3[10];
	char Trial1_300_I1_4[10];
	char Trial1_300_I1_5[10];
	char Trial1_300_I1_6[10];

	char Trial1_300_R_1[10];
	char Trial1_300_R_2[10];
	char Trial1_300_R_3[10];
	char Trial1_300_R_4[10];
	char Trial1_300_R_5[10];
	char Trial1_300_R_6[10];


	char Trial1_600_U1_1[10];
	char Trial1_600_U1_2[10];
	char Trial1_600_U1_3[10];
	char Trial1_600_U1_4[10];
	char Trial1_600_U1_5[10];
	char Trial1_600_U1_6[10];

	char Trial1_600_I1_1[10];
	char Trial1_600_I1_2[10];
	char Trial1_600_I1_3[10];
	char Trial1_600_I1_4[10];
	char Trial1_600_I1_5[10];
	char Trial1_600_I1_6[10];

	char Trial1_600_R_1[10];
	char Trial1_600_R_2[10];
	char Trial1_600_R_3[10];
	char Trial1_600_R_4[10];
	char Trial1_600_R_5[10];
	char Trial1_600_R_6[10];

	int score1;
	char Trial2_Bmp_1[387072];
	char Trial2_Bmp_2[387072];
	int score2;
};

struct ST_RC�����Ƶ������ {
	TrialInfo ti;
	char Trial1_F1[10];
	char Trial1_F2[10];
	char Trial1_F3[10];
	char Trial1_F4[10];
	char Trial1_F5[10];
	char Trial1_F6[10];
	char Trial1_F7[10];
	char Trial1_F8[10];

	char Trial1_Uo1_1[10];
	char Trial1_Uo1_2[10];
	char Trial1_Uo1_3[10];
	char Trial1_Uo1_4[10];
	char Trial1_Uo1_5[10];
	char Trial1_Uo1_6[10];
	char Trial1_Uo1_7[10];
	char Trial1_Uo1_8[10];

	char Trial1_Uo2_1[10];
	char Trial1_Uo2_2[10];
	char Trial1_Uo2_3[10];
	char Trial1_Uo2_4[10];
	char Trial1_Uo2_5[10];
	char Trial1_Uo2_6[10];
	char Trial1_Uo2_7[10];
	char Trial1_Uo2_8[10];
	int score1;


	char Trial2_F1[10];
	char Trial2_F2[10];
	char Trial2_F3[10];
	char Trial2_F4[10];
	char Trial2_F5[10];
	char Trial2_F6[10];
	char Trial2_F7[10];
	char Trial2_F8[10];

	char Trial2_T1[10];
	char Trial2_T2[10];
	char Trial2_T3[10];
	char Trial2_T4[10];
	char Trial2_T5[10];
	char Trial2_T6[10];
	char Trial2_T7[10];
	char Trial2_T8[10];

	char Trial2_��1[10];
	char Trial2_��2[10];
	char Trial2_��3[10];
	char Trial2_��4[10];
	char Trial2_��5[10];
	char Trial2_��6[10];
	char Trial2_��7[10];
	char Trial2_��8[10];

	char Trial2_��1[10];
	char Trial2_��2[10];
	char Trial2_��3[10];
	char Trial2_��4[10];
	char Trial2_��5[10];
	char Trial2_��6[10];
	char Trial2_��7[10];
	char Trial2_��8[10];

	char Trial2_��2_1[10];
	char Trial2_��2_2[10];
	char Trial2_��2_3[10];
	char Trial2_��2_4[10];
	char Trial2_��2_5[10];
	char Trial2_��2_6[10];
	char Trial2_��2_7[10];
	char Trial2_��2_8[10];

	char Trial2_��2_1[10];
	char Trial2_��2_2[10];
	char Trial2_��2_3[10];
	char Trial2_��2_4[10];
	char Trial2_��2_5[10];
	char Trial2_��2_6[10];
	char Trial2_��2_7[10];
	char Trial2_��2_8[10];
	char summing_up[10];
	int score2;
};

struct ST_�Ǳ����̵���չ {
	TrialInfo ti;
	char Trial1_1[10];
	char Trial1_2[10];
	char Trial1_3[10];
	char Trial1_4[10];
	char Trial1_5[10];
	char Trial1_6[10];
	int score1;
	char Trial2_1[10];
	char Trial2_2[10];
	char Trial2_3[10];
	char Trial2_4[10];
	char Trial2_5[10];
	char Trial2_6[10];
	int score2;
	char Trial3_1[10];
	char Trial3_2[10];
	char Trial3_3[10];
	char Trial3_4[10];
	char Trial3_5[10];
	char Trial3_6[10];
	int score3;
};

struct ST_�����繤�Ǳ��ʹ����������ļ���{
	TrialInfo ti;
	char Trial1_IA_5mA[10];
	char Trial1_IA_5V[10];
	char Trial1_IA1_5mA[10];
	char Trial1_IA1_5V[10];
	char Trial1_RB_5mA[10];
	char Trial1_RB_5V[10];
	char Trial1_R1_5mA[10];
	char Trial1_R1_5V[10];
	char Trial1_RA_5mA[10];
	char Trial1_RA_5V[10];
};

struct ST_��������������Ĳ��� {
	TrialInfo ti;
	char summing_up[100];
	char Trial2_U_1[10];
	char Trial2_U_2[10];
	char Trial2_U_3[10];
	char Trial2_U_4[10];

	char Trial2_UR_1[10];
	char Trial2_UR_2[10];
	char Trial2_UR_3[10];
	char Trial2_UR_4[10];

	char Trial2_UL_1[10];
	char Trial2_UL_2[10];
	char Trial2_UL_3[10];
	char Trial2_UL_4[10];

	char Trial2_UC_1[10];
	char Trial2_UC_2[10];
	char Trial2_UC_3[10];
	char Trial2_UC_4[10];

	char Trial2_I_1[10];
	char Trial2_I_2[10];
	char Trial2_I_3[10];
	char Trial2_I_4[10];


	char Trial2_P_1[10];
	char Trial2_P_2[10];
	char Trial2_P_3[10];
	char Trial2_P_4[10];

	char Trial2_��_1[10];
	char Trial2_��_2[10];
	char Trial2_��_3[10];
	char Trial2_��_4[10];

	char Trial2_Load_1[10];
	char Trial2_Load_2[10];
	char Trial2_Load_3[10];
	char Trial2_Load_4[10];
};

struct ST_������ {
	TrialInfo ti;
	char Trial3_Line1_1[10];
	char Trial3_Line1_2[10];
	char Trial3_Line1_3[10];
	char Trial3_Line1_4[10];
	char Trial3_Line1_5[10];
	char Trial3_Line1_6[10];
	char Trial1_1����[100];
	char Trial1_2����[100];

	char Trial3_Line2_1[10];
	char Trial3_Line2_2[10];
	char Trial3_Line2_3[10];
	char Trial3_Line2_4[10];
	char Trial3_Line2_5[10];
	char Trial3_Line2_6[10];
	int score3;
	char Trial4_Line1_1[10];
	char Trial4_Line1_2[10];
	char Trial4_Line1_3[10];
	char Trial4_Line1_4[10];
	char Trial4_Line1_5[10];
	char Trial4_Line1_6[10];

	char Trial4_Line2_1[10];
	char Trial4_Line2_2[10];
	char Trial4_Line2_3[10];
	char Trial4_Line2_4[10];
	char Trial4_Line2_5[10];
	char Trial4_Line2_6[10];
	int score4;
};
#pragma pack(pop)

