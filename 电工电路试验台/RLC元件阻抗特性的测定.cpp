#include "RLC元件阻抗特性的测定实验内容.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#include "data_transf.h"
using namespace 电工电路试验台;
using namespace System::Windows::Forms::DataVisualization::Charting;

void RLC元件阻抗特性的测定实验内容::SendData() {
	int TrialCode = 12;
	ST_RLC元件阻抗特性的测定 s;
	memset(&s, 0x00, sizeof(ST_RLC元件阻抗特性的测定));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLC元件阻抗特性的测定)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}

ST_RLC元件阻抗特性的测定 RLC元件阻抗特性的测定实验内容::Load_Grade_data() {
	ST_RLC元件阻抗特性的测定 d;
	memset(&d, 0x00, sizeof(ST_RLC元件阻抗特性的测定));

	snprintf(d.summing_up, 100, "%s", textBox结论->Text);
	snprintf(d.Trial1_F_1, 10, "%s", textBoxTrial1_F_1->Text);
	snprintf(d.Trial1_F_2, 10, "%s", textBoxTrial1_F_2->Text);
	snprintf(d.Trial1_F_3, 10, "%s", textBoxTrial1_F_3->Text);
	snprintf(d.Trial1_F_4, 10, "%s", textBoxTrial1_F_4->Text);
	snprintf(d.Trial1_F_5, 10, "%s", textBoxTrial1_F_5->Text);
	snprintf(d.Trial1_F_6, 10, "%s", textBoxTrial1_F_6->Text);

	snprintf(d.Trial1_R_Ur1, 10, "%s", labelTrial1_R_Ur1->Text);
	snprintf(d.Trial1_R_Ur2, 10, "%s", labelTrial1_R_Ur2->Text);
	snprintf(d.Trial1_R_Ur3, 10, "%s", labelTrial1_R_Ur3->Text);
	snprintf(d.Trial1_R_Ur4, 10, "%s", labelTrial1_R_Ur4->Text);
	snprintf(d.Trial1_R_Ur5, 10, "%s", labelTrial1_R_Ur5->Text);
	snprintf(d.Trial1_R_Ur6, 10, "%s", labelTrial1_R_Ur6->Text);


	snprintf(d.Trial1_R_IR1, 10, "%s", labelTrial1_R_IR1->Text);
	snprintf(d.Trial1_R_IR2, 10, "%s", labelTrial1_R_IR2->Text);
	snprintf(d.Trial1_R_IR3, 10, "%s", labelTrial1_R_IR3->Text);
	snprintf(d.Trial1_R_IR4, 10, "%s", labelTrial1_R_IR4->Text);
	snprintf(d.Trial1_R_IR5, 10, "%s", labelTrial1_R_IR5->Text);
	snprintf(d.Trial1_R_IR6, 10, "%s", labelTrial1_R_IR6->Text);

	snprintf(d.Trial1_R_R1, 10, "%s", textBoxTrial1_R_R1->Text);
	snprintf(d.Trial1_R_R2, 10, "%s", textBoxTrial1_R_R2->Text);
	snprintf(d.Trial1_R_R3, 10, "%s", textBoxTrial1_R_R3->Text);
	snprintf(d.Trial1_R_R4, 10, "%s", textBoxTrial1_R_R4->Text);
	snprintf(d.Trial1_R_R5, 10, "%s", textBoxTrial1_R_R5->Text);
	snprintf(d.Trial1_R_R6, 10, "%s", textBoxTrial1_R_R6->Text);


	snprintf(d.Trial1_L_Ur1, 10, "%s", labelTrial1_L_Ur1->Text);
	snprintf(d.Trial1_L_Ur2, 10, "%s", labelTrial1_L_Ur2->Text);
	snprintf(d.Trial1_L_Ur3, 10, "%s", labelTrial1_L_Ur3->Text);
	snprintf(d.Trial1_L_Ur4, 10, "%s", labelTrial1_L_Ur4->Text);
	snprintf(d.Trial1_L_Ur5, 10, "%s", labelTrial1_L_Ur5->Text);
	snprintf(d.Trial1_L_Ur6, 10, "%s", labelTrial1_L_Ur6->Text);

	snprintf(d.Trial1_L_IL1, 10, "%s", labelTrial1_L_IL1->Text);
	snprintf(d.Trial1_L_IL2, 10, "%s", labelTrial1_L_IL2->Text);
	snprintf(d.Trial1_L_IL3, 10, "%s", labelTrial1_L_IL3->Text);
	snprintf(d.Trial1_L_IL4, 10, "%s", labelTrial1_L_IL4->Text);
	snprintf(d.Trial1_L_IL5, 10, "%s", labelTrial1_L_IL5->Text);
	snprintf(d.Trial1_L_IL6, 10, "%s", labelTrial1_L_IL6->Text);


	snprintf(d.Trial1_L_XL1, 10, "%s", textBoxTrial1_L_XL1->Text);
	snprintf(d.Trial1_L_XL2, 10, "%s", textBoxTrial1_L_XL2->Text);
	snprintf(d.Trial1_L_XL3, 10, "%s", textBoxTrial1_L_XL3->Text);
	snprintf(d.Trial1_L_XL4, 10, "%s", textBoxTrial1_L_XL4->Text);
	snprintf(d.Trial1_L_XL5, 10, "%s", textBoxTrial1_L_XL5->Text);
	snprintf(d.Trial1_L_XL6, 10, "%s", textBoxTrial1_L_XL6->Text);

	snprintf(d.Trial1_C_Ur1, 10, "%s", labelTrial1_C_Ur1->Text);
	snprintf(d.Trial1_C_Ur2, 10, "%s", labelTrial1_C_Ur2->Text);
	snprintf(d.Trial1_C_Ur3, 10, "%s", labelTrial1_C_Ur3->Text);
	snprintf(d.Trial1_C_Ur4, 10, "%s", labelTrial1_C_Ur4->Text);
	snprintf(d.Trial1_C_Ur5, 10, "%s", labelTrial1_C_Ur5->Text);
	snprintf(d.Trial1_C_Ur6, 10, "%s", labelTrial1_C_Ur6->Text);

	snprintf(d.Trial1_C_IC1, 10, "%s", labelTrial1_C_IC1->Text);
	snprintf(d.Trial1_C_IC2, 10, "%s", labelTrial1_C_IC2->Text);
	snprintf(d.Trial1_C_IC3, 10, "%s", labelTrial1_C_IC3->Text);
	snprintf(d.Trial1_C_IC4, 10, "%s", labelTrial1_C_IC4->Text);
	snprintf(d.Trial1_C_IC5, 10, "%s", labelTrial1_C_IC5->Text);
	snprintf(d.Trial1_C_IC6, 10, "%s", labelTrial1_C_IC6->Text);

	snprintf(d.Trial1_C_XC1, 10, "%s", textBoxTrial1_C_XC1->Text);
	snprintf(d.Trial1_C_XC2, 10, "%s", textBoxTrial1_C_XC2->Text);
	snprintf(d.Trial1_C_XC3, 10, "%s", textBoxTrial1_C_XC3->Text);
	snprintf(d.Trial1_C_XC4, 10, "%s", textBoxTrial1_C_XC4->Text);
	snprintf(d.Trial1_C_XC5, 10, "%s", textBoxTrial1_C_XC5->Text);
	snprintf(d.Trial1_C_XC6, 10, "%s", textBoxTrial1_C_XC6->Text);

	fileSql f;
	string Trial2_1Bmp = f.Readfile(T_to_string(Trial2_1PT_name));
	if (Trial2_1Bmp.length() == sizeof(d.Trial2_1Bmp))
		memcpy(d.Trial2_1Bmp, Trial2_1Bmp.c_str(), sizeof(d.Trial2_1Bmp));

	string Trial2_2Bmp = f.Readfile(T_to_string(Trial2_2PT_name));
	if (Trial2_2Bmp.length() == sizeof(d.Trial2_2Bmp))
		memcpy(d.Trial2_2Bmp, Trial2_2Bmp.c_str(), sizeof(d.Trial2_2Bmp));

	string Trial3_1Bmp = f.Readfile(T_to_string(Trial3_1PT_name));
	if (Trial3_1Bmp.length() == sizeof(d.Trial3_1Bmp))
		memcpy(d.Trial3_1Bmp, Trial3_1Bmp.c_str(), sizeof(d.Trial3_1Bmp));

	string Trial3_2Bmp = f.Readfile(T_to_string(Trial3_2PT_name));
	if (Trial3_2Bmp.length() == sizeof(d.Trial3_2Bmp))
		memcpy(d.Trial3_2Bmp, Trial3_2Bmp.c_str(), sizeof(d.Trial3_2Bmp));

	string Trial3_3Bmp = f.Readfile(T_to_string(Trial3_3PT_name));
	if (Trial3_3Bmp.length() == sizeof(d.Trial3_3Bmp))
		memcpy(d.Trial3_3Bmp, Trial3_3Bmp.c_str(), sizeof(d.Trial3_3Bmp));

	string Trial3_4Bmp = f.Readfile(T_to_string(Trial3_4PT_name));
	if (Trial3_4Bmp.length() == sizeof(d.Trial3_4Bmp))
		memcpy(d.Trial3_4Bmp, Trial3_4Bmp.c_str(), sizeof(d.Trial3_4Bmp));

	string Trial3_5Bmp = f.Readfile(T_to_string(Trial3_5PT_name));
	if (Trial3_5Bmp.length() == sizeof(d.Trial3_5Bmp))
		memcpy(d.Trial3_5Bmp, Trial3_5Bmp.c_str(), sizeof(d.Trial3_5Bmp));

	string Trial3_6Bmp = f.Readfile(T_to_string(Trial3_6PT_name));
	if (Trial3_6Bmp.length() == sizeof(d.Trial3_6Bmp))
		memcpy(d.Trial3_6Bmp, Trial3_6Bmp.c_str(), sizeof(d.Trial3_6Bmp));


	
	snprintf(d.Trial3_F_1, 10, "%s", textBoxTrial3_F_1->Text);
	snprintf(d.Trial3_F_2, 10, "%s", textBoxTrial3_F_2->Text);
	snprintf(d.Trial3_F_3, 10, "%s", textBoxTrial3_F_3->Text);
	snprintf(d.Trial3_F_4, 10, "%s", textBoxTrial3_F_4->Text);
	snprintf(d.Trial3_F_5, 10, "%s", textBoxTrial3_F_5->Text);
	snprintf(d.Trial3_F_6, 10, "%s", textBoxTrial3_F_6->Text);


	snprintf(d.Trial3_n1, 10, "%s", textBoxTrial3_n1->Text);
	snprintf(d.Trial3_n2, 10, "%s", textBoxTrial3_n2->Text);
	snprintf(d.Trial3_n3, 10, "%s", textBoxTrial3_n3->Text);
	snprintf(d.Trial3_n4, 10, "%s", textBoxTrial3_n4->Text);
	snprintf(d.Trial3_n5, 10, "%s", textBoxTrial3_n5->Text);
	snprintf(d.Trial3_n6, 10, "%s", textBoxTrial3_n6->Text);

	snprintf(d.Trial3_m1, 10, "%s", textBoxTrial3_m1->Text);
	snprintf(d.Trial3_m2, 10, "%s", textBoxTrial3_m2->Text);
	snprintf(d.Trial3_m3, 10, "%s", textBoxTrial3_m3->Text);
	snprintf(d.Trial3_m4, 10, "%s", textBoxTrial3_m4->Text);
	snprintf(d.Trial3_m5, 10, "%s", textBoxTrial3_m5->Text);
	snprintf(d.Trial3_m6, 10, "%s", textBoxTrial3_m6->Text);

	snprintf(d.Trial3_φ1, 10, "%s", textBoxTrial3_φ1->Text);
	snprintf(d.Trial3_φ2, 10, "%s", textBoxTrial3_φ2->Text);
	snprintf(d.Trial3_φ3, 10, "%s", textBoxTrial3_φ3->Text);
	snprintf(d.Trial3_φ4, 10, "%s", textBoxTrial3_φ4->Text);
	snprintf(d.Trial3_φ5, 10, "%s", textBoxTrial3_φ5->Text);
	snprintf(d.Trial3_φ6, 10, "%s", textBoxTrial3_φ6->Text);
	return d;
}

void RLC元件阻抗特性的测定实验内容::chartTrial3oad() {
	Series ^s = chartTrial3->Series[0];
	ChartArea ^ c = chartTrial3->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "频率V";
	c->AxisY->Title = "阻抗角φ";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_1->Text), Convert::ToSingle(textBoxTrial3_φ1->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_2->Text), Convert::ToSingle(textBoxTrial3_φ2->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_3->Text), Convert::ToSingle(textBoxTrial3_φ3->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_4->Text), Convert::ToSingle(textBoxTrial3_φ4->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_5->Text), Convert::ToSingle(textBoxTrial3_φ5->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_6->Text), Convert::ToSingle(textBoxTrial3_φ6->Text));
	}
	catch (System::Exception^ E) {

	}

}