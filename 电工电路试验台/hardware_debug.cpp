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

	if (ERROR_SUCCESS == result)   //   �򿪴���ע���   
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
				//   ö�ٴ���
				break;   //   commName���Ǵ�������"COM4"
			}

			//printf("��ǰ���ںţ�%c\n", commName[3]);/*�����ǰ���ں�*/
			int sn = commName[3] - '0';
			comboBox1->Items->Add(gcnew String(commName));
			i++;
		} while (1);

		RegCloseKey(hkey);
	}

	return i;
}