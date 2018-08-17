#include "单相电度表实验实验内容.h"

#include "data_transf.h"


using namespace 电工电路试验台;

void 单相电度表实验实验内容::SendData() {
	int TrialCode = 15;
	ST_单相电度表实验 s;
	memset(&s, 0x00, sizeof(ST_单相电度表实验));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_单相电度表实验)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_单相电度表实验 单相电度表实验实验内容::Load_Grade_data() {
	ST_单相电度表实验 d;
	memset(&d, 0x00, sizeof(ST_单相电度表实验));

	snprintf(d.Trial1_IN, 10, "%s", textBoxTrial1_IN->Text);
	snprintf(d.Trial1_N, 10, "%s", textBoxTrial1_N->Text);
	snprintf(d.Trial1_UN, 10, "%s", textBoxTrial1_UN->Text);
	snprintf(d.Trial1_accuracy, 10, "%s", textBoxTrial1_accuracy->Text);;
	snprintf(d.Trial1_mea_V, 10, "%s", labelTrial1_mea_V->Text);
	snprintf(d.Trial1_mea_I, 10, "%s", labelTrial1_mea_I->Text);
	snprintf(d.Trial1_mea_P, 10, "%s", labelTrial1_mea_P->Text);
	snprintf(d.Trial1_mea_time, 10, "%s", textBoxTrial1_mea_time->Text);
	snprintf(d.Trial1_mea_n, 10, "%s", textBoxTrial1_mea_n->Text);
	snprintf(d.Trial1_cal_meaW, 10, "%s", textBoxTrial1_cal_meaW->Text);
	snprintf(d.Trial1_cal_calW, 10, "%s", textBoxTrial1_cal_calW->Text);
	snprintf(d.Trial1_cal_WW, 10, "%s", textBoxTrial1_cal_WW->Text);
	snprintf(d.Trial1_cal_N, 10, "%s", textBoxTrial1_cal_N->Text);
	return d;
}


