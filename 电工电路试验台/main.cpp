#include "������.h"
#include <windows.h>
#include "tool/tool.h"
#include "Ԫ���������ԵĲ���ʵ������.h"
using namespace �繤��·����̨;

using namespace System::Threading;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
void main(){
	global::SystemStart(); //���Ƶ�Դģ��
	Application::Run(gcnew ������);
	global::SystemShortDown();

}     
