#pragma once


#include<map>
using namespace std;


#define uint unsigned int 


/*****实验编号****/

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

struct FileHead
{
	int Len; //头长度
	int Version; // 版本
	int Recdlen; // 记录长度
	int Date;    // 日期
};

struct Head {
	char RequestType[50]; //请求类型 SAVEFILE|RETMSG|
	char MsgType[50];  // 报文类型 XML/JSON/PIC
	int TrialCode; 
	char TrialName[100];
	char DateTime[20]; //20180528-165401
	char Pupilage[150]; // 学生身份
	char FileName[200]; //文件名称
};

#define HEADFIRSTLEN sizeof(Head)
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
#pragma pack(pop)

