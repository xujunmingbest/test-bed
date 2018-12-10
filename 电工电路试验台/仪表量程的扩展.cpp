#include "仪表量程的扩展实验内容.h"
#include "data_transf.h"
using namespace 电工电路试验台;

void 仪表量程的扩展实验内容::SendData() {
	int TrialCode = 22;
	ST_仪表量程的扩展 s;
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_仪表量程的扩展)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}


ST_仪表量程的扩展 仪表量程的扩展实验内容::Load_Grade_data() {
	ST_仪表量程的扩展 d;
	memset(&d, 0x00, sizeof(ST_仪表量程的扩展));

	snprintf(d.Trial1_1, 10, "%s", textBoxTrial1_1->Text);
	snprintf(d.Trial1_2, 10, "%s", textBoxTrial1_2->Text);
	snprintf(d.Trial1_3, 10, "%s", textBoxTrial1_3->Text);
	snprintf(d.Trial1_4, 10, "%s", textBoxTrial1_4->Text);
	snprintf(d.Trial1_5, 10, "%s", textBoxTrial1_5->Text);
	snprintf(d.Trial1_6, 10, "%s", textBoxTrial1_6->Text);

	snprintf(d.Trial2_1, 10, "%s", textBoxTrial2_1->Text);
	snprintf(d.Trial2_2, 10, "%s", textBoxTrial2_2->Text);
	snprintf(d.Trial2_3, 10, "%s", textBoxTrial2_3->Text);
	snprintf(d.Trial2_4, 10, "%s", textBoxTrial2_4->Text);
	snprintf(d.Trial2_5, 10, "%s", textBoxTrial2_5->Text);
	snprintf(d.Trial2_6, 10, "%s", textBoxTrial2_6->Text);

	snprintf(d.Trial3_1, 10, "%s", textBoxTrial3_1->Text);
	snprintf(d.Trial3_2, 10, "%s", textBoxTrial3_2->Text);
	snprintf(d.Trial3_3, 10, "%s", textBoxTrial3_3->Text);
	snprintf(d.Trial3_4, 10, "%s", textBoxTrial3_4->Text);
	snprintf(d.Trial3_5, 10, "%s", textBoxTrial3_5->Text);
	snprintf(d.Trial3_6, 10, "%s", textBoxTrial3_6->Text);
	return d;
}