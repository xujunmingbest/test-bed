#include "RLC����г���·���о�ʵ������.h"

#include "data_transf.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#pragma comment(lib,"E:/c++/libfilesql/Release/libfilesql.lib")

using namespace �繤��·����̨;

void RLC����г���·���о�ʵ������::SendData() {
	int TrialCode = 13;
	ST_RLC����г���·���о� s;
	memset(&s, 0x00, sizeof(ST_RLC����г���·���о�));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLC����г���·���о�)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");


}

ST_RLC����г���·���о� RLC����г���·���о�ʵ������::Load_Grade_data() {
	ST_RLC����г���·���о� d;
	memset(&d, 0x00, sizeof(ST_RLC����г���·���о�));
	fileSql f;

	string trial1bmp = f.Readfile(T_to_string(Trial1PT_name));
	if (trial1bmp.length() == sizeof(d.Trial1Bmp))
		memcpy(d.Trial1Bmp, trial1bmp.c_str(), sizeof(d.Trial1Bmp));
	snprintf(d.summing_up, 100, "%s", textBox����->Text);

	snprintf(d.Trial2_F, 10, "%s", textBoxTrial2_F->Text);
	snprintf(d. Trial2_Uc, 10, "%s", textBoxTrial2_F->Text);
	snprintf(d. Trial2_UL, 10, "%s", textBoxTrial2_F->Text);

	snprintf(d.Trial3_F1,10,"%s", textBoxTrial5_F1->Text);
	snprintf(d.Trial3_F2,10,"%s", textBoxTrial5_F2->Text);
	snprintf(d.Trial3_F3,10,"%s", textBoxTrial5_F3->Text);
	snprintf(d.Trial3_F4,10,"%s", textBoxTrial5_F4->Text);
	snprintf(d.Trial3_F5,10,"%s", textBoxTrial5_F5->Text);
	snprintf(d.Trial3_F6,10,"%s", textBoxTrial5_F6->Text);
	snprintf(d.Trial3_F7,10,"%s", textBoxTrial5_F7->Text);
	snprintf(d.Trial3_F8,10,"%s", textBoxTrial5_F8->Text);
	snprintf(d.Trial3_F9,10,"%s", textBoxTrial5_F9->Text);
	snprintf(d.Trial3_F10,10,"%s", textBoxTrial5_F10->Text);
	snprintf(d.Trial3_F11,10,"%s", textBoxTrial5_F11->Text);
	snprintf(d.Trial3_F12,10,"%s", textBoxTrial5_F12->Text);
	snprintf(d.Trial3_F13,10,"%s", textBoxTrial5_F13->Text);
	snprintf(d.Trial3_F14,10,"%s", textBoxTrial5_F14->Text);
	snprintf(d.Trial3_F15,10,"%s", textBoxTrial5_F15->Text);
	snprintf(d.Trial3_F16,10,"%s", textBoxTrial5_F16->Text);

	snprintf(d.Trial3_U0_1,10,"%s",labelTrial3_U0_1->Text);
	snprintf(d.Trial3_U0_2,10,"%s", labelTrial3_U0_2->Text);
	snprintf(d.Trial3_U0_3,10,"%s", labelTrial3_U0_3->Text);
	snprintf(d.Trial3_U0_4,10,"%s", labelTrial3_U0_4->Text);
	snprintf(d.Trial3_U0_5,10,"%s", labelTrial3_U0_5->Text);
	snprintf(d.Trial3_U0_6,10,"%s", labelTrial3_U0_6->Text);
	snprintf(d.Trial3_U0_7,10,"%s", labelTrial3_U0_7->Text);
	snprintf(d.Trial3_U0_8,10,"%s", labelTrial3_U0_8->Text);
	snprintf(d.Trial3_U0_9,10,"%s", labelTrial3_U0_9->Text);
	snprintf(d.Trial3_U0_10,10,"%s", labelTrial3_U0_10->Text);
	snprintf(d.Trial3_U0_11,10,"%s", labelTrial3_U0_11->Text);
	snprintf(d.Trial3_U0_12,10,"%s", labelTrial3_U0_12->Text);
	snprintf(d.Trial3_U0_13,10,"%s", labelTrial3_U0_13->Text);
	snprintf(d.Trial3_U0_14,10,"%s", labelTrial3_U0_14->Text);
	snprintf(d.Trial3_U0_15,10,"%s", labelTrial3_U0_15->Text);
	snprintf(d.Trial3_U0_16,10,"%s", labelTrial3_U0_16->Text);

	snprintf(d.Trial3_UL_1,10,"%s",labelTrial3_UL_1->Text);
	snprintf(d.Trial3_UL_2,10,"%s", labelTrial3_UL_2->Text);
	snprintf(d.Trial3_UL_3,10,"%s", labelTrial3_UL_3->Text);
	snprintf(d.Trial3_UL_4,10,"%s", labelTrial3_UL_4->Text);
	snprintf(d.Trial3_UL_5,10,"%s", labelTrial3_UL_5->Text);
	snprintf(d.Trial3_UL_6,10,"%s", labelTrial3_UL_6->Text);
	snprintf(d.Trial3_UL_7,10,"%s", labelTrial3_UL_7->Text);
	snprintf(d.Trial3_UL_8,10,"%s", labelTrial3_UL_8->Text);
	snprintf(d.Trial3_UL_9,10,"%s", labelTrial3_UL_9->Text);
	snprintf(d.Trial3_UL_10,10,"%s", labelTrial3_UL_10->Text);
	snprintf(d.Trial3_UL_11,10,"%s", labelTrial3_UL_11->Text);
	snprintf(d.Trial3_UL_12,10,"%s", labelTrial3_UL_12->Text);
	snprintf(d.Trial3_UL_13,10,"%s", labelTrial3_UL_13->Text);
	snprintf(d.Trial3_UL_14,10,"%s", labelTrial3_UL_14->Text);
	snprintf(d.Trial3_UL_15,10,"%s", labelTrial3_UL_15->Text);
	snprintf(d.Trial3_UL_16,10,"%s", labelTrial3_UL_16->Text);


	snprintf(d.Trial3_Uc_1,10,"%s",labelTrial3_Uc_1->Text);
	snprintf(d.Trial3_Uc_2,10,"%s", labelTrial3_Uc_2->Text);
	snprintf(d.Trial3_Uc_3,10,"%s", labelTrial3_Uc_3->Text);
	snprintf(d.Trial3_Uc_4,10,"%s", labelTrial3_Uc_4->Text);
	snprintf(d.Trial3_Uc_5,10,"%s", labelTrial3_Uc_5->Text);
	snprintf(d.Trial3_Uc_6,10,"%s", labelTrial3_Uc_6->Text);
	snprintf(d.Trial3_Uc_7,10,"%s", labelTrial3_Uc_7->Text);
	snprintf(d.Trial3_Uc_8,10,"%s", labelTrial3_Uc_8->Text);
	snprintf(d.Trial3_Uc_9, 10, "%s", labelTrial3_Uc_9->Text);
	snprintf(d.Trial3_Uc_10,10,"%s", labelTrial3_Uc_10->Text);
	snprintf(d.Trial3_Uc_11,10,"%s", labelTrial3_Uc_11->Text);
	snprintf(d.Trial3_Uc_12,10,"%s", labelTrial3_Uc_12->Text);
	snprintf(d.Trial3_Uc_13,10,"%s", labelTrial3_Uc_13->Text);
	snprintf(d.Trial3_Uc_14,10,"%s", labelTrial3_Uc_14->Text);
	snprintf(d.Trial3_Uc_15,10,"%s", labelTrial3_Uc_15->Text);
	snprintf(d.Trial3_Uc_16,10,"%s", labelTrial3_Uc_16->Text);
	snprintf(d.Trial3_Fo,10,"%s", textBoxTrial3_Fo->Text);
	snprintf(d.Trial3_Q,10,"%s", textBoxTrial3_Q->Text);
	snprintf(d.Trial3F2_F1,10,"%s", textBoxTrial3F2_F1->Text);

	snprintf(d.Trial4_F ,10,"%s", textBoxTrial4_F->Text);
	snprintf(d.Trial4_Uc,10,"%s",labelTrial4_Uc->Text);
	snprintf(d.Trial4_UL,10,"%s",labelTrial4_UL->Text);


	snprintf(d.Trial5_F1,10,"%s",textBoxTrial5_F1->Text);
	snprintf(d.Trial5_F2,10,"%s", textBoxTrial5_F2->Text);
	snprintf(d.Trial5_F3,10,"%s", textBoxTrial5_F3->Text);
	snprintf(d.Trial5_F4,10,"%s", textBoxTrial5_F4->Text);
	snprintf(d.Trial5_F5,10,"%s", textBoxTrial5_F5->Text);
	snprintf(d.Trial5_F6,10,"%s", textBoxTrial5_F6->Text);
	snprintf(d.Trial5_F7,10,"%s", textBoxTrial5_F7->Text);
	snprintf(d.Trial5_F8,10,"%s", textBoxTrial5_F8->Text);
	snprintf(d.Trial5_F9,10,"%s", textBoxTrial5_F9->Text);
	snprintf(d.Trial5_F10,10,"%s", textBoxTrial5_F10->Text);
	snprintf(d.Trial5_F11,10,"%s", textBoxTrial5_F11->Text);
	snprintf(d.Trial5_F12,10,"%s", textBoxTrial5_F12->Text);
	snprintf(d.Trial5_F13,10,"%s", textBoxTrial5_F13->Text);
	snprintf(d.Trial5_F14,10,"%s", textBoxTrial5_F14->Text);
	snprintf(d.Trial5_F15,10,"%s", textBoxTrial5_F15->Text);
	snprintf(d.Trial5_F16,10,"%s", textBoxTrial5_F16->Text);

	snprintf(d.Trial5_U0_1,10,"%s",labelTrial5_U0_1->Text);
	snprintf(d.Trial5_U0_2,10,"%s", labelTrial5_U0_2->Text);
	snprintf(d.Trial5_U0_3,10,"%s", labelTrial5_U0_3->Text);
	snprintf(d.Trial5_U0_4,10,"%s", labelTrial5_U0_4->Text);
	snprintf(d.Trial5_U0_5,10,"%s", labelTrial5_U0_5->Text);
	snprintf(d.Trial5_U0_6,10,"%s", labelTrial5_U0_6->Text);
	snprintf(d.Trial5_U0_7,10,"%s", labelTrial5_U0_7->Text);
	snprintf(d.Trial5_U0_8,10,"%s", labelTrial5_U0_8->Text);
	snprintf(d.Trial5_U0_9,10,"%s", labelTrial5_U0_9->Text);
	snprintf(d.Trial5_U0_10,10,"%s", labelTrial5_U0_10->Text);
	snprintf(d.Trial5_U0_11,10,"%s", labelTrial5_U0_11->Text);
	snprintf(d.Trial5_U0_12,10,"%s", labelTrial5_U0_12->Text);
	snprintf(d.Trial5_U0_13,10,"%s", labelTrial5_U0_13->Text);
	snprintf(d.Trial5_U0_14,10,"%s", labelTrial5_U0_14->Text);
	snprintf(d.Trial5_U0_15,10,"%s", labelTrial5_U0_15->Text);
	snprintf(d.Trial5_U0_16,10,"%s", labelTrial5_U0_16->Text);

	snprintf(d.Trial5_UL_1,10,"%s",labelTrial5_UL_1->Text);
	snprintf(d.Trial5_UL_2,10,"%s", labelTrial5_UL_2->Text);
	snprintf(d.Trial5_UL_3,10,"%s", labelTrial5_UL_3->Text);
	snprintf(d.Trial5_UL_4,10,"%s", labelTrial5_UL_4->Text);
	snprintf(d.Trial5_UL_5,10,"%s", labelTrial5_UL_5->Text);
	snprintf(d.Trial5_UL_6,10,"%s", labelTrial5_UL_6->Text);
	snprintf(d.Trial5_UL_7,10,"%s", labelTrial5_UL_7->Text);
	snprintf(d.Trial5_UL_8,10,"%s", labelTrial5_UL_8->Text);
	snprintf(d.Trial5_UL_9,10,"%s", labelTrial5_UL_9->Text);
	snprintf(d.Trial5_UL_10,10,"%s", labelTrial5_UL_10->Text);
	snprintf(d.Trial5_UL_11,10,"%s", labelTrial5_UL_11->Text);
	snprintf(d.Trial5_UL_12,10,"%s", labelTrial5_UL_12->Text);
	snprintf(d.Trial5_UL_13,10,"%s", labelTrial5_UL_13->Text);
	snprintf(d.Trial5_UL_14,10,"%s", labelTrial5_UL_14->Text);
	snprintf(d.Trial5_UL_15,10,"%s", labelTrial5_UL_15->Text);
	snprintf(d.Trial5_UL_16,10,"%s", labelTrial5_UL_16->Text);


	snprintf(d.Trial5_Uc_1,10,"%s",labelTrial5_Uc_1->Text);
	snprintf(d.Trial5_Uc_2,10,"%s", labelTrial5_Uc_2->Text);
	snprintf(d.Trial5_Uc_3,10,"%s", labelTrial5_Uc_3->Text);
	snprintf(d.Trial5_Uc_4,10,"%s", labelTrial5_Uc_4->Text);
	snprintf(d.Trial5_Uc_5,10,"%s", labelTrial5_Uc_5->Text);
	snprintf(d.Trial5_Uc_6,10,"%s", labelTrial5_Uc_6->Text);
	snprintf(d.Trial5_Uc_7,10,"%s", labelTrial5_Uc_7->Text);
	snprintf(d.Trial5_Uc_8,10,"%s", labelTrial5_Uc_8->Text);
	snprintf(d.Trial5_Uc_9,10,"%s", labelTrial5_Uc_9->Text);
	snprintf(d.Trial5_Uc_10,10,"%s", labelTrial5_Uc_10->Text);
	snprintf(d.Trial5_Uc_11,10,"%s", labelTrial5_Uc_11->Text);
	snprintf(d.Trial5_Uc_12,10,"%s", labelTrial5_Uc_12->Text);
	snprintf(d.Trial5_Uc_13,10,"%s", labelTrial5_Uc_13->Text);
	snprintf(d.Trial5_Uc_14,10,"%s", labelTrial5_Uc_14->Text);
	snprintf(d.Trial5_Uc_15,10,"%s", labelTrial5_Uc_15->Text);
	snprintf(d.Trial5_Uc_16,10,"%s", labelTrial5_Uc_16->Text);
	snprintf(d.Trial5_Fo,10,"%s",textBoxTrial5_Fo->Text);
	snprintf(d.Trial5_Q,10,"%s", textBoxTrial5_Q->Text);
	snprintf(d.Trial5F2_F1,10,"%s", textBoxTrial5F2_F1->Text);
	return d;
}