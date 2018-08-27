#include "data_transf.h"
#include "������ʵ������.h"

using namespace �繤��·����̨;

void ������ʵ������::SendData() {
	int TrialCode = 23;
	ST_������ s;
	memset(&s, 0x00, sizeof(ST_������));
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
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_������)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");


}

ST_������ ������ʵ������::Load_Grade_data() {
	ST_������ d;
	memset(&d, 0x00, sizeof(ST_������));

	snprintf(d.Trial3_Line1_1, 10, "%s", textBoxTrial3_Line1_1->Text);
	snprintf(d.Trial3_Line1_2, 10, "%s", textBoxTrial3_Line1_2->Text);
	snprintf(d.Trial3_Line1_3, 10, "%s", textBoxTrial3_Line1_3->Text);
	snprintf(d.Trial3_Line1_4, 10, "%s", textBoxTrial3_Line1_4->Text);
	snprintf(d.Trial3_Line1_5, 10, "%s", textBoxTrial3_Line1_5->Text);
	snprintf(d.Trial3_Line1_6, 10, "%s", textBoxTrial3_Line1_6->Text);

	snprintf(d.Trial3_Line2_1, 10, "%s", textBoxTrial3_Line2_1->Text);
	snprintf(d.Trial3_Line2_2, 10, "%s", textBoxTrial3_Line2_2->Text);
	snprintf(d.Trial3_Line2_3, 10, "%s", textBoxTrial3_Line2_3->Text);
	snprintf(d.Trial3_Line2_4, 10, "%s", textBoxTrial3_Line2_4->Text);
	snprintf(d.Trial3_Line2_5, 10, "%s", textBoxTrial3_Line2_5->Text);
	snprintf(d.Trial3_Line2_6, 10, "%s", textBoxTrial3_Line2_6->Text);

	snprintf(d.Trial4_Line1_1, 10, "%s", textBoxTrial4_Line1_1->Text);
	snprintf(d.Trial4_Line1_2, 10, "%s", textBoxTrial4_Line1_2->Text);
	snprintf(d.Trial4_Line1_3, 10, "%s", textBoxTrial4_Line1_3->Text);
	snprintf(d.Trial4_Line1_4, 10, "%s", textBoxTrial4_Line1_4->Text);
	snprintf(d.Trial4_Line1_5, 10, "%s", textBoxTrial4_Line1_5->Text);
	snprintf(d.Trial4_Line1_6, 10, "%s", textBoxTrial4_Line1_6->Text);

	snprintf(d.Trial4_Line2_1, 10, "%s", textBoxTrial4_Line2_1->Text);
	snprintf(d.Trial4_Line2_2, 10, "%s", textBoxTrial4_Line2_2->Text);
	snprintf(d.Trial4_Line2_3, 10, "%s", textBoxTrial4_Line2_3->Text);
	snprintf(d.Trial4_Line2_4, 10, "%s", textBoxTrial4_Line2_4->Text);
	snprintf(d.Trial4_Line2_5, 10, "%s", textBoxTrial4_Line2_5->Text);
	snprintf(d.Trial4_Line2_6, 10, "%s", textBoxTrial4_Line2_6->Text);

	return d;
}