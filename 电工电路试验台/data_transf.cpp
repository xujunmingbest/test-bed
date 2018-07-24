#include "data_transf.h"
#include "tool/xml/xml.h"

TrialInfo trialInfo;

	bool data_transf::open() {
		return ssc.Start(configXml.TeacherIp, configXml.GradePort);
	}
	bool data_transf::SendGrade(GradesHead &H,string &Data) {
		protocolDemo pd;
		string l_f  = pd.GenerateFIRSTBYTES(sizeof(GradesHead));
		string l_s = pd.GenerateSECONDBYTES(Data.length());
		string final = l_f + l_s + string((char*)&H, sizeof(GradesHead)) + Data;
		return pd.Send(ssc.sc, final);
	}

	void data_transf::close() {
		ssc.Destroy();
	}

	using namespace System::Windows::Forms;
	using namespace System;

	void data_transf::RecvHandle(bool ShowRetMsg) {
		protocolDemo md;
		SOCKET s = ssc.sc;
		uint f_l = 0;
		if (!md.RecvFIRSTBYTES(s, f_l)) {
			closesocket(s);
			return;
		}
		uint s_l = 0;
		if (!md.RecvSECONDBYTES(s, s_l)) {
			closesocket(s);
			return;
		}
		string f_s;
		if (!md.RecvFIRST(s, f_l, f_s)) {
			closesocket(s);
			return;
		}

		string s_s;
		if (!md.RecvSECOND(s, s_l, s_s)) {
			closesocket(s);
			return;
		}

		//报文已经全部接受完毕
		GradesHead H;
		memcpy(&H, f_s.c_str(), sizeof(GradesHead));
		if (ShowRetMsg) {
			MessageBox::Show(gcnew String(s_s.c_str()));
		}
	}


