#include "VCVS实验实验内容.h"
#include "data_transf.h"
using namespace 电工电路试验台;

using namespace System::Windows::Forms::DataVisualization::Charting;

void VCVS实验实验内容::this_load() {




}

void VCVS实验实验内容::chartTrial1_1Init() {

	Series ^s = chartTrial1_1->Series[0];
	chartTrial1_1->Titles->Add("VCVS的转移特性U2＝ F（U1）");
	ChartArea ^ c = chartTrial1_1->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void VCVS实验实验内容::LoadTrial1_1() {
	Series ^s = chartTrial1_1->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_1->Text), Convert::ToSingle(labeltrial1_1U2_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_2->Text), Convert::ToSingle(labeltrial1_1U2_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_3->Text), Convert::ToSingle(labeltrial1_1U2_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_4->Text), Convert::ToSingle(labeltrial1_1U2_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_5->Text), Convert::ToSingle(labeltrial1_1U2_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_6->Text), Convert::ToSingle(labeltrial1_1U2_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_7->Text), Convert::ToSingle(labeltrial1_1U2_7->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_8->Text), Convert::ToSingle(labeltrial1_1U2_8->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_1U1_9->Text), Convert::ToSingle(labeltrial1_1U2_9->Text));
	}
	catch (System::Exception^ E) {

	}

}
void VCVS实验实验内容::chartTrial1_2Init() {

	Series ^s = chartTrial1_2->Series[0];
	chartTrial1_2->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial1_2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void VCVS实验实验内容::LoadTrial1_2() {
	Series ^s = chartTrial1_2->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_1->Text), Convert::ToSingle(labeltrial1_2V2_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_2->Text), Convert::ToSingle(labeltrial1_2V2_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_3->Text), Convert::ToSingle(labeltrial1_2V2_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_4->Text), Convert::ToSingle(labeltrial1_2V2_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_5->Text), Convert::ToSingle(labeltrial1_2V2_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_6->Text), Convert::ToSingle(labeltrial1_2V2_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_7->Text), Convert::ToSingle(labeltrial1_2V2_7->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial1_2IL_8->Text), Convert::ToSingle(labeltrial1_2V2_8->Text));
	}
	catch (System::Exception^ E) {

	}

}

void VCVS实验实验内容::chartTrial2_1Init() {

	Series ^s = chartTrial2_1->Series[0];
	chartTrial2_1->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial2_1->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void VCVS实验实验内容::LoadTrial2_1() {
	Series ^s = chartTrial2_1->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(0), Convert::ToSingle(labeltrial2_1IL_1->Text));
		s->Points->AddXY(Convert::ToSingle(0.5), Convert::ToSingle(labeltrial2_1IL_2->Text));
		s->Points->AddXY(Convert::ToSingle(1), Convert::ToSingle(labeltrial2_1IL_3->Text));
		s->Points->AddXY(Convert::ToSingle(1.5), Convert::ToSingle(labeltrial2_1IL_4->Text));
		s->Points->AddXY(Convert::ToSingle(2), Convert::ToSingle(labeltrial2_1IL_5->Text));
		s->Points->AddXY(Convert::ToSingle(2.5), Convert::ToSingle(labeltrial2_1IL_6->Text));
		s->Points->AddXY(Convert::ToSingle(3), Convert::ToSingle(labeltrial2_1IL_7->Text));
		s->Points->AddXY(Convert::ToSingle(3.5), Convert::ToSingle(labeltrial2_1IL_8->Text));
	}
	catch (System::Exception^ E) {

	}

}


void VCVS实验实验内容::chartTrial2_2Init() {

	Series ^s = chartTrial2_2->Series[0];
	chartTrial2_2->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial2_2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void VCVS实验实验内容::LoadTrial2_2() {
	Series ^s = chartTrial2_2->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_1->Text), Convert::ToSingle(labeltrial2_2IL_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_2->Text), Convert::ToSingle(labeltrial2_2IL_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_3->Text), Convert::ToSingle(labeltrial2_2IL_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_4->Text), Convert::ToSingle(labeltrial2_2IL_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_5->Text), Convert::ToSingle(labeltrial2_2IL_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_6->Text), Convert::ToSingle(labeltrial2_2IL_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial2_2V2_7->Text), Convert::ToSingle(labeltrial2_2IL_7->Text));
	}
	catch (System::Exception^ E) {
	}
}

