#pragma once


#include<map>
using namespace std;


#define uint unsigned int 
#define RECVGRADEPORT 1235
#define GRADESAVEPATH "data/"
#define STUINFOCSV "学生信息/"
/*****实验编号****/

static map<int, string> MsgRet = {
	{2,"登入成功"},
	{1,"操作成功"},
	{-1,"未知错误"},
	{ -2,"实验代码与实验名称不一致" },
	{ -3,"文件存储失败" },
	{ -4,"您不在学生名单中，不能进行实验" },
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
	int totalscore;  //总分
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
	int 线性score;

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
	int 白炽score;

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
	int 锗管score;

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
	int 硅管score;

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
	int 稳压score;
};

struct ST_基尔霍夫定律 {
	TrialInfo ti;

	char 计算I1[10];
	char 计算I2[10];
	char 计算I3[10];
	char 计算U11[10];
	char 计算U12[10];
	char 计算UFA[10];
	char 计算UAB[10];
	char 计算UBC[10];
	char 计算UCD[10];
	char 计算UDE[10];

	char 测量I1[10];
	char 测量I2[10];
	char 测量I3[10];
	char 测量U11[10];
	char 测量U12[10];
	char 测量UFA[10];
	char 测量UAB[10];
	char 测量UBC[10];
	char 测量UCD[10];
	char 测量UDE[10];

	char 误差I1[10];
	char 误差I2[10];
	char 误差I3[10];
	char 误差U11[10];
	char 误差U12[10];
	char 误差UFA[10];
	char 误差UAB[10];
	char 误差UBC[10];
	char 误差UCD[10];
	char 误差UDE[10];

	char summing_up[100];
};

struct ST_叠加原理 {
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

struct ST_戴维南定理 {
	TrialInfo ti;
	char Method1Uoc[10];
	char Method1Isc[10];
	char Method1Ro[10];
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
	int scoreMethod2;
	char Method3Uoc[10];
	char Method3ro[10];
	int scoreMethod3;

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

struct ST_电压源与电流源的等效变换 {
	TrialInfo ti;
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
	int Trial2Score;

	char summing_up[100];
};

struct ST_一阶电路的响应测试 {
	TrialInfo ti;
	char τ[10];
	char Trial1Bmp[387072];
	int Trial1Score;
	char Trial2Bmp[387072];
	int Trial2Score;
	char Trial3Bmp[387072];
	int Trial3Score;
	char summing_up[100];
};

struct ST_二阶动态电路响应的研究 {
	TrialInfo ti; 
	char Trial1_1Bmp[387072];
	char Trial1_2Bmp[387072];
	char Trial1_3Bmp[387072];
	int ScoreTrial1;
	char Trial2_1Bmp[387072];
	char trial2_α[10];
	char trial2_w[10];
	int ScoreTrial2;
	char Trial3_1Bmp[387072];
	char trial3_1α[10];
	char trial3_1w[10];
	char Trial3_2Bmp[387072];
	char trial3_2α[10];
	char trial3_2w[10];
	char Trial3_3Bmp[387072];
	char trial3_3α[10];
	char trial3_3w[10];
	char Trial3_4Bmp[387072];
	char trial3_4α[10];
	char trial3_4w[10];
	int ScoreTrial3;
	char summing_up[100];
};
struct ST_VCVS实验 {
	TrialInfo ti;
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
	char trial4_1α[10];
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

struct ST_二端口网络的研究 {
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

struct ST_最大功率传输条件的测定 {
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


struct ST_电路状态轨迹的观测 {
	TrialInfo ti;
	char Trial1Bmp[387072];
	char Trial2Bmp[387072];
	char Trial3Bmp[387072];
	char summing_up[100];
};

#pragma pack(pop)

