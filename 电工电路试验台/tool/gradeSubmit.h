#pragma once


#include<map>
using namespace std;


#define uint unsigned int 
#define RECVGRADEPORT 1235
#define GRADESAVEPATH "data/"
/*****实验编号****/

static map<int, string> GradesRet = {
	{1,"操作成功"},
	{-1,"未知错误"},
	{ -2,"实验代码与实验名称不一致" },
	{ -3,"文件存储失败" },
};

 static map<int, string> Grades = {
	{ 1,"元件伏安特性测试" },
	{ 2,"基尔霍夫定理" },
	{ 3,"叠加原理" },
	{ 4,"戴维南定理" },
	{ 5,"电压源与电流源的等效变换" },
	{ 6,"一阶电路的响应测试"},
	{ 7,"二阶动态电路响应的研究" },
	{ 8,"VCVS、VCCS、CCVS、CCCS实验" },
	{ 9,"二端口网络的研究" },
	{ 10,"最大功率传输条件的测定" },
	{ 11,"电路状态轨迹的观测" },
	{ 12,"R、L、C元件阻抗特性的测定" },
	{ 13,"R、L、C串联谐振电路的研究" },
	{ 14,"单相铁心变压器特性的测试" },
	{ 15,"单相电度表实验" },
	{ 16,"三相交流电路电压、电流的测量" },
	{ 17,"日光灯功率因数的提高" },
	{ 18,"回转器" },
	{ 19,"三相电路功率的测量" },
	{ 20,"负阻抗变换器" },
	{ 21,"RC网络的频率特性" },
	{ 22,"仪表量程的扩展" },
	{ 23,"互感器" },
	{ 24,"基本电工仪表的使用与测量误差的计算" },
	{ 25,"功率因数及相序的测量" },
};


#pragma pack(push,1)


struct GradesHead {
	char RequestType[50]; //请求类型 SAVEFILE|RETMSG|GRADEDATA
	char MsgType[50];  // 报文类型 XML/JSON/PIC/STRUCT
	int TrialCode; 
	char TrialName[100];
};

//基尔霍夫定理实验结构体  
//relative error = r_v
//measured value = m_v
//calculated value = c_v
struct KirchhoffTheorem {
	int I1_c_v; //计算值 
	int I1_m_v; //测量值
	int I1_r_e; //相对误差
	int I2_c_v; //计算值
	int I2_m_v; //测量值
	int I2_r_e; //相对误差
	int I3_c_v; //计算值
	int I3_m_v; //测量值
	int I3_r_e; //相对误差
	int U11_c_v; //计算值
	int U11_m_v; //测量值
	int U11_r_e; //相对误差
	int U12_c_v; //计算值
	int U12_m_v; //测量值
	int U12_r_e; //相对误差
	int Ufa_c_v; //计算值
	int Ufa_m_v; //测量值
	int Ufa_r_e; //相对误差
	int Uab_c_v; //计算值
	int Uab_m_v; //测量值
	int Uab_r_e; //相对误差
	int Uad_c_v; //计算值
	int Uad_m_v; //测量值
	int Uad_r_e; //相对误差
	int Ucd_c_v; //计算值
	int Ucd_m_v; //测量值
	int Ucd_r_e; //相对误差
	int Ude_c_v; //计算值
	int Ude_m_v; //测量值
	int Ude_r_e; //相对误差
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

struct ST_元件伏安特性测试 {

	TrialInfo ti;
	char 线性SU1[10];
	char 线性SU2[10];
	char 线性SU3[10];
	char 线性SU4[10];
	char 线性SU5[10];
	char 线性SU6[10];
	char 线性SU7[10];
	char 线性SU8[10];
	char 线性SU9[10];
	char 线性SU10[10];
	char 线性U1[10];
	char 线性U2[10];
	char 线性U3[10];
	char 线性U4[10];
	char 线性U5[10];
	char 线性U6[10];
	char 线性U7[10];
	char 线性U8[10];
	char 线性U9[10];
	char 线性U10[10];
	char 线性I1[10];
	char 线性I2[10];
	char 线性I3[10];
	char 线性I4[10];
	char 线性I5[10];
	char 线性I6[10];
	char 线性I7[10];
	char 线性I8[10];
	char 线性I9[10];
	char 线性I10[10];
	char 线性summing_up[100];