void VCVS实验实验内容::chartTrial3_1Init() {

	Series ^s = chartTrial3_1->Series[0];
	chartTrial3_1->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial3_1->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void VCVS实验实验内容::LoadTrial3_1() {
	Series ^s = chartTrial3_1->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_1->Text), Convert::ToSingle(labeltrial3_1V2_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_2->Text), Convert::ToSingle(labeltrial3_1V2_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_3->Text), Convert::ToSingle(labeltrial3_1V2_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_4->Text), Convert::ToSingle(labeltrial3_1V2_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_5->Text), Convert::ToSingle(labeltrial3_1V2_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_6->Text), Convert::ToSingle(labeltrial3_1V2_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_7->Text), Convert::ToSingle(labeltrial3_1V2_7->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_1I1_8->Text), Convert::ToSingle(labeltrial3_1V2_8->Text));
	}
	catch (System::Exception^ E) {
	}
}


void VCVS实验实验内容::chartTrial3_2Init() {

	Series ^s = chartTrial3_2->Series[0];
	chartTrial3_2->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial3_2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void VCVS实验实验内容::LoadTrial3_2() {
	Series ^s = chartTrial3_2->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_1->Text), Convert::ToSingle(labeltrial3_2U2_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_2->Text), Convert::ToSingle(labeltrial3_2U2_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_3->Text), Convert::ToSingle(labeltrial3_2U2_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_4->Text), Convert::ToSingle(labeltrial3_2U2_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_5->Text), Convert::ToSingle(labeltrial3_2U2_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_6->Text), Convert::ToSingle(labeltrial3_2U2_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_7->Text), Convert::ToSingle(labeltrial3_2U2_7->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial3_2IL_8->Text), Convert::ToSingle(labeltrial3_2U2_8->Text));
	}
	catch (System::Exception^ E) {
	}
}



void VCVS实验实验内容::chartTrial4_1Init() {

	Series ^s = chartTrial4_1->Series[0];
	chartTrial4_1->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial4_1->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void VCVS实验实验内容::LoadTrial4_1() {
	Series ^s = chartTrial4_1->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_1->Text), Convert::ToSingle(labeltrial4_1IL_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_2->Text), Convert::ToSingle(labeltrial4_1IL_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_3->Text), Convert::ToSingle(labeltrial4_1IL_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_4->Text), Convert::ToSingle(labeltrial4_1IL_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_5->Text), Convert::ToSingle(labeltrial4_1IL_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_6->Text), Convert::ToSingle(labeltrial4_1IL_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_7->Text), Convert::ToSingle(labeltrial4_1IL_7->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_1I1_8->Text), Convert::ToSingle(labeltrial4_1IL_8->Text));
	}
	catch (System::Exception^ E) {
	}
}


void VCVS实验实验内容::chartTrial4_2Init() {

	Series ^s = chartTrial4_2->Series[0];
	chartTrial4_2->Titles->Add("负载特性 U2＝F（IL）");
	ChartArea ^ c = chartTrial4_2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void VCVS实验实验内容::LoadTrial4_2() {
	Series ^s = chartTrial4_2->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_1->Text), Convert::ToSingle(labeltrial4_2IL_1->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_2->Text), Convert::ToSingle(labeltrial4_2IL_2->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_3->Text), Convert::ToSingle(labeltrial4_2IL_3->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_4->Text), Convert::ToSingle(labeltrial4_2IL_4->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_5->Text), Convert::ToSingle(labeltrial4_2IL_5->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_6->Text), Convert::ToSingle(labeltrial4_2IL_6->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_7->Text), Convert::ToSingle(labeltrial4_2IL_7->Text));
		s->Points->AddXY(Convert::ToSingle(labeltrial4_2U2_8->Text), Convert::ToSingle(labeltrial4_2IL_8->Text));
	}
	catch (System::Exception^ E) {
	}
}


