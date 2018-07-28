#include "戴维南定理实验内容.h"
#include "data_transf.h"

using namespace 电工电路试验台;

void 戴维南定理实验内容::SendData() {
	int TrialCode = 4;
	ST_戴维南定理 s;
	memset(&s, 0x00, sizeof(ST_戴维南定理));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_戴维南定理)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_戴维南定理 戴维南定理实验内容::Load_Grade_data() {
	ST_戴维南定理 d;
	memset(&d, 0x00, sizeof(ST_戴维南定理));

	snprintf(d.Method1Isc, 10, "%s", labelMethod1Isc->Text);
	snprintf(d.Method1Ro, 10, "%s", textBoxMethod1Ro->Text);
	snprintf(d.Method1Uoc, 10, "%s", labelMethod1Uoc->Text);
	snprintf(d.Method2I1, 10, "%s", labelMethod2I1->Text);
	snprintf(d.Method2I2, 10, "%s", labelMethod2I2->Text);
	snprintf(d.Method2I3, 10, "%s", labelMethod2I3->Text);
	snprintf(d.Method2I4, 10, "%s", labelMethod2I4->Text);
	snprintf(d.Method2I5, 10, "%s", labelMethod2I5->Text);
	snprintf(d.Method2I6, 10, "%s", labelMethod2I6->Text);
	snprintf(d.Method2I7, 10, "%s", labelMethod2I7->Text);
	snprintf(d.Method2I8, 10, "%s", labelMethod2I8->Text);
	snprintf(d.Method2I9, 10, "%s", labelMethod2I9->Text);
	snprintf(d.Method2I10,10, "%s", labelMethod2I10->Text);
	snprintf(d.Method2RL1, 10, "%s", textBoxMethod2RL1->Text);
	snprintf(d.Method2RL2, 10, "%s", textBoxMethod2RL2->Text);
	snprintf(d.Method2RL3, 10, "%s", textBoxMethod2RL3->Text);
	snprintf(d.Method2RL4, 10, "%s", textBoxMethod2RL4->Text);
	snprintf(d.Method2RL5, 10, "%s", textBoxMethod2RL5->Text);
	snprintf(d.Method2RL6, 10, "%s", textBoxMethod2RL6->Text);
	snprintf(d.Method2RL7, 10, "%s", textBoxMethod2RL7->Text);
	snprintf(d.Method2RL8, 10, "%s", textBoxMethod2RL8->Text);
	snprintf(d.Method2RL9, 10, "%s", textBoxMethod2RL9->Text);
	snprintf(d.Method2RL10, 10, "%s", textBoxMethod2RL10->Text);

	snprintf(d.Method3ro, 10, "%s", textBoxMethod3Ro->Text);
	snprintf(d.Method3Uoc, 10, "%s", textBoxMethod3Uoc->Text);

	snprintf(d.Method6I1, 10, "%s", labelMethod6I1->Text);
	snprintf(d.Method6I2, 10, "%s", labelMethod6I2->Text);
	snprintf(d.Method6I3, 10, "%s", labelMethod6I3->Text);
	snprintf(d.Method6I4, 10, "%s", labelMethod6I4->Text);
	snprintf(d.Method6I5, 10, "%s", labelMethod6I5->Text);
	snprintf(d.Method6I6, 10, "%s", labelMethod6I6->Text);
	snprintf(d.Method6I7, 10, "%s", labelMethod6I7->Text);
	snprintf(d.Method6I8, 10, "%s", labelMethod6I8->Text);
	snprintf(d.Method6I9, 10, "%s", labelMethod6I9->Text);
	snprintf(d.Method6I10, 10, "%s", labelMethod6I10->Text);
	snprintf(d.Method6RL1, 10, "%s", textBoxMethod6RL1->Text);
	snprintf(d.Method6RL2, 10, "%s", textBoxMethod6RL2->Text);
	snprintf(d.Method6RL3, 10, "%s", textBoxMethod6RL3->Text);
	snprintf(d.Method6RL4, 10, "%s", textBoxMethod6RL4->Text);
	snprintf(d.Method6RL5, 10, "%s", textBoxMethod6RL5->Text);
	snprintf(d.Method6RL6, 10, "%s", textBoxMethod6RL6->Text);
	snprintf(d.Method6RL7, 10, "%s", textBoxMethod6RL7->Text);
	snprintf(d.Method6RL8, 10, "%s", textBoxMethod6RL8->Text);
	snprintf(d.Method6RL9, 10, "%s", textBoxMethod6RL9->Text);
	snprintf(d.Method6RL10, 10, "%s", textBoxMethod6RL10->Text);

	snprintf(d.summing_up, 100, "%s", textBox结论->Text);
	return d;
}