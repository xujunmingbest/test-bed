#include "主窗体.h"
#include <windows.h>
#include "tool/tool.h"
#include "元件伏安特性的测试实验内容.h"
using namespace 电工电路试验台;

using namespace System::Threading;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
void main(){

	global::SystemStart(); //控制电源模块
	
	/*
	while (1) {
		Sleep(1000);
		S_PLCRecv pr;
		if (!global::sh->GetliKongData(&pr))
		{
			MessageBox::Show("获取力控数据失败,请检串口连接是不是正常");
		}
		cout << pr.COS << endl;
	}*/
	Application::Run(gcnew 主窗体);
	global::SystemShortDown();

}     
