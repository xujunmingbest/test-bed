#pragma once


#include<map>
using namespace std;


#define uint unsigned int 
#define RECVGRADEPORT 1235
#define GRADESAVEPATH "data/"
/*****ʵ����****/

static map<int, string> GradesRet = {
	{1,"�����ɹ�"},
	{-1,"δ֪����"},
	{ -2,"ʵ�������ʵ�����Ʋ�һ��" },
	{ -3,"�ļ��洢ʧ��" },
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

//����������ʵ��ṹ��  
//relative error = r_v
//measured value = m_v
//calculated value = c_v
struct KirchhoffTheorem {
	int I1_c_v; //����ֵ 
	int I1_m_v; //����ֵ
	int I1_r_e; //������
	int I2_c_v; //����ֵ
	int I2_m_v; //����ֵ
	int I2_r_e; //������
	int I3_c_v; //����ֵ
	int I3_m_v; //����ֵ
	int I3_r_e; //������
	int U11_c_v; //����ֵ
	int U11_m_v; //����ֵ
	int U11_r_e; //������
	int U12_c_v; //����ֵ
	int U12_m_v; //����ֵ
	int U12_r_e; //������
	int Ufa_c_v; //����ֵ
	int Ufa_m_v; //����ֵ
	int Ufa_r_e; //������
	int Uab_c_v; //����ֵ
	int Uab_m_v; //����ֵ
	int Uab_r_e; //������
	int Uad_c_v; //����ֵ
	int Uad_m_v; //����ֵ
	int Uad_r_e; //������
	int Ucd_c_v; //����ֵ
	int Ucd_m_v; //����ֵ
	int Ucd_r_e; //������
	int Ude_c_v; //����ֵ
	int Ude_m_v; //����ֵ
	int Ude_r_e; //������
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
};

#pragma pack(pop)

