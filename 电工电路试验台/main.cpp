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
	Application::Run(gcnew 主窗体);
	global::SystemShortDown();

}     
