#include "�չ�ƹ������������ʵ������.h"

#include "data_transf.h"

using namespace �繤��·����̨;

void �չ�ƹ������������ʵ������::SendData() {
	int TrialCode = 17;
	ST_�չ�ƹ������������ s;
	memset(&s, 0x00, sizeof(ST_�չ�ƹ������������));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_�չ�ƹ������������)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");


}

ST_�չ�ƹ������������ �չ�ƹ������������ʵ������::Load_Grade_data() {
	ST_�չ�ƹ������������ d;
	memset(&d, 0x00, sizeof(ST_�չ�ƹ������������));

	snprintf(d.Trial1_Mea_U,10,"%s",labelTrial1_Mea_U->Text);
	snprintf(d. Trial1_Mea_UR,10,"%s",labelTrial1_Mea_UR->Text);
	snprintf(d. Trial1_Mea_UC,10,"%s",labelTrial1_Mea_UC->Text);
	snprintf(d. Trial1_Cal_U,10,"%s",textBoxTrial1_Cal_U->Text);
	snprintf(d. Trial1_Mea_DU,10,"%s", textBoxTrial1_Mea_DU->Text);
	snprintf(d. Trial1_Cal_UU,10,"%s", textBoxTrial1_Cal_UU->Text);

	snprintf(d. Trial2_P_line1,10,"%s",labelTrial2_P_line1->Text);
	snprintf(d. Trial2_P_line2,10,"%s",labelTrial2_P_line2->Text);
	snprintf(d. Trial2_cos_line1,10,"%s",textBoxTrial2_cos_line1->Text);
	snprintf(d. Trial2_cos_line2,10,"%s", textBoxTrial2_cos_line2->Text);
	snprintf(d. Trial2_I_line1,10,"%s",labelTrial2_I_line1->Text);
	snprintf(d. Trial2_I_line2,10,"%s",labelTrial2_I_line2->Text);
	snprintf(d. Trial2_U_line1,10,"%s",labelTrial2_U_line1->Text);
	snprintf(d. Trial2_U_line2,10,"%s",labelTrial2_U_line2->Text);
	snprintf(d. Trial2_UL_line1,10,"%s",labelTrial2_UL_line1->Text);
	snprintf(d. Trial2_UL_line2,10,"%s",labelTrial2_UL_line2->Text);
	snprintf(d.Trial2_UA_line1,10,"%s",labelTrial2_UA_line1->Text);
	snprintf(d.Trial2_UA_line2,10,"%s",labelTrial2_UA_line2->Text);
	snprintf(d.Trial2_R_line1,10,"%s", textBoxTrial2_R_line1->Text);
	snprintf(d.Trial2_R_line2,10,"%s", textBoxTrial2_R_line2->Text);
	snprintf(d.Trial2_cos_cal_line1,10,"%s", textBoxTrial2_cos_cal_line1->Text);
	snprintf(d.Trial2_cos_cal_line2,10,"%s", textBoxTrial2_cos_cal_line2->Text);
snprintf(d.Trial3_mea_P_line1,10,"%s",labelTrial3_mea_P_line1->Text);
snprintf(d.Trial3_mea_P_line2,10,"%s",labelTrial3_mea_P_line2->Text);
snprintf(d.Trial3_mea_P_line3,10,"%s",labelTrial3_mea_P_line3->Text);
snprintf(d.Trial3_mea_P_line4,10,"%s",labelTrial3_mea_P_line4->Text);
snprintf(d.Trial3_mea_U_line1,10,"%s",labelTrial3_mea_U_line1->Text);
snprintf(d.Trial3_mea_U_line2,10,"%s",labelTrial3_mea_U_line2->Text);
snprintf(d.Trial3_mea_U_line3,10,"%s",labelTrial3_mea_U_line3->Text);
snprintf(d.Trial3_mea_U_line4,10,"%s",labelTrial3_mea_U_line4->Text);
snprintf(d.Trial3_mea_I_line1,10,"%s",labelTrial3_mea_I_line1->Text);
snprintf(d.Trial3_mea_I_line2,10,"%s",labelTrial3_mea_I_line2->Text);
snprintf(d.Trial3_mea_I_line3,10,"%s",labelTrial3_mea_I_line3->Text);
snprintf(d.Trial3_mea_I_line4,10,"%s",labelTrial3_mea_I_line4->Text);
snprintf(d.Trial3_mea_IL_line1,10,"%s",labelTrial3_mea_IL_line1->Text);
snprintf(d.Trial3_mea_IL_line2,10,"%s",labelTrial3_mea_IL_line2->Text);
snprintf(d.Trial3_mea_IL_line3,10,"%s",labelTrial3_mea_IL_line3->Text);
snprintf(d.Trial3_mea_IL_line4,10,"%s",labelTrial3_mea_IL_line4->Text);
snprintf(d.Trial3_mea_IC_line1,10,"%s",labelTrial3_mea_IC_line1->Text);
snprintf(d.Trial3_mea_IC_line2,10,"%s",labelTrial3_mea_IC_line2->Text);
snprintf(d.Trial3_mea_IC_line3,10,"%s",labelTrial3_mea_IC_line3->Text);
snprintf(d.Trial3_mea_IC_line4,10,"%s",labelTrial3_mea_IC_line4->Text);
snprintf(d.Trial3_cal_I_line1,10,"%s", textBoxTrial3_cal_I_line1->Text);
snprintf(d.Trial3_cal_I_line2,10,"%s", textBoxTrial3_cal_I_line2->Text);
snprintf(d.Trial3_cal_I_line3,10,"%s", textBoxTrial3_cal_I_line3->Text);
snprintf(d.Trial3_cal_I_line4,10,"%s", textBoxTrial3_cal_I_line4->Text);
snprintf(d.Trial3_cal_cos_line1,10,"%s", textBoxTrial3_cal_cos_line1->Text);
snprintf(d.Trial3_cal_cos_line2,10,"%s", textBoxTrial3_cal_cos_line2->Text);
snprintf(d.Trial3_cal_cos_line3,10,"%s", textBoxTrial3_cal_cos_line3->Text);
snprintf(d.Trial3_cal_cos_line4,10,"%s", textBoxTrial3_cal_cos_line4->Text);


	return d;
}