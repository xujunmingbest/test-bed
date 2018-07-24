#include "基尔霍夫定律实验内容.h"
#include "data_transf.h"
using namespace 电工电路试验台;


ST_基尔霍夫定律 基尔霍夫定律实验内容::Load_Grade_data() {
	ST_基尔霍夫定律 d;
	snprintf(d.测量I1, 10, "%s", labelmeaI1->Text);
	snprintf(d.测量I2, 10, "%s", labelmeaI2->Text);
	snprintf(d.测量I3, 10, "%s", labelmeaI3->Text);
	snprintf(d.测量U11, 10, "%s", labelmeaU11->Text);
	snprintf(d.测量U12, 10, "%s", labelmeaU12->Text);
	snprintf(d.测量UDE, 10, "%s", labelmeaUDE->Text);
	snprintf(d.测量UFA, 10, "%s", labelmeaUFA->Text);
	snprintf(d.测量UAB, 10, "%s", labelmeaUAB->Text);
	snprintf(d.测量UBC, 10, "%s", labelmeaUBC->Text);
	snprintf(d.测量UCD, 10, "%s", labelmeaUCD->Text);

	snprintf(d.误差I1, 10, "%s", labelrelaI1->Text);
	snprintf(d.误差I2, 10, "%s", labelrelaI2->Text);
	snprintf(d.误差I3, 10, "%s", labelrelaI3->Text);
	snprintf(d.误差U11, 10, "%s", labelrelaU11->Text);
	snprintf(d.误差U12, 10, "%s", labelrelaU12->Text);
	snprintf(d.误差UDE, 10, "%s", labelrelaUDE->Text);
	snprintf(d.误差UFA, 10, "%s", labelrelaUFA->Text);
	snprintf(d.误差UAB, 10, "%s", labelrelaUAB->Text);
	snprintf(d.误差UBC, 10, "%s", labelrelaUBC->Text);
	snprintf(d.误差UCD, 10, "%s", labelrelaUCD->Text);

	snprintf(d.计算I1, 10, "%s", textBoxcalI1->Text);
	snprintf(d.计算I2, 10, "%s", textBoxcalI2->Text);
	snprintf(d.计算I3, 10, "%s", textBoxcalI3->Text);
	snprintf(d.计算U11, 10, "%s", textBoxcalU11->Text);
	snprintf(d.计算U12, 10, "%s", textBoxcalU12->Text);
	snprintf(d.计算UDE, 10, "%s", textBoxcalUDE->Text);
	snprintf(d.计算UFA, 10, "%s", textBoxcalUFA->Text);
	snprintf(d.计算UAB, 10, "%s", textBoxcalUAB->Text);
	snprintf(d.计算UBC, 10, "%s", textBoxcalUBC->Text);
	snprintf(d.计算UCD, 10, "%s", textBoxcalUCD->Text);

	snprintf(d.summing_up, 100, "%s", textBox结论->Text);
	return d;
}

void 基尔霍夫定律实验内容::SendGrade() {
	int TrialCode = 2;
	ST_基尔霍夫定律 s;
	memset(&s, 0x00, sizeof(ST_基尔霍夫定律)); 
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_基尔霍夫定律)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");

}