	char 白炽SU1[10];
	char 白炽SU2[10];
	char 白炽SU3[10];
	char 白炽SU4[10];
	char 白炽SU5[10];
	char 白炽SU6[10];
	char 白炽SU7[10];
	char 白炽SU8[10];
	char 白炽SU9[10];
	char 白炽SU10[10];
	char 白炽U1[10];
	char 白炽U2[10];
	char 白炽U3[10];
	char 白炽U4[10];
	char 白炽U5[10];
	char 白炽U6[10];
	char 白炽U7[10];
	char 白炽U8[10];
	char 白炽U9[10];
	char 白炽U10[10];
	char 白炽I1[10];
	char 白炽I2[10];
	char 白炽I3[10];
	char 白炽I4[10];
	char 白炽I5[10];
	char 白炽I6[10];
	char 白炽I7[10];
	char 白炽I8[10];
	char 白炽I9[10];
	char 白炽I10[10];
	char 白炽summing_up[100];

    char 锗管ZSU1[10];
	char 锗管ZSU2[10];
	char 锗管ZSU3[10];
	char 锗管ZSU4[10];
	char 锗管ZSU5[10];
	char 锗管ZSU6[10];
	char 锗管ZSU7[10];
	char 锗管ZSU8[10];
	char 锗管ZSU9[10];
	char 锗管ZSU10[10];
	char 锗管ZU1[10];
	char 锗管ZU2[10];
	char 锗管ZU3[10];
	char 锗管ZU4[10];
	char 锗管ZU5[10];
	char 锗管ZU6[10];
	char 锗管ZU7[10];
	char 锗管ZU8[10];
	char 锗管ZU9[10];
	char 锗管ZU10[10];
	char 锗管ZI1[10];
	char 锗管ZI2[10];
	char 锗管ZI3[10];
	char 锗管ZI4[10];
	char 锗管ZI5[10];
	char 锗管ZI6[10];
	char 锗管ZI7[10];
	char 锗管ZI8[10];
	char 锗管ZI9[10];
	char 锗管ZI10[10];

	char 锗管FSU1[10];
	char 锗管FSU2[10];
	char 锗管FSU3[10];
	char 锗管FSU4[10];
	char 锗管FSU5[10];
	char 锗管FSU6[10];
	char 锗管FSU7[10];
	char 锗管FSU8[10];
	char 锗管FSU9[10];
	char 锗管FSU10[10];
	char 锗管FU1[10];
	char 锗管FU2[10];
	char 锗管FU3[10];
	char 锗管FU4[10];
	char 锗管FU5[10];
	char 锗管FU6[10];
	char 锗管FU7[10];
	char 锗管FU8[10];
	char 锗管FU9[10];
	char 锗管FU10[10];
	char 锗管FI1[10];
	char 锗管FI2[10];
	char 锗管FI3[10];
	char 锗管FI4[10];
	char 锗管FI5[10];
	char 锗管FI6[10];
	char 锗管FI7[10];
	char 锗管FI8[10];
	char 锗管FI9[10];
	char 锗管FI10[10];
	char 锗管summing_up[100];

