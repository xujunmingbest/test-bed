#include "主窗体.h"
#include <windows.h>
#include "tool/tool.h"
using namespace 电工电路试验台;


[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	global::SystemStart(); //控制电源模块


	Application::Run(gcnew 主窗体());
	global::SystemShortDown();

	global::SystemShortDown();
}     