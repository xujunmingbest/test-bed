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
	
	/*
	while (1) {
		Sleep(1000);
		S_PLCRecv pr;
		if (!global::sh->GetliKongData(&pr))
		{
			MessageBox::Show("��ȡ��������ʧ��,��촮�������ǲ�������");
		}
		cout << pr.COS << endl;
	}*/
	Application::Run(gcnew ������);
	global::SystemShortDown();

}     
