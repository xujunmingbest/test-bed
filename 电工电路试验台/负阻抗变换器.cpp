#include "data_transf.h"
#include "负阻抗变换器实验内容.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
using namespace 电工电路试验台;
using namespace System::Windows::Forms::DataVisualization::Charting;


void 负阻抗变换器实验内容::SendData() {
	int TrialCode = 20;
	ST_负阻抗变换器 s;
	memset(&s, 0x00, sizeof(ST_负阻抗变换器));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_负阻抗变换器)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_负阻抗变换器 负阻抗变换器实验内容::Load_Grade_data() {
	ST_负阻抗变换器 d;
	memset(&d, 0x00, sizeof(ST_负阻抗变换器));



	snprintf(d.Trial1_300_U1_1, 10, "%s" ,labelTrial1_300_U1_1->Text);
	snprintf(d.Trial1_300_U1_2, 10, "%s", labelTrial1_300_U1_2->Text);
	snprintf(d.Trial1_300_U1_3, 10, "%s", labelTrial1_300_U1_3->Text);
	snprintf(d.Trial1_300_U1_4, 10, "%s", labelTrial1_300_U1_4->Text);
	snprintf(d.Trial1_300_U1_5, 10, "%s", labelTrial1_300_U1_5->Text);
	snprintf(d.Trial1_300_U1_6, 10, "%s", labelTrial1_300_U1_6->Text);

	snprintf(d.Trial1_300_I1_1, 10, "%s", labelTrial1_300_I1_1->Text);
	snprintf(d.Trial1_300_I1_2, 10, "%s", labelTrial1_300_I1_2->Text);
	snprintf(d.Trial1_300_I1_3, 10, "%s", labelTrial1_300_I1_3->Text);
	snprintf(d.Trial1_300_I1_4, 10, "%s", labelTrial1_300_I1_4->Text);
	snprintf(d.Trial1_300_I1_5, 10, "%s", labelTrial1_300_I1_5->Text);
	snprintf(d.Trial1_300_I1_6, 10, "%s", labelTrial1_300_I1_6->Text);

	snprintf(d.Trial1_300_R_1, 10, "%s", textBoxTrial1_300_R_1->Text);
	snprintf(d.Trial1_300_R_2, 10, "%s", textBoxTrial1_300_R_2->Text);
	snprintf(d.Trial1_300_R_3, 10, "%s", textBoxTrial1_300_R_3->Text);
	snprintf(d.Trial1_300_R_4, 10, "%s", textBoxTrial1_300_R_4->Text);
	snprintf(d.Trial1_300_R_5, 10, "%s", textBoxTrial1_300_R_5->Text);
	snprintf(d.Trial1_300_R_6, 10, "%s", textBoxTrial1_300_R_6->Text);


	snprintf(d.Trial1_600_U1_1, 10, "%s", labelTrial1_600_U1_1->Text);
	snprintf(d.Trial1_600_U1_2, 10, "%s", labelTrial1_600_U1_2->Text);
	snprintf(d.Trial1_600_U1_3, 10, "%s", labelTrial1_600_U1_3->Text);
	snprintf(d.Trial1_600_U1_4, 10, "%s", labelTrial1_600_U1_4->Text);
	snprintf(d.Trial1_600_U1_5, 10, "%s", labelTrial1_600_U1_5->Text);
	snprintf(d.Trial1_600_U1_6, 10, "%s", labelTrial1_600_U1_6->Text);

	snprintf(d.Trial1_600_I1_1, 10, "%s", labelTrial1_600_I1_1->Text);
	snprintf(d.Trial1_600_I1_2, 10, "%s", labelTrial1_600_I1_2->Text);
	snprintf(d.Trial1_600_I1_3, 10, "%s", labelTrial1_600_I1_3->Text);
	snprintf(d.Trial1_600_I1_4, 10, "%s", labelTrial1_600_I1_4->Text);
	snprintf(d.Trial1_600_I1_5, 10, "%s", labelTrial1_600_I1_5->Text);
	snprintf(d.Trial1_600_I1_6, 10, "%s", labelTrial1_600_I1_6->Text);

	snprintf(d.Trial1_600_R_1, 10, "%s", textBoxTrial1_600_R_1->Text);
	snprintf(d.Trial1_600_R_2, 10, "%s", textBoxTrial1_600_R_2->Text);
	snprintf(d.Trial1_600_R_3, 10, "%s", textBoxTrial1_600_R_3->Text);
	snprintf(d.Trial1_600_R_4, 10, "%s", textBoxTrial1_600_R_4->Text);
	snprintf(d.Trial1_600_R_5, 10, "%s", textBoxTrial1_600_R_5->Text);
	snprintf(d.Trial1_600_R_6, 10, "%s", textBoxTrial1_600_R_6->Text);

	fileSql f;
	string bmp1 = f.Readfile(T_to_string(PT_name1));
	if (bmp1.length() == sizeof(d.Trial2_Bmp_1))
		memcpy(d.Trial2_Bmp_1, bmp1.c_str(), sizeof(d.Trial2_Bmp_1));

	string bmp2 = f.Readfile(T_to_string(PT_name2));
	if (bmp2.length() == sizeof(d.Trial2_Bmp_2))
		memcpy(d.Trial2_Bmp_2, bmp2.c_str(), sizeof(d.Trial2_Bmp_2));

	return d;
}

void 负阻抗变换器实验内容::chart_load() {
	Series ^s1 = chartTrial1->Series[0];
	Series ^s2 = chartTrial1->Series[1];
	ChartArea ^ c = chartTrial1->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "I1(mA)";
	c->AxisY->Title = "U1(V)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s1->ChartType = SeriesChartType::Spline;
	//s1->IsVisibleInLegend = false;
	s2->ChartType = SeriesChartType::Spline;
	//s2->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s1->Points->Clear();
	s2->Points->Clear();
	try {
		s1->Name = "RL=300Ω";
		s2->Name = "RL=600Ω";
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_1->Text), Convert::ToSingle(labelTrial1_300_U1_1->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_2->Text), Convert::ToSingle(labelTrial1_300_U1_2->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_3->Text), Convert::ToSingle(labelTrial1_300_U1_3->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_4->Text), Convert::ToSingle(labelTrial1_300_U1_4->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_5->Text), Convert::ToSingle(labelTrial1_300_U1_5->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_6->Text), Convert::ToSingle(labelTrial1_300_U1_6->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_1->Text), Convert::ToSingle(labelTrial1_600_U1_1->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_2->Text), Convert::ToSingle(labelTrial1_600_U1_2->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_3->Text), Convert::ToSingle(labelTrial1_600_U1_3->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_4->Text), Convert::ToSingle(labelTrial1_600_U1_4->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_5->Text), Convert::ToSingle(labelTrial1_600_U1_5->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_6->Text), Convert::ToSingle(labelTrial1_600_U1_6->Text));
	}
	catch (System::Exception^ E) {

	}

}