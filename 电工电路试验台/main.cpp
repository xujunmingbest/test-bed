#include "主窗体.h"
#include <windows.h>
#include "tool/tool.h"
#include "元件伏安特性的测试实验内容.h"
using namespace 电工电路试验台;

using namespace System::Threading;

void Test(Object ^t);

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
void main(){


	global::SystemStart(); //控制电源模块
	元件伏安特性的测试实验内容^ f = gcnew 元件伏安特性的测试实验内容;
	ParameterizedThreadStart^ pt = gcnew ParameterizedThreadStart(Test);
	Thread ^ t = gcnew Thread(pt);
	//t->Start(f);
	Application::Run(gcnew 主窗体);
	global::SystemShortDown();

}     

void Test(Object ^t) {
	cout << "hhhhhhhh" << endl;
	元件伏安特性的测试实验内容 ^ f = (元件伏安特性的测试实验内容^)t;
	while (1) {
		f->LoadGradeData();
		Sleep(1000);
	}
}
