#include "RLCԪ���迹���ԵĲⶨʵ������.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#include "data_transf.h"
using namespace �繤��·����̨;

void RLCԪ���迹���ԵĲⶨʵ������::SendData() {
	int TrialCode = 12;
	ST_RLCԪ���迹���ԵĲⶨ s;
	memset(&s, 0x00, sizeof(ST_RLCԪ���迹���ԵĲⶨ));
	s = Load_Grade_data();
	s.ti = trialInfo;
	s.ti.TrialCode = TrialCode;
	s.ti.totalscore = -1;
	snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
	snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
	snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
	data_transf d;
	GradesHead H;
	H.TrialCode = TrialCode;
	snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[TrialCode].c_str());
	snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
	if (!d.open()) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLCԪ���迹���ԵĲⶨ)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");
}

ST_RLCԪ���迹���ԵĲⶨ RLCԪ���迹���ԵĲⶨʵ������::Load_Grade_data() {
	ST_RLCԪ���迹���ԵĲⶨ d;
	memset(&d, 0x00, sizeof(ST_RLCԪ���迹���ԵĲⶨ));

	snprintf(d.summing_up, 100, "%s", textBox����->Text);
	snprintf(d.Trial1_F, 10, "%s", labelTrial1_F->Text);
	snprintf(d.Trial1_R_Ur, 10, "%s", labelTrial1_R_Ur->Text);
	snprintf(d.Trial1_R_IR, 10, "%s", labelTrial1_R_IR->Text);
	snprintf(d.Trial1_R_R, 10, "%s", textBoxTrial1_R_R->Text);
	snprintf(d.Trial1_L_Ur, 10, "%s", labelTrial1_L_Ur->Text);
	snprintf(d.Trial1_L_IL, 10, "%s", labelTrial1_L_IL->Text);
	snprintf(d.Trial1_L_XL, 10, "%s", textBoxTrial1_L_XL->Text);
	snprintf(d.Trial1_C_Ur, 10, "%s", labelTrial1_C_Ur->Text);
	snprintf(d.Trial1_C_IC, 10, "%s", labelTrial1_C_IC->Text);
	snprintf(d.Trial1_C_XC, 10, "%s", textBoxTrial1_C_XC->Text);

	fileSql f;
	string Trial2_1Bmp = f.Readfile(T_to_string(Trial2_1PT_name));
	if (Trial2_1Bmp.length() == sizeof(d.Trial2_1Bmp))
		memcpy(d.Trial2_1Bmp, Trial2_1Bmp.c_str(), sizeof(d.Trial2_1Bmp));

	string Trial2_2Bmp = f.Readfile(T_to_string(Trial2_2PT_name));
	if (Trial2_2Bmp.length() == sizeof(d.Trial2_2Bmp))
		memcpy(d.Trial2_2Bmp, Trial2_2Bmp.c_str(), sizeof(d.Trial2_2Bmp));
	
	snprintf(d.Trial3_F, 10, "%s", labelTrial3_F->Text);
	snprintf(d.Trial3_n, 10, "%s", textBoxTrial3_n->Text);
	snprintf(d.Trial3_m, 10, "%s", textBoxTrial3_m->Text);
	snprintf(d.Trial3_��, 10, "%s", textBoxTrial3_��->Text);

	return d;
}