#include "Ԫ���������ԵĲ���ʵ�鱨��.h"

using namespace �繤��·����̨;
using namespace N_Ԫ���������ԵĲ���;
using namespace System::Windows::Forms::DataVisualization::Charting;


void Ԫ���������ԵĲ���ʵ�鱨��::this_load() {
	label����SU1->Text = s_���Ե�����::SU1;
	label����SU2->Text = s_���Ե�����::SU2;
	label����SU3->Text = s_���Ե�����::SU3;
	label����SU4->Text = s_���Ե�����::SU4;
	label����SU5->Text = s_���Ե�����::SU5;
	label����SU6->Text = s_���Ե�����::SU6;
	label����SU7->Text = s_���Ե�����::SU7;
	label����SU8->Text = s_���Ե�����::SU8;
	label����SU9->Text = s_���Ե�����::SU9;
	label����SU10->Text = s_���Ե�����::SU10;

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
}


void Ԫ���������ԵĲ���ʵ�鱨��::chart����_load() {
	chart1->Titles->Add("  ���Ե�������������");
	//chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "HH:mm:ss";
	chart1->ChartAreas[0]->AxisX->Interval = 2;
	chart1->ChartAreas[0]->AxisY->Interval = 2;
	chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;
	chart1->ChartAreas[0]->AxisX->ScrollBar->Enabled = true;
	chart1->ChartAreas[0]->AxisX->Title = "��ѹ";
	chart1->ChartAreas[0]->AxisY->Title = "����";
	chart1->ChartAreas[0]->AxisY->TextOrientation = TextOrientation::Horizontal;
	chart1->Series[0]->ChartType = SeriesChartType::Line;
	chart1->Series[0]->IsVisibleInLegend = false;
	chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "N1";
	chart1->ChartAreas[0]->AxisX->MajorGrid->LineColor = Color::Transparent;
	chart1->ChartAreas[0]->AxisY->MajorGrid->LineColor = Color::Transparent;
	Series ^s = chart1->Series[0];
	
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

}