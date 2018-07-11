#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#pragma comment(lib,"E:/c++/libsocket/Release/libsocket.lib")

static map<int, string> mapMonRequest = {
	{ 1,"ֹͣʵ��" },
	{ 2,"ǿ���ϴ�ʵ����" },
	{ 3,"ȡ��ֹͣʵ��" },
	{ 4,"��ȡ��̨��Ϣ" },
};

static map<int, string> mapMonReturn = {
	{ -1,"ʧ��" },
	{ 1,"ֹͣʵ��ɹ�" },
	{ 2,"ǿ���ϴ�ʵ����" },
	{ 3,"ȡ��ֹͣʵ��ɹ�" },
};

#pragma pack(push,1)
struct moniterHead {
	char RequestType[50]; // �������� 
	char ReturnType[50]; //��������
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