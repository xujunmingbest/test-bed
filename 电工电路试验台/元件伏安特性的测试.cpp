#include "Ԫ���������ԵĲ���ʵ�鱨��.h"
#include "Ԫ���������ԵĲ���ʵ������.h"
using namespace �繤��·����̨;
using namespace N_Ԫ���������ԵĲ���;
using namespace System::Windows::Forms::DataVisualization::Charting;


void Ԫ���������ԵĲ���ʵ�鱨��::this_load() {
	DateTime a = DateTime::Now;
	textBox9->Text = a.Year.ToString() + "-" + a.Month.ToString() + "-" + a.Day.ToString();
	textBox10->Text = a.ToFileTime().ToString();

	label����SU1->Text = s_���Ե�����::SU1;
	label����SU2->Text = s_���Ե�����::SU2;
	label����SU3->Text = s_���Ե�����::SU3;
	label����SU4->Text = s_���Ե�����::SU4;
	label����SU5->Text = s_���Ե�����::SU5;
	label����SU6->Text = s_���Ե�����::SU6;
	label����SU7->Text = s_���Ե�����::SU7;
	label����SU8->Text = s_���Ե�����::SU8;
	label����SU9->Text = s_���Ե�����::SU9;
	label����SU10->Text= s_���Ե�����::SU10;

	label����U1->Text = s_���Ե�����::U1;
	label����U2->Text = s_���Ե�����::U2;
	label����U3->Text = s_���Ե�����::U3;
	label����U4->Text = s_���Ե�����::U4;
	label����U5->Text = s_���Ե�����::U5;
	label����U6->Text = s_���Ե�����::U6;
	label����U7->Text = s_���Ե�����::U7;
	label����U8->Text = s_���Ե�����::U8;
	label����U9->Text = s_���Ե�����::U9;
	label����U10->Text = s_���Ե�����::U10;

	label����I1->Text = s_���Ե�����::I1;
	label����I2->Text = s_���Ե�����::I2;
	label����I3->Text = s_���Ե�����::I3;
	label����I4->Text = s_���Ե�����::I4;
	label����I5->Text = s_���Ե�����::I5;
	label����I6->Text = s_���Ե�����::I6;
	label����I7->Text = s_���Ե�����::I7;
	label����I8->Text = s_���Ե�����::I8;
	label����I9->Text = s_���Ե�����::I9;
	label����I10->Text = s_���Ե�����::I10;

	label���Խ���->Text = s_���Ե�����::summing_up;

	/*****�׳��*****/
	label�׳�SU1->Text = s_�׳��::SU1;
	label�׳�SU2->Text = s_�׳��::SU2;
	label�׳�SU3->Text = s_�׳��::SU3;
	label�׳�SU4->Text = s_�׳��::SU4;
	label�׳�SU5->Text = s_�׳��::SU5;
	label�׳�SU6->Text = s_�׳��::SU6;
	label�׳�SU7->Text = s_�׳��::SU7;
	label�׳�SU8->Text = s_�׳��::SU8;
	label�׳�SU9->Text = s_�׳��::SU9;
	label�׳�SU10->Text = s_�׳��::SU10;

	label�׳�U1->Text = s_�׳��::U1;
	label�׳�U2->Text = s_�׳��::U2;
	label�׳�U3->Text = s_�׳��::U3;
	label�׳�U4->Text = s_�׳��::U4;
	label�׳�U5->Text = s_�׳��::U5;
	label�׳�U6->Text = s_�׳��::U6;
	label�׳�U7->Text = s_�׳��::U7;
	label�׳�U8->Text = s_�׳��::U8;
	label�׳�U9->Text = s_�׳��::U9;
	label�׳�U10->Text = s_�׳��::U10;

	label�׳�I1->Text = s_�׳��::I1;
	label�׳�I2->Text = s_�׳��::I2;
	label�׳�I3->Text = s_�׳��::I3;
	label�׳�I4->Text = s_�׳��::I4;
	label�׳�I5->Text = s_�׳��::I5;
	label�׳�I6->Text = s_�׳��::I6;
	label�׳�I7->Text = s_�׳��::I7;
	label�׳�I8->Text = s_�׳��::I8;
	label�׳�I9->Text = s_�׳��::I9;
	label�׳�I10->Text = s_�׳��::I10;

	label�׳����->Text = s_�׳��::summing_up;

	/*********���********/
	label���ZSU1->Text = s_���::ZSU1;
	label���ZSU2->Text = s_���::ZSU2;
	label���ZSU3->Text = s_���::ZSU3;
	label���ZSU4->Text = s_���::ZSU4;
	label���ZSU5->Text = s_���::ZSU5;
	label���ZSU6->Text = s_���::ZSU6;
	label���ZSU7->Text = s_���::ZSU7; 
	label���ZSU8->Text = s_���::ZSU8;
	label���ZSU9->Text = s_���::ZSU9;
	label���ZSU10->Text = s_���::ZSU10;
	label���FSU1->Text = s_���::FSU1;
	label���FSU2->Text = s_���::FSU2;
	label���FSU3->Text = s_���::FSU3;
	label���FSU4->Text = s_���::FSU4;
	label���FSU5->Text = s_���::FSU5;
	label���FSU6->Text = s_���::FSU6;
	label���FSU7->Text = s_���::FSU7;
	label���FSU8->Text = s_���::FSU8;
	label���FSU9->Text = s_���::FSU9;
	label���FSU10->Text = s_���::FSU10;

	label���ZU1->Text = s_���::ZU1;
	label���ZU2->Text = s_���::ZU2;
	label���ZU3->Text = s_���::ZU3;
	label���ZU4->Text = s_���::ZU4;
	label���ZU5->Text = s_���::ZU5;
	label���ZU6->Text = s_���::ZU6;
	label���ZU7->Text = s_���::ZU7;
	label���ZU8->Text = s_���::ZU8;
	label���ZU9->Text = s_���::ZU9;
	label���ZU10->Text = s_���::ZU10;
	label���FU1->Text = s_���::FU1;
	label���FU2->Text = s_���::FU2;
	label���FU3->Text = s_���::FU3;
	label���FU4->Text = s_���::FU4;
	label���FU5->Text = s_���::FU5;
	label���FU6->Text = s_���::FU6;
	label���FU7->Text = s_���::FU7;
	label���FU8->Text = s_���::FU8;
	label���FU9->Text = s_���::FU9;
	label���FU10->Text = s_���::FU10;

	label���ZI1->Text = s_���::ZI1;
	label���ZI2->Text = s_���::ZI2;
	label���ZI3->Text = s_���::ZI3;
	label���ZI4->Text = s_���::ZI4;
	label���ZI5->Text = s_���::ZI5;
	label���ZI6->Text = s_���::ZI6;
	label���ZI7->Text = s_���::ZI7;
	label���ZI8->Text = s_���::ZI8;
	label���ZI9->Text = s_���::ZI9;
	label���ZI10->Text = s_���::ZI10;
	label���FI1->Text = s_���::FI1;
	label���FI2->Text = s_���::FI2;
	label���FI3->Text = s_���::FI3;
	label���FI4->Text = s_���::FI4;
	label���FI5->Text = s_���::FI5;
	label���FI6->Text = s_���::FI6;
	label���FI7->Text = s_���::FI7;
	label���FI8->Text = s_���::FI8;
	label���FI9->Text = s_���::FI9;
	label���FI10->Text = s_���::FI10;
	label��ܽ���->Text = s_���::summing_up;
	/*********���********/
	label���ZSU1->Text = s_���::ZSU1;
	label���ZSU2->Text = s_���::ZSU2;
	label���ZSU3->Text = s_���::ZSU3;
	label���ZSU4->Text = s_���::ZSU4;
	label���ZSU5->Text = s_���::ZSU5;
	label���ZSU6->Text = s_���::ZSU6;
	label���ZSU7->Text = s_���::ZSU7;
	label���ZSU8->Text = s_���::ZSU8;
	label���ZSU9->Text = s_���::ZSU9;
	label���ZSU10->Text = s_���::ZSU10;
	label���FSU1->Text = s_���::FSU1;
	label���FSU2->Text = s_���::FSU2;
	label���FSU3->Text = s_���::FSU3;
	label���FSU4->Text = s_���::FSU4;
	label���FSU5->Text = s_���::FSU5;
	label���FSU6->Text = s_���::FSU6;
	label���FSU7->Text = s_���::FSU7;
	label���FSU8->Text = s_���::FSU8;
	label���FSU9->Text = s_���::FSU9;
	label���FSU10->Text = s_���::FSU10;

	label���ZU1->Text = s_���::ZU1;
	label���ZU2->Text = s_���::ZU2;
	label���ZU3->Text = s_���::ZU3;
	label���ZU4->Text = s_���::ZU4;
	label���ZU5->Text = s_���::ZU5;
	label���ZU6->Text = s_���::ZU6;
	label���ZU7->Text = s_���::ZU7;
	label���ZU8->Text = s_���::ZU8;
	label���ZU9->Text = s_���::ZU9;
	label���ZU10->Text = s_���::ZU10;
	label1���FU1->Text = s_���::FU1;
	label1���FU2->Text = s_���::FU2;
	label1���FU3->Text = s_���::FU3;
	label1���FU4->Text = s_���::FU4;
	label1���FU5->Text = s_���::FU5;
	label1���FU6->Text = s_���::FU6;
	label1���FU7->Text = s_���::FU7;
	label1���FU8->Text = s_���::FU8;
	label1���FU9->Text = s_���::FU9;
	label1���FU10->Text = s_���::FU10;

	label���ZI1->Text = s_���::ZI1;
	label���ZI2->Text = s_���::ZI2;
	label���ZI3->Text = s_���::ZI3;
	label���ZI4->Text = s_���::ZI4;
	label���ZI5->Text = s_���::ZI5;
	label���ZI6->Text = s_���::ZI6;
	label���ZI7->Text = s_���::ZI7;
	label���ZI8->Text = s_���::ZI8;
	label���ZI9->Text = s_���::ZI9;
	label���ZI10->Text = s_���::ZI10;
	label1���FI1->Text = s_���::FI1;
	label1���FI2->Text = s_���::FI2;
	label1���FI3->Text = s_���::FI3;
	label1���FI4->Text = s_���::FI4;
	label1���FI5->Text = s_���::FI5;
	label1���FI6->Text = s_���::FI6;
	label1���FI7->Text = s_���::FI7;
	label1���FI8->Text = s_���::FI8;
	label1���FI9->Text = s_���::FI9;
	label1���FI10->Text = s_���::FI10;


	label��ܽ���->Text = s_���::summing_up;
	/*********��ѹ********/
	label��ѹZSU1->Text = s_��ѹ::ZSU1;
	label��ѹZSU2->Text = s_��ѹ::ZSU2;
	label��ѹZSU3->Text = s_��ѹ::ZSU3;
	label��ѹZSU4->Text = s_��ѹ::ZSU4;
	label��ѹZSU5->Text = s_��ѹ::ZSU5;
	label��ѹZSU6->Text = s_��ѹ::ZSU6;
	label��ѹZSU7->Text = s_��ѹ::ZSU7;
	label��ѹZSU8->Text = s_��ѹ::ZSU8;
	label��ѹZSU9->Text = s_��ѹ::ZSU9;
	label��ѹZSU10->Text = s_��ѹ::ZSU10;
	label��ѹFSU1->Text = s_��ѹ::FSU1;
	label��ѹFSU2->Text = s_��ѹ::FSU2;
	label��ѹFSU3->Text = s_��ѹ::FSU3;
	label��ѹFSU4->Text = s_��ѹ::FSU4;
	label��ѹFSU5->Text = s_��ѹ::FSU5;
	label��ѹFSU6->Text = s_��ѹ::FSU6;
	label��ѹFSU7->Text = s_��ѹ::FSU7;
	label��ѹFSU8->Text = s_��ѹ::FSU8;
	label��ѹFSU9->Text = s_��ѹ::FSU9;
	label��ѹFSU10->Text = s_��ѹ::FSU10;

	label��ѹZU1->Text = s_��ѹ::ZU1;
	label��ѹZU2->Text = s_��ѹ::ZU2;
	label��ѹZU3->Text = s_��ѹ::ZU3;
	label��ѹZU4->Text = s_��ѹ::ZU4;
	label��ѹZU5->Text = s_��ѹ::ZU5;
	label��ѹZU6->Text = s_��ѹ::ZU6;
	label��ѹZU7->Text = s_��ѹ::ZU7;
	label��ѹZU8->Text = s_��ѹ::ZU8;
	label��ѹZU9->Text = s_��ѹ::ZU9;
	label��ѹZU10->Text = s_��ѹ::ZU10;
	label��ѹFU1->Text = s_��ѹ::FU1;
	label��ѹFU2->Text = s_��ѹ::FU2;
	label��ѹFU3->Text = s_��ѹ::FU3;
	label��ѹFU4->Text = s_��ѹ::FU4;
	label��ѹFU5->Text = s_��ѹ::FU5;
	label��ѹFU6->Text = s_��ѹ::FU6;
	label��ѹFU7->Text = s_��ѹ::FU7;
	label��ѹFU8->Text = s_��ѹ::FU8;
	label��ѹFU9->Text = s_��ѹ::FU9;
	label��ѹFU10->Text = s_��ѹ::FU10;

	label��ѹZI1->Text = s_��ѹ::ZI1;
	label��ѹZI2->Text = s_��ѹ::ZI2;
	label��ѹZI3->Text = s_��ѹ::ZI3;
	label��ѹZI4->Text = s_��ѹ::ZI4;
	label��ѹZI5->Text = s_��ѹ::ZI5;
	label��ѹZI6->Text = s_��ѹ::ZI6;
	label��ѹZI7->Text = s_��ѹ::ZI7;
	label��ѹZI8->Text = s_��ѹ::ZI8;
	label��ѹZI9->Text = s_��ѹ::ZI9;
	label��ѹZI10->Text = s_��ѹ::ZI10;
	label��ѹFI1->Text = s_��ѹ::FI1;
	label��ѹFI2->Text = s_��ѹ::FI2;
	label��ѹFI3->Text = s_��ѹ::FI3;
	label��ѹFI4->Text = s_��ѹ::FI4;
	label��ѹFI5->Text = s_��ѹ::FI5;
	label��ѹFI6->Text = s_��ѹ::FI6;
	label��ѹFI7->Text = s_��ѹ::FI7;
	label��ѹFI8->Text = s_��ѹ::FI8;
	label��ѹFI9->Text = s_��ѹ::FI9;
	label��ѹFI10->Text = s_��ѹ::FI10;

	label��ѹ����->Text = s_��ѹ::summing_up;
}


