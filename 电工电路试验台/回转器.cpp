#include "data_transf.h"
#include "回转器实验内容.h"

using namespace 电工电路试验台;

void 回转器实验内容::SendData() {
	int TrialCode = 18;
	ST_回转器 s;
	memset(&s, 0x00, sizeof(ST_回转器));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_回转器)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"

ST_回转器 回转器实验内容::Load_Grade_data() {
	ST_回转器 d;
	memset(&d, 0x00, sizeof(ST_回转器));

	fileSql f;
	string trial1bmp_U = f.Readfile(T_to_string(trial1Path_U));
	if (trial1bmp_U.length() == sizeof(d.Trial1_Bmp_U))
		memcpy(d.Trial1_Bmp_U, trial1bmp_U.c_str(), sizeof(d.Trial1_Bmp_U));
	string trial1bmp_I = f.Readfile(T_to_string(trial1Path_I));
	if (trial1bmp_I.length() == sizeof(d.Trial1_Bmp_U))
		memcpy(d.Trial1_Bmp_U, trial1bmp_I.c_str(), sizeof(d.Trial1_Bmp_U));


	snprintf(d.Trial1_U1_line1, 10, "%s", labelTrial1_U1_line1->Text);
	snprintf(d.Trial1_U1_line2, 10, "%s", labelTrial1_U1_line2->Text);
	snprintf(d.Trial1_U1_line3, 10, "%s", labelTrial1_U1_line3->Text);
	snprintf(d.Trial1_U1_line4, 10, "%s", labelTrial1_U1_line4->Text);
	snprintf(d.Trial1_U1_line5, 10, "%s", labelTrial1_U1_line5->Text);
	snprintf(d.Trial1_U1_line6, 10, "%s", labelTrial1_U1_line6->Text);
	snprintf(d.Trial1_U1_line7, 10, "%s", labelTrial1_U1_line7->Text);

	snprintf(d.Trial1_U2_line1, 10, "%s", labelTrial1_U2_line1->Text);
	snprintf(d.Trial1_U2_line2, 10, "%s", labelTrial1_U2_line2->Text);
	snprintf(d.Trial1_U2_line3, 10, "%s", labelTrial1_U2_line3->Text);
	snprintf(d.Trial1_U2_line4, 10, "%s", labelTrial1_U2_line4->Text);
	snprintf(d.Trial1_U2_line5, 10, "%s", labelTrial1_U2_line5->Text);
	snprintf(d.Trial1_U2_line6, 10, "%s", labelTrial1_U2_line6->Text);
	snprintf(d.Trial1_U2_line7, 10, "%s", labelTrial1_U2_line7->Text);

	snprintf(d.Trial1_I1_line1, 10, "%s", labelTrial1_I1_line1->Text);
	snprintf(d.Trial1_I1_line2, 10, "%s", labelTrial1_I1_line2->Text);
	snprintf(d.Trial1_I1_line3, 10, "%s", labelTrial1_I1_line3->Text);
	snprintf(d.Trial1_I1_line4, 10, "%s", labelTrial1_I1_line4->Text);
	snprintf(d.Trial1_I1_line5, 10, "%s", labelTrial1_I1_line5->Text);
	snprintf(d.Trial1_I1_line6, 10, "%s", labelTrial1_I1_line6->Text);
	snprintf(d.Trial1_I1_line7, 10, "%s", labelTrial1_I1_line7->Text);

	snprintf(d.Trial1_I2_line1, 10, "%s", labelTrial1_I2_line1->Text);
	snprintf(d.Trial1_I2_line2, 10, "%s", labelTrial1_I2_line2->Text);
	snprintf(d.Trial1_I2_line3, 10, "%s", labelTrial1_I2_line3->Text);
	snprintf(d.Trial1_I2_line4, 10, "%s", labelTrial1_I2_line4->Text);
	snprintf(d.Trial1_I2_line5, 10, "%s", labelTrial1_I2_line5->Text);
	snprintf(d.Trial1_I2_line6, 10, "%s", labelTrial1_I2_line6->Text);
	snprintf(d.Trial1_I2_line7, 10, "%s", labelTrial1_I2_line7->Text);

	snprintf(d.Trial1_G1_line1, 10, "%s", textBoxTrial1_G1_line1->Text);
	snprintf(d.Trial1_G1_line2, 10, "%s", textBoxTrial1_G1_line2->Text);
	snprintf(d.Trial1_G1_line3, 10, "%s", textBoxTrial1_G1_line3->Text);
	snprintf(d.Trial1_G1_line4, 10, "%s", textBoxTrial1_G1_line4->Text);
	snprintf(d.Trial1_G1_line5, 10, "%s", textBoxTrial1_G1_line5->Text);
	snprintf(d.Trial1_G1_line6, 10, "%s", textBoxTrial1_G1_line6->Text);
	snprintf(d.Trial1_G1_line7, 10, "%s", textBoxTrial1_G1_line7->Text);

	snprintf(d.Trial1_G2_line1, 10, "%s", textBoxTrial1_G2_line1->Text);
	snprintf(d.Trial1_G2_line2, 10, "%s", textBoxTrial1_G2_line2->Text);
	snprintf(d.Trial1_G2_line3, 10, "%s", textBoxTrial1_G2_line3->Text);
	snprintf(d.Trial1_G2_line4, 10, "%s", textBoxTrial1_G2_line4->Text);
	snprintf(d.Trial1_G2_line5, 10, "%s", textBoxTrial1_G2_line5->Text);
	snprintf(d.Trial1_G2_line6, 10, "%s", textBoxTrial1_G2_line6->Text);
	snprintf(d.Trial1_G2_line7, 10, "%s", textBoxTrial1_G2_line7->Text);

	snprintf(d.Trial1_GAver_line1, 10, "%s", textBoxTrial1_GAver_line1->Text);
	snprintf(d.Trial1_GAver_line2, 10, "%s", textBoxTrial1_GAver_line2->Text);
	snprintf(d.Trial1_GAver_line3, 10, "%s", textBoxTrial1_GAver_line3->Text);
	snprintf(d.Trial1_GAver_line4, 10, "%s", textBoxTrial1_GAver_line4->Text);
	snprintf(d.Trial1_GAver_line5, 10, "%s", textBoxTrial1_GAver_line5->Text);
	snprintf(d.Trial1_GAver_line6, 10, "%s", textBoxTrial1_GAver_line6->Text);
	snprintf(d.Trial1_GAver_line7, 10, "%s", textBoxTrial1_GAver_line7->Text);


	snprintf(d.Trial2_F200_line1, 10, "%s", labelTrial2_F200_line1->Text);
	snprintf(d.Trial2_F200_line2, 10, "%s", labelTrial2_F200_line2->Text);
	snprintf(d.Trial2_F200_line3, 10, "%s", labelTrial2_F200_line3->Text);
	snprintf(d.Trial2_F200_line4, 10, "%s", textBoxTrial2_F200_line4->Text);
	snprintf(d.Trial2_F200_line5, 10, "%s", textBoxTrial2_F200_line5->Text);
	snprintf(d.Trial2_F200_line6, 10, "%s", textBoxTrial2_F200_line6->Text);
	snprintf(d.Trial2_F200_line7, 10, "%s", textBoxTrial2_F200_line7->Text);

	snprintf(d.Trial2_F400_line1, 10, "%s", labelTrial2_F400_line1->Text);
	snprintf(d.Trial2_F400_line2, 10, "%s", labelTrial2_F400_line2->Text);
	snprintf(d.Trial2_F400_line3, 10, "%s", labelTrial2_F400_line3->Text);
	snprintf(d.Trial2_F400_line4, 10, "%s", textBoxTrial2_F400_line4->Text);
	snprintf(d.Trial2_F400_line5, 10, "%s", textBoxTrial2_F400_line5->Text);
	snprintf(d.Trial2_F400_line6, 10, "%s", textBoxTrial2_F400_line6->Text);
	snprintf(d.Trial2_F400_line7, 10, "%s", textBoxTrial2_F400_line7->Text);

	snprintf(d.Trial2_F500_line1, 10, "%s", labelTrial2_F500_line1->Text);
	snprintf(d.Trial2_F500_line2, 10, "%s", labelTrial2_F500_line2->Text);
	snprintf(d.Trial2_F500_line3, 10, "%s", labelTrial2_F500_line3->Text);
	snprintf(d.Trial2_F500_line4, 10, "%s", textBoxTrial2_F500_line4->Text);
	snprintf(d.Trial2_F500_line5, 10, "%s", textBoxTrial2_F500_line5->Text);
	snprintf(d.Trial2_F500_line6, 10, "%s", textBoxTrial2_F500_line6->Text);
	snprintf(d.Trial2_F500_line7, 10, "%s", textBoxTrial2_F500_line7->Text);

	snprintf(d.Trial2_F700_line1, 10, "%s", labelTrial2_F700_line1->Text);
	snprintf(d.Trial2_F700_line2, 10, "%s", labelTrial2_F700_line2->Text);
	snprintf(d.Trial2_F700_line3, 10, "%s", labelTrial2_F700_line3->Text);
	snprintf(d.Trial2_F700_line4, 10, "%s", textBoxTrial2_F700_line4->Text);
	snprintf(d.Trial2_F700_line5, 10, "%s", textBoxTrial2_F700_line5->Text);
	snprintf(d.Trial2_F700_line6, 10, "%s", textBoxTrial2_F700_line6->Text);
	snprintf(d.Trial2_F700_line7, 10, "%s", textBoxTrial2_F700_line7->Text);

	snprintf(d.Trial2_F800_line1, 10, "%s", labelTrial2_F800_line1->Text);
	snprintf(d.Trial2_F800_line2, 10, "%s", labelTrial2_F800_line2->Text);
	snprintf(d.Trial2_F800_line3, 10, "%s", labelTrial2_F800_line3->Text);
	snprintf(d.Trial2_F800_line4, 10, "%s", textBoxTrial2_F800_line4->Text);
	snprintf(d.Trial2_F800_line5, 10, "%s", textBoxTrial2_F800_line5->Text);
	snprintf(d.Trial2_F800_line6, 10, "%s", textBoxTrial2_F800_line6->Text);
	snprintf(d.Trial2_F800_line7, 10, "%s", textBoxTrial2_F800_line7->Text);


	snprintf(d.Trial2_F900_line1, 10, "%s", labelTrial2_F900_line1->Text);
	snprintf(d.Trial2_F900_line2, 10, "%s", labelTrial2_F900_line2->Text);
	snprintf(d.Trial2_F900_line3, 10, "%s", labelTrial2_F900_line3->Text);
	snprintf(d.Trial2_F900_line4, 10, "%s", textBoxTrial2_F900_line4->Text);
	snprintf(d.Trial2_F900_line5, 10, "%s", textBoxTrial2_F900_line5->Text);
	snprintf(d.Trial2_F900_line6, 10, "%s", textBoxTrial2_F900_line6->Text);
	snprintf(d.Trial2_F900_line7, 10, "%s", textBoxTrial2_F900_line7->Text);

	snprintf(d.Trial2_F1000_line1, 10, "%s", labelTrial2_F1000_line1->Text);
	snprintf(d.Trial2_F1000_line2, 10, "%s", labelTrial2_F1000_line2->Text);
	snprintf(d.Trial2_F1000_line3, 10, "%s", labelTrial2_F1000_line3->Text);
	snprintf(d.Trial2_F1000_line4, 10, "%s", textBoxTrial2_F1000_line4->Text);
	snprintf(d.Trial2_F1000_line5, 10, "%s", textBoxTrial2_F1000_line5->Text);
	snprintf(d.Trial2_F1000_line6, 10, "%s", textBoxTrial2_F1000_line6->Text);
	snprintf(d.Trial2_F1000_line7, 10, "%s", textBoxTrial2_F1000_line7->Text);

	snprintf(d.Trial2_F1200_line1, 10, "%s", labelTrial2_F1200_line1->Text);
	snprintf(d.Trial2_F1200_line2, 10, "%s", labelTrial2_F1200_line2->Text);
	snprintf(d.Trial2_F1200_line3, 10, "%s", labelTrial2_F1200_line3->Text);
	snprintf(d.Trial2_F1200_line4, 10, "%s", textBoxTrial2_F1200_line4->Text);
	snprintf(d.Trial2_F1200_line5, 10, "%s", textBoxTrial2_F1200_line5->Text);
	snprintf(d.Trial2_F1200_line6, 10, "%s", textBoxTrial2_F1200_line6->Text);
	snprintf(d.Trial2_F1200_line7, 10, "%s", textBoxTrial2_F1200_line7->Text);

	snprintf(d.Trial2_F1300_line1, 10, "%s", labelTrial2_F1300_line1->Text);
	snprintf(d.Trial2_F1300_line2, 10, "%s", labelTrial2_F1300_line2->Text);
	snprintf(d.Trial2_F1300_line3, 10, "%s", labelTrial2_F1300_line3->Text);
	snprintf(d.Trial2_F1300_line4, 10, "%s", textBoxTrial2_F1300_line4->Text);
	snprintf(d.Trial2_F1300_line5, 10, "%s", textBoxTrial2_F1300_line5->Text);
	snprintf(d.Trial2_F1300_line6, 10, "%s", textBoxTrial2_F1300_line6->Text);
	snprintf(d.Trial2_F1300_line7, 10, "%s", textBoxTrial2_F1300_line7->Text);

	snprintf(d.Trial2_F1500_line1, 10, "%s", labelTrial2_F1500_line1->Text);
	snprintf(d.Trial2_F1500_line2, 10, "%s", labelTrial2_F1500_line2->Text);
	snprintf(d.Trial2_F1500_line3, 10, "%s", labelTrial2_F1500_line3->Text);
	snprintf(d.Trial2_F1500_line4, 10, "%s", textBoxTrial2_F1500_line4->Text);
	snprintf(d.Trial2_F1500_line5, 10, "%s", textBoxTrial2_F1500_line5->Text);
	snprintf(d.Trial2_F1500_line6, 10, "%s", textBoxTrial2_F1500_line6->Text);
	snprintf(d.Trial2_F1500_line7, 10, "%s", textBoxTrial2_F1500_line7->Text);

	snprintf(d.Trial2_F2000_line1, 10, "%s", labelTrial2_F2000_line1->Text);
	snprintf(d.Trial2_F2000_line2, 10, "%s", labelTrial2_F2000_line2->Text);
	snprintf(d.Trial2_F2000_line3, 10, "%s", labelTrial2_F2000_line3->Text);
	snprintf(d.Trial2_F2000_line4, 10, "%s", textBoxTrial2_F2000_line4->Text);
	snprintf(d.Trial2_F2000_line5, 10, "%s", textBoxTrial2_F2000_line5->Text);
	snprintf(d.Trial2_F2000_line6, 10, "%s", textBoxTrial2_F2000_line6->Text);
	snprintf(d.Trial2_F2000_line7, 10, "%s", textBoxTrial2_F2000_line7->Text);

	snprintf(d.Trial3_200, 10, "%s", labelTrial3_200->Text);
	snprintf(d.Trial3_400, 10, "%s", labelTrial3_400->Text);
	snprintf(d.Trial3_500, 10, "%s", labelTrial3_500->Text);
	snprintf(d.Trial3_700, 10, "%s", labelTrial3_700->Text);
	snprintf(d.Trial3_800, 10, "%s", labelTrial3_800->Text);
	snprintf(d.Trial3_900, 10, "%s", labelTrial3_900->Text);
	snprintf(d.Trial3_1000, 10, "%s", labelTrial3_1000->Text);
	snprintf(d.Trial3_1200, 10, "%s", labelTrial3_1200->Text);
	snprintf(d.Trial3_1300, 10, "%s", labelTrial3_1300->Text);
	snprintf(d.Trial3_1500, 10, "%s", labelTrial3_1500->Text);
	snprintf(d.Trial3_2000, 10, "%s", labelTrial3_2000->Text);
	return d;
}