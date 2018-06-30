#pragma once


#include<map>
using namespace std;


#define uint unsigned int 


/*****ʵ����****/

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

struct FileHead
{
	int Len; //ͷ����
	int Version; // �汾
	int Recdlen; // ��¼����
	int Date;    // ����
};

struct Head {
	char RequestType[50]; //�������� SAVEFILE|RETMSG|
	char MsgType[50];  // �������� XML/JSON/PIC
	int TrialCode; 
	char TrialName[100];
	char DateTime[20]; //20180528-165401
	char Pupilage[150]; // ѧ�����
	char FileName[200]; //�ļ�����
};

#define HEADFIRSTLEN sizeof(Head)
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
#pragma pack(pop)