void Ԫ���������ԵĲ���ʵ�鱨��::chart����_load() {
	Series ^s = chart����->Series[0];
	chart����->Titles->Add("  ���Ե�������������");
	ChartArea ^ c = chart����->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label����U1->Text), Convert::ToSingle(label����I1->Text));
		s->Points->AddXY(Convert::ToSingle(label����U2->Text), Convert::ToSingle(label����I2->Text));
		s->Points->AddXY(Convert::ToSingle(label����U3->Text), Convert::ToSingle(label����I3->Text));
		s->Points->AddXY(Convert::ToSingle(label����U4->Text), Convert::ToSingle(label����I4->Text));
		s->Points->AddXY(Convert::ToSingle(label����U5->Text), Convert::ToSingle(label����I5->Text));
		s->Points->AddXY(Convert::ToSingle(label����U6->Text), Convert::ToSingle(label����I6->Text));
		s->Points->AddXY(Convert::ToSingle(label����U7->Text), Convert::ToSingle(label����I7->Text));
		s->Points->AddXY(Convert::ToSingle(label����U8->Text), Convert::ToSingle(label����I8->Text));
		s->Points->AddXY(Convert::ToSingle(label����U9->Text), Convert::ToSingle(label����I9->Text));
		s->Points->AddXY(Convert::ToSingle(label����U10->Text), Convert::ToSingle(label����I10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}

void Ԫ���������ԵĲ���ʵ�鱨��::chart�׳�_load() {
	Series ^s = chart�׳�->Series[0];
	chart�׳�->Titles->Add("  �׳���ݷ�������");
	ChartArea ^ c = chart�׳�->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label�׳�U1->Text), Convert::ToSingle(label�׳�I1->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U2->Text), Convert::ToSingle(label�׳�I2->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U3->Text), Convert::ToSingle(label�׳�I3->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U4->Text), Convert::ToSingle(label�׳�I4->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U5->Text), Convert::ToSingle(label�׳�I5->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U6->Text), Convert::ToSingle(label�׳�I6->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U7->Text), Convert::ToSingle(label�׳�I7->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U8->Text), Convert::ToSingle(label�׳�I8->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U9->Text), Convert::ToSingle(label�׳�I9->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U10->Text), Convert::ToSingle(label�׳�I10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������ԵĲ���ʵ�鱨��::chart��ѹ_load() {
	Series ^s = chart��ѹ->Series[0];
	chart��ѹ->Titles->Add("  ��ѹ�����ܷ�������");
	ChartArea ^ c = chart��ѹ->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label��ѹZU1->Text), Convert::ToSingle(label��ѹZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU2->Text), Convert::ToSingle(label��ѹZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU3->Text), Convert::ToSingle(label��ѹZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU4->Text), Convert::ToSingle(label��ѹZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU5->Text), Convert::ToSingle(label��ѹZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU6->Text), Convert::ToSingle(label��ѹZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU7->Text), Convert::ToSingle(label��ѹZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU8->Text), Convert::ToSingle(label��ѹZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU9->Text), Convert::ToSingle(label��ѹZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU10->Text), Convert::ToSingle(label��ѹZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU1->Text), Convert::ToSingle(label��ѹFI1->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU2->Text), Convert::ToSingle(label��ѹFI2->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU3->Text), Convert::ToSingle(label��ѹFI3->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU4->Text), Convert::ToSingle(label��ѹFI4->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU5->Text), Convert::ToSingle(label��ѹFI5->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU6->Text), Convert::ToSingle(label��ѹFI6->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU7->Text), Convert::ToSingle(label��ѹFI7->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU8->Text), Convert::ToSingle(label��ѹFI8->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU9->Text), Convert::ToSingle(label��ѹFI9->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU10->Text), Convert::ToSingle(label��ѹFI10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������ԵĲ���ʵ�鱨��::chart���_load() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2AP9��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label���ZU1->Text), Convert::ToSingle(label���ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU2->Text), Convert::ToSingle(label���ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU3->Text), Convert::ToSingle(label���ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU4->Text), Convert::ToSingle(label���ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU5->Text), Convert::ToSingle(label���ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU6->Text), Convert::ToSingle(label���ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU7->Text), Convert::ToSingle(label���ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU8->Text), Convert::ToSingle(label���ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU9->Text), Convert::ToSingle(label���ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU10->Text), Convert::ToSingle(label���ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU1->Text), Convert::ToSingle(label���FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU2->Text), Convert::ToSingle(label���FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU3->Text), Convert::ToSingle(label���FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU4->Text), Convert::ToSingle(label���FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU5->Text), Convert::ToSingle(label���FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU6->Text), Convert::ToSingle(label���FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU7->Text), Convert::ToSingle(label���FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU8->Text), Convert::ToSingle(label���FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU9->Text), Convert::ToSingle(label���FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU10->Text), Convert::ToSingle(label���FI10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������ԵĲ���ʵ�鱨��::chart���_load() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2CP19��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label���ZU1->Text), Convert::ToSingle(label���ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU2->Text), Convert::ToSingle(label���ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU3->Text), Convert::ToSingle(label���ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU4->Text), Convert::ToSingle(label���ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU5->Text), Convert::ToSingle(label���ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU6->Text), Convert::ToSingle(label���ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU7->Text), Convert::ToSingle(label���ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU8->Text), Convert::ToSingle(label���ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU9->Text), Convert::ToSingle(label���ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU10->Text), Convert::ToSingle(label���ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU1->Text), Convert::ToSingle(label1���FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU2->Text), Convert::ToSingle(label1���FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU3->Text), Convert::ToSingle(label1���FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU4->Text), Convert::ToSingle(label1���FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU5->Text), Convert::ToSingle(label1���FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU6->Text), Convert::ToSingle(label1���FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU7->Text), Convert::ToSingle(label1���FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU8->Text), Convert::ToSingle(label1���FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU9->Text), Convert::ToSingle(label1���FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU10->Text), Convert::ToSingle(label1���FI10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}




void Ԫ���������ԵĲ���ʵ������::This_Load() {
	/********ͼ���ʼ��*******/
	 chart����Init();
	 chart�׳�Init();
	 chart���Init();
     chart���Init();
	 chart��ѹInit();



	textBoxSU1->Text = s_���Ե�����::SU1;
	textBoxSU2->Text = s_���Ե�����::SU2;
	textBoxSU3->Text = s_���Ե�����::SU3;
	textBoxSU4->Text = s_���Ե�����::SU4;
	textBoxSU5->Text = s_���Ե�����::SU5;
	textBoxSU6->Text = s_���Ե�����::SU6;
	textBoxSU7->Text = s_���Ե�����::SU7;
	textBoxSU8->Text = s_���Ե�����::SU8;
	textBoxSU9->Text = s_���Ե�����::SU9;
	textBoxSU10->Text = s_���Ե�����::SU10;

	label����I1->Text = s_���Ե�����::I1;
	label����I2->Text = s_���Ե�����::I2;
	label����I3->Text = s_���Ե�����::I3;
	label����I4->Text = s_���Ե�����::I4;
	label����I5->Text = s_���Ե�����::I5;
	label����I6->Text = s_���Ե�����::I6;
	label����I7->Text = s_���Ե�����::I7;
	label����I8->Text = s_���Ե�����::I8;
	label����I9->Text = s_���Ե�����::I9;
	label����I10->Text = s_���Ե�����::I10;


	label����U1->Text = s_���Ե�����::U1;
	label����U2->Text = s_���Ե�����::U2;
	label����U3->Text = s_���Ե�����::U3;
	label����U4->Text = s_���Ե�����::U4;
	label����U5->Text = s_���Ե�����::U5;
	label����U6->Text = s_���Ե�����::U6;
	label����U7->Text = s_���Ե�����::U7;
	label����U8->Text = s_���Ե�����::U8;
	label����U9->Text = s_���Ե�����::U9;
	label����U10->Text = s_���Ե�����::U10;
    textBox���Խ���->Text = s_���Ե�����::summing_up;

	/*******�׳��******/
	textBox�׳�SU1->Text = s_�׳��::SU1;
	textBox�׳�SU2->Text = s_�׳��::SU2;
	textBox�׳�SU3->Text = s_�׳��::SU3;
	textBox�׳�SU4->Text = s_�׳��::SU4;
	textBox�׳�SU5->Text = s_�׳��::SU5;
	textBox�׳�SU6->Text = s_�׳��::SU6;
	textBox�׳�SU7->Text = s_�׳��::SU7;
	textBox�׳�SU8->Text = s_�׳��::SU8;
	textBox�׳�SU9->Text = s_�׳��::SU9;
	textBox�׳�SU10->Text = s_�׳��::SU10;

	label�׳�I1->Text = s_�׳��::I1;
	label�׳�I2->Text = s_�׳��::I2;
	label�׳�I3->Text = s_�׳��::I3;
	label�׳�I4->Text = s_�׳��::I4;
	label�׳�I5->Text = s_�׳��::I5;
	label�׳�I6->Text = s_�׳��::I6;
	label�׳�I7->Text = s_�׳��::I7;
	label�׳�I8->Text = s_�׳��::I8;
	label�׳�I9->Text = s_�׳��::I9;
	label�׳�I10->Text = s_�׳��::I10;


	label�׳�U1->Text = s_�׳��::U1;
	label�׳�U2->Text = s_�׳��::U2;
	label�׳�U3->Text = s_�׳��::U3;
	label�׳�U4->Text = s_�׳��::U4;
	label�׳�U5->Text = s_�׳��::U5;
	label�׳�U6->Text = s_�׳��::U6;
	label�׳�U7->Text = s_�׳��::U7;
	label�׳�U8->Text = s_�׳��::U8;
	label�׳�U9->Text = s_�׳��::U9;
	label�׳�U10->Text = s_�׳��::U10;
	textBox�׳����->Text = s_�׳��::summing_up;

	/**************s_���*****************/

	textBox���ZSU1->Text = s_���::ZSU1;
	textBox���ZSU2->Text = s_���::ZSU2;
	textBox���ZSU3->Text = s_���::ZSU3;
	textBox���ZSU4->Text = s_���::ZSU4;
	textBox���ZSU5->Text = s_���::ZSU5;
	textBox���ZSU6->Text = s_���::ZSU6;
	textBox���ZSU7->Text = s_���::ZSU7;
	textBox���ZSU8->Text = s_���::ZSU8;
	textBox���ZSU9->Text = s_���::ZSU9;
	textBox���ZSU10->Text = s_���::ZSU10;

	label���ZI1->Text = s_���::ZI1;
	label���ZI2->Text = s_���::ZI2;
	label���ZI3->Text = s_���::ZI3;
	label���ZI4->Text = s_���::ZI4;
	label���ZI5->Text = s_���::ZI5;
	label���ZI6->Text = s_���::ZI6;
	label���ZI7->Text = s_���::ZI7;
	label���ZI8->Text = s_���::ZI8;
	label���ZI9->Text = s_���::ZI9;
	label���ZI10->Text = s_���::ZI10;


	label���ZU1->Text = s_���::ZU1;
	label���ZU2->Text = s_���::ZU2;
	label���ZU3->Text = s_���::ZU3;
	label���ZU4->Text = s_���::ZU4;
	label���ZU5->Text = s_���::ZU5;
	label���ZU6->Text = s_���::ZU6;
	label���ZU7->Text = s_���::ZU7;
	label���ZU8->Text = s_���::ZU8;
	label���ZU9->Text = s_���::ZU9;
	label���ZU10->Text = s_���::ZU10;

	textBox���FSU1->Text = s_���::FSU1;
	textBox���FSU2->Text = s_���::FSU2;
	textBox���FSU3->Text = s_���::FSU3;
	textBox���FSU4->Text = s_���::FSU4;
	textBox���FSU5->Text = s_���::FSU5;
	textBox���FSU6->Text = s_���::FSU6;
	textBox���FSU7->Text = s_���::FSU7;
	textBox���FSU8->Text = s_���::FSU8;
	textBox���FSU9->Text = s_���::FSU9;
	textBox���FSU10->Text = s_���::FSU10;

	label���FI1->Text = s_���::FI1;
	label���FI2->Text = s_���::FI2;
	label���FI3->Text = s_���::FI3;
	label���FI4->Text = s_���::FI4;
	label���FI5->Text = s_���::FI5;
	label���FI6->Text = s_���::FI6;
	label���FI7->Text = s_���::FI7;
	label���FI8->Text = s_���::FI8;
	label���FI9->Text = s_���::FI9;
	label���FI10->Text = s_���::FI10;


	label���FU1->Text = s_���::FU1;
	label���FU2->Text = s_���::FU2;
	label���FU3->Text = s_���::FU3;
	label���FU4->Text = s_���::FU4;
	label���FU5->Text = s_���::FU5;
	label���FU6->Text = s_���::FU6;
	label���FU7->Text = s_���::FU7;
	label���FU8->Text = s_���::FU8;
	label���FU9->Text = s_���::FU9;
	label���FU10->Text = s_���::FU10;

	textBox��ܽ���->Text = s_���::summing_up;

	/**************s_���*****************/

	textBox���ZSU1->Text = s_���::ZSU1;
	textBox���ZSU2->Text = s_���::ZSU2;
	textBox���ZSU3->Text = s_���::ZSU3;
	textBox���ZSU4->Text = s_���::ZSU4;
	textBox���ZSU5->Text = s_���::ZSU5;
	textBox���ZSU6->Text = s_���::ZSU6;
	textBox���ZSU7->Text = s_���::ZSU7;
	textBox���ZSU8->Text = s_���::ZSU8;
	textBox���ZSU9->Text = s_���::ZSU9;
	textBox���ZSU10->Text = s_���::ZSU10;

	label���ZI1->Text = s_���::ZI1;
	label���ZI2->Text = s_���::ZI2;
	label���ZI3->Text = s_���::ZI3;
	label���ZI4->Text = s_���::ZI4;
	label���ZI5->Text = s_���::ZI5;
	label���ZI6->Text = s_���::ZI6;
	label���ZI7->Text = s_���::ZI7;
	label���ZI8->Text = s_���::ZI8;
	label���ZI9->Text = s_���::ZI9;
	label���ZI10->Text = s_���::ZI10;


	label���ZU1->Text = s_���::ZU1;
	label���ZU2->Text = s_���::ZU2;
	label���ZU3->Text = s_���::ZU3;
	label���ZU4->Text = s_���::ZU4;
	label���ZU5->Text = s_���::ZU5;
	label���ZU6->Text = s_���::ZU6;
	label���ZU7->Text = s_���::ZU7;
	label���ZU8->Text = s_���::ZU8;
	label���ZU9->Text = s_���::ZU9;
	label���ZU10->Text = s_���::ZU10;

	textBox���FSU1->Text = s_���::FSU1;
	textBox���FSU2->Text = s_���::FSU2;
	textBox���FSU3->Text = s_���::FSU3;
	textBox���FSU4->Text = s_���::FSU4;
	textBox���FSU5->Text = s_���::FSU5;
	textBox���FSU6->Text = s_���::FSU6;
	textBox���FSU7->Text = s_���::FSU7;
	textBox���FSU8->Text = s_���::FSU8;
	textBox���FSU9->Text = s_���::FSU9;
	textBox���FSU10->Text = s_���::FSU10;

	label1���FI1->Text = s_���::FI1;
	label1���FI2->Text = s_���::FI2;
	label1���FI3->Text = s_���::FI3;
	label1���FI4->Text = s_���::FI4;
	label1���FI5->Text = s_���::FI5;
	label1���FI6->Text = s_���::FI6;
	label1���FI7->Text = s_���::FI7;
	label1���FI8->Text = s_���::FI8;
	label1���FI9->Text = s_���::FI9;
	label1���FI10->Text = s_���::FI10;


	label1���FU1->Text = s_���::FU1;
	label1���FU2->Text = s_���::FU2;
	label1���FU3->Text = s_���::FU3;
	label1���FU4->Text = s_���::FU4;
	label1���FU5->Text = s_���::FU5;
	label1���FU6->Text = s_���::FU6;
	label1���FU7->Text = s_���::FU7;
	label1���FU8->Text = s_���::FU8;
	label1���FU9->Text = s_���::FU9;
	label1���FU10->Text = s_���::FU10;

	textBox��ܽ���->Text = s_���::summing_up;


	/**************s_��ѹ*****************/

	textBox��ѹZSU1->Text = s_��ѹ::ZSU1;
	textBox��ѹZSU2->Text = s_��ѹ::ZSU2;
	textBox��ѹZSU3->Text = s_��ѹ::ZSU3;
	textBox��ѹZSU4->Text = s_��ѹ::ZSU4;
	textBox��ѹZSU5->Text = s_��ѹ::ZSU5;
	textBox��ѹZSU6->Text = s_��ѹ::ZSU6;
	textBox��ѹZSU7->Text = s_��ѹ::ZSU7;
	textBox��ѹZSU8->Text = s_��ѹ::ZSU8;
	textBox��ѹZSU9->Text = s_��ѹ::ZSU9;
	textBox��ѹZSU10->Text = s_��ѹ::ZSU10;

	label��ѹZI1->Text = s_��ѹ::ZI1;
	label��ѹZI2->Text = s_��ѹ::ZI2;
	label��ѹZI3->Text = s_��ѹ::ZI3;
	label��ѹZI4->Text = s_��ѹ::ZI4;
	label��ѹZI5->Text = s_��ѹ::ZI5;
	label��ѹZI6->Text = s_��ѹ::ZI6;
	label��ѹZI7->Text = s_��ѹ::ZI7;
	label��ѹZI8->Text = s_��ѹ::ZI8;
	label��ѹZI9->Text = s_��ѹ::ZI9;
	label��ѹZI10->Text = s_��ѹ::ZI10;


	label��ѹZU1->Text = s_��ѹ::ZU1;
	label��ѹZU2->Text = s_��ѹ::ZU2;
	label��ѹZU3->Text = s_��ѹ::ZU3;
	label��ѹZU4->Text = s_��ѹ::ZU4;
	label��ѹZU5->Text = s_��ѹ::ZU5;
	label��ѹZU6->Text = s_��ѹ::ZU6;
	label��ѹZU7->Text = s_��ѹ::ZU7;
	label��ѹZU8->Text = s_��ѹ::ZU8;
	label��ѹZU9->Text = s_��ѹ::ZU9;
	label��ѹZU10->Text = s_��ѹ::ZU10;

	textBox��ѹFSU1->Text = s_��ѹ::FSU1;
	textBox��ѹFSU2->Text = s_��ѹ::FSU2;
	textBox��ѹFSU3->Text = s_��ѹ::FSU3;
	textBox��ѹFSU4->Text = s_��ѹ::FSU4;
	textBox��ѹFSU5->Text = s_��ѹ::FSU5;
	textBox��ѹFSU6->Text = s_��ѹ::FSU6;
	textBox��ѹFSU7->Text = s_��ѹ::FSU7;
	textBox��ѹFSU8->Text = s_��ѹ::FSU8;
	textBox��ѹFSU9->Text = s_��ѹ::FSU9;
	textBox��ѹFSU10->Text = s_��ѹ::FSU10;

	label��ѹFI1->Text = s_��ѹ::FI1;
	label��ѹFI2->Text = s_��ѹ::FI2;
	label��ѹFI3->Text = s_��ѹ::FI3;
	label��ѹFI4->Text = s_��ѹ::FI4;
	label��ѹFI5->Text = s_��ѹ::FI5;
	label��ѹFI6->Text = s_��ѹ::FI6;
	label��ѹFI7->Text = s_��ѹ::FI7;
	label��ѹFI8->Text = s_��ѹ::FI8;
	label��ѹFI9->Text = s_��ѹ::FI9;
	label��ѹFI10->Text = s_��ѹ::FI10;


	label��ѹFU1->Text = s_��ѹ::FU1;
	label��ѹFU2->Text = s_��ѹ::FU2;
	label��ѹFU3->Text = s_��ѹ::FU3;
	label��ѹFU4->Text = s_��ѹ::FU4;
	label��ѹFU5->Text = s_��ѹ::FU5;
	label��ѹFU6->Text = s_��ѹ::FU6;
	label��ѹFU7->Text = s_��ѹ::FU7;
	label��ѹFU8->Text = s_��ѹ::FU8;
	label��ѹFU9->Text = s_��ѹ::FU9;
	label��ѹFU10->Text = s_��ѹ::FU10;

	textBox��ѹ����->Text = s_��ѹ::summing_up;
}





void Ԫ���������ԵĲ���ʵ������::chart����Init() {
	Series ^s = chart����->Series[0];
	chart����->Titles->Add("  ���Ե�������������");
	ChartArea ^ c = chart����->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ";
	c->AxisY->Title = "����";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void Ԫ���������ԵĲ���ʵ������::Loadchart����() {
	Series ^s = chart����->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label����U1->Text), Convert::ToSingle(label����I1->Text));
		s->Points->AddXY(Convert::ToSingle(label����U2->Text), Convert::ToSingle(label����I2->Text));
		s->Points->AddXY(Convert::ToSingle(label����U3->Text), Convert::ToSingle(label����I3->Text));
		s->Points->AddXY(Convert::ToSingle(label����U4->Text), Convert::ToSingle(label����I4->Text));
		s->Points->AddXY(Convert::ToSingle(label����U5->Text), Convert::ToSingle(label����I5->Text));
		s->Points->AddXY(Convert::ToSingle(label����U6->Text), Convert::ToSingle(label����I6->Text));
		s->Points->AddXY(Convert::ToSingle(label����U7->Text), Convert::ToSingle(label����I7->Text));
		s->Points->AddXY(Convert::ToSingle(label����U8->Text), Convert::ToSingle(label����I8->Text));
		s->Points->AddXY(Convert::ToSingle(label����U9->Text), Convert::ToSingle(label����I9->Text));
		s->Points->AddXY(Convert::ToSingle(label����U10->Text), Convert::ToSingle(label����I10->Text));
	}
	catch (System::Exception^ E) {

	}
		s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}

