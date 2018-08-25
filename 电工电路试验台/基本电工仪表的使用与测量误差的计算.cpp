#include "基本电工仪表的使用与测量误差的计算实验内容.h"

#include "data_transf.h"
using namespace 电工电路试验台;


void 基本电工仪表的使用与测量误差的计算实验内容::SendData() {
	int TrialCode = 24;
	ST_基本电工仪表的使用与测量误差的计算 s;
	memset(&s, 0x00, sizeof(ST_基本电工仪表的使用与测量误差的计算));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_基本电工仪表的使用与测量误差的计算)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}

ST_基本电工仪表的使用与测量误差的计算 基本电工仪表的使用与测量误差的计算实验内容::Load_Grade_data() {
	ST_基本电工仪表的使用与测量误差的计算 d;
	memset(&d, 0x00, sizeof(ST_基本电工仪表的使用与测量误差的计算));
	snprintf(d.Trial1_IA_5mA, 10, "%s", labelTrial1_IA_5mA->Text);
	snprintf(d.Trial1_IA_5V, 10, "%s", labelTrial1_IA_5V->Text);
	snprintf(d.Trial1_IA1_5mA, 10, "%s", labelTrial1_IA1_5mA->Text);
	snprintf(d.Trial1_IA1_5V, 10, "%s", labelTrial1_IA1_5V->Text);
	snprintf(d.Trial1_RB_5mA, 10, "%s", textBoxTrial1_RB_5mA->Text);
	snprintf(d.Trial1_RB_5V, 10, "%s", textBoxTrial1_RB_5V->Text);
	snprintf(d.Trial1_R1_5mA, 10, "%s", textBoxTrial1_R1_5mA->Text);
	snprintf(d.Trial1_R1_5V, 10, "%s", textBoxTrial1_R1_5V->Text);
	snprintf(d.Trial1_RA_5mA, 10, "%s", textBoxTrial1_RA_5mA->Text);
	snprintf(d.Trial1_RA_5V, 10, "%s", textBoxTrial1_RA_5V->Text);

	return d;
}