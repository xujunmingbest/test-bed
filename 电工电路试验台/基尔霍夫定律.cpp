#include "����������ʵ������.h"
#include "data_transf.h"
using namespace �繤��·����̨;


ST_���������� ����������ʵ������::Load_Grade_data() {
	ST_���������� d;
	snprintf(d.����I1, 10, "%s", labelmeaI1->Text);
	snprintf(d.����I2, 10, "%s", labelmeaI2->Text);
	snprintf(d.����I3, 10, "%s", labelmeaI3->Text);
	snprintf(d.����U11, 10, "%s", labelmeaU11->Text);
	snprintf(d.����U12, 10, "%s", labelmeaU12->Text);
	snprintf(d.����UDE, 10, "%s", labelmeaUDE->Text);
	snprintf(d.����UFA, 10, "%s", labelmeaUFA->Text);
	snprintf(d.����UAB, 10, "%s", labelmeaUAB->Text);
	snprintf(d.����UBC, 10, "%s", labelmeaUBC->Text);
	snprintf(d.����UCD, 10, "%s", labelmeaUCD->Text);

	snprintf(d.���I1, 10, "%s", labelrelaI1->Text);
	snprintf(d.���I2, 10, "%s", labelrelaI2->Text);
	snprintf(d.���I3, 10, "%s", labelrelaI3->Text);
	snprintf(d.���U11, 10, "%s", labelrelaU11->Text);
	snprintf(d.���U12, 10, "%s", labelrelaU12->Text);
	snprintf(d.���UDE, 10, "%s", labelrelaUDE->Text);
	snprintf(d.���UFA, 10, "%s", labelrelaUFA->Text);
	snprintf(d.���UAB, 10, "%s", labelrelaUAB->Text);
	snprintf(d.���UBC, 10, "%s", labelrelaUBC->Text);
	snprintf(d.���UCD, 10, "%s", labelrelaUCD->Text);

	snprintf(d.����I1, 10, "%s", textBoxcalI1->Text);
	snprintf(d.����I2, 10, "%s", textBoxcalI2->Text);
	snprintf(d.����I3, 10, "%s", textBoxcalI3->Text);
	snprintf(d.����U11, 10, "%s", textBoxcalU11->Text);
	snprintf(d.����U12, 10, "%s", textBoxcalU12->Text);
	snprintf(d.����UDE, 10, "%s", textBoxcalUDE->Text);
	snprintf(d.����UFA, 10, "%s", textBoxcalUFA->Text);
	snprintf(d.����UAB, 10, "%s", textBoxcalUAB->Text);
	snprintf(d.����UBC, 10, "%s", textBoxcalUBC->Text);
	snprintf(d.����UCD, 10, "%s", textBoxcalUCD->Text);

	snprintf(d.summing_up, 100, "%s", textBox����->Text);
	return d;
}

void ����������ʵ������::SendGrade() {
	int TrialCode = 2;
	ST_���������� s;
	memset(&s, 0x00, sizeof(ST_����������)); 
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_����������)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");

}