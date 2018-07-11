#include "tool.h"
Mylog Mlog;






MsgQueue SysLogQue;
//程序启动的时候 消息队列初始化
void MsgQueueRegister() {
	SysLogQue.QueueRegister(string("电工电路试验台系统日志"));
}

 