void Ԫ���������ԵĲ���ʵ������::chart�׳�Init() {
	Series ^s = chart�׳�->Series[0];
	chart�׳�->Titles->Add("  �׳�Ʒ�������");
	ChartArea ^ c = chart�׳�->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void Ԫ���������ԵĲ���ʵ������::Loadchart�׳�() {
	Series ^s = chart�׳�->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label�׳�U1->Text), Convert::ToSingle(label�׳�I1->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U2->Text), Convert::ToSingle(label�׳�I2->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U3->Text), Convert::ToSingle(label�׳�I3->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U4->Text), Convert::ToSingle(label�׳�I4->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U5->Text), Convert::ToSingle(label�׳�I5->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U6->Text), Convert::ToSingle(label�׳�I6->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U7->Text), Convert::ToSingle(label�׳�I7->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U8->Text), Convert::ToSingle(label�׳�I8->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U9->Text), Convert::ToSingle(label�׳�I9->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U10->Text), Convert::ToSingle(label�׳�I10->Text));
	}
	catch (System::Exception^ E) {

	}


}
void Ԫ���������ԵĲ���ʵ������::chart���Init() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2AP9��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void Ԫ���������ԵĲ���ʵ������::Loadchart���() {
	Series ^s = chart���->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label���ZU1->Text), Convert::ToSingle(label���ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU2->Text), Convert::ToSingle(label���ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU3->Text), Convert::ToSingle(label���ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU4->Text), Convert::ToSingle(label���ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU5->Text), Convert::ToSingle(label���ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU6->Text), Convert::ToSingle(label���ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU7->Text), Convert::ToSingle(label���ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU8->Text), Convert::ToSingle(label���ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU9->Text), Convert::ToSingle(label���ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU10->Text), Convert::ToSingle(label���ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU1->Text), Convert::ToSingle(label���FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU2->Text), Convert::ToSingle(label���FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU3->Text), Convert::ToSingle(label���FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU4->Text), Convert::ToSingle(label���FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU5->Text), Convert::ToSingle(label���FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU6->Text), Convert::ToSingle(label���FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU7->Text), Convert::ToSingle(label���FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU8->Text), Convert::ToSingle(label���FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU9->Text), Convert::ToSingle(label���FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU10->Text), Convert::ToSingle(label���FI10->Text));
	}
	catch (System::Exception^ E) {

	}

	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������ԵĲ���ʵ������::chart���Init() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2CP15��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void Ԫ���������ԵĲ���ʵ������::Loadchart���() {
	Series ^s = chart���->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label���ZU1->Text), Convert::ToSingle(label���ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU2->Text), Convert::ToSingle(label���ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU3->Text), Convert::ToSingle(label���ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU4->Text), Convert::ToSingle(label���ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU5->Text), Convert::ToSingle(label���ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU6->Text), Convert::ToSingle(label���ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU7->Text), Convert::ToSingle(label���ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU8->Text), Convert::ToSingle(label���ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU9->Text), Convert::ToSingle(label���ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU10->Text), Convert::ToSingle(label���ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU1->Text), Convert::ToSingle(label1���FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU2->Text), Convert::ToSingle(label1���FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU3->Text), Convert::ToSingle(label1���FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU4->Text), Convert::ToSingle(label1���FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU5->Text), Convert::ToSingle(label1���FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU6->Text), Convert::ToSingle(label1���FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU7->Text), Convert::ToSingle(label1���FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU8->Text), Convert::ToSingle(label1���FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU9->Text), Convert::ToSingle(label1���FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU10->Text), Convert::ToSingle(label1���FI10->Text));
	}
	catch (System::Exception^ E) {

	}

	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������ԵĲ���ʵ������::chart��ѹInit() {
	Series ^s = chart��ѹ->Series[0];
	chart��ѹ->Titles->Add("  ��ѹ�����ܷ�������");
	ChartArea ^ c = chart��ѹ->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0,0);
}


