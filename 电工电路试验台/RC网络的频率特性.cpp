#include "RC网络的频率特性实验内容.h"

#include "data_transf.h"
using namespace 电工电路试验台;


void RC网络的频率特性实验内容::SendData() {
	int TrialCode = 21;
	ST_RC网络的频率特性 s;
	memset(&s, 0x00, sizeof(ST_RC网络的频率特性));
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
		MessageBox::Show("TCP连接失败");
		return;
	}
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RC网络的频率特性)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}

ST_RC网络的频率特性 RC网络的频率特性实验内容::Load_Grade_data() {
	ST_RC网络的频率特性 d;
	memset(&d, 0x00, sizeof(ST_RC网络的频率特性));

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

	snprintf(d.Trial2_τ1, 10, "%s", textBoxTrial2_τ1->Text);
	snprintf(d.Trial2_τ2, 10, "%s", textBoxTrial2_τ2->Text);
	snprintf(d.Trial2_τ3, 10, "%s", textBoxTrial2_τ3->Text);
	snprintf(d.Trial2_τ4, 10, "%s", textBoxTrial2_τ4->Text);
	snprintf(d.Trial2_τ5, 10, "%s", textBoxTrial2_τ5->Text);
	snprintf(d.Trial2_τ6, 10, "%s", textBoxTrial2_τ6->Text);
	snprintf(d.Trial2_τ7, 10, "%s", textBoxTrial2_τ7->Text);
	snprintf(d.Trial2_τ8, 10, "%s", textBoxTrial2_τ8->Text);

	snprintf(d.Trial2_φ1, 10, "%s", textBoxTrial2_φ1->Text);
	snprintf(d.Trial2_φ2, 10, "%s", textBoxTrial2_φ2->Text);
	snprintf(d.Trial2_φ3, 10, "%s", textBoxTrial2_φ3->Text);
	snprintf(d.Trial2_φ4, 10, "%s", textBoxTrial2_φ4->Text);
	snprintf(d.Trial2_φ5, 10, "%s", textBoxTrial2_φ5->Text);
	snprintf(d.Trial2_φ6, 10, "%s", textBoxTrial2_φ6->Text);
	snprintf(d.Trial2_φ7, 10, "%s", textBoxTrial2_φ7->Text);
	snprintf(d.Trial2_φ8, 10, "%s", textBoxTrial2_φ8->Text);

	snprintf(d.Trial2_τ2_1, 10, "%s", textBoxTrial2_τ2_1->Text);
	snprintf(d.Trial2_τ2_2, 10, "%s", textBoxTrial2_τ2_2->Text);
	snprintf(d.Trial2_τ2_3, 10, "%s", textBoxTrial2_τ2_3->Text);
	snprintf(d.Trial2_τ2_4, 10, "%s", textBoxTrial2_τ2_4->Text);
	snprintf(d.Trial2_τ2_5, 10, "%s", textBoxTrial2_τ2_5->Text);
	snprintf(d.Trial2_τ2_6, 10, "%s", textBoxTrial2_τ2_6->Text);
	snprintf(d.Trial2_τ2_7, 10, "%s", textBoxTrial2_τ2_7->Text);
	snprintf(d.Trial2_τ2_8, 10, "%s", textBoxTrial2_τ2_8->Text);

	snprintf(d.Trial2_φ2_1, 10, "%s", textBoxTrial2_φ2_1->Text);
	snprintf(d.Trial2_φ2_2, 10, "%s", textBoxTrial2_φ2_2->Text);
	snprintf(d.Trial2_φ2_3, 10, "%s", textBoxTrial2_φ2_3->Text);
	snprintf(d.Trial2_φ2_4, 10, "%s", textBoxTrial2_φ2_4->Text);
	snprintf(d.Trial2_φ2_5, 10, "%s", textBoxTrial2_φ2_5->Text);
	snprintf(d.Trial2_φ2_6, 10, "%s", textBoxTrial2_φ2_6->Text);
	snprintf(d.Trial2_φ2_7, 10, "%s", textBoxTrial2_φ2_7->Text);
	snprintf(d.Trial2_φ2_8, 10, "%s", textBoxTrial2_φ2_8->Text);

	snprintf(d.summing_up, 100, "%s", textBox结论->Text);
	return d;
}