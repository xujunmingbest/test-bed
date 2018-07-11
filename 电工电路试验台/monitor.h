#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#pragma comment(lib,"E:/c++/libsocket/Release/libsocket.lib")

static map<int, string> mapMonRequest = {
	{ 1,"停止实验" },
	{ 2,"强制上传实验结果" },
	{ 3,"取消停止实验" },
	{ 4,"获取机台信息" },
};

static map<int, string> mapMonReturn = {
	{ -1,"失败" },
	{ 1,"停止实验成功" },
	{ 2,"强制上传实验结果" },
	{ 3,"取消停止实验成功" },
};

#pragma pack(push,1)
struct moniterHead {
	char RequestType[50]; // 请求类型 
	char ReturnType[50]; //返回类型
};

struct JiTaiInfo {
	char Stu1Name[100];
	char XueHao1[100];
	char Stu2Name[100];
	char XueHao2[100];
	char stuclass[100];
};
#pragma pack(pop)

struct StuInfo {
	string stu1Name;
	string stu2Name;
	string XueHao1;
	string XueHao2;
	string Class;
}; 
extern StuInfo stuInfo;

class MoniterProtocol: public protocolDemo {
public:
	virtual string GenerateErrRet(string &OriginHead, int errorCode) override;
	string GenerateRet(moniterHead &H, string &second);
};

class moniter :public MoniterProtocol {
private:
	CPP_Server cshd;
public:
	void Start();
	static void MonterHandle(SOCKET s);
	bool close();
};