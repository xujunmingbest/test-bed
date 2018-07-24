#include "叠加原理实验内容.h"
#include "data_transf.h"
using namespace 电工电路试验台;

void 叠加原理实验内容::SendData() {
	int TrialCode = 3;
	ST_叠加原理 s;
	memset(&s, 0x00, sizeof(ST_叠加原理));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_叠加原理)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}


ST_叠加原理 叠加原理实验内容::Load_Grade_data() {
	ST_叠加原理 d;
	memset(&d,0x00,sizeof(ST_叠加原理));

	snprintf(d.Line3I1, 10, "%s", labelLine3I1->Text);
	snprintf(d.Line3I2, 10, "%s", labelLine3I2->Text);
	snprintf(d.Line3I3, 10, "%s", labelLine3I3->Text);
	snprintf(d.Line3U11, 10, "%s", labelLine3U11->Text);
	snprintf(d.Line3U12, 10, "%s", labelLine3U12->Text);
	snprintf(d.Line3UDE, 10, "%s", labelLine3UDE->Text);
	snprintf(d.Line3UFA, 10, "%s", labelLine3UFA->Text);
	snprintf(d.Line3UAB, 10, "%s", labelLine3UAB->Text);
	snprintf(d.Line3UBC, 10, "%s", labelLine3UBC->Text);
	snprintf(d.Line3UCD, 10, "%s", labelLine3UCD->Text);

	snprintf(d.Line2I1, 10, "%s", labelLine2I1->Text);
	snprintf(d.Line2I2, 10, "%s", labelLine2I2->Text);
	snprintf(d.Line2I3, 10, "%s", labelLine2I3->Text);
	snprintf(d.Line2U11, 10, "%s", labelLine2U11->Text);
	snprintf(d.Line2U12, 10, "%s", labelLine2U12->Text);
	snprintf(d.Line2UDE, 10, "%s", labelLine2UDE->Text);
	snprintf(d.Line2UFA, 10, "%s", labelLine2UFA->Text);
	snprintf(d.Line2UAB, 10, "%s", labelLine2UAB->Text);
	snprintf(d.Line2UBC, 10, "%s", labelLine2UBC->Text);
	snprintf(d.Line2UCD, 10, "%s", labelLine2UCD->Text);

	snprintf(d.Line3I1, 10, "%s", labelLine3I1->Text);
	snprintf(d.Line3I2, 10, "%s", labelLine3I2->Text);
	snprintf(d.Line3I3, 10, "%s", labelLine3I3->Text);
	snprintf(d.Line3U11, 10, "%s", labelLine3U11->Text);
	snprintf(d.Line3U12, 10, "%s", labelLine3U12->Text);
	snprintf(d.Line3UDE, 10, "%s", labelLine3UDE->Text);
	snprintf(d.Line3UFA, 10, "%s", labelLine3UFA->Text);
	snprintf(d.Line3UAB, 10, "%s", labelLine3UAB->Text);
	snprintf(d.Line3UBC, 10, "%s", labelLine3UBC->Text);
	snprintf(d.Line3UCD, 10, "%s", labelLine3UCD->Text);

	snprintf(d.Line4I1, 10, "%s", labelLine4I1->Text);
	snprintf(d.Line4I2, 10, "%s", labelLine4I2->Text);
	snprintf(d.Line4I3, 10, "%s", labelLine4I3->Text);
	snprintf(d.Line4U11, 10, "%s", labelLine4U11->Text);
	snprintf(d.Line4U12, 10, "%s", labelLine4U12->Text);
	snprintf(d.Line4UDE, 10, "%s", labelLine4UDE->Text);
	snprintf(d.Line4UFA, 10, "%s", labelLine4UFA->Text);
	snprintf(d.Line4UAB, 10, "%s", labelLine4UAB->Text);
	snprintf(d.Line4UBC, 10, "%s", labelLine4UBC->Text);
	snprintf(d.Line4UCD, 10, "%s", labelLine4UCD->Text);

	snprintf(d.Line5I1, 10, "%s", labelLine5I1->Text);
	snprintf(d.Line5I2, 10, "%s", labelLine5I2->Text);
	snprintf(d.Line5I3, 10, "%s", labelLine5I3->Text);
	snprintf(d.Line5U11, 10, "%s", labelLine5U11->Text);
	snprintf(d.Line5U12, 10, "%s", labelLine5U12->Text);
	snprintf(d.Line5UDE, 10, "%s", labelLine5UDE->Text);
	snprintf(d.Line5UFA, 10, "%s", labelLine5UFA->Text);
	snprintf(d.Line5UAB, 10, "%s", labelLine5UAB->Text);
	snprintf(d.Line5UBC, 10, "%s", labelLine5UBC->Text);
	snprintf(d.Line5UCD, 10, "%s", labelLine5UCD->Text);

	snprintf(d.Line6I1, 10, "%s", labelLine6I1->Text);
	snprintf(d.Line6I2, 10, "%s", labelLine6I2->Text);
	snprintf(d.Line6I3, 10, "%s", labelLine6I3->Text);
	snprintf(d.Line6U11, 10, "%s", labelLine6U11->Text);
	snprintf(d.Line6U12, 10, "%s", labelLine6U12->Text);
	snprintf(d.Line6UDE, 10, "%s", labelLine6UDE->Text);
	snprintf(d.Line6UFA, 10, "%s", labelLine6UFA->Text);
	snprintf(d.Line6UAB, 10, "%s", labelLine6UAB->Text);
	snprintf(d.Line6UBC, 10, "%s", labelLine6UBC->Text);
	snprintf(d.Line6UCD, 10, "%s", labelLine6UCD->Text);

	snprintf(d.Line7I1, 10, "%s", labelLine7I1->Text);
	snprintf(d.Line7I2, 10, "%s", labelLine7I2->Text);
	snprintf(d.Line7I3, 10, "%s", labelLine7I3->Text);
	snprintf(d.Line7U11, 10, "%s", labelLine7U11->Text);
	snprintf(d.Line7U12, 10, "%s", labelLine7U12->Text);
	snprintf(d.Line7UDE, 10, "%s", labelLine7UDE->Text);
	snprintf(d.Line7UFA, 10, "%s", labelLine7UFA->Text);
	snprintf(d.Line7UAB, 10, "%s", labelLine7UAB->Text);
	snprintf(d.Line7UBC, 10, "%s", labelLine7UBC->Text);
	snprintf(d.Line7UCD, 10, "%s", labelLine7UCD->Text);

	snprintf(d.Line8I1, 10, "%s", labelLine8I1->Text);
	snprintf(d.Line8I2, 10, "%s", labelLine8I2->Text);
	snprintf(d.Line8I3, 10, "%s", labelLine8I3->Text);
	snprintf(d.Line8U11, 10, "%s", labelLine8U11->Text);
	snprintf(d.Line8U12, 10, "%s", labelLine8U12->Text);
	snprintf(d.Line8UDE, 10, "%s", labelLine8UDE->Text);
	snprintf(d.Line8UFA, 10, "%s", labelLine8UFA->Text);
	snprintf(d.Line8UAB, 10, "%s", labelLine8UAB->Text);
	snprintf(d.Line8UBC, 10, "%s", labelLine8UBC->Text);
	snprintf(d.Line8UCD, 10, "%s", labelLine8UCD->Text);

	snprintf(d.summing_up,100,"%s", textBox结论->Text);

	return d;
}