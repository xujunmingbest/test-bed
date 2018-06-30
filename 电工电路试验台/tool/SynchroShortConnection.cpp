#include "SynchroShortConnection.h"
#include "xml/xml.h"

	string SynchroShortConnection::R(int rl) {
		char *buff = new char[rl];
		int lena = 0;
		while (lena < rl) {
			int templ = recv(sockClient, buff + lena, rl - lena, 0);
			if (templ == 0 || templ == -1) {
				delete[]buff;
				return "";
			}
			lena += templ;
		}
		string r(buff, rl);
		delete[]buff;
		return r;
	};

	bool SynchroShortConnection::Start(string Ip, string port) {
		//�����׽���  
		WSADATA wsaData;
		if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		{
			printf("Failed to load Winsock");
			return false;
		}

		SOCKADDR_IN addrSrv;
		addrSrv.sin_family = AF_INET;
		addrSrv.sin_port = htons(atoi(port.c_str()));
		addrSrv.sin_addr.S_un.S_addr = inet_addr(Ip.c_str());

		//�����׽���  
		sockClient = socket(AF_INET, SOCK_STREAM, 0);
		if (SOCKET_ERROR == sockClient) {
			printf("Socket() error: %d", WSAGetLastError());
			return false;
		}
		//�������������������  
		if (connect(sockClient, (struct  sockaddr*)&addrSrv, sizeof(addrSrv)) == INVALID_SOCKET) {
			printf("Connect failed %d", WSAGetLastError());
			return false;
		}
		return true;
	};

	void SynchroShortConnection::Destroy() {
		closesocket(sockClient);
		WSACleanup();
	}

	bool SynchroShortConnection::Connect(string Ip, string port) {
		int count = 0;
		while (!Start(Ip, port) && count <= 10)
		{
			Destroy();
			Sleep(1000);
			count++;
			if (count > 10)
			{
				return false;
			}
		}
		return true;
	};

	void SynchroShortConnection::SetTimeOut(int nNetTimeout) {
		setsockopt(sockClient, SOL_SOCKET, SO_RCVTIMEO, (char *)&nNetTimeout, sizeof(int));
	}

	bool SynchroShortConnection::Send(string &buff) {
		if (send(sockClient, buff.c_str(), buff.length(), 0) <= 0) return false;
		return true;
	}
	bool SynchroShortConnection::Recv(int len, string &r) {
		r = R(len);
		if (r.length() == 0) return false;
		return true;
	}



	 bool SSCHandle_e::RecvFIRSTBYTES( uint &len)
	 {
		 string r;
		 if (!Recv(2, r)) return false;

		 len = 0;
		 len = (r.c_str()[0] & 0xff);
		 len = len << 8;
		 len += (r.c_str()[1] & 0xff);
		 if (len != HEADFIRSTLEN) return false;
		 return true;
	 }


	 bool SSCHandle_e::RecvSECONDBYTES( uint &len) {
		 string r;
		 if (!Recv(4, r)) return false;

		 len = 0;
		 len = (r.c_str()[0] & 0xff);
		 len = len << 8;
		 len += (r.c_str()[1] & 0xff);
		 len = len << 8;
		 len += (r.c_str()[2] & 0xff);
		 len = len << 8;
		 len += (r.c_str()[3] & 0xff);
		 return true;
	 }
	 bool SSCHandle_e::RecvFIRST( uint &len, string &first) {
		 if (!Recv( len, first)) return false;
		 return true;
	 }
	 bool SSCHandle_e::RecvSECOND( uint &len, string &second)
	 {
		 if (!Recv(len, second)) return false;
		 return true;
	 }

	 string SSCHandle_e::GenerateFIRSTBYTES(uint ln) {
		 char le[2];
		 le[0] = (ln & 0xffff) >> 8;
		 le[1] = ln & 0xff;
		 return string(le, 2);

	 }
	 string SSCHandle_e::GenerateSECONDBYTES(uint ln) {
		 char le[4];
		 le[0] = (ln & 0xffffffff) >> 24;
		 le[1] = (ln & 0xffffff) >> 16;
		 le[2] = (ln & 0xffff) >> 8;
		 le[3] = ln & 0xff;
		 return string(le, 4);
	 }
	 using namespace System::IO;
	 using namespace System;
	 string SSCHandle_e::HandleMsg(string &first, string &second) {
		 Head H;
		 if (sizeof(Head) != first.length()) {
			 return "�����ɹ�";
		 }; //�ɼ���������
		 memcpy(&H, first.c_str(), sizeof(Head));
		 string T = H.MsgType;
		 string QT = H.RequestType;

		 if (QT == "SAVEFILE") {
			 if (T == "XML" || T == "PIC" || T == "JSON") {  //��xml�ļ��洢
				 string path = "data/";
				 path += H.TrialName;
				 path += "/";
				 path += H.DateTime;
				 path += "/";
				 path += H.Pupilage;
				 path += "/";
				 Directory::CreateDirectory(gcnew String(path.c_str()));
				 ofstream f;
				 f.open(path + H.FileName);
				 if (!f) {
					 return "�ļ�����ʧ��";
				 }
				 f.write(second.c_str(), second.length());
				 f.close();
			 }
			 else {   
				 return "δʶ����ļ�����";
			 }
		 }
		 else if (QT == "RETMSG") {
			 return second;
		 
		 }
		 return  "�ļ�����ʧ��";

	 }
	 
	 bool SSCHandle_e::SendRequest(Head &H, string &body) {
		 string f_s((char*)(&H), HEADFIRSTLEN);
		 string f = GenerateFIRSTBYTES(HEADFIRSTLEN);
		 string s = GenerateSECONDBYTES(body.length());
		 cout << body.length() << endl;
		 string fin = f + s + f_s + body;
		 return Send(fin);
	 }

	 string SSCHandle_e::RecvHandle() {
		 unsigned int FLen = 0;
		 if (!RecvFIRSTBYTES(FLen)) {
			 Destroy();
			 return "ͨѶʧ��";
		 }
		 unsigned int SLen = 0;
		 if (!RecvSECONDBYTES(SLen)) {
			 Destroy();
			 return "ͨѶʧ��";
		 }

		 string s_f;
		 if (!RecvFIRST(FLen, s_f)) {
			 Destroy();
			 return "ͨѶʧ��";
		 }
		 string s_s;
		 if (!RecvSECOND(SLen, s_s)) {
			 Destroy();
			 return "ͨѶʧ��";
		 }
		 Destroy();

		 return HandleMsg(s_f, s_s);
	 }


	 bool SSCHandle_e::_ReadFile(string &fileName,string &data) {
		 ifstream i;
		 i.open(fileName, ios::binary);
		 if (!i) return false;
		 std::string str((std::istreambuf_iterator<char>(i)),
			 std::istreambuf_iterator<char>());
		 data = str;
		 i.close();
		 return true;
	 }

	 string SSCHandle_e::SSCSend(Head &H,string &body) {
		 if (!Start(configXml.GradeIp, configXml.GradePort)) {
			 Destroy();
			 return  "ͨѶ����ʧ��";
		 }

		 if (!SendRequest(H, body)) {
			 Destroy();
			 return  "��������ʧ��";
		 }
		 string ret = RecvHandle();
		 Destroy();
		 return ret;
	 }