void Ԫ���������ԵĲ���ʵ������::Loadchart��ѹ() {
	Series ^s = chart��ѹ->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label��ѹZU1->Text), Convert::ToSingle(label��ѹZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU2->Text), Convert::ToSingle(label��ѹZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU3->Text), Convert::ToSingle(label��ѹZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU4->Text), Convert::ToSingle(label��ѹZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU5->Text), Convert::ToSingle(label��ѹZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU6->Text), Convert::ToSingle(label��ѹZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU7->Text), Convert::ToSingle(label��ѹZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU8->Text), Convert::ToSingle(label��ѹZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU9->Text), Convert::ToSingle(label��ѹZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU10->Text), Convert::ToSingle(label��ѹZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU1->Text), Convert::ToSingle(label��ѹFI1->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU2->Text), Convert::ToSingle(label��ѹFI2->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU3->Text), Convert::ToSingle(label��ѹFI3->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU4->Text), Convert::ToSingle(label��ѹFI4->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU5->Text), Convert::ToSingle(label��ѹFI5->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU6->Text), Convert::ToSingle(label��ѹFI6->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU7->Text), Convert::ToSingle(label��ѹFI7->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU8->Text), Convert::ToSingle(label��ѹFI8->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU9->Text), Convert::ToSingle(label��ѹFI9->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU10->Text), Convert::ToSingle(label��ѹFI10->Text));
	}
	catch (System::Exception^ E) {

	}	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}


