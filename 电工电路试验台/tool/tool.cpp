

#include <iostream>

#include "tool.h"

using namespace std;
 
CControl g_c("wnd");   

CControl::CControl(char *Name)
{
	hMutex1 = NULL;
	hMutex1 = CreateSemaphoreA(NULL, 0, 20, Name);
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		cout << "�ź��� " << Name << " �Ѿ�����" << endl;
		MessageBox::Show("�����Ѿ�������");
		exit(-1);
	}
	if (NULL == OpenSemaphoreA(SEMAPHORE_MODIFY_STATE, FALSE, Name))
	{
		printf("���ź�������ʧ�� �� ����ID��%u\n", GetLastError());
		exit(-1);
	}

}

void CControl::Stop()
{
	WaitForSingleObject(hMutex1, INFINITE);
}
void CControl::Start()
{
	long dwSem = 0;
	ReleaseSemaphore(hMutex1, 1, &dwSem);
}
CControl::~CControl()
{
	CloseHandle(hMutex1);
	hMutex1 = NULL;
	cout << "�ź�������" << endl;
}



void trim(string &s);
wchar_t *multiByteToWideChar(const string& pKey);

//ȷ��ֻ��һ����ť������
void voice_speek(string &in)
{
	trim(in);
	//MessageBox::Show(gcnew String((g_cx.LangDuNvPath + in).c_str()));
	//system((g_cx.LangDuNvPath + in).c_str());
	//WinExec((g_cx.LangDuNvPath + in).c_str(), SW_SHOW);
	PROCESS_INFORMATION piProcInfo;
	STARTUPINFO siStartInfo = { sizeof(STARTUPINFO) };

	/*
	if (!CreateProcess(NULL, multiByteToWideChar(g_cx.LangDuNvPath + in), NULL, NULL, FALSE, NULL, NULL, NULL, &siStartInfo, &piProcInfo))
	{
		return;
	}
	WaitForSingleObject(piProcInfo.hProcess, INFINITE);*/
	return;
}

void voice_speek(String^ in)
{
	return voice_speek(T_to_string(in));
}

void trim(string &s)
{
	int index = 0;
	if (!s.empty())
	{
		while ((index = s.find(' ', index)) != string::npos)
		{
			s.erase(index, 1);
		}
	}
}

wchar_t *multiByteToWideChar(const string& pKey)
{
	const char* pCStrKey = pKey.c_str();
	//��һ�ε��÷���ת������ַ������ȣ�����ȷ��Ϊwchar_t*���ٶ����ڴ�ռ�
	int pSize = MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, NULL, 0);
	wchar_t *pWCStrKey = new wchar_t[pSize];
	//�ڶ��ε��ý����ֽ��ַ���ת����˫�ֽ��ַ���
	MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, pWCStrKey, pSize);
	return pWCStrKey;
}


string T_to_string(String^in)
{
	int len = in->Length*2;
	char *buff = new char[len + 1];
	memset(buff, 0x00, len + 1);
	snprintf(buff, len + 1, "%s", in);
	string temp = buff;
	delete[] buff;
	return temp;
}

int String_to_Int(String^in)
{
	string temp = T_to_string(in);
	return atoi(temp.c_str());
}
string Int_to_string(int in)
{
	char buff[11];
	snprintf(buff, 11, "%d", in);
	return string(buff);
}

int string_Has_Num(string &in, char c);
string IsDClegal(String^in)
{
	string temp = T_to_string(in);
	/*
	if (string_Has_Num(temp, '.') != 1) return "";
	size_t pos = temp.find('.', 0);
	if (pos + 3 != temp.length()) return "";*/
	for (int i = 0; i < temp.length(); i++) {
		if (  (temp[i] < '0' || temp[i] > '9') && temp[i] != '.') return "";
	}
	return temp;
}


int GetDcNum(string &in) {
	size_t pos = in.find('.', 0);
	int zs = atoi(in.substr(0, pos).c_str());
	int fs = atoi(in.substr(pos+1, 2).c_str());
	int r = zs * 100 + fs;
	return r;
}

int string_Has_Num(string &in,char c) {
	auto occurrences = [&in, c]() {
		size_t pos, pre = 0, count = 0;
		while ((pos = in.find(c, pre)) != std::string::npos) {
			++count;
			pre = pos + 1;
		}
		return count;
	};

	return occurrences();
}

String^ DcNumToString(uint in , BYTE DcSymbol)
{
	uint zs = in / 100;
	uint xs = in % 100;

	String ^s;
	if (DcSymbol == 0) {
		s = "";
	}
	else {
		s = "-";
	}
	String ^temp;
	if (xs < 10) temp = "0" + xs.ToString();
	else   temp =xs.ToString();
	return  s + gcnew String(zs.ToString() + "." + temp);
}

