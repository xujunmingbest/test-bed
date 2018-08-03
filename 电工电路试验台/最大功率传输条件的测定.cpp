#include "最大功率传输条件的测定实验内容.h"
#include "data_transf.h"

using namespace 电工电路试验台;

void 最大功率传输条件的测定实验内容::SendData() {
	int TrialCode = 10;
	ST_最大功率传输条件的测定 s;
	memset(&s, 0x00, sizeof(ST_最大功率传输条件的测定));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_最大功率传输条件的测定)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}


ST_最大功率传输条件的测定 最大功率传输条件的测定实验内容::Load_Grade_data() {
	ST_最大功率传输条件的测定 d;
	memset(&d, 0x00, sizeof(ST_最大功率传输条件的测定));

	snprintf(d.Trial1_RL2, 10, "%s", textBoxTrial1_RL2->Text);
	snprintf(d.Trial1_RL3, 10, "%s", textBoxTrial1_RL3->Text);
	snprintf(d.Trial1_RL4, 10, "%s", textBoxTrial1_RL4->Text);
	snprintf(d.Trial1_RL5, 10, "%s", textBoxTrial1_RL5->Text);
	snprintf(d.Trial1_RL6, 10, "%s", textBoxTrial1_RL6->Text);
	snprintf(d.Trial1_RL7, 10, "%s", textBoxTrial1_RL7->Text);
	snprintf(d.Trial1_RL8, 10, "%s", textBoxTrial1_RL8->Text);

	snprintf(d.Trial1_IUL1, 10, "%s", labelTrial1_IUL1->Text);
	snprintf(d.Trial1_IUL2, 10, "%s", labelTrial1_IUL2->Text);
	snprintf(d.Trial1_IUL3, 10, "%s", labelTrial1_IUL3->Text);
	snprintf(d.Trial1_IUL4, 10, "%s", labelTrial1_IUL4->Text);
	snprintf(d.Trial1_IUL5, 10, "%s", labelTrial1_IUL5->Text);
	snprintf(d.Trial1_IUL6, 10, "%s", labelTrial1_IUL6->Text);
	snprintf(d.Trial1_IUL7, 10, "%s", labelTrial1_IUL7->Text);
	snprintf(d.Trial1_IUL8, 10, "%s", labelTrial1_IUL8->Text);
	snprintf(d.Trial1_IUL9, 10, "%s", labelTrial1_IUL9->Text);

	snprintf(d.Trial1_I1, 10, "%s", labelTrial1_I1->Text);
	snprintf(d.Trial1_I2, 10, "%s", labelTrial1_I2->Text);
	snprintf(d.Trial1_I3, 10, "%s", labelTrial1_I3->Text);
	snprintf(d.Trial1_I4, 10, "%s", labelTrial1_I4->Text);
	snprintf(d.Trial1_I5, 10, "%s", labelTrial1_I5->Text);
	snprintf(d.Trial1_I6, 10, "%s", labelTrial1_I6->Text);
	snprintf(d.Trial1_I7, 10, "%s", labelTrial1_I7->Text);
	snprintf(d.Trial1_I8, 10, "%s", labelTrial1_I8->Text);
	snprintf(d.Trial1_I9, 10, "%s", labelTrial1_I9->Text);

	snprintf(d.Trial1_PL1, 10, "%s", textBoxTrial1_PL1->Text);
	snprintf(d.Trial1_PL2, 10, "%s", textBoxTrial1_PL2->Text);
	snprintf(d.Trial1_PL3, 10, "%s", textBoxTrial1_PL3->Text);
	snprintf(d.Trial1_PL4, 10, "%s", textBoxTrial1_PL4->Text);
	snprintf(d.Trial1_PL5, 10, "%s", textBoxTrial1_PL5->Text);
	snprintf(d.Trial1_PL6, 10, "%s", textBoxTrial1_PL6->Text);
	snprintf(d.Trial1_PL7, 10, "%s", textBoxTrial1_PL7->Text);
	snprintf(d.Trial1_PL8, 10, "%s", textBoxTrial1_PL8->Text);
	snprintf(d.Trial1_PL9, 10, "%s", textBoxTrial1_PL9->Text);


	snprintf(d.Trial1_Uo1, 10, "%s", labelTrial1_Uo1->Text);
	snprintf(d.Trial1_Uo2, 10, "%s", labelTrial1_Uo2->Text);
	snprintf(d.Trial1_Uo3, 10, "%s", labelTrial1_Uo3->Text);
	snprintf(d.Trial1_Uo4, 10, "%s", labelTrial1_Uo4->Text);
	snprintf(d.Trial1_Uo5, 10, "%s", labelTrial1_Uo5->Text);
	snprintf(d.Trial1_Uo6, 10, "%s", labelTrial1_Uo6->Text);
	snprintf(d.Trial1_Uo7, 10, "%s", labelTrial1_Uo7->Text);
	snprintf(d.Trial1_Uo8, 10, "%s", labelTrial1_Uo8->Text);
	snprintf(d.Trial1_Uo9, 10, "%s", labelTrial1_Uo9->Text);


	snprintf(d.trial1_Po1, 10, "%s", textBoxtrial1_Po1->Text);
	snprintf(d.trial1_Po2, 10, "%s", textBoxtrial1_Po2->Text);
	snprintf(d.trial1_Po3, 10, "%s", textBoxtrial1_Po3->Text);
	snprintf(d.trial1_Po4, 10, "%s", textBoxtrial1_Po4->Text);
	snprintf(d.trial1_Po5, 10, "%s", textBoxtrial1_Po5->Text);
	snprintf(d.trial1_Po6, 10, "%s", textBoxtrial1_Po6->Text);
	snprintf(d.trial1_Po7, 10, "%s", textBoxtrial1_Po7->Text);
	snprintf(d.trial1_Po8, 10, "%s", textBoxtrial1_Po8->Text);
	snprintf(d.trial1_Po9, 10, "%s", textBoxtrial1_Po9->Text);


	snprintf(d.Trial2_RL2, 10, "%s", textBoxtrial2_RL2->Text);
	snprintf(d.Trial2_RL3, 10, "%s", textBoxtrial2_RL3->Text);
	snprintf(d.Trial2_RL4, 10, "%s", textBoxtrial2_RL4->Text);
	snprintf(d.Trial2_RL5, 10, "%s", textBoxtrial2_RL5->Text);
	snprintf(d.Trial2_RL6, 10, "%s", textBoxtrial2_RL6->Text);
	snprintf(d.Trial2_RL7, 10, "%s", textBoxtrial2_RL7->Text);
	snprintf(d.Trial2_RL8, 10, "%s", textBoxtrial2_RL8->Text);

	snprintf(d.Trial2_UL1, 10, "%s", labeltrial2_UL1->Text);
	snprintf(d.Trial2_UL2, 10, "%s", labeltrial2_UL2->Text);
	snprintf(d.Trial2_UL3, 10, "%s", labeltrial2_UL3->Text);
	snprintf(d.Trial2_UL4, 10, "%s", labeltrial2_UL4->Text);
	snprintf(d.Trial2_UL5, 10, "%s", labeltrial2_UL5->Text);
	snprintf(d.Trial2_UL6, 10, "%s", labeltrial2_UL6->Text);
	snprintf(d.Trial2_UL7, 10, "%s", labeltrial2_UL7->Text);
	snprintf(d.Trial2_UL8, 10, "%s", labeltrial2_UL8->Text);
	snprintf(d.Trial2_UL9, 10, "%s", labeltrial2_UL9->Text);

	snprintf(d.Trial2_I1, 10, "%s", labeltrial2_I1->Text);
	snprintf(d.Trial2_I2, 10, "%s", labeltrial2_I2->Text);
	snprintf(d.Trial2_I3, 10, "%s", labeltrial2_I3->Text);
	snprintf(d.Trial2_I4, 10, "%s", labeltrial2_I4->Text);
	snprintf(d.Trial2_I5, 10, "%s", labeltrial2_I5->Text);
	snprintf(d.Trial2_I6, 10, "%s", labeltrial2_I6->Text);
	snprintf(d.Trial2_I7, 10, "%s", labeltrial2_I7->Text);
	snprintf(d.Trial2_I8, 10, "%s", labeltrial2_I8->Text);
	snprintf(d.Trial2_I9, 10, "%s", labeltrial2_I9->Text);


	snprintf(d.Trial2_PL1, 10, "%s", textBoxTrial2_PL1->Text);
	snprintf(d.Trial2_PL2, 10, "%s", textBoxTrial2_PL2->Text);
	snprintf(d.Trial2_PL3, 10, "%s", textBoxTrial2_PL3->Text);
	snprintf(d.Trial2_PL4, 10, "%s", textBoxTrial2_PL4->Text);
	snprintf(d.Trial2_PL5, 10, "%s", textBoxTrial2_PL5->Text);
	snprintf(d.Trial2_PL6, 10, "%s", textBoxTrial2_PL6->Text);
	snprintf(d.Trial2_PL7, 10, "%s", textBoxTrial2_PL7->Text);
	snprintf(d.Trial2_PL8, 10, "%s", textBoxTrial2_PL8->Text);
	snprintf(d.Trial2_PL9, 10, "%s", textBoxTrial2_PL9->Text);


	snprintf(d.Trial2_Uo1, 10, "%s", labelTrial2_Uo1->Text);
	snprintf(d.Trial2_Uo2, 10, "%s", labelTrial2_Uo2->Text);
	snprintf(d.Trial2_Uo3, 10, "%s", labelTrial2_Uo3->Text);
	snprintf(d.Trial2_Uo4, 10, "%s", labelTrial2_Uo4->Text);
	snprintf(d.Trial2_Uo5, 10, "%s", labelTrial2_Uo5->Text);
	snprintf(d.Trial2_Uo6, 10, "%s", labelTrial2_Uo6->Text);
	snprintf(d.Trial2_Uo7, 10, "%s", labelTrial2_Uo7->Text);
	snprintf(d.Trial2_Uo8, 10, "%s", labelTrial2_Uo8->Text);
	snprintf(d.Trial2_Uo9, 10, "%s", labelTrial2_Uo9->Text);


	snprintf(d.trial2_Po1, 10, "%s", textBoxTrial2_Po1->Text);
	snprintf(d.trial2_Po2, 10, "%s", textBoxTrial2_Po2->Text);
	snprintf(d.trial2_Po3, 10, "%s", textBoxTrial2_Po3->Text);
	snprintf(d.trial2_Po4, 10, "%s", textBoxTrial2_Po4->Text);
	snprintf(d.trial2_Po5, 10, "%s", textBoxTrial2_Po5->Text);
	snprintf(d.trial2_Po6, 10, "%s", textBoxTrial2_Po6->Text);
	snprintf(d.trial2_Po7, 10, "%s", textBoxTrial2_Po7->Text);
	snprintf(d.trial2_Po8, 10, "%s", textBoxTrial2_Po8->Text);
	snprintf(d.trial2_Po9, 10, "%s", textBoxTrial2_Po9->Text);

	snprintf(d.summing_up, 10, "%s", textBox结论->Text);

	return d;
}