void VCVS实验实验内容::SendData() {
	int TrialCode = 8;
	ST_VCVS实验 s;
	memset(&s, 0x00, sizeof(ST_VCVS实验));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_VCVS实验)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}

ST_VCVS实验 VCVS实验实验内容::Load_Grade_data() {
	ST_VCVS实验 d;
	memset(&d, 0x00, sizeof(ST_VCVS实验));

	snprintf(d.trial1_1u, 10, "%s", textBoxtrial1_1u->Text);

	snprintf(d.trial1_1U1_1, 10, "%s", labeltrial1_1U1_1->Text);
	snprintf(d.trial1_1U1_2, 10, "%s", labeltrial1_1U1_2->Text);
	snprintf(d.trial1_1U1_3, 10, "%s", labeltrial1_1U1_3->Text);
	snprintf(d.trial1_1U1_4, 10, "%s", labeltrial1_1U1_4->Text);
	snprintf(d.trial1_1U1_5, 10, "%s", labeltrial1_1U1_5->Text);
	snprintf(d.trial1_1U1_6, 10, "%s", labeltrial1_1U1_6->Text);
	snprintf(d.trial1_1U1_7, 10, "%s", labeltrial1_1U1_7->Text);
	snprintf(d.trial1_1U1_8, 10, "%s", labeltrial1_1U1_8->Text);
	snprintf(d.trial1_1U1_9, 10, "%s", labeltrial1_1U1_9->Text);

	snprintf(d.trial1_1U2_1, 10, "%s", labeltrial1_1U2_1->Text);
	snprintf(d.trial1_1U2_2, 10, "%s", labeltrial1_1U2_2->Text);
	snprintf(d.trial1_1U2_3, 10, "%s", labeltrial1_1U2_3->Text);
	snprintf(d.trial1_1U2_4, 10, "%s", labeltrial1_1U2_4->Text);
	snprintf(d.trial1_1U2_5, 10, "%s", labeltrial1_1U2_5->Text);
	snprintf(d.trial1_1U2_6, 10, "%s", labeltrial1_1U2_6->Text);
	snprintf(d.trial1_1U2_7, 10, "%s", labeltrial1_1U2_7->Text);
	snprintf(d.trial1_1U2_8, 10, "%s", labeltrial1_1U2_8->Text);
	snprintf(d.trial1_1U2_9, 10, "%s", labeltrial1_1U2_9->Text);

	snprintf(d.trial1_2V2_1, 10, "%s", labeltrial1_2V2_1->Text);
	snprintf(d.trial1_2V2_2, 10, "%s", labeltrial1_2V2_2->Text);
	snprintf(d.trial1_2V2_3, 10, "%s", labeltrial1_2V2_3->Text);
	snprintf(d.trial1_2V2_4, 10, "%s", labeltrial1_2V2_4->Text);
	snprintf(d.trial1_2V2_5, 10, "%s", labeltrial1_2V2_5->Text);
	snprintf(d.trial1_2V2_6, 10, "%s", labeltrial1_2V2_6->Text);
	snprintf(d.trial1_2V2_7, 10, "%s", labeltrial1_2V2_7->Text);
	snprintf(d.trial1_2V2_8, 10, "%s", labeltrial1_2V2_8->Text); 

	snprintf(d.trial1_2IL_1, 10, "%s", labeltrial1_2IL_1->Text);
	snprintf(d.trial1_2IL_2, 10, "%s", labeltrial1_2IL_2->Text);
	snprintf(d.trial1_2IL_3, 10, "%s", labeltrial1_2IL_3->Text);
	snprintf(d.trial1_2IL_4, 10, "%s", labeltrial1_2IL_4->Text);
	snprintf(d.trial1_2IL_5, 10, "%s", labeltrial1_2IL_5->Text);
	snprintf(d.trial1_2IL_6, 10, "%s", labeltrial1_2IL_6->Text);
	snprintf(d.trial1_2IL_7, 10, "%s", labeltrial1_2IL_7->Text);
	snprintf(d.trial1_2IL_8, 10, "%s", labeltrial1_2IL_8->Text); 

	snprintf(d.trial2_1U1_1, 10, "%s", labeltrial2_1U1_1->Text);
	snprintf(d.trial2_1U1_2, 10, "%s", labeltrial2_1U1_2->Text);
	snprintf(d.trial2_1U1_3, 10, "%s", labeltrial2_1U1_3->Text);
	snprintf(d.trial2_1U1_4, 10, "%s", labeltrial2_1U1_4->Text);
	snprintf(d.trial2_1U1_5, 10, "%s", labeltrial2_1U1_5->Text);
	snprintf(d.trial2_1U1_6, 10, "%s", labeltrial2_1U1_6->Text);
	snprintf(d.trial2_1U1_7, 10, "%s", labeltrial2_1U1_7->Text);
	snprintf(d.trial2_1U1_8, 10, "%s", labeltrial2_1U1_8->Text);

	snprintf(d.trial2_1IL_1, 10, "%s", labeltrial2_1IL_1->Text);
	snprintf(d.trial2_1IL_2, 10, "%s", labeltrial2_1IL_2->Text);
	snprintf(d.trial2_1IL_3, 10, "%s", labeltrial2_1IL_3->Text);
	snprintf(d.trial2_1IL_4, 10, "%s", labeltrial2_1IL_4->Text);
	snprintf(d.trial2_1IL_5, 10, "%s", labeltrial2_1IL_5->Text);
	snprintf(d.trial2_1IL_6, 10, "%s", labeltrial2_1IL_6->Text);
	snprintf(d.trial2_1IL_7, 10, "%s", labeltrial2_1IL_7->Text);
	snprintf(d.trial2_1IL_8, 10, "%s", labeltrial2_1IL_8->Text);
	snprintf(d.trial2_1gm, 10, "%s", textBoxtrial2_1gm->Text);
	

	snprintf(d.trial2_2V2_1, 10, "%s", labeltrial2_2V2_1->Text);
	snprintf(d.trial2_2V2_2, 10, "%s", labeltrial2_2V2_2->Text);
	snprintf(d.trial2_2V2_3, 10, "%s", labeltrial2_2V2_3->Text);
	snprintf(d.trial2_2V2_4, 10, "%s", labeltrial2_2V2_4->Text);
	snprintf(d.trial2_2V2_5, 10, "%s", labeltrial2_2V2_5->Text);
	snprintf(d.trial2_2V2_6, 10, "%s", labeltrial2_2V2_6->Text);
	snprintf(d.trial2_2V2_7, 10, "%s", labeltrial2_2V2_7->Text); 

	snprintf(d.trial2_2RL_1, 10, "%s", textBoxtrial2_2RL_1->Text);
	snprintf(d.trial2_2RL_2, 10, "%s", textBoxtrial2_2RL_2->Text);
	snprintf(d.trial2_2RL_3, 10, "%s", textBoxtrial2_2RL_3->Text);
	snprintf(d.trial2_2RL_4, 10, "%s", textBoxtrial2_2RL_4->Text);
	snprintf(d.trial2_2RL_5, 10, "%s", textBoxtrial2_2RL_5->Text);
	snprintf(d.trial2_2RL_6, 10, "%s", textBoxtrial2_2RL_6->Text);
	snprintf(d.trial2_2RL_7, 10, "%s", textBoxtrial2_2RL_7->Text);

	snprintf(d.trial3_1I1_1, 10, "%s", labeltrial3_1I1_1->Text);
	snprintf(d.trial3_1I1_2, 10, "%s", labeltrial3_1I1_2->Text);
	snprintf(d.trial3_1I1_3, 10, "%s", labeltrial3_1I1_3->Text);
	snprintf(d.trial3_1I1_4, 10, "%s", labeltrial3_1I1_4->Text);
	snprintf(d.trial3_1I1_5, 10, "%s", labeltrial3_1I1_5->Text);
	snprintf(d.trial3_1I1_6, 10, "%s", labeltrial3_1I1_6->Text);
	snprintf(d.trial3_1I1_7, 10, "%s", labeltrial3_1I1_7->Text);
	snprintf(d.trial3_1I1_8, 10, "%s", labeltrial3_1I1_8->Text);

	snprintf(d.trial3_1V2_1, 10, "%s", labeltrial3_1V2_1->Text);
	snprintf(d.trial3_1V2_2, 10, "%s", labeltrial3_1V2_2->Text);
	snprintf(d.trial3_1V2_3, 10, "%s", labeltrial3_1V2_3->Text);
	snprintf(d.trial3_1V2_4, 10, "%s", labeltrial3_1V2_4->Text);
	snprintf(d.trial3_1V2_5, 10, "%s", labeltrial3_1V2_5->Text);
	snprintf(d.trial3_1V2_6, 10, "%s", labeltrial3_1V2_6->Text);
	snprintf(d.trial3_1V2_7, 10, "%s", labeltrial3_1V2_7->Text);
	snprintf(d.trial3_1V2_8, 10, "%s", labeltrial3_1V2_8->Text);
	snprintf(d.trial3_1rm, 10, "%s", textBoxtrial3_1rm->Text); 

	snprintf(d.trial3_2U2_1, 10, "%s", labeltrial3_2U2_1->Text);
	snprintf(d.trial3_2U2_2, 10, "%s", labeltrial3_2U2_2->Text);
	snprintf(d.trial3_2U2_3, 10, "%s", labeltrial3_2U2_3->Text);
	snprintf(d.trial3_2U2_4, 10, "%s", labeltrial3_2U2_4->Text);
	snprintf(d.trial3_2U2_5, 10, "%s", labeltrial3_2U2_5->Text);
	snprintf(d.trial3_2U2_6, 10, "%s", labeltrial3_2U2_6->Text);
	snprintf(d.trial3_2U2_7, 10, "%s", labeltrial3_2U2_7->Text);
	snprintf(d.trial3_2U2_8, 10, "%s", labeltrial3_2U2_8->Text);  

	snprintf(d.trial3_2IL_1, 10, "%s", labeltrial3_2IL_1->Text);
	snprintf(d.trial3_2IL_2, 10, "%s", labeltrial3_2IL_2->Text);
	snprintf(d.trial3_2IL_3, 10, "%s", labeltrial3_2IL_3->Text);
	snprintf(d.trial3_2IL_4, 10, "%s", labeltrial3_2IL_4->Text);
	snprintf(d.trial3_2IL_5, 10, "%s", labeltrial3_2IL_5->Text);
	snprintf(d.trial3_2IL_6, 10, "%s", labeltrial3_2IL_6->Text);
	snprintf(d.trial3_2IL_7, 10, "%s", labeltrial3_2IL_7->Text);
	snprintf(d.trial3_2IL_8, 10, "%s", labeltrial3_2IL_8->Text); 

	snprintf(d.trial3_2RL_1, 10, "%s", textBoxtrial3_2RL_1->Text);
	snprintf(d.trial3_2RL_2, 10, "%s", textBoxtrial3_2RL_2->Text);
	snprintf(d.trial3_2RL_3, 10, "%s", textBoxtrial3_2RL_3->Text);
	snprintf(d.trial3_2RL_4, 10, "%s", textBoxtrial3_2RL_4->Text);
	snprintf(d.trial3_2RL_5, 10, "%s", textBoxtrial3_2RL_5->Text);
	snprintf(d.trial3_2RL_6, 10, "%s", textBoxtrial3_2RL_6->Text);
	snprintf(d.trial3_2RL_7, 10, "%s", textBoxtrial3_2RL_7->Text);
	snprintf(d.trial3_2RL_8, 10, "%s", textBoxtrial3_2RL_8->Text);

	snprintf(d.trial4_1I1_1, 10, "%s", labeltrial4_1I1_1->Text);
	snprintf(d.trial4_1I1_2, 10, "%s", labeltrial4_1I1_2->Text);
	snprintf(d.trial4_1I1_3, 10, "%s", labeltrial4_1I1_3->Text);
	snprintf(d.trial4_1I1_4, 10, "%s", labeltrial4_1I1_4->Text);
	snprintf(d.trial4_1I1_5, 10, "%s", labeltrial4_1I1_5->Text);
	snprintf(d.trial4_1I1_6, 10, "%s", labeltrial4_1I1_6->Text);
	snprintf(d.trial4_1I1_7, 10, "%s", labeltrial4_1I1_7->Text);
	snprintf(d.trial4_1I1_8, 10, "%s", labeltrial4_1I1_8->Text); 

	snprintf(d.trial4_1IL_1, 10, "%s", labeltrial4_1IL_1->Text);
	snprintf(d.trial4_1IL_2, 10, "%s", labeltrial4_1IL_2->Text);
	snprintf(d.trial4_1IL_3, 10, "%s", labeltrial4_1IL_3->Text);
	snprintf(d.trial4_1IL_4, 10, "%s", labeltrial4_1IL_4->Text);
	snprintf(d.trial4_1IL_5, 10, "%s", labeltrial4_1IL_5->Text);
	snprintf(d.trial4_1IL_6, 10, "%s", labeltrial4_1IL_6->Text);
	snprintf(d.trial4_1IL_7, 10, "%s", labeltrial4_1IL_7->Text);
	snprintf(d.trial4_1IL_8, 10, "%s", labeltrial4_1IL_8->Text);
	snprintf(d.trial4_1α, 10, "%s", textBoxtrial4_1α->Text);


	snprintf(d.trial4_2U2_1, 10, "%s", labeltrial4_2U2_1->Text);
	snprintf(d.trial4_2U2_2, 10, "%s", labeltrial4_2U2_2->Text);
	snprintf(d.trial4_2U2_3, 10, "%s", labeltrial4_2U2_3->Text);
	snprintf(d.trial4_2U2_4, 10, "%s", labeltrial4_2U2_4->Text);
	snprintf(d.trial4_2U2_5, 10, "%s", labeltrial4_2U2_5->Text);
	snprintf(d.trial4_2U2_6, 10, "%s", labeltrial4_2U2_6->Text);
	snprintf(d.trial4_2U2_7, 10, "%s", labeltrial4_2U2_7->Text);
	snprintf(d.trial4_2U2_8, 10, "%s", labeltrial4_2U2_8->Text); 

	snprintf(d.trial4_2IL_1, 10, "%s", labeltrial4_2IL_1->Text);
	snprintf(d.trial4_2IL_2, 10, "%s", labeltrial4_2IL_2->Text);
	snprintf(d.trial4_2IL_3, 10, "%s", labeltrial4_2IL_3->Text);
	snprintf(d.trial4_2IL_4, 10, "%s", labeltrial4_2IL_4->Text);
	snprintf(d.trial4_2IL_5, 10, "%s", labeltrial4_2IL_5->Text);
	snprintf(d.trial4_2IL_6, 10, "%s", labeltrial4_2IL_6->Text);
	snprintf(d.trial4_2IL_7, 10, "%s", labeltrial4_2IL_7->Text);
	snprintf(d.trial4_2IL_8, 10, "%s", labeltrial4_2IL_8->Text); 

	snprintf(d.trial4_2RL_1, 10, "%s", textBoxtrial4_2RL_1->Text);
	snprintf(d.trial4_2RL_2, 10, "%s", textBoxtrial4_2RL_2->Text);
	snprintf(d.trial4_2RL_3, 10, "%s", textBoxtrial4_2RL_3->Text);
	snprintf(d.trial4_2RL_4, 10, "%s", textBoxtrial4_2RL_4->Text);
	snprintf(d.trial4_2RL_5, 10, "%s", textBoxtrial4_2RL_5->Text);
	snprintf(d.trial4_2RL_6, 10, "%s", textBoxtrial4_2RL_6->Text);
	snprintf(d.trial4_2RL_7, 10, "%s", textBoxtrial4_2RL_7->Text);
	snprintf(d.trial4_2RL_8, 10, "%s", textBoxtrial4_2RL_8->Text);
	return d;
}

