#include "������.h"
#include <windows.h>
#include "tool/tool.h"
using namespace �繤��·����̨;


[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	global::SystemStart(); //���Ƶ�Դģ��


	Application::Run(gcnew ������());
	global::SystemShortDown();

	global::SystemShortDown();
}     