void funct() {
	lcc.open();
}

QueueMutex g_ClassListMutex;

#define BMPLENGTH 387072
void global::SystemStart()
{
	Exceptioninit(); //ȫ���쳣��ʼ��
	g_ClassListMutex.Create(string("ѧ������������"));

	Directory::CreateDirectory(gcnew String(BMPSAVEPATH));
	Directory::CreateDirectory(gcnew String(FORMDATASAVEPATH));

	PLCRecv = new S_PLCRecv;
	//��Ϣ���г�ʼ�� 
	MsgQueueRegister();

	//�����ļ���ʼ��
	readXmlConfigFile(configXml);
	LOG_DETAIL(configXml.DesMac, configXml.RepeaterIp, configXml.RepeaterPort,
		"��Դ����", configXml.SerialControlSource,
		configXml.TeacherIp, configXml.GradePort);

	//��Դ����ģ���ʼ��
	if (!global::scs->SerialHandleInit()) {
		LOG_DETAIL("���Ƶ�Դģ�鴮�ڳ�ʼ��ʧ��");
	}

	oscillograph::oscillographOpen();
	
	Thread^ t = gcnew Thread(gcnew ThreadStart(funct));
	t->Start();
}




void global::SystemShortDown()
{
	if( t!= nullptr) t->Abort();
	global::scs->SerialHandleClose();
	//global::sh->SerialHandleClose();
	delete PLCRecv;
	exit(0);
}


void global::SetDV(String^t)
{

	string r = IsDClegal(t);
	if (r.length() == 0) {
		MessageBox::Show("�������ݲ��Ϸ�");
		return;
	}
	int DVNum = GetDcNum(r);
	if (!scs->SetDirectVoltage(DVNum)) {
		MessageBox::Show("����ʧ��");
		return;
	}
	MessageBox::Show("���óɹ�");
}


bool SetDVNum(String ^text,int min,int max) {
	float num_f = 0;
	try {
		num_f = Convert::ToSingle(text);
	}
	catch (System::Exception ^e) {
		MessageBox::Show("���뺬�������ַ�");
		return false;
	}

	int num = num_f*100;

	if (num < min * 100) {
		MessageBox::Show("����С��" + min.ToString());
		return false;
	}
	if (num > max * 100) {
		MessageBox::Show("���ܴ���" + max.ToString());
		return false;
	}

	if (!global::scs->SetDirectVoltage(num)) {
		MessageBox::Show("����ʧ��");
		return false;
	}
	else {
		//MessageBox::Show("���óɹ�");
		return true;
	}
}

String ^GenerateOrderNumber() {
	String^ strDateTimeNumber = DateTime::Now.ToString("yyyyMMddHHmmssms");
	Random^ rd = gcnew Random();
	String^ strRandomResult = rd->Next(1000, 9999).ToString();
	return strDateTimeNumber + strRandomResult;

}

string GenerateStuCheckInfo() {
	string info;
	info += "רҵ:  " + string(trialInfo.major) + "\n";
	info += "�༶:  " + string(trialInfo.Class) + "\n";
	info += "ָ����ʦ:  " + string(trialInfo.teacher) + "\n";
	info += "ʵ����:  " + string(trialInfo.SeriaNumber) + "\n";
	info += "ѧ��1:  " + string(trialInfo.stuName1) + "\n";
	info += "ѧ��1:  " + string(trialInfo.XueHao1) + "\n";
	info += "ѧ��2:  " + string(trialInfo.stuName2) + "\n";
	info += "ѧ��2:  " + string(trialInfo.XueHao2) + "\n";
	info += "ʵ������:  " + string(Grades[1].c_str()) + "\n";
	return info;
}


// һά����Ŀ�������
template<typename T>
int Partition(T a[], int low, int high)
{
	int x = a[high];//��������������һ������Ϊ��Ԫ����������������л���
	int i = low - 1;//i�����һ��С����Ԫ�������±�
	for (int j = low; j < high; j++)//�����±���low��high-1����
	{
		if (a[j] < x)//�����С����Ԫ�Ļ��ͽ�i��ǰŲ��һ��λ�ã����ҽ���j��i���ֱ�ָ�����
		{
			int temp;
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	//���������ѭ��֮���±�Ϊ��low��i������i�������;�ΪС��x�����ˣ����ڽ���Ԫ��i+1λ������������н���
	a[high] = a[i + 1];
	a[i + 1] = x;
	return i + 1;
}

template<typename T>
void QuickSort(T a[], int low, int high)
{
	if (low < high)
	{
		int q = Partition(a, low, high);
		QuickSort(a, low, q - 1);
		QuickSort(a, q + 1, high);
	}
}