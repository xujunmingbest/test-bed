#include "������.h"
#include <windows.h>
#include "tool/tool.h"
#include "Ԫ���������ԵĲ���ʵ������.h"
using namespace �繤��·����̨;

using namespace System::Threading;

void Test(Object ^t);

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
void main(){


	global::SystemStart(); //���Ƶ�Դģ��
	Ԫ���������ԵĲ���ʵ������^ f = gcnew Ԫ���������ԵĲ���ʵ������;
	ParameterizedThreadStart^ pt = gcnew ParameterizedThreadStart(Test);
	Thread ^ t = gcnew Thread(pt);
	//t->Start(f);
	Application::Run(gcnew ������);
	global::SystemShortDown();

}     

void Test(Object ^t) {
	cout << "hhhhhhhh" << endl;
	Ԫ���������ԵĲ���ʵ������ ^ f = (Ԫ���������ԵĲ���ʵ������^)t;
	while (1) {
		f->LoadGradeData();
		Sleep(1000);
	}
}
