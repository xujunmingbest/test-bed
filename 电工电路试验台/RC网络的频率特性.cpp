#include "RC�����Ƶ������ʵ������.h"

#include "data_transf.h"
using namespace �繤��·����̨;


void RC�����Ƶ������ʵ������::SendData() {
	int TrialCode = 21;
	ST_RC�����Ƶ������ s;
	memset(&s, 0x00, sizeof(ST_RC�����Ƶ������));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RC�����Ƶ������)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");
}

ST_RC�����Ƶ������ RC�����Ƶ������ʵ������::Load_Grade_data() {
	ST_RC�����Ƶ������ d;
	memset(&d, 0x00, sizeof(ST_RC�����Ƶ������));

	snprintf(d.Trial1_F1, 10, "%s", textBoxTrial1_F1->Text);
	snprintf(d.Trial1_F2, 10, "%s", textBoxTrial1_F2->Text);
	snprintf(d.Trial1_F3, 10, "%s", textBoxTrial1_F3->Text);
	snprintf(d.Trial1_F4, 10, "%s", textBoxTrial1_F4->Text);
	snprintf(d.Trial1_F5, 10, "%s", textBoxTrial1_F5->Text);
	snprintf(d.Trial1_F6, 10, "%s", textBoxTrial1_F6->Text);
	snprintf(d.Trial1_F7, 10, "%s", textBoxTrial1_F7->Text);
	snprintf(d.Trial1_F8, 10, "%s", textBoxTrial1_F8->Text);

	snprintf(d.Trial1_Uo1_1, 10, "%s", labelTrial1_Uo1_1->Text);
	snprintf(d.Trial1_Uo1_2, 10, "%s", labelTrial1_Uo1_2->Text);
	snprintf(d.Trial1_Uo1_3, 10, "%s", labelTrial1_Uo1_3->Text);
	snprintf(d.Trial1_Uo1_4, 10, "%s", labelTrial1_Uo1_4->Text);
	snprintf(d.Trial1_Uo1_5, 10, "%s", labelTrial1_Uo1_5->Text);
	snprintf(d.Trial1_Uo1_6, 10, "%s", labelTrial1_Uo1_6->Text);
	snprintf(d.Trial1_Uo1_7, 10, "%s", labelTrial1_Uo1_7->Text);
	snprintf(d.Trial1_Uo1_8, 10, "%s", labelTrial1_Uo1_8->Text);

	snprintf(d.Trial1_Uo2_1, 10, "%s", labelTrial1_Uo2_1->Text);
	snprintf(d.Trial1_Uo2_2, 10, "%s", labelTrial1_Uo2_2->Text);
	snprintf(d.Trial1_Uo2_3, 10, "%s", labelTrial1_Uo2_3->Text);
	snprintf(d.Trial1_Uo2_4, 10, "%s", labelTrial1_Uo2_4->Text);
	snprintf(d.Trial1_Uo2_5, 10, "%s", labelTrial1_Uo2_5->Text);
	snprintf(d.Trial1_Uo2_6, 10, "%s", labelTrial1_Uo2_6->Text);
	snprintf(d.Trial1_Uo2_7, 10, "%s", labelTrial1_Uo2_7->Text);
	snprintf(d.Trial1_Uo2_8, 10, "%s", labelTrial1_Uo2_8->Text);

	snprintf(d.Trial2_F1, 10, "%s", textBoxTrial2_F1->Text);
	snprintf(d.Trial2_F2, 10, "%s", textBoxTrial2_F2->Text);
	snprintf(d.Trial2_F3, 10, "%s", textBoxTrial2_F3->Text);
	snprintf(d.Trial2_F4, 10, "%s", textBoxTrial2_F4->Text);
	snprintf(d.Trial2_F5, 10, "%s", textBoxTrial2_F5->Text);
	snprintf(d.Trial2_F6, 10, "%s", textBoxTrial2_F6->Text);
	snprintf(d.Trial2_F7, 10, "%s", textBoxTrial2_F7->Text);
	snprintf(d.Trial2_F8, 10, "%s", textBoxTrial2_F8->Text);

	snprintf(d.Trial2_T1, 10, "%s", textBoxTrial2_T1->Text);
	snprintf(d.Trial2_T2, 10, "%s", textBoxTrial2_T2->Text);
	snprintf(d.Trial2_T3, 10, "%s", textBoxTrial2_T3->Text);
	snprintf(d.Trial2_T4, 10, "%s", textBoxTrial2_T4->Text);
	snprintf(d.Trial2_T5, 10, "%s", textBoxTrial2_T5->Text);
	snprintf(d.Trial2_T6, 10, "%s", textBoxTrial2_T6->Text);
	snprintf(d.Trial2_T7, 10, "%s", textBoxTrial2_T7->Text);
	snprintf(d.Trial2_T8, 10, "%s", textBoxTrial2_T8->Text);

	snprintf(d.Trial2_��1, 10, "%s", textBoxTrial2_��1->Text);
	snprintf(d.Trial2_��2, 10, "%s", textBoxTrial2_��2->Text);
	snprintf(d.Trial2_��3, 10, "%s", textBoxTrial2_��3->Text);
	snprintf(d.Trial2_��4, 10, "%s", textBoxTrial2_��4->Text);
	snprintf(d.Trial2_��5, 10, "%s", textBoxTrial2_��5->Text);
	snprintf(d.Trial2_��6, 10, "%s", textBoxTrial2_��6->Text);
	snprintf(d.Trial2_��7, 10, "%s", textBoxTrial2_��7->Text);
	snprintf(d.Trial2_��8, 10, "%s", textBoxTrial2_��8->Text);

	snprintf(d.Trial2_��1, 10, "%s", textBoxTrial2_��1->Text);
	snprintf(d.Trial2_��2, 10, "%s", textBoxTrial2_��2->Text);
	snprintf(d.Trial2_��3, 10, "%s", textBoxTrial2_��3->Text);
	snprintf(d.Trial2_��4, 10, "%s", textBoxTrial2_��4->Text);
	snprintf(d.Trial2_��5, 10, "%s", textBoxTrial2_��5->Text);
	snprintf(d.Trial2_��6, 10, "%s", textBoxTrial2_��6->Text);
	snprintf(d.Trial2_��7, 10, "%s", textBoxTrial2_��7->Text);
	snprintf(d.Trial2_��8, 10, "%s", textBoxTrial2_��8->Text);

	snprintf(d.Trial2_��2_1, 10, "%s", textBoxTrial2_��2_1->Text);
	snprintf(d.Trial2_��2_2, 10, "%s", textBoxTrial2_��2_2->Text);
	snprintf(d.Trial2_��2_3, 10, "%s", textBoxTrial2_��2_3->Text);
	snprintf(d.Trial2_��2_4, 10, "%s", textBoxTrial2_��2_4->Text);
	snprintf(d.Trial2_��2_5, 10, "%s", textBoxTrial2_��2_5->Text);
	snprintf(d.Trial2_��2_6, 10, "%s", textBoxTrial2_��2_6->Text);
	snprintf(d.Trial2_��2_7, 10, "%s", textBoxTrial2_��2_7->Text);
	snprintf(d.Trial2_��2_8, 10, "%s", textBoxTrial2_��2_8->Text);

	snprintf(d.Trial2_��2_1, 10, "%s", textBoxTrial2_��2_1->Text);
	snprintf(d.Trial2_��2_2, 10, "%s", textBoxTrial2_��2_2->Text);
	snprintf(d.Trial2_��2_3, 10, "%s", textBoxTrial2_��2_3->Text);
	snprintf(d.Trial2_��2_4, 10, "%s", textBoxTrial2_��2_4->Text);
	snprintf(d.Trial2_��2_5, 10, "%s", textBoxTrial2_��2_5->Text);
	snprintf(d.Trial2_��2_6, 10, "%s", textBoxTrial2_��2_6->Text);
	snprintf(d.Trial2_��2_7, 10, "%s", textBoxTrial2_��2_7->Text);
	snprintf(d.Trial2_��2_8, 10, "%s", textBoxTrial2_��2_8->Text);

	snprintf(d.summing_up, 100, "%s", textBox����->Text);
	return d;
}