#include "��ά�϶���ʵ������.h"
#include "data_transf.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
using namespace �繤��·����̨;

void ��ά�϶���ʵ������::SendData() {
	int TrialCode = 4;
	ST_��ά�϶��� s;
	memset(&s, 0x00, sizeof(ST_��ά�϶���));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_��ά�϶���)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");


}
using namespace System::Windows::Forms::DataVisualization::Charting;

void ��ά�϶���ʵ������::chartTrial2_load() {
	Series ^s = chartTrial2->Series[0];
	ChartArea ^ c = chartTrial2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "����mA";
	c->AxisY->Title = "��ѹV";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labelMethod2I1->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I2->Text), Convert::ToSingle(labelMethod2URL2->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I3->Text), Convert::ToSingle(labelMethod2URL3->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I4->Text), Convert::ToSingle(labelMethod2URL4->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I5->Text), Convert::ToSingle(labelMethod2URL5->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I6->Text), Convert::ToSingle(labelMethod2URL6->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I7->Text), Convert::ToSingle(labelMethod2URL7->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I8->Text), Convert::ToSingle(labelMethod2URL8->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I9->Text), Convert::ToSingle(labelMethod2URL9->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I10->Text), Convert::ToSingle(labelMethod2URL10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}


void ��ά�϶���ʵ������::chartTrial6_load() {
	Series ^s = chartTrial6->Series[0];
	ChartArea ^ c = chartTrial6->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "����mA";
	c->AxisY->Title = "��ѹV";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labelMethod6I1->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I2->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I3->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I4->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I5->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I6->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I7->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I8->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I9->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I10->Text), Convert::ToSingle(labelMethod6URL1->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}


ST_��ά�϶��� ��ά�϶���ʵ������::Load_Grade_data() {
	ST_��ά�϶��� d;
	memset(&d, 0x00, sizeof(ST_��ά�϶���));

	snprintf(d.Method1Isc, 10, "%s", labelMethod1Isc->Text);
	snprintf(d.Method1Ro, 10, "%s", textBoxMethod1Ro->Text);
	snprintf(d.Method1Uoc, 10, "%s", labelMethod1Uoc->Text);

	snprintf(d.Method1Us, 10, "%s", labelMethod1Uoc->Text);
	snprintf(d.Method1I, 10, "%s", textBoxMethod1I->Text);
	snprintf(d.Method2Ro, 10, "%s", textBoxMethod2Ro->Text);
	snprintf(d.Method3Uoc, 10, "%s", textBoxMethod2Ro->Text);
	snprintf(d.Method3Ro, 10, "%s", textBoxMethod2Ro->Text);
	snprintf(d.Method4Uoc, 10, "%s", textBoxMethod4Uoc->Text);
	snprintf(d.Method5R0, 10, "%s", textBoxMethod5R0->Text);

	
	snprintf(d.Method2I1, 10, "%s", labelMethod2I1->Text);
	snprintf(d.Method2I2, 10, "%s", labelMethod2I2->Text);
	snprintf(d.Method2I3, 10, "%s", labelMethod2I3->Text);
	snprintf(d.Method2I4, 10, "%s", labelMethod2I4->Text);
	snprintf(d.Method2I5, 10, "%s", labelMethod2I5->Text);
	snprintf(d.Method2I6, 10, "%s", labelMethod2I6->Text);
	snprintf(d.Method2I7, 10, "%s", labelMethod2I7->Text);
	snprintf(d.Method2I8, 10, "%s", labelMethod2I8->Text);
	snprintf(d.Method2I9, 10, "%s", labelMethod2I9->Text);
	snprintf(d.Method2I10,10, "%s", labelMethod2I10->Text);
	snprintf(d.Method2RL1, 10, "%s", textBoxMethod2RL1->Text);
	snprintf(d.Method2RL2, 10, "%s", textBoxMethod2RL2->Text);
	snprintf(d.Method2RL3, 10, "%s", textBoxMethod2RL3->Text);
	snprintf(d.Method2RL4, 10, "%s", textBoxMethod2RL4->Text);
	snprintf(d.Method2RL5, 10, "%s", textBoxMethod2RL5->Text);
	snprintf(d.Method2RL6, 10, "%s", textBoxMethod2RL6->Text);
	snprintf(d.Method2RL7, 10, "%s", textBoxMethod2RL7->Text);
	snprintf(d.Method2RL8, 10, "%s", textBoxMethod2RL8->Text);
	snprintf(d.Method2RL9, 10, "%s", textBoxMethod2RL9->Text);
	snprintf(d.Method2RL10, 10, "%s", textBoxMethod2RL10->Text);

	snprintf(d.Method3Ro, 10, "%s", textBoxMethod3Ro->Text);
	snprintf(d.Method3Uoc, 10, "%s", textBoxMethod3Uoc->Text);

	snprintf(d.Method6I1, 10, "%s", labelMethod6I1->Text);
	snprintf(d.Method6I2, 10, "%s", labelMethod6I2->Text);
	snprintf(d.Method6I3, 10, "%s", labelMethod6I3->Text);
	snprintf(d.Method6I4, 10, "%s", labelMethod6I4->Text);
	snprintf(d.Method6I5, 10, "%s", labelMethod6I5->Text);
	snprintf(d.Method6I6, 10, "%s", labelMethod6I6->Text);
	snprintf(d.Method6I7, 10, "%s", labelMethod6I7->Text);
	snprintf(d.Method6I8, 10, "%s", labelMethod6I8->Text);
	snprintf(d.Method6I9, 10, "%s", labelMethod6I9->Text);
	snprintf(d.Method6I10, 10, "%s", labelMethod6I10->Text);
	snprintf(d.Method6RL1, 10, "%s", textBoxMethod6RL1->Text);
	snprintf(d.Method6RL2, 10, "%s", textBoxMethod6RL2->Text);
	snprintf(d.Method6RL3, 10, "%s", textBoxMethod6RL3->Text);
	snprintf(d.Method6RL4, 10, "%s", textBoxMethod6RL4->Text);
	snprintf(d.Method6RL5, 10, "%s", textBoxMethod6RL5->Text);
	snprintf(d.Method6RL6, 10, "%s", textBoxMethod6RL6->Text);
	snprintf(d.Method6RL7, 10, "%s", textBoxMethod6RL7->Text);
	snprintf(d.Method6RL8, 10, "%s", textBoxMethod6RL8->Text);
	snprintf(d.Method6RL9, 10, "%s", textBoxMethod6RL9->Text);
	snprintf(d.Method6RL10, 10, "%s", textBoxMethod6RL10->Text);

	snprintf(d.summing_up, 100, "%s", textBox����->Text);
	return d;
}