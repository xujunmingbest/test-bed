#include "Long_connection_control.h"
#include "tool/xml/xml.h"
#include <thread>
using namespace std;
//#include "tool/µ×²¿.h"

Long_connection_control lcc;
	bool Long_connection_control::open() {
		ssc.Connect(configXml.LongConnectIp, configXml.LongConnectPort);
		thread t(&Long_connection_control::RecvHandle,this);
		t.detach();
		return true;
	}
	void Long_connection_control::SendKaiJi() {
	
	}
	void Long_connection_control::SendScreeCapture() {
	
	}
	void Long_connection_control::close() {
		ssc.Destroy();
	
	}


	void Long_connection_control::SendComputerInfo() {
		protocolDemo pd;
		Long_connection_Head H;
		memset(&pd, 0x00, sizeof(protocolDemo));
		snprintf(H.req, sizeof(H.req), "%s", Long_connection_Req[4].c_str());

		string l_f = pd.GenerateFIRSTBYTES(sizeof(Long_connection_Head));
		string l_s = pd.GenerateSECONDBYTES(configXml.ComputerId.length());
		string final = l_f + l_s + string((char*)&H, sizeof(Long_connection_Head)) + configXml.ComputerId;
		pd.Send(ssc.sc,final);
	}