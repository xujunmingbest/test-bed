#include "hardware_debug.h"

int hardware_debug::GetComList_Reg()
{
	comboBox1->Items->Clear();
	HKEY hkey;
	int result;
	int i = 0;

	result = RegOpenKeyEx(HKEY_LOCAL_MACHINE,
		("Hardware\\DeviceMap\\SerialComm"),
		NULL,
		KEY_READ,
		&hkey);

	if (ERROR_SUCCESS == result)   //   打开串口注册表   
	{
		TCHAR portName[0x100], commName[0x100];
		DWORD dwLong, dwSize;


		do
		{
			dwSize = sizeof(portName) / sizeof(TCHAR);
			dwLong = dwSize;
			result = RegEnumValue(hkey, i, portName, &dwLong, NULL, NULL, (LPBYTE)commName, &dwSize);
			if (ERROR_NO_MORE_ITEMS == result)
			{
				//   枚举串口
				break;   //   commName就是串口名字"COM4"
			}

			//printf("当前串口号：%c\n", commName[3]);/*输出当前串口号*/
			int sn = commName[3] - '0';
			comboBox1->Items->Add(gcnew String(commName));
			i++;
		} while (1);

		RegCloseKey(hkey);
	}

	return i;
}