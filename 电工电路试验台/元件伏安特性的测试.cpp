#include "元件伏安特性的测试实验报告.h"

using namespace 电工电路试验台;
using namespace N_元件伏安特性的测试;
using namespace System::Windows::Forms::DataVisualization::Charting;


void 元件伏安特性的测试实验报告::this_load() {
	label线性SU1->Text = s_线性电阻器::SU1;
	label线性SU2->Text = s_线性电阻器::SU2;
	label线性SU3->Text = s_线性电阻器::SU3;
	label线性SU4->Text = s_线性电阻器::SU4;
	label线性SU5->Text = s_线性电阻器::SU5;
	label线性SU6->Text = s_线性电阻器::SU6;
	label线性SU7->Text = s_线性电阻器::SU7;
	label线性SU8->Text = s_线性电阻器::SU8;
	label线性SU9->Text = s_线性电阻器::SU9;
	label线性SU10->Text = s_线性电阻器::SU10;

	label线性U1->Text = s_线性电阻器::U1;
	label线性U2->Text = s_线性电阻器::U2;
	label线性U3->Text = s_线性电阻器::U3;
	label线性U4->Text = s_线性电阻器::U4;
	label线性U5->Text = s_线性电阻器::U5;
	label线性U6->Text = s_线性电阻器::U6;
	label线性U7->Text = s_线性电阻器::U7;
	label线性U8->Text = s_线性电阻器::U8;
	label线性U9->Text = s_线性电阻器::U9;
	label线性U10->Text = s_线性电阻器::U10;

	label线性I1->Text = s_线性电阻器::I1;
	label线性I2->Text = s_线性电阻器::I2;
	label线性I3->Text = s_线性电阻器::I3;
	label线性I4->Text = s_线性电阻器::I4;
	label线性I5->Text = s_线性电阻器::I5;
	label线性I6->Text = s_线性电阻器::I6;
	label线性I7->Text = s_线性电阻器::I7;
	label线性I8->Text = s_线性电阻器::I8;
	label线性I9->Text = s_线性电阻器::I9;
	label线性I10->Text = s_线性电阻器::I10;

	label线性结论->Text = s_线性电阻器::summing_up;
}


void 元件伏安特性的测试实验报告::chart线性_load() {
	chart1->Titles->Add("  线性电阻器伏安特性");
	//chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "HH:mm:ss";
	chart1->ChartAreas[0]->AxisX->Interval = 2;
	chart1->ChartAreas[0]->AxisY->Interval = 2;
	chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;
	chart1->ChartAreas[0]->AxisX->ScrollBar->Enabled = true;
	chart1->ChartAreas[0]->AxisX->Title = "电压";
	chart1->ChartAreas[0]->AxisY->Title = "电流";
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
		s->Points->AddXY(Convert::ToSingle(label线性U1->Text), Convert::ToSingle(label线性I1->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U2->Text), Convert::ToSingle(label线性I2->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U3->Text), Convert::ToSingle(label线性I3->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U4->Text), Convert::ToSingle(label线性I4->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U5->Text), Convert::ToSingle(label线性I5->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U6->Text), Convert::ToSingle(label线性I6->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U7->Text), Convert::ToSingle(label线性I7->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U8->Text), Convert::ToSingle(label线性I8->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U9->Text), Convert::ToSingle(label线性I9->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U10->Text), Convert::ToSingle(label线性I10->Text));
	}
	catch (System::Exception^ E) {

	}

}