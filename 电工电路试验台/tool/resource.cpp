#include "tool.h"
Mylog Mlog;
#include "ThreeSegmentTransmissionProtocol.h"
ThreeSegmentTransmissionProtocol g_TSTP; 




MsgQueue SysLogQue;
//����������ʱ�� ��Ϣ���г�ʼ��
void MsgQueueRegister() {
	SysLogQue.QueueRegister(string("�繤��·����̨ϵͳ��־"));
}

 