    char 硅管ZSU1[10];
	char 硅管ZSU2[10];
	char 硅管ZSU3[10];
	char 硅管ZSU4[10];
	char 硅管ZSU5[10];
	char 硅管ZSU6[10];
	char 硅管ZSU7[10];
	char 硅管ZSU8[10];
	char 硅管ZSU9[10];
	char 硅管ZSU10[10];
	char 硅管ZU1[10];
	char 硅管ZU2[10];
	char 硅管ZU3[10];
	char 硅管ZU4[10];
	char 硅管ZU5[10];
	char 硅管ZU6[10];
	char 硅管ZU7[10];
	char 硅管ZU8[10];
	char 硅管ZU9[10];
	char 硅管ZU10[10];
	char 硅管ZI1[10];
	char 硅管ZI2[10];
	char 硅管ZI3[10];
	char 硅管ZI4[10];
	char 硅管ZI5[10];
	char 硅管ZI6[10];
	char 硅管ZI7[10];
	char 硅管ZI8[10];
	char 硅管ZI9[10];
	char 硅管ZI10[10];

	char 硅管FSU1[10];
	char 硅管FSU2[10];
	char 硅管FSU3[10];
	char 硅管FSU4[10];
	char 硅管FSU5[10];
	char 硅管FSU6[10];
	char 硅管FSU7[10];
	char 硅管FSU8[10];
	char 硅管FSU9[10];
	char 硅管FSU10[10];
	char 硅管FU1[10];
	char 硅管FU2[10];
	char 硅管FU3[10];
	char 硅管FU4[10];
	char 硅管FU5[10];
	char 硅管FU6[10];
	char 硅管FU7[10];
	char 硅管FU8[10];
	char 硅管FU9[10];
	char 硅管FU10[10];
	char 硅管FI1[10];
	char 硅管FI2[10];
	char 硅管FI3[10];
	char 硅管FI4[10];
	char 硅管FI5[10];
	char 硅管FI6[10];
	char 硅管FI7[10];
	char 硅管FI8[10];
	char 硅管FI9[10];
	char 硅管FI10[10];
	char 硅管summing_up[100];

	char 稳压ZSU1[10];
	char 稳压ZSU2[10];
	char 稳压ZSU3[10];
	char 稳压ZSU4[10];
	char 稳压ZSU5[10];
	char 稳压ZSU6[10];
	char 稳压ZSU7[10];
	char 稳压ZSU8[10];
	char 稳压ZSU9[10];
	char 稳压ZSU10[10];
	char 稳压ZU1[10];
	char 稳压ZU2[10];
	char 稳压ZU3[10];
	char 稳压ZU4[10];
	char 稳压ZU5[10];
	char 稳压ZU6[10];
	char 稳压ZU7[10];
	char 稳压ZU8[10];
	char 稳压ZU9[10];
	char 稳压ZU10[10];
	char 稳压ZI1[10];
	char 稳压ZI2[10];
	char 稳压ZI3[10];
	char 稳压ZI4[10];
	char 稳压ZI5[10];
	char 稳压ZI6[10];
	char 稳压ZI7[10];
	char 稳压ZI8[10];
	char 稳压ZI9[10];
	char 稳压ZI10[10];

	char 稳压FSU1[10];
	char 稳压FSU2[10];
	char 稳压FSU3[10];
	char 稳压FSU4[10];
	char 稳压FSU5[10];
	char 稳压FSU6[10];
	char 稳压FSU7[10];
	char 稳压FSU8[10];
	char 稳压FSU9[10];
	char 稳压FSU10[10];
	char 稳压FU1[10];
	char 稳压FU2[10];
	char 稳压FU3[10];
	char 稳压FU4[10];
	char 稳压FU5[10];
	char 稳压FU6[10];
	char 稳压FU7[10];
	char 稳压FU8[10];
	char 稳压FU9[10];
	char 稳压FU10[10];
	char 稳压FI1[10];
	char 稳压FI2[10];
	char 稳压FI3[10];
	char 稳压FI4[10];
	char 稳压FI5[10];
	char 稳压FI6[10];
	char 稳压FI7[10];
	char 稳压FI8[10];
	char 稳压FI9[10];
	char 稳压FI10[10];
	char 稳压summing_up[100];
};

#pragma pack(pop)