String^ Ԫ���������ԵĲ���ʵ������::GetUData() {
	S_PLCRecv p = GetMData();

	if (p.HeaderId == 6) {
		return  DcNumToString(p.U, p.Usymbol);
	}
	else {
		return "0.00";
	}
}

String^ Ԫ���������ԵĲ���ʵ������::GetIData() {
	S_PLCRecv p = GetMData();

	if (p.HeaderId == 5) {
		return  DcNumToString(p.I, p.Isymbol);
	}
	else {
		return "0.00";
	}
}


ST_Ԫ���������Բ��� Ԫ���������ԵĲ���ʵ������::LoadGradeData() {
    ST_Ԫ���������Բ��� s;

	snprintf(s.����SU1, 10, "%s",textBoxSU1->Text);
	snprintf(s.����SU2, 10, "%s",textBoxSU2->Text );
	snprintf(s.����SU3, 10, "%s",textBoxSU3->Text );
	snprintf(s.����SU4, 10, "%s",textBoxSU4->Text );
	snprintf(s.����SU5, 10, "%s",textBoxSU5->Text );
	snprintf(s.����SU6, 10, "%s",textBoxSU6->Text );
	snprintf(s.����SU7, 10, "%s",textBoxSU7->Text );
	snprintf(s.����SU8, 10, "%s",textBoxSU8->Text );
	snprintf(s.����SU9, 10, "%s",textBoxSU9->Text );
	snprintf(s.����SU10, 10, "%s",textBoxSU10->Text);

	snprintf(s.����I1, 10, "%s", label����I1->Text);
	snprintf(s.����I2, 10, "%s", label����I2->Text);
	snprintf(s.����I3, 10, "%s", label����I3->Text);
	snprintf(s.����I4, 10, "%s", label����I4->Text);
	snprintf(s.����I5, 10, "%s", label����I5->Text);
	snprintf(s.����I6, 10, "%s", label����I6->Text);
	snprintf(s.����I7, 10, "%s", label����I7->Text);
	snprintf(s.����I8, 10, "%s", label����I8->Text);
	snprintf(s.����I9, 10, "%s", label����I9->Text);
	snprintf(s.����I10, 10, "%s", label����I10->Text);

	snprintf(s.����U1, 10, "%s", label����U1->Text);
	snprintf(s.����U2, 10, "%s", label����U2->Text);
	snprintf(s.����U3, 10, "%s", label����U3->Text);
	snprintf(s.����U4, 10, "%s", label����U4->Text);
	snprintf(s.����U5, 10, "%s", label����U5->Text);
	snprintf(s.����U6, 10, "%s", label����U6->Text);
	snprintf(s.����U7, 10, "%s", label����U7->Text);
	snprintf(s.����U8, 10, "%s", label����U8->Text);
	snprintf(s.����U9, 10, "%s", label����U9->Text);
	snprintf(s.����U10, 10, "%s", label����U10->Text);
	snprintf(s.����summing_up, 100, "%s", textBox���Խ���->Text);
	/*******�׳��******/
	snprintf(s.�׳�SU1, 10, "%s", textBox�׳�SU1->Text);
	snprintf(s.�׳�SU2, 10, "%s", textBox�׳�SU2->Text);
	snprintf(s.�׳�SU3, 10, "%s", textBox�׳�SU3->Text);
	snprintf(s.�׳�SU4, 10, "%s", textBox�׳�SU4->Text);
	snprintf(s.�׳�SU5, 10, "%s", textBox�׳�SU5->Text);
	snprintf(s.�׳�SU6, 10, "%s", textBox�׳�SU6->Text);
	snprintf(s.�׳�SU7, 10, "%s", textBox�׳�SU7->Text);
	snprintf(s.�׳�SU8, 10, "%s", textBox�׳�SU8->Text);
	snprintf(s.�׳�SU9, 10, "%s", textBox�׳�SU9->Text);
	snprintf(s.�׳�SU10, 10, "%s", textBox�׳�SU10->Text);

	snprintf(s.�׳�I1, 10, "%s", label�׳�I1->Text);
	snprintf(s.�׳�I2, 10, "%s", label�׳�I2->Text);
	snprintf(s.�׳�I3, 10, "%s", label�׳�I3->Text);
	snprintf(s.�׳�I4, 10, "%s", label�׳�I4->Text);
	snprintf(s.�׳�I5, 10, "%s", label�׳�I5->Text);
	snprintf(s.�׳�I6, 10, "%s", label�׳�I6->Text);
	snprintf(s.�׳�I7, 10, "%s", label�׳�I7->Text);
	snprintf(s.�׳�I8, 10, "%s", label�׳�I8->Text);
	snprintf(s.�׳�I9, 10, "%s", label�׳�I9->Text);
	snprintf(s.�׳�I10, 10, "%s", label�׳�I10->Text);

	snprintf(s.�׳�U1, 10, "%s", label�׳�U1->Text);
	snprintf(s.�׳�U2, 10, "%s", label�׳�U2->Text);
	snprintf(s.�׳�U3, 10, "%s", label�׳�U3->Text);
	snprintf(s.�׳�U4, 10, "%s", label�׳�U4->Text);
	snprintf(s.�׳�U5, 10, "%s", label�׳�U5->Text);
	snprintf(s.�׳�U6, 10, "%s", label�׳�U6->Text);
	snprintf(s.�׳�U7, 10, "%s", label�׳�U7->Text);
	snprintf(s.�׳�U8, 10, "%s", label�׳�U8->Text);
	snprintf(s.�׳�U9, 10, "%s", label�׳�U9->Text);
	snprintf(s.�׳�U10, 10, "%s", label�׳�U10->Text);

	snprintf(s.�׳�summing_up, 100, "%s", textBox�׳����->Text);

	/**************s_���*****************/

	snprintf(s.���ZSU1, 10, "%s", textBox���ZSU1->Text);
	snprintf(s.���ZSU2, 10, "%s", textBox���ZSU2->Text);
	snprintf(s.���ZSU3, 10, "%s", textBox���ZSU3->Text);
	snprintf(s.���ZSU4, 10, "%s", textBox���ZSU4->Text);
	snprintf(s.���ZSU5, 10, "%s", textBox���ZSU5->Text);
	snprintf(s.���ZSU6, 10, "%s", textBox���ZSU6->Text);
	snprintf(s.���ZSU7, 10, "%s", textBox���ZSU7->Text);
	snprintf(s.���ZSU8, 10, "%s", textBox���ZSU8->Text);
	snprintf(s.���ZSU9, 10, "%s", textBox���ZSU9->Text);
	snprintf(s.���ZSU10, 10, "%s", textBox���ZSU10->Text);
	snprintf(s.���FSU1, 10, "%s", textBox���FSU1->Text);
	snprintf(s.���FSU2, 10, "%s", textBox���FSU2->Text);
	snprintf(s.���FSU3, 10, "%s", textBox���FSU3->Text);
	snprintf(s.���FSU4, 10, "%s", textBox���FSU4->Text);
	snprintf(s.���FSU5, 10, "%s", textBox���FSU5->Text);
	snprintf(s.���FSU6, 10, "%s", textBox���FSU6->Text);
	snprintf(s.���FSU7, 10, "%s", textBox���FSU7->Text);
	snprintf(s.���FSU8, 10, "%s", textBox���FSU8->Text);
	snprintf(s.���FSU9, 10, "%s", textBox���FSU9->Text);
	snprintf(s.���FSU10, 10, "%s", textBox���FSU10->Text);

	snprintf(s.���ZU1, 10, "%s", label���ZU1->Text);
	snprintf(s.���ZU2, 10, "%s", label���ZU2->Text);
	snprintf(s.���ZU3, 10, "%s", label���ZU3->Text);
	snprintf(s.���ZU4, 10, "%s", label���ZU4->Text);
	snprintf(s.���ZU5, 10, "%s", label���ZU5->Text);
	snprintf(s.���ZU6, 10, "%s", label���ZU6->Text);
	snprintf(s.���ZU7, 10, "%s", label���ZU7->Text);
	snprintf(s.���ZU8, 10, "%s", label���ZU8->Text);
	snprintf(s.���ZU9, 10, "%s", label���ZU9->Text);
	snprintf(s.���ZU10, 10, "%s", label���ZU10->Text);
	snprintf(s.���FU1, 10, "%s", label���FU1->Text);
	snprintf(s.���FU2, 10, "%s", label���FU2->Text);
	snprintf(s.���FU3, 10, "%s", label���FU3->Text);
	snprintf(s.���FU4, 10, "%s", label���FU4->Text);
	snprintf(s.���FU5, 10, "%s", label���FU5->Text);
	snprintf(s.���FU6, 10, "%s", label���FU6->Text);
	snprintf(s.���FU7, 10, "%s", label���FU7->Text);
	snprintf(s.���FU8, 10, "%s", label���FU8->Text);
	snprintf(s.���FU9, 10, "%s", label���FU9->Text);
	snprintf(s.���FU10, 10, "%s", label���FU10->Text);

	snprintf(s.���ZI1, 10, "%s", label���ZI1->Text);
	snprintf(s.���ZI2, 10, "%s", label���ZI2->Text);
	snprintf(s.���ZI3, 10, "%s", label���ZI3->Text);
	snprintf(s.���ZI4, 10, "%s", label���ZI4->Text);
	snprintf(s.���ZI5, 10, "%s", label���ZI5->Text);
	snprintf(s.���ZI6, 10, "%s", label���ZI6->Text);
	snprintf(s.���ZI7, 10, "%s", label���ZI7->Text);
	snprintf(s.���ZI8, 10, "%s", label���ZI8->Text);
	snprintf(s.���ZI9, 10, "%s", label���ZI9->Text);
	snprintf(s.���ZI10, 10, "%s", label���ZI10->Text);
	snprintf(s.���FI1, 10, "%s", label���FI1->Text);
	snprintf(s.���FI2, 10, "%s", label���FI2->Text);
	snprintf(s.���FI3, 10, "%s", label���FI3->Text);
	snprintf(s.���FI4, 10, "%s", label���FI4->Text);
	snprintf(s.���FI5, 10, "%s", label���FI5->Text);
	snprintf(s.���FI6, 10, "%s", label���FI6->Text);
	snprintf(s.���FI7, 10, "%s", label���FI7->Text);
	snprintf(s.���FI8, 10, "%s", label���FI8->Text);
	snprintf(s.���FI9, 10, "%s", label���FI9->Text);
	snprintf(s.���FI10, 10, "%s", label���FI10->Text);

	snprintf(s.���summing_up, 100, "%s", textBox��ܽ���->Text);

	/**************s_���*****************/

	snprintf(s.���ZSU1, 10, "%s", textBox���ZSU1->Text);
	snprintf(s.���ZSU2, 10, "%s", textBox���ZSU2->Text);
	snprintf(s.���ZSU3, 10, "%s", textBox���ZSU3->Text);
	snprintf(s.���ZSU4, 10, "%s", textBox���ZSU4->Text);
	snprintf(s.���ZSU5, 10, "%s", textBox���ZSU5->Text);
	snprintf(s.���ZSU6, 10, "%s", textBox���ZSU6->Text);
	snprintf(s.���ZSU7, 10, "%s", textBox���ZSU7->Text);
	snprintf(s.���ZSU8, 10, "%s", textBox���ZSU8->Text);
	snprintf(s.���ZSU9, 10, "%s", textBox���ZSU9->Text);
	snprintf(s.���ZSU10, 10, "%s", textBox���ZSU10->Text);
	snprintf(s.���FSU1, 10, "%s", textBox���FSU1->Text);
	snprintf(s.���FSU2, 10, "%s", textBox���FSU2->Text);
	snprintf(s.���FSU3, 10, "%s", textBox���FSU3->Text);
	snprintf(s.���FSU4, 10, "%s", textBox���FSU4->Text);
	snprintf(s.���FSU5, 10, "%s", textBox���FSU5->Text);
	snprintf(s.���FSU6, 10, "%s", textBox���FSU6->Text);
	snprintf(s.���FSU7, 10, "%s", textBox���FSU7->Text);
	snprintf(s.���FSU8, 10, "%s", textBox���FSU8->Text);
	snprintf(s.���FSU9, 10, "%s", textBox���FSU9->Text);
	snprintf(s.���FSU10, 10, "%s", textBox���FSU10->Text);

	snprintf(s.���ZU1, 10, "%s", label���ZU1->Text);
	snprintf(s.���ZU2, 10, "%s", label���ZU2->Text);
	snprintf(s.���ZU3, 10, "%s", label���ZU3->Text);
	snprintf(s.���ZU4, 10, "%s", label���ZU4->Text);
	snprintf(s.���ZU5, 10, "%s", label���ZU5->Text);
	snprintf(s.���ZU6, 10, "%s", label���ZU6->Text);
	snprintf(s.���ZU7, 10, "%s", label���ZU7->Text);
	snprintf(s.���ZU8, 10, "%s", label���ZU8->Text);
	snprintf(s.���ZU9, 10, "%s", label���ZU9->Text);
	snprintf(s.���ZU10, 10, "%s", label���ZU10->Text);
	snprintf(s.���FU1, 10, "%s", label1���FU1->Text);
	snprintf(s.���FU2, 10, "%s", label1���FU2->Text);
	snprintf(s.���FU3, 10, "%s", label1���FU3->Text);
	snprintf(s.���FU4, 10, "%s", label1���FU4->Text);
	snprintf(s.���FU5, 10, "%s", label1���FU5->Text);
	snprintf(s.���FU6, 10, "%s", label1���FU6->Text);
	snprintf(s.���FU7, 10, "%s", label1���FU7->Text);
	snprintf(s.���FU8, 10, "%s", label1���FU8->Text);
	snprintf(s.���FU9, 10, "%s", label1���FU9->Text);
	snprintf(s.���FU10, 10, "%s", label1���FU10->Text);

	snprintf(s.���ZI1, 10, "%s", label���ZI1->Text);
	snprintf(s.���ZI2, 10, "%s", label���ZI2->Text);
	snprintf(s.���ZI3, 10, "%s", label���ZI3->Text);
	snprintf(s.���ZI4, 10, "%s", label���ZI4->Text);
	snprintf(s.���ZI5, 10, "%s", label���ZI5->Text);
	snprintf(s.���ZI6, 10, "%s", label���ZI6->Text);
	snprintf(s.���ZI7, 10, "%s", label���ZI7->Text);
	snprintf(s.���ZI8, 10, "%s", label���ZI8->Text);
	snprintf(s.���ZI9, 10, "%s", label���ZI9->Text);
	snprintf(s.���ZI10, 10, "%s", label���ZI10->Text);
	snprintf(s.���FI1, 10, "%s", label1���FI1->Text);
	snprintf(s.���FI2, 10, "%s", label1���FI2->Text);
	snprintf(s.���FI3, 10, "%s", label1���FI3->Text);
	snprintf(s.���FI4, 10, "%s", label1���FI4->Text);
	snprintf(s.���FI5, 10, "%s", label1���FI5->Text);
	snprintf(s.���FI6, 10, "%s", label1���FI6->Text);
	snprintf(s.���FI7, 10, "%s", label1���FI7->Text);
	snprintf(s.���FI8, 10, "%s", label1���FI8->Text);
	snprintf(s.���FI9, 10, "%s", label1���FI9->Text);
	snprintf(s.���FI10, 10, "%s", label1���FI10->Text);

	snprintf(s.���summing_up, 100, "%s", textBox��ܽ���->Text);


	/**************s_��ѹ*****************/
	snprintf(s.��ѹZSU1, 10, "%s", textBox��ѹZSU1->Text);
	snprintf(s.��ѹZSU2, 10, "%s", textBox��ѹZSU2->Text);
	snprintf(s.��ѹZSU3, 10, "%s", textBox��ѹZSU3->Text);
	snprintf(s.��ѹZSU4, 10, "%s", textBox��ѹZSU4->Text);
	snprintf(s.��ѹZSU5, 10, "%s", textBox��ѹZSU5->Text);
	snprintf(s.��ѹZSU6, 10, "%s", textBox��ѹZSU6->Text);
	snprintf(s.��ѹZSU7, 10, "%s", textBox��ѹZSU7->Text);
	snprintf(s.��ѹZSU8, 10, "%s", textBox��ѹZSU8->Text);
	snprintf(s.��ѹZSU9, 10, "%s", textBox��ѹZSU9->Text);
	snprintf(s.��ѹZSU10, 10, "%s", textBox��ѹZSU10->Text);
	snprintf(s.��ѹFSU1, 10, "%s", textBox��ѹFSU1->Text);
	snprintf(s.��ѹFSU2, 10, "%s", textBox��ѹFSU2->Text);
	snprintf(s.��ѹFSU3, 10, "%s", textBox��ѹFSU3->Text);
	snprintf(s.��ѹFSU4, 10, "%s", textBox��ѹFSU4->Text);
	snprintf(s.��ѹFSU5, 10, "%s", textBox��ѹFSU5->Text);
	snprintf(s.��ѹFSU6, 10, "%s", textBox��ѹFSU6->Text);
	snprintf(s.��ѹFSU7, 10, "%s", textBox��ѹFSU7->Text);
	snprintf(s.��ѹFSU8, 10, "%s", textBox��ѹFSU8->Text);
	snprintf(s.��ѹFSU9, 10, "%s", textBox��ѹFSU9->Text);
	snprintf(s.��ѹFSU10, 10, "%s", textBox��ѹFSU10->Text);

	snprintf(s.��ѹZU1, 10, "%s", label��ѹZU1->Text);
	snprintf(s.��ѹZU2, 10, "%s", label��ѹZU2->Text);
	snprintf(s.��ѹZU3, 10, "%s", label��ѹZU3->Text);
	snprintf(s.��ѹZU4, 10, "%s", label��ѹZU4->Text);
	snprintf(s.��ѹZU5, 10, "%s", label��ѹZU5->Text);
	snprintf(s.��ѹZU6, 10, "%s", label��ѹZU6->Text);
	snprintf(s.��ѹZU7, 10, "%s", label��ѹZU7->Text);
	snprintf(s.��ѹZU8, 10, "%s", label��ѹZU8->Text);
	snprintf(s.��ѹZU9, 10, "%s", label��ѹZU9->Text);
	snprintf(s.��ѹZU10, 10, "%s", label��ѹZU10->Text);
	snprintf(s.��ѹFU1, 10, "%s", label��ѹFU1->Text);
	snprintf(s.��ѹFU2, 10, "%s", label��ѹFU2->Text);
	snprintf(s.��ѹFU3, 10, "%s", label��ѹFU3->Text);
	snprintf(s.��ѹFU4, 10, "%s", label��ѹFU4->Text);
	snprintf(s.��ѹFU5, 10, "%s", label��ѹFU5->Text);
	snprintf(s.��ѹFU6, 10, "%s", label��ѹFU6->Text);
	snprintf(s.��ѹFU7, 10, "%s", label��ѹFU7->Text);
	snprintf(s.��ѹFU8, 10, "%s", label��ѹFU8->Text);
	snprintf(s.��ѹFU9, 10, "%s", label��ѹFU9->Text);
	snprintf(s.��ѹFU10, 10, "%s", label��ѹFU10->Text);

	snprintf(s.��ѹZI1, 10, "%s", label��ѹZI1->Text);
	snprintf(s.��ѹZI2, 10, "%s", label��ѹZI2->Text);
	snprintf(s.��ѹZI3, 10, "%s", label��ѹZI3->Text);
	snprintf(s.��ѹZI4, 10, "%s", label��ѹZI4->Text);
	snprintf(s.��ѹZI5, 10, "%s", label��ѹZI5->Text);
	snprintf(s.��ѹZI6, 10, "%s", label��ѹZI6->Text);
	snprintf(s.��ѹZI7, 10, "%s", label��ѹZI7->Text);
	snprintf(s.��ѹZI8, 10, "%s", label��ѹZI8->Text);
	snprintf(s.��ѹZI9, 10, "%s", label��ѹZI9->Text);
	snprintf(s.��ѹZI10, 10, "%s", label��ѹZI10->Text);
	snprintf(s.��ѹFI1, 10, "%s", label��ѹFI1->Text);
	snprintf(s.��ѹFI2, 10, "%s", label��ѹFI2->Text);
	snprintf(s.��ѹFI3, 10, "%s", label��ѹFI3->Text);
	snprintf(s.��ѹFI4, 10, "%s", label��ѹFI4->Text);
	snprintf(s.��ѹFI5, 10, "%s", label��ѹFI5->Text);
	snprintf(s.��ѹFI6, 10, "%s", label��ѹFI6->Text);
	snprintf(s.��ѹFI7, 10, "%s", label��ѹFI7->Text);
	snprintf(s.��ѹFI8, 10, "%s", label��ѹFI8->Text);
	snprintf(s.��ѹFI9, 10, "%s", label��ѹFI9->Text);
	snprintf(s.��ѹFI10, 10, "%s", label��ѹFI10->Text);

	snprintf(s.��ѹsumming_up, 100, "%s", textBox��ѹ����->Text);
	return s;
}



String ^Ԫ���������ԵĲ���ʵ������::GenerateStuInfo() {
	String ^info;
	info += "רҵ:  " + gcnew String(trialInfo.major) + "\n";
	info += "�༶:  " + gcnew String(trialInfo.Class) + "\n";
	info += "ָ����ʦ:  " + gcnew String(trialInfo.teacher) + "\n";
	info += "ʵ����:  " + gcnew String(trialInfo.SeriaNumber) + "\n";
	info += "ѧ��1:  " + gcnew String(trialInfo.stuName1) + "\n";
	info += "ѧ��1:  " + gcnew String(trialInfo.XueHao1) + "\n";
	info += "ѧ��2:  " + gcnew String(trialInfo.stuName2) + "\n";
	info += "ѧ��2:  " + gcnew String(trialInfo.XueHao2) + "\n";
	info += "ʵ������:  " + gcnew String(Grades[1].c_str()) + "\n";

	return info;
}

