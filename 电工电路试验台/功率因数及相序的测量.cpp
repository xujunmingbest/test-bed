#include "��������������Ĳ���ʵ������.h"

#include "data_transf.h"
using namespace �繤��·����̨;


void ��������������Ĳ���ʵ������::SendData() {
	int TrialCode = 25;
	ST_��������������Ĳ��� s;
	memset(&s, 0x00, sizeof(ST_��������������Ĳ���));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_��������������Ĳ���)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");
}

ST_��������������Ĳ��� ��������������Ĳ���ʵ������::Load_Grade_data() {
	ST_��������������Ĳ��� d;
	memset(&d, 0x00, sizeof(ST_��������������Ĳ���));

	snprintf(d.Trial2_U_1,10,"%s",labelTrial2_U_1->Text);
	snprintf(d. Trial2_U_2,10,"%s",labelTrial2_U_2->Text);
	snprintf(d. Trial2_U_3,10,"%s",labelTrial2_U_3->Text);
	snprintf(d. Trial2_U_4,10,"%s",labelTrial2_U_4->Text);

	snprintf(d. Trial2_UR_1,10,"%s",labelTrial2_UR_1->Text); 
	snprintf(d. Trial2_UR_2,10,"%s",labelTrial2_UR_2->Text);
	snprintf(d. Trial2_UR_3,10,"%s",labelTrial2_UR_3->Text);
	snprintf(d. Trial2_UR_4,10,"%s", labelTrial2_UR_4->Text); 

	snprintf(d.Trial2_UL_1,10,"%s",labelTrial2_UL_1->Text);
	snprintf(d.Trial2_UL_2,10,"%s",labelTrial2_UL_2->Text);
	snprintf(d.Trial2_UL_3,10,"%s",labelTrial2_UL_3->Text);
	snprintf(d.Trial2_UL_4,10,"%s",labelTrial2_UL_4->Text);

	snprintf(d.Trial2_UC_1,10,"%s",labelTrial2_UC_1->Text);
	snprintf(d.Trial2_UC_2,10,"%s",labelTrial2_UC_2->Text);
	snprintf(d.Trial2_UC_3,10,"%s",labelTrial2_UC_3->Text);
	snprintf(d.Trial2_UC_4,10,"%s",labelTrial2_UC_4->Text);

	snprintf(d.Trial2_I_1,10,"%s",labelTrial2_I_1->Text);
	snprintf(d.Trial2_I_2,10,"%s",labelTrial2_I_2->Text);
	snprintf(d.Trial2_I_3,10,"%s",labelTrial2_I_3->Text);
	snprintf(d.Trial2_I_4,10,"%s",labelTrial2_I_4->Text);

	snprintf(d.Trial2_P_1,10,"%s",labelTrial2_P_1->Text);
	snprintf(d.Trial2_P_2,10,"%s",labelTrial2_P_2->Text);
	snprintf(d.Trial2_P_3,10,"%s",labelTrial2_P_3->Text);
	snprintf(d.Trial2_P_4,10,"%s",labelTrial2_P_4->Text);

	snprintf(d.Trial2_��_1,10,"%s",textBoxTrial2_��_1->Text);
	snprintf(d.Trial2_��_2,10,"%s",textBoxTrial2_��_2->Text);
	snprintf(d.Trial2_��_3,10,"%s",textBoxTrial2_��_3->Text);
	snprintf(d.Trial2_��_4,10,"%s",textBoxTrial2_��_4->Text);

	snprintf(d.Trial2_Load_1,10,"%s",textBoxTrial2_Load_1->Text);
	snprintf(d.Trial2_Load_2,10,"%s",textBoxTrial2_Load_2->Text);
	snprintf(d.Trial2_Load_3,10,"%s",textBoxTrial2_Load_3->Text);
	snprintf(d.Trial2_Load_4,10,"%s",textBoxTrial2_Load_4->Text);
	return d;
}