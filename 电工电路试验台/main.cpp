#include "������.h"
#include <windows.h>
#include "tool/tool.h"
#include "Ԫ���������ԵĲ���ʵ������.h"
using namespace �繤��·����̨;

using namespace System::Threading;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
void main(){

	ST_һ�׵�·����Ӧ���� d;
	memset(&d, 0x00, sizeof(ST_һ�׵�·����Ӧ����));
	global::SystemStart(); //���Ƶ�Դģ��

	Application::Run(gcnew ������);
	global::SystemShortDown();

}     
