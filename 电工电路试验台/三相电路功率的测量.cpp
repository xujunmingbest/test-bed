#include "三相电路功率的测量实验内容.h"
#include "data_transf.h"

using namespace 电工电路试验台;

void 三相电路功率的测量实验内容::SendData() {
	int TrialCode = 19;
	ST_三相电路功率的测量 s;
	memset(&s, 0x00, sizeof(ST_三相电路功率的测量));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_三相电路功率的测量)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_三相电路功率的测量 三相电路功率的测量实验内容::Load_Grade_data() {
	ST_三相电路功率的测量 d;
	memset(&d, 0x00, sizeof(ST_三相电路功率的测量));



	snprintf(d.Trial1_PA_1,10,"%s", labelTrial1_PA_1->Text);
	snprintf(d. Trial1_PA_2,10,"%s", labelTrial1_PA_2->Text);
	snprintf(d. Trial1_PB_1,10,"%s", labelTrial1_PB_1->Text);
	snprintf(d. Trial1_PB_2,10,"%s", labelTrial1_PB_2->Text);
	snprintf(d. Trial1_PC_1,10,"%s", labelTrial1_PC_1->Text);
	snprintf(d. Trial1_PC_2,10,"%s", labelTrial1_PC_2->Text);
	snprintf(d. Trial1_P_1,10,"%s", textBoxTrial1_P_1->Text);
	snprintf(d. Trial1_P_2,10,"%s", textBoxTrial1_P_2->Text);

	snprintf(d.  Trial2_P1_1,10,"%s", labelTrial2_P1_1->Text);
	snprintf(d.  Trial2_P1_2,10,"%s", labelTrial2_P1_2->Text);
	snprintf(d.  Trial2_P1_3,10,"%s", labelTrial2_P1_3->Text);
	snprintf(d.  Trial2_P1_4,10,"%s", labelTrial2_P1_4->Text);
	snprintf(d.  Trial2_P2_1,10,"%s", labelTrial2_P2_1->Text);
	snprintf(d.  Trial2_P2_2,10,"%s", labelTrial2_P2_2->Text);
	snprintf(d.  Trial2_P2_3,10,"%s", labelTrial2_P2_3->Text);
	snprintf(d.  Trial2_P2_4,10,"%s", labelTrial2_P2_4->Text);
	snprintf(d.  Trial2_P_1,10,"%s", textBoxTrial2_P_1->Text);
	snprintf(d.  Trial2_P_2,10,"%s", textBoxTrial2_P_2->Text);
	snprintf(d.  Trial2_P_3,10,"%s", textBoxTrial2_P_3->Text);
	snprintf(d.  Trial2_P_4,10,"%s", textBoxTrial2_P_4->Text);


	snprintf(d.Trial3_U_1,10,"%s", labelTrial3_U_1->Text);
	snprintf(d.Trial3_U_2,10,"%s", labelTrial3_U_2->Text);
	snprintf(d.Trial3_U_3,10,"%s", labelTrial3_U_3->Text);
	snprintf(d.Trial3_I_1,10,"%s", labelTrial3_I_1->Text);
	snprintf(d.Trial3_I_2,10,"%s", labelTrial3_I_2->Text);
	snprintf(d.Trial3_I_3,10,"%s", labelTrial3_I_3->Text);
	snprintf(d.Trial3_Q_1,10,"%s", labelTrial3_Q_1->Text);
	snprintf(d.Trial3_Q_2,10,"%s", labelTrial3_Q_2->Text);
	snprintf(d.Trial3_Q_3,10,"%s", labelTrial3_Q_3->Text);
	snprintf(d.Trial3_QQ_1,10,"%s", textBoxTrial3_QQ_1->Text);
	snprintf(d.Trial3_QQ_2,10,"%s", textBoxTrial3_QQ_2->Text);
	snprintf(d.Trial3_QQ_3,10,"%s", textBoxTrial3_QQ_3->Text);

	return d;
}