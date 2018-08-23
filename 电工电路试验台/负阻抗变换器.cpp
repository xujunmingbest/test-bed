#include "data_transf.h"
#include "���迹�任��ʵ������.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
using namespace �繤��·����̨;

void ���迹�任��ʵ������::SendData() {
	int TrialCode = 20;
	ST_���迹�任�� s;
	memset(&s, 0x00, sizeof(ST_���迹�任��));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_���迹�任��)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");


}

ST_���迹�任�� ���迹�任��ʵ������::Load_Grade_data() {
	ST_���迹�任�� d;
	memset(&d, 0x00, sizeof(ST_���迹�任��));



	snprintf(d.Trial1_300_U1,10,"%s",labelTrial1_300_U1->Text);
	snprintf(d.Trial1_300_I1, 10, "%s", labelTrial1_300_I1->Text);
	snprintf(d.Trial1_300_R_, 10, "%s", textBoxTrial1_300_R_->Text);
	snprintf(d.Trial1_600_U1, 10, "%s", labelTrial1_600_U1->Text);
	snprintf(d.Trial1_600_I1, 10, "%s", labelTrial1_600_I1->Text);
	snprintf(d.Trial1_600_R_, 10, "%s", textBoxTrial1_600_R_->Text);
	fileSql f;
	string bmp1 = f.Readfile(T_to_string(PT_name1));
	if (bmp1.length() == sizeof(d.Trial2_Bmp_1))
		memcpy(d.Trial2_Bmp_1, bmp1.c_str(), sizeof(d.Trial2_Bmp_1));

	string bmp2 = f.Readfile(T_to_string(PT_name2));
	if (bmp2.length() == sizeof(d.Trial2_Bmp_2))
		memcpy(d.Trial2_Bmp_2, bmp2.c_str(), sizeof(d.Trial2_Bmp_2));

	return d;
}