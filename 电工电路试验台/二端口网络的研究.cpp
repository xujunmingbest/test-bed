#include "二端口网络的研究实验内容.h"

#include "data_transf.h"
using namespace 电工电路试验台;

void 二端口网络的研究实验内容::SendGrade() {
	int TrialCode = 9;
	ST_二端口网络的研究 s;
	memset(&s, 0x00, sizeof(ST_二端口网络的研究));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_二端口网络的研究)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");

}


ST_二端口网络的研究 二端口网络的研究实验内容::Load_Grade_data() {
	ST_二端口网络的研究 d;
	memset(&d, 0x00, sizeof(ST_二端口网络的研究));

	snprintf(d.Trial1_1_U11, 10, "%s", textBoxTrial1_1_U11->Text);
	snprintf(d.Trial1_1_U21, 10, "%s", textBoxTrial1_1_U21->Text);
	snprintf(d.Trial2_1_U, 10, "%s", textBoxTrial2_1_U->Text);

	snprintf(d.Trial1_1_A1, 10, "%s",textBoxTrial1_1_A1->Text );
	snprintf(d.Trial1_1_B1, 10, "%s", textBoxTrial1_1_B1->Text);
	snprintf(d.Trial1_1_C1, 10, "%s", textBoxTrial1_1_C1->Text);
	snprintf(d.Trial1_1_D1, 10, "%s", textBoxTrial1_1_D1->Text);
	snprintf(d.Trial1_1_I110, 10, "%s",labelTrial1_1_I110->Text);
	snprintf(d.Trial1_1_I11S, 10, "%s", labelTrial1_1_I11S->Text);
	snprintf(d.Trial1_1_U110, 10, "%s", labelTrial1_1_U110->Text);
	snprintf(d.Trial1_1_U11S, 10, "%s", labelTrial1_1_U11S->Text);
	snprintf(d.Trial1_1_U120, 10, "%s", labelTrial1_1_U120->Text);
	snprintf(d.Trial1_1_U12S, 10, "%s", labelTrial1_1_U12S->Text);

	snprintf(d.Trial1_2_U210, 10, "%s", labelTrial1_2_U210->Text);
	snprintf(d.Trial1_2_U220, 10, "%s", labelTrial1_2_U220->Text);
	snprintf(d.Trial1_2_I210, 10, "%s", labelTrial1_2_I210->Text);
	snprintf(d.Trial1_2_A2, 10, "%s", textBoxTrial1_2_A2->Text);
	snprintf(d.Trial1_2_B2, 10, "%s", textBoxTrial1_2_B2->Text);
	snprintf(d.Trial1_2_U21S, 10, "%s", labelTrial1_2_U21S->Text);
	snprintf(d.Trial1_2_I21S, 10, "%s", labelTrial1_2_I21S->Text);
	snprintf(d.Trial1_2_I22S, 10, "%s", labelTrial1_2_I22S->Text);
	snprintf(d.Trial1_2_C2, 10, "%s", textBoxTrial1_2_C2->Text);
	snprintf(d.Trial1_2_D2, 10, "%s", textBoxTrial1_2_D2->Text);

	snprintf(d.Trial2_1_U10, 10, "%s", labelTrial2_1_U10->Text);
	snprintf(d.Trial2_1_I10, 10, "%s", labelTrial2_1_I10->Text);
	snprintf(d.Trial2_1_I110, 10, "%s", labelTrial2_1_R10->Text);
	snprintf(d.Trial2_1_U1S, 10, "%s", labelTrial2_1_U1S->Text);
	snprintf(d.Trial2_1_I1S, 10, "%s", labelTrial2_1_I1S->Text);
	snprintf(d.Trial2_1_R1S, 10, "%s", labelTrial2_1_R1S->Text);
	snprintf(d.Trial2_1_U20, 10, "%s", labelTrial2_1_U20->Text);
	snprintf(d.Trial2_1_I20, 10, "%s", labelTrial2_1_I20->Text);
	snprintf(d.Trial2_1_R20, 10, "%s", labelTrial2_1_R20->Text);
	snprintf(d.Trial2_1_U2S, 10, "%s", labelTrial2_1_U2S->Text);
	snprintf(d.Trial2_1_I2S, 10, "%s", labelTrial2_1_I2S->Text);
	snprintf(d.Trial2_1_R2S, 10, "%s", labelTrial2_1_R2S->Text);
	snprintf(d.Trial2_1_A, 10, "%s", textBoxTrial2_1_A->Text);
	snprintf(d.Trial2_1_B, 10, "%s", textBoxTrial2_1_B->Text);
	snprintf(d.Trial2_1_C, 10, "%s", textBoxTrial2_1_C->Text);
	snprintf(d.Trial2_1_D, 10, "%s", textBoxTrial2_1_D->Text);
	return d;
}