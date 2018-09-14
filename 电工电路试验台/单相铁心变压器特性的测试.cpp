#include "单相铁心变压器特性的测试实验内容.h"
#include "data_transf.h"

using namespace 电工电路试验台;


using namespace System::Windows::Forms::DataVisualization::Charting;

void 单相铁心变压器特性的测试实验内容::SendData() {
	int TrialCode = 14;
	ST_单相铁心变压器特性的测试 s;
	memset(&s, 0x00, sizeof(ST_单相铁心变压器特性的测试));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_单相铁心变压器特性的测试)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}


void 单相铁心变压器特性的测试实验内容::chartTrial2_load() {
	Series ^s = chartTrial2->Series[0];
	ChartArea ^ c = chartTrial2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "U1";
	c->AxisY->Title = "I1";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labelTrial2_Line1_U1->Text), Convert::ToSingle(labelTrial2_Line1_I1->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial2_Line2_U1->Text), Convert::ToSingle(labelTrial2_Line2_I1->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial2_Line3_U1->Text), Convert::ToSingle(labelTrial2_Line3_U1->Text));
	}
	catch (System::Exception^ E) {

	}
}

void 单相铁心变压器特性的测试实验内容::chartTrial3_load() {
	Series ^s = chartTrial3->Series[0];
	ChartArea ^ c = chartTrial3->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "U1";
	c->AxisY->Title = "I10";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_1->Text), Convert::ToSingle(labelTrial3_I10_1->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_2->Text), Convert::ToSingle(labelTrial3_I10_2->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_3->Text), Convert::ToSingle(labelTrial3_I10_3->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_4->Text), Convert::ToSingle(labelTrial3_I10_4->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_5->Text), Convert::ToSingle(labelTrial3_I10_5->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_6->Text), Convert::ToSingle(labelTrial3_I10_6->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_7->Text), Convert::ToSingle(labelTrial3_I10_7->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_8->Text), Convert::ToSingle(labelTrial3_I10_8->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_9->Text), Convert::ToSingle(labelTrial3_I10_9->Text));
		s->Points->AddXY(Convert::ToSingle(labelTrial3_U1_10->Text), Convert::ToSingle(labelTrial3_I10_10->Text));
	}
	catch (System::Exception^ E) {

	}

}


ST_单相铁心变压器特性的测试 单相铁心变压器特性的测试实验内容::Load_Grade_data() {
	ST_单相铁心变压器特性的测试 d;
	memset(&d, 0x00, sizeof(ST_单相铁心变压器特性的测试));
	
	snprintf(d.Trial2_Line1_I1, 10, "%s", labelTrial2_Line1_I1->Text);
		snprintf(d. Trial2_Line1_U1, 10, "%s", labelTrial2_Line1_U1->Text);
		snprintf(d. Trial2_Line1_W, 10, "%s", labelTrial2_Line1_W->Text);
		snprintf(d. Trial2_Line1_I2, 10, "%s", labelTrial2_Line1_I2->Text);
		snprintf(d. Trial2_Line1_U2, 10, "%s", labelTrial2_Line1_U2->Text);

		snprintf(d. Trial2_Line2_I1, 10, "%s", labelTrial2_Line2_I1->Text);
		snprintf(d. Trial2_Line2_U1, 10, "%s", labelTrial2_Line2_U1->Text);
		snprintf(d. Trial2_Line2_W, 10, "%s", labelTrial2_Line2_W->Text);
		snprintf(d. Trial2_Line2_I2, 10, "%s", labelTrial2_Line2_I2->Text);
		snprintf(d. Trial2_Line2_U2, 10, "%s", labelTrial2_Line2_U2->Text);

		snprintf(d. Trial2_Line3_I1, 10, "%s", labelTrial2_Line3_I1->Text);
		snprintf(d. Trial2_Line3_U1, 10, "%s", labelTrial2_Line3_U1->Text);
		snprintf(d. Trial2_Line3_W, 10, "%s", labelTrial2_Line3_W->Text);
		snprintf(d. Trial2_Line3_I2, 10, "%s", labelTrial2_Line3_I2->Text);
		snprintf(d. Trial2_Line3_U2, 10, "%s", labelTrial2_Line3_U2->Text);

		snprintf(d. Trial3_U1_1, 10, "%s", labelTrial3_U1_1->Text);
		snprintf(d. Trial3_U1_2, 10, "%s", labelTrial3_U1_2->Text);
		snprintf(d. Trial3_U1_3, 10, "%s", labelTrial3_U1_3->Text);
		snprintf(d. Trial3_U1_4, 10, "%s", labelTrial3_U1_4->Text);
		snprintf(d. Trial3_U1_5, 10, "%s", labelTrial3_U1_5->Text);
		snprintf(d. Trial3_U1_6, 10, "%s", labelTrial3_U1_6->Text);
		snprintf(d. Trial3_U1_7, 10, "%s", labelTrial3_U1_7->Text);
		snprintf(d. Trial3_U1_8, 10, "%s", labelTrial3_U1_8->Text);
		snprintf(d. Trial3_U1_9, 10, "%s", labelTrial3_U1_9->Text);
		snprintf(d. Trial3_U1_10, 10, "%s", labelTrial3_U1_10->Text);

		snprintf(d. Trial3_U20_1 , 10, "%s", labelTrial3_U20_1->Text);
		snprintf(d. Trial3_U20_2 , 10, "%s", labelTrial3_U20_2->Text);
		snprintf(d. Trial3_U20_3 , 10, "%s", labelTrial3_U20_3->Text);
		snprintf(d. Trial3_U20_4 , 10, "%s", labelTrial3_U20_4->Text);
		snprintf(d. Trial3_U20_5 , 10, "%s", labelTrial3_U20_5->Text);
		snprintf(d. Trial3_U20_6 , 10, "%s", labelTrial3_U20_6->Text);
		snprintf(d. Trial3_U20_7 , 10, "%s", labelTrial3_U20_7->Text);
		snprintf(d. Trial3_U20_8 , 10, "%s", labelTrial3_U20_8->Text);
		snprintf(d. Trial3_U20_9 , 10, "%s", labelTrial3_U20_9->Text);
		snprintf(d. Trial3_U20_10, 10, "%s", labelTrial3_U20_10->Text);

		snprintf(d. Trial3_I10_1, 10, "%s", labelTrial3_I10_1->Text);
		snprintf(d. Trial3_I10_2, 10, "%s", labelTrial3_I10_2->Text);
		snprintf(d. Trial3_I10_3, 10, "%s", labelTrial3_I10_3->Text);
		snprintf(d. Trial3_I10_4, 10, "%s", labelTrial3_I10_4->Text);
		snprintf(d. Trial3_I10_5, 10, "%s", labelTrial3_I10_5->Text);
		snprintf(d. Trial3_I10_6, 10, "%s", labelTrial3_I10_6->Text);
		snprintf(d. Trial3_I10_7, 10, "%s", labelTrial3_I10_7->Text);
		snprintf(d. Trial3_I10_8, 10, "%s", labelTrial3_I10_8->Text);
		snprintf(d. Trial3_I10_9, 10, "%s", labelTrial3_I10_9->Text);
		snprintf(d.Trial3_I10_10, 10, "%s", labelTrial3_I10_10->Text);


	snprintf(d.summing_up, 100, "%s", textBox结论->Text);
	return d;
}
