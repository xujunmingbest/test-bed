#include "tool.h"
Mylog Mlog;






MsgQueue SysLogQue;
//����������ʱ�� ��Ϣ���г�ʼ��
void MsgQueueRegister() {
	SysLogQue.QueueRegister(string("�繤��·����̨ϵͳ��־"));
}

 