#include "元件伏安特性的测试实验报告.h"
#include "元件伏安特性的测试实验内容.h"
using namespace 电工电路试验台;
using namespace N_元件伏安特性的测试;
using namespace System::Windows::Forms::DataVisualization::Charting;


void 元件伏安特性的测试实验报告::this_load() {
	DateTime a = DateTime::Now;
	textBox9->Text = a.Year.ToString() + "-" + a.Month.ToString() + "-" + a.Day.ToString();
	textBox10->Text = a.ToFileTime().ToString();

	label线性SU1->Text = s_线性电阻器::SU1;
	label线性SU2->Text = s_线性电阻器::SU2;
	label线性SU3->Text = s_线性电阻器::SU3;
	label线性SU4->Text = s_线性电阻器::SU4;
	label线性SU5->Text = s_线性电阻器::SU5;
	label线性SU6->Text = s_线性电阻器::SU6;
	label线性SU7->Text = s_线性电阻器::SU7;
	label线性SU8->Text = s_线性电阻器::SU8;
	label线性SU9->Text = s_线性电阻器::SU9;
	label线性SU10->Text= s_线性电阻器::SU10;

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

	/*****白炽灯*****/
	label白炽SU1->Text = s_白炽灯::SU1;
	label白炽SU2->Text = s_白炽灯::SU2;
	label白炽SU3->Text = s_白炽灯::SU3;
	label白炽SU4->Text = s_白炽灯::SU4;
	label白炽SU5->Text = s_白炽灯::SU5;
	label白炽SU6->Text = s_白炽灯::SU6;
	label白炽SU7->Text = s_白炽灯::SU7;
	label白炽SU8->Text = s_白炽灯::SU8;
	label白炽SU9->Text = s_白炽灯::SU9;
	label白炽SU10->Text = s_白炽灯::SU10;

	label白炽U1->Text = s_白炽灯::U1;
	label白炽U2->Text = s_白炽灯::U2;
	label白炽U3->Text = s_白炽灯::U3;
	label白炽U4->Text = s_白炽灯::U4;
	label白炽U5->Text = s_白炽灯::U5;
	label白炽U6->Text = s_白炽灯::U6;
	label白炽U7->Text = s_白炽灯::U7;
	label白炽U8->Text = s_白炽灯::U8;
	label白炽U9->Text = s_白炽灯::U9;
	label白炽U10->Text = s_白炽灯::U10;

	label白炽I1->Text = s_白炽灯::I1;
	label白炽I2->Text = s_白炽灯::I2;
	label白炽I3->Text = s_白炽灯::I3;
	label白炽I4->Text = s_白炽灯::I4;
	label白炽I5->Text = s_白炽灯::I5;
	label白炽I6->Text = s_白炽灯::I6;
	label白炽I7->Text = s_白炽灯::I7;
	label白炽I8->Text = s_白炽灯::I8;
	label白炽I9->Text = s_白炽灯::I9;
	label白炽I10->Text = s_白炽灯::I10;

	label白炽结论->Text = s_白炽灯::summing_up;

	/*********锗管********/
	label锗管ZSU1->Text = s_锗管::ZSU1;
	label锗管ZSU2->Text = s_锗管::ZSU2;
	label锗管ZSU3->Text = s_锗管::ZSU3;
	label锗管ZSU4->Text = s_锗管::ZSU4;
	label锗管ZSU5->Text = s_锗管::ZSU5;
	label锗管ZSU6->Text = s_锗管::ZSU6;
	label锗管ZSU7->Text = s_锗管::ZSU7; 
	label锗管ZSU8->Text = s_锗管::ZSU8;
	label锗管ZSU9->Text = s_锗管::ZSU9;
	label锗管ZSU10->Text = s_锗管::ZSU10;
	label锗管FSU1->Text = s_锗管::FSU1;
	label锗管FSU2->Text = s_锗管::FSU2;
	label锗管FSU3->Text = s_锗管::FSU3;
	label锗管FSU4->Text = s_锗管::FSU4;
	label锗管FSU5->Text = s_锗管::FSU5;
	label锗管FSU6->Text = s_锗管::FSU6;
	label锗管FSU7->Text = s_锗管::FSU7;
	label锗管FSU8->Text = s_锗管::FSU8;
	label锗管FSU9->Text = s_锗管::FSU9;
	label锗管FSU10->Text = s_锗管::FSU10;

	label锗管ZU1->Text = s_锗管::ZU1;
	label锗管ZU2->Text = s_锗管::ZU2;
	label锗管ZU3->Text = s_锗管::ZU3;
	label锗管ZU4->Text = s_锗管::ZU4;
	label锗管ZU5->Text = s_锗管::ZU5;
	label锗管ZU6->Text = s_锗管::ZU6;
	label锗管ZU7->Text = s_锗管::ZU7;
	label锗管ZU8->Text = s_锗管::ZU8;
	label锗管ZU9->Text = s_锗管::ZU9;
	label锗管ZU10->Text = s_锗管::ZU10;
	label锗管FU1->Text = s_锗管::FU1;
	label锗管FU2->Text = s_锗管::FU2;
	label锗管FU3->Text = s_锗管::FU3;
	label锗管FU4->Text = s_锗管::FU4;
	label锗管FU5->Text = s_锗管::FU5;
	label锗管FU6->Text = s_锗管::FU6;
	label锗管FU7->Text = s_锗管::FU7;
	label锗管FU8->Text = s_锗管::FU8;
	label锗管FU9->Text = s_锗管::FU9;
	label锗管FU10->Text = s_锗管::FU10;

	label锗管ZI1->Text = s_锗管::ZI1;
	label锗管ZI2->Text = s_锗管::ZI2;
	label锗管ZI3->Text = s_锗管::ZI3;
	label锗管ZI4->Text = s_锗管::ZI4;
	label锗管ZI5->Text = s_锗管::ZI5;
	label锗管ZI6->Text = s_锗管::ZI6;
	label锗管ZI7->Text = s_锗管::ZI7;
	label锗管ZI8->Text = s_锗管::ZI8;
	label锗管ZI9->Text = s_锗管::ZI9;
	label锗管ZI10->Text = s_锗管::ZI10;
	label锗管FI1->Text = s_锗管::FI1;
	label锗管FI2->Text = s_锗管::FI2;
	label锗管FI3->Text = s_锗管::FI3;
	label锗管FI4->Text = s_锗管::FI4;
	label锗管FI5->Text = s_锗管::FI5;
	label锗管FI6->Text = s_锗管::FI6;
	label锗管FI7->Text = s_锗管::FI7;
	label锗管FI8->Text = s_锗管::FI8;
	label锗管FI9->Text = s_锗管::FI9;
	label锗管FI10->Text = s_锗管::FI10;
	label锗管结论->Text = s_锗管::summing_up;
	/*********硅管********/
	label硅管ZSU1->Text = s_硅管::ZSU1;
	label硅管ZSU2->Text = s_硅管::ZSU2;
	label硅管ZSU3->Text = s_硅管::ZSU3;
	label硅管ZSU4->Text = s_硅管::ZSU4;
	label硅管ZSU5->Text = s_硅管::ZSU5;
	label硅管ZSU6->Text = s_硅管::ZSU6;
	label硅管ZSU7->Text = s_硅管::ZSU7;
	label硅管ZSU8->Text = s_硅管::ZSU8;
	label硅管ZSU9->Text = s_硅管::ZSU9;
	label硅管ZSU10->Text = s_硅管::ZSU10;
	label硅管FSU1->Text = s_硅管::FSU1;
	label硅管FSU2->Text = s_硅管::FSU2;
	label硅管FSU3->Text = s_硅管::FSU3;
	label硅管FSU4->Text = s_硅管::FSU4;
	label硅管FSU5->Text = s_硅管::FSU5;
	label硅管FSU6->Text = s_硅管::FSU6;
	label硅管FSU7->Text = s_硅管::FSU7;
	label硅管FSU8->Text = s_硅管::FSU8;
	label硅管FSU9->Text = s_硅管::FSU9;
	label硅管FSU10->Text = s_硅管::FSU10;

	label硅管ZU1->Text = s_硅管::ZU1;
	label硅管ZU2->Text = s_硅管::ZU2;
	label硅管ZU3->Text = s_硅管::ZU3;
	label硅管ZU4->Text = s_硅管::ZU4;
	label硅管ZU5->Text = s_硅管::ZU5;
	label硅管ZU6->Text = s_硅管::ZU6;
	label硅管ZU7->Text = s_硅管::ZU7;
	label硅管ZU8->Text = s_硅管::ZU8;
	label硅管ZU9->Text = s_硅管::ZU9;
	label硅管ZU10->Text = s_硅管::ZU10;
	label1硅管FU1->Text = s_硅管::FU1;
	label1硅管FU2->Text = s_硅管::FU2;
	label1硅管FU3->Text = s_硅管::FU3;
	label1硅管FU4->Text = s_硅管::FU4;
	label1硅管FU5->Text = s_硅管::FU5;
	label1硅管FU6->Text = s_硅管::FU6;
	label1硅管FU7->Text = s_硅管::FU7;
	label1硅管FU8->Text = s_硅管::FU8;
	label1硅管FU9->Text = s_硅管::FU9;
	label1硅管FU10->Text = s_硅管::FU10;

	label硅管ZI1->Text = s_硅管::ZI1;
	label硅管ZI2->Text = s_硅管::ZI2;
	label硅管ZI3->Text = s_硅管::ZI3;
	label硅管ZI4->Text = s_硅管::ZI4;
	label硅管ZI5->Text = s_硅管::ZI5;
	label硅管ZI6->Text = s_硅管::ZI6;
	label硅管ZI7->Text = s_硅管::ZI7;
	label硅管ZI8->Text = s_硅管::ZI8;
	label硅管ZI9->Text = s_硅管::ZI9;
	label硅管ZI10->Text = s_硅管::ZI10;
	label1硅管FI1->Text = s_硅管::FI1;
	label1硅管FI2->Text = s_硅管::FI2;
	label1硅管FI3->Text = s_硅管::FI3;
	label1硅管FI4->Text = s_硅管::FI4;
	label1硅管FI5->Text = s_硅管::FI5;
	label1硅管FI6->Text = s_硅管::FI6;
	label1硅管FI7->Text = s_硅管::FI7;
	label1硅管FI8->Text = s_硅管::FI8;
	label1硅管FI9->Text = s_硅管::FI9;
	label1硅管FI10->Text = s_硅管::FI10;


	label硅管结论->Text = s_硅管::summing_up;
	/*********稳压********/
	label稳压ZSU1->Text = s_稳压::ZSU1;
	label稳压ZSU2->Text = s_稳压::ZSU2;
	label稳压ZSU3->Text = s_稳压::ZSU3;
	label稳压ZSU4->Text = s_稳压::ZSU4;
	label稳压ZSU5->Text = s_稳压::ZSU5;
	label稳压ZSU6->Text = s_稳压::ZSU6;
	label稳压ZSU7->Text = s_稳压::ZSU7;
	label稳压ZSU8->Text = s_稳压::ZSU8;
	label稳压ZSU9->Text = s_稳压::ZSU9;
	label稳压ZSU10->Text = s_稳压::ZSU10;
	label稳压FSU1->Text = s_稳压::FSU1;
	label稳压FSU2->Text = s_稳压::FSU2;
	label稳压FSU3->Text = s_稳压::FSU3;
	label稳压FSU4->Text = s_稳压::FSU4;
	label稳压FSU5->Text = s_稳压::FSU5;
	label稳压FSU6->Text = s_稳压::FSU6;
	label稳压FSU7->Text = s_稳压::FSU7;
	label稳压FSU8->Text = s_稳压::FSU8;
	label稳压FSU9->Text = s_稳压::FSU9;
	label稳压FSU10->Text = s_稳压::FSU10;

	label稳压ZU1->Text = s_稳压::ZU1;
	label稳压ZU2->Text = s_稳压::ZU2;
	label稳压ZU3->Text = s_稳压::ZU3;
	label稳压ZU4->Text = s_稳压::ZU4;
	label稳压ZU5->Text = s_稳压::ZU5;
	label稳压ZU6->Text = s_稳压::ZU6;
	label稳压ZU7->Text = s_稳压::ZU7;
	label稳压ZU8->Text = s_稳压::ZU8;
	label稳压ZU9->Text = s_稳压::ZU9;
	label稳压ZU10->Text = s_稳压::ZU10;
	label稳压FU1->Text = s_稳压::FU1;
	label稳压FU2->Text = s_稳压::FU2;
	label稳压FU3->Text = s_稳压::FU3;
	label稳压FU4->Text = s_稳压::FU4;
	label稳压FU5->Text = s_稳压::FU5;
	label稳压FU6->Text = s_稳压::FU6;
	label稳压FU7->Text = s_稳压::FU7;
	label稳压FU8->Text = s_稳压::FU8;
	label稳压FU9->Text = s_稳压::FU9;
	label稳压FU10->Text = s_稳压::FU10;

	label稳压ZI1->Text = s_稳压::ZI1;
	label稳压ZI2->Text = s_稳压::ZI2;
	label稳压ZI3->Text = s_稳压::ZI3;
	label稳压ZI4->Text = s_稳压::ZI4;
	label稳压ZI5->Text = s_稳压::ZI5;
	label稳压ZI6->Text = s_稳压::ZI6;
	label稳压ZI7->Text = s_稳压::ZI7;
	label稳压ZI8->Text = s_稳压::ZI8;
	label稳压ZI9->Text = s_稳压::ZI9;
	label稳压ZI10->Text = s_稳压::ZI10;
	label稳压FI1->Text = s_稳压::FI1;
	label稳压FI2->Text = s_稳压::FI2;
	label稳压FI3->Text = s_稳压::FI3;
	label稳压FI4->Text = s_稳压::FI4;
	label稳压FI5->Text = s_稳压::FI5;
	label稳压FI6->Text = s_稳压::FI6;
	label稳压FI7->Text = s_稳压::FI7;
	label稳压FI8->Text = s_稳压::FI8;
	label稳压FI9->Text = s_稳压::FI9;
	label稳压FI10->Text = s_稳压::FI10;

	label稳压结论->Text = s_稳压::summing_up;
}


void 元件伏安特性的测试实验报告::chart线性_load() {
	Series ^s = chart线性->Series[0];
	chart线性->Titles->Add("  线性电阻器伏安特性");
	ChartArea ^ c = chart线性->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	
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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}

void 元件伏安特性的测试实验报告::chart白炽_load() {
	Series ^s = chart白炽->Series[0];
	chart白炽->Titles->Add("  白炽灯泡伏安特性");
	ChartArea ^ c = chart白炽->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label白炽U1->Text), Convert::ToSingle(label白炽I1->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U2->Text), Convert::ToSingle(label白炽I2->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U3->Text), Convert::ToSingle(label白炽I3->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U4->Text), Convert::ToSingle(label白炽I4->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U5->Text), Convert::ToSingle(label白炽I5->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U6->Text), Convert::ToSingle(label白炽I6->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U7->Text), Convert::ToSingle(label白炽I7->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U8->Text), Convert::ToSingle(label白炽I8->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U9->Text), Convert::ToSingle(label白炽I9->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U10->Text), Convert::ToSingle(label白炽I10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性的测试实验报告::chart稳压_load() {
	Series ^s = chart稳压->Series[0];
	chart稳压->Titles->Add("  稳压二极管伏安特性");
	ChartArea ^ c = chart稳压->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label稳压ZU1->Text), Convert::ToSingle(label稳压ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU2->Text), Convert::ToSingle(label稳压ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU3->Text), Convert::ToSingle(label稳压ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU4->Text), Convert::ToSingle(label稳压ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU5->Text), Convert::ToSingle(label稳压ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU6->Text), Convert::ToSingle(label稳压ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU7->Text), Convert::ToSingle(label稳压ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU8->Text), Convert::ToSingle(label稳压ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU9->Text), Convert::ToSingle(label稳压ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU10->Text), Convert::ToSingle(label稳压ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU1->Text), Convert::ToSingle(label稳压FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU2->Text), Convert::ToSingle(label稳压FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU3->Text), Convert::ToSingle(label稳压FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU4->Text), Convert::ToSingle(label稳压FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU5->Text), Convert::ToSingle(label稳压FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU6->Text), Convert::ToSingle(label稳压FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU7->Text), Convert::ToSingle(label稳压FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU8->Text), Convert::ToSingle(label稳压FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU9->Text), Convert::ToSingle(label稳压FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU10->Text), Convert::ToSingle(label稳压FI10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性的测试实验报告::chart锗管_load() {
	Series ^s = chart锗管->Series[0];
	chart锗管->Titles->Add("  锗管2AP9伏安特性");
	ChartArea ^ c = chart锗管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label锗管ZU1->Text), Convert::ToSingle(label锗管ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU2->Text), Convert::ToSingle(label锗管ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU3->Text), Convert::ToSingle(label锗管ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU4->Text), Convert::ToSingle(label锗管ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU5->Text), Convert::ToSingle(label锗管ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU6->Text), Convert::ToSingle(label锗管ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU7->Text), Convert::ToSingle(label锗管ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU8->Text), Convert::ToSingle(label锗管ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU9->Text), Convert::ToSingle(label锗管ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU10->Text), Convert::ToSingle(label锗管ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU1->Text), Convert::ToSingle(label锗管FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU2->Text), Convert::ToSingle(label锗管FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU3->Text), Convert::ToSingle(label锗管FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU4->Text), Convert::ToSingle(label锗管FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU5->Text), Convert::ToSingle(label锗管FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU6->Text), Convert::ToSingle(label锗管FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU7->Text), Convert::ToSingle(label锗管FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU8->Text), Convert::ToSingle(label锗管FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU9->Text), Convert::ToSingle(label锗管FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU10->Text), Convert::ToSingle(label锗管FI10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性的测试实验报告::chart硅管_load() {
	Series ^s = chart硅管->Series[0];
	chart硅管->Titles->Add("  硅管2CP19伏安特性");
	ChartArea ^ c = chart硅管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label硅管ZU1->Text), Convert::ToSingle(label硅管ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU2->Text), Convert::ToSingle(label硅管ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU3->Text), Convert::ToSingle(label硅管ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU4->Text), Convert::ToSingle(label硅管ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU5->Text), Convert::ToSingle(label硅管ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU6->Text), Convert::ToSingle(label硅管ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU7->Text), Convert::ToSingle(label硅管ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU8->Text), Convert::ToSingle(label硅管ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU9->Text), Convert::ToSingle(label硅管ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU10->Text), Convert::ToSingle(label硅管ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU1->Text), Convert::ToSingle(label1硅管FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU2->Text), Convert::ToSingle(label1硅管FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU3->Text), Convert::ToSingle(label1硅管FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU4->Text), Convert::ToSingle(label1硅管FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU5->Text), Convert::ToSingle(label1硅管FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU6->Text), Convert::ToSingle(label1硅管FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU7->Text), Convert::ToSingle(label1硅管FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU8->Text), Convert::ToSingle(label1硅管FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU9->Text), Convert::ToSingle(label1硅管FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU10->Text), Convert::ToSingle(label1硅管FI10->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}




void 元件伏安特性的测试实验内容::This_Load() {
	/********图标初始化*******/
	 chart线性Init();
	 chart白炽Init();
	 chart锗管Init();
     chart硅管Init();
	 chart稳压Init();



	textBoxSU1->Text = s_线性电阻器::SU1;
	textBoxSU2->Text = s_线性电阻器::SU2;
	textBoxSU3->Text = s_线性电阻器::SU3;
	textBoxSU4->Text = s_线性电阻器::SU4;
	textBoxSU5->Text = s_线性电阻器::SU5;
	textBoxSU6->Text = s_线性电阻器::SU6;
	textBoxSU7->Text = s_线性电阻器::SU7;
	textBoxSU8->Text = s_线性电阻器::SU8;
	textBoxSU9->Text = s_线性电阻器::SU9;
	textBoxSU10->Text = s_线性电阻器::SU10;

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
    textBox线性结论->Text = s_线性电阻器::summing_up;

	/*******白炽灯******/
	textBox白炽SU1->Text = s_白炽灯::SU1;
	textBox白炽SU2->Text = s_白炽灯::SU2;
	textBox白炽SU3->Text = s_白炽灯::SU3;
	textBox白炽SU4->Text = s_白炽灯::SU4;
	textBox白炽SU5->Text = s_白炽灯::SU5;
	textBox白炽SU6->Text = s_白炽灯::SU6;
	textBox白炽SU7->Text = s_白炽灯::SU7;
	textBox白炽SU8->Text = s_白炽灯::SU8;
	textBox白炽SU9->Text = s_白炽灯::SU9;
	textBox白炽SU10->Text = s_白炽灯::SU10;

	label白炽I1->Text = s_白炽灯::I1;
	label白炽I2->Text = s_白炽灯::I2;
	label白炽I3->Text = s_白炽灯::I3;
	label白炽I4->Text = s_白炽灯::I4;
	label白炽I5->Text = s_白炽灯::I5;
	label白炽I6->Text = s_白炽灯::I6;
	label白炽I7->Text = s_白炽灯::I7;
	label白炽I8->Text = s_白炽灯::I8;
	label白炽I9->Text = s_白炽灯::I9;
	label白炽I10->Text = s_白炽灯::I10;


	label白炽U1->Text = s_白炽灯::U1;
	label白炽U2->Text = s_白炽灯::U2;
	label白炽U3->Text = s_白炽灯::U3;
	label白炽U4->Text = s_白炽灯::U4;
	label白炽U5->Text = s_白炽灯::U5;
	label白炽U6->Text = s_白炽灯::U6;
	label白炽U7->Text = s_白炽灯::U7;
	label白炽U8->Text = s_白炽灯::U8;
	label白炽U9->Text = s_白炽灯::U9;
	label白炽U10->Text = s_白炽灯::U10;
	textBox白炽结论->Text = s_白炽灯::summing_up;

	/**************s_锗管*****************/

	textBox锗管ZSU1->Text = s_锗管::ZSU1;
	textBox锗管ZSU2->Text = s_锗管::ZSU2;
	textBox锗管ZSU3->Text = s_锗管::ZSU3;
	textBox锗管ZSU4->Text = s_锗管::ZSU4;
	textBox锗管ZSU5->Text = s_锗管::ZSU5;
	textBox锗管ZSU6->Text = s_锗管::ZSU6;
	textBox锗管ZSU7->Text = s_锗管::ZSU7;
	textBox锗管ZSU8->Text = s_锗管::ZSU8;
	textBox锗管ZSU9->Text = s_锗管::ZSU9;
	textBox锗管ZSU10->Text = s_锗管::ZSU10;

	label锗管ZI1->Text = s_锗管::ZI1;
	label锗管ZI2->Text = s_锗管::ZI2;
	label锗管ZI3->Text = s_锗管::ZI3;
	label锗管ZI4->Text = s_锗管::ZI4;
	label锗管ZI5->Text = s_锗管::ZI5;
	label锗管ZI6->Text = s_锗管::ZI6;
	label锗管ZI7->Text = s_锗管::ZI7;
	label锗管ZI8->Text = s_锗管::ZI8;
	label锗管ZI9->Text = s_锗管::ZI9;
	label锗管ZI10->Text = s_锗管::ZI10;


	label锗管ZU1->Text = s_锗管::ZU1;
	label锗管ZU2->Text = s_锗管::ZU2;
	label锗管ZU3->Text = s_锗管::ZU3;
	label锗管ZU4->Text = s_锗管::ZU4;
	label锗管ZU5->Text = s_锗管::ZU5;
	label锗管ZU6->Text = s_锗管::ZU6;
	label锗管ZU7->Text = s_锗管::ZU7;
	label锗管ZU8->Text = s_锗管::ZU8;
	label锗管ZU9->Text = s_锗管::ZU9;
	label锗管ZU10->Text = s_锗管::ZU10;

	textBox锗管FSU1->Text = s_锗管::FSU1;
	textBox锗管FSU2->Text = s_锗管::FSU2;
	textBox锗管FSU3->Text = s_锗管::FSU3;
	textBox锗管FSU4->Text = s_锗管::FSU4;
	textBox锗管FSU5->Text = s_锗管::FSU5;
	textBox锗管FSU6->Text = s_锗管::FSU6;
	textBox锗管FSU7->Text = s_锗管::FSU7;
	textBox锗管FSU8->Text = s_锗管::FSU8;
	textBox锗管FSU9->Text = s_锗管::FSU9;
	textBox锗管FSU10->Text = s_锗管::FSU10;

	label锗管FI1->Text = s_锗管::FI1;
	label锗管FI2->Text = s_锗管::FI2;
	label锗管FI3->Text = s_锗管::FI3;
	label锗管FI4->Text = s_锗管::FI4;
	label锗管FI5->Text = s_锗管::FI5;
	label锗管FI6->Text = s_锗管::FI6;
	label锗管FI7->Text = s_锗管::FI7;
	label锗管FI8->Text = s_锗管::FI8;
	label锗管FI9->Text = s_锗管::FI9;
	label锗管FI10->Text = s_锗管::FI10;


	label锗管FU1->Text = s_锗管::FU1;
	label锗管FU2->Text = s_锗管::FU2;
	label锗管FU3->Text = s_锗管::FU3;
	label锗管FU4->Text = s_锗管::FU4;
	label锗管FU5->Text = s_锗管::FU5;
	label锗管FU6->Text = s_锗管::FU6;
	label锗管FU7->Text = s_锗管::FU7;
	label锗管FU8->Text = s_锗管::FU8;
	label锗管FU9->Text = s_锗管::FU9;
	label锗管FU10->Text = s_锗管::FU10;

	textBox锗管结论->Text = s_锗管::summing_up;

	/**************s_硅管*****************/

	textBox硅管ZSU1->Text = s_硅管::ZSU1;
	textBox硅管ZSU2->Text = s_硅管::ZSU2;
	textBox硅管ZSU3->Text = s_硅管::ZSU3;
	textBox硅管ZSU4->Text = s_硅管::ZSU4;
	textBox硅管ZSU5->Text = s_硅管::ZSU5;
	textBox硅管ZSU6->Text = s_硅管::ZSU6;
	textBox硅管ZSU7->Text = s_硅管::ZSU7;
	textBox硅管ZSU8->Text = s_硅管::ZSU8;
	textBox硅管ZSU9->Text = s_硅管::ZSU9;
	textBox硅管ZSU10->Text = s_硅管::ZSU10;

	label硅管ZI1->Text = s_硅管::ZI1;
	label硅管ZI2->Text = s_硅管::ZI2;
	label硅管ZI3->Text = s_硅管::ZI3;
	label硅管ZI4->Text = s_硅管::ZI4;
	label硅管ZI5->Text = s_硅管::ZI5;
	label硅管ZI6->Text = s_硅管::ZI6;
	label硅管ZI7->Text = s_硅管::ZI7;
	label硅管ZI8->Text = s_硅管::ZI8;
	label硅管ZI9->Text = s_硅管::ZI9;
	label硅管ZI10->Text = s_硅管::ZI10;


	label硅管ZU1->Text = s_硅管::ZU1;
	label硅管ZU2->Text = s_硅管::ZU2;
	label硅管ZU3->Text = s_硅管::ZU3;
	label硅管ZU4->Text = s_硅管::ZU4;
	label硅管ZU5->Text = s_硅管::ZU5;
	label硅管ZU6->Text = s_硅管::ZU6;
	label硅管ZU7->Text = s_硅管::ZU7;
	label硅管ZU8->Text = s_硅管::ZU8;
	label硅管ZU9->Text = s_硅管::ZU9;
	label硅管ZU10->Text = s_硅管::ZU10;

	textBox硅管FSU1->Text = s_硅管::FSU1;
	textBox硅管FSU2->Text = s_硅管::FSU2;
	textBox硅管FSU3->Text = s_硅管::FSU3;
	textBox硅管FSU4->Text = s_硅管::FSU4;
	textBox硅管FSU5->Text = s_硅管::FSU5;
	textBox硅管FSU6->Text = s_硅管::FSU6;
	textBox硅管FSU7->Text = s_硅管::FSU7;
	textBox硅管FSU8->Text = s_硅管::FSU8;
	textBox硅管FSU9->Text = s_硅管::FSU9;
	textBox硅管FSU10->Text = s_硅管::FSU10;

	label1硅管FI1->Text = s_硅管::FI1;
	label1硅管FI2->Text = s_硅管::FI2;
	label1硅管FI3->Text = s_硅管::FI3;
	label1硅管FI4->Text = s_硅管::FI4;
	label1硅管FI5->Text = s_硅管::FI5;
	label1硅管FI6->Text = s_硅管::FI6;
	label1硅管FI7->Text = s_硅管::FI7;
	label1硅管FI8->Text = s_硅管::FI8;
	label1硅管FI9->Text = s_硅管::FI9;
	label1硅管FI10->Text = s_硅管::FI10;


	label1硅管FU1->Text = s_硅管::FU1;
	label1硅管FU2->Text = s_硅管::FU2;
	label1硅管FU3->Text = s_硅管::FU3;
	label1硅管FU4->Text = s_硅管::FU4;
	label1硅管FU5->Text = s_硅管::FU5;
	label1硅管FU6->Text = s_硅管::FU6;
	label1硅管FU7->Text = s_硅管::FU7;
	label1硅管FU8->Text = s_硅管::FU8;
	label1硅管FU9->Text = s_硅管::FU9;
	label1硅管FU10->Text = s_硅管::FU10;

	textBox硅管结论->Text = s_硅管::summing_up;


	/**************s_稳压*****************/

	textBox稳压ZSU1->Text = s_稳压::ZSU1;
	textBox稳压ZSU2->Text = s_稳压::ZSU2;
	textBox稳压ZSU3->Text = s_稳压::ZSU3;
	textBox稳压ZSU4->Text = s_稳压::ZSU4;
	textBox稳压ZSU5->Text = s_稳压::ZSU5;
	textBox稳压ZSU6->Text = s_稳压::ZSU6;
	textBox稳压ZSU7->Text = s_稳压::ZSU7;
	textBox稳压ZSU8->Text = s_稳压::ZSU8;
	textBox稳压ZSU9->Text = s_稳压::ZSU9;
	textBox稳压ZSU10->Text = s_稳压::ZSU10;

	label稳压ZI1->Text = s_稳压::ZI1;
	label稳压ZI2->Text = s_稳压::ZI2;
	label稳压ZI3->Text = s_稳压::ZI3;
	label稳压ZI4->Text = s_稳压::ZI4;
	label稳压ZI5->Text = s_稳压::ZI5;
	label稳压ZI6->Text = s_稳压::ZI6;
	label稳压ZI7->Text = s_稳压::ZI7;
	label稳压ZI8->Text = s_稳压::ZI8;
	label稳压ZI9->Text = s_稳压::ZI9;
	label稳压ZI10->Text = s_稳压::ZI10;


	label稳压ZU1->Text = s_稳压::ZU1;
	label稳压ZU2->Text = s_稳压::ZU2;
	label稳压ZU3->Text = s_稳压::ZU3;
	label稳压ZU4->Text = s_稳压::ZU4;
	label稳压ZU5->Text = s_稳压::ZU5;
	label稳压ZU6->Text = s_稳压::ZU6;
	label稳压ZU7->Text = s_稳压::ZU7;
	label稳压ZU8->Text = s_稳压::ZU8;
	label稳压ZU9->Text = s_稳压::ZU9;
	label稳压ZU10->Text = s_稳压::ZU10;

	textBox稳压FSU1->Text = s_稳压::FSU1;
	textBox稳压FSU2->Text = s_稳压::FSU2;
	textBox稳压FSU3->Text = s_稳压::FSU3;
	textBox稳压FSU4->Text = s_稳压::FSU4;
	textBox稳压FSU5->Text = s_稳压::FSU5;
	textBox稳压FSU6->Text = s_稳压::FSU6;
	textBox稳压FSU7->Text = s_稳压::FSU7;
	textBox稳压FSU8->Text = s_稳压::FSU8;
	textBox稳压FSU9->Text = s_稳压::FSU9;
	textBox稳压FSU10->Text = s_稳压::FSU10;

	label稳压FI1->Text = s_稳压::FI1;
	label稳压FI2->Text = s_稳压::FI2;
	label稳压FI3->Text = s_稳压::FI3;
	label稳压FI4->Text = s_稳压::FI4;
	label稳压FI5->Text = s_稳压::FI5;
	label稳压FI6->Text = s_稳压::FI6;
	label稳压FI7->Text = s_稳压::FI7;
	label稳压FI8->Text = s_稳压::FI8;
	label稳压FI9->Text = s_稳压::FI9;
	label稳压FI10->Text = s_稳压::FI10;


	label稳压FU1->Text = s_稳压::FU1;
	label稳压FU2->Text = s_稳压::FU2;
	label稳压FU3->Text = s_稳压::FU3;
	label稳压FU4->Text = s_稳压::FU4;
	label稳压FU5->Text = s_稳压::FU5;
	label稳压FU6->Text = s_稳压::FU6;
	label稳压FU7->Text = s_稳压::FU7;
	label稳压FU8->Text = s_稳压::FU8;
	label稳压FU9->Text = s_稳压::FU9;
	label稳压FU10->Text = s_稳压::FU10;

	textBox稳压结论->Text = s_稳压::summing_up;
}





void 元件伏安特性的测试实验内容::chart线性Init() {
	Series ^s = chart线性->Series[0];
	chart线性->Titles->Add("  线性电阻器伏安特性");
	ChartArea ^ c = chart线性->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void 元件伏安特性的测试实验内容::Loadchart线性() {
	Series ^s = chart线性->Series[0];
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
		s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}

void 元件伏安特性的测试实验内容::chart白炽Init() {
	Series ^s = chart白炽->Series[0];
	chart白炽->Titles->Add("  白炽灯伏安特性");
	ChartArea ^ c = chart白炽->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void 元件伏安特性的测试实验内容::Loadchart白炽() {
	Series ^s = chart白炽->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label白炽U1->Text), Convert::ToSingle(label白炽I1->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U2->Text), Convert::ToSingle(label白炽I2->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U3->Text), Convert::ToSingle(label白炽I3->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U4->Text), Convert::ToSingle(label白炽I4->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U5->Text), Convert::ToSingle(label白炽I5->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U6->Text), Convert::ToSingle(label白炽I6->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U7->Text), Convert::ToSingle(label白炽I7->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U8->Text), Convert::ToSingle(label白炽I8->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U9->Text), Convert::ToSingle(label白炽I9->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U10->Text), Convert::ToSingle(label白炽I10->Text));
	}
	catch (System::Exception^ E) {

	}


}
void 元件伏安特性的测试实验内容::chart锗管Init() {
	Series ^s = chart锗管->Series[0];
	chart锗管->Titles->Add("  锗管2AP9伏安特性");
	ChartArea ^ c = chart锗管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void 元件伏安特性的测试实验内容::Loadchart锗管() {
	Series ^s = chart锗管->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label锗管ZU1->Text), Convert::ToSingle(label锗管ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU2->Text), Convert::ToSingle(label锗管ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU3->Text), Convert::ToSingle(label锗管ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU4->Text), Convert::ToSingle(label锗管ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU5->Text), Convert::ToSingle(label锗管ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU6->Text), Convert::ToSingle(label锗管ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU7->Text), Convert::ToSingle(label锗管ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU8->Text), Convert::ToSingle(label锗管ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU9->Text), Convert::ToSingle(label锗管ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU10->Text), Convert::ToSingle(label锗管ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU1->Text), Convert::ToSingle(label锗管FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU2->Text), Convert::ToSingle(label锗管FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU3->Text), Convert::ToSingle(label锗管FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU4->Text), Convert::ToSingle(label锗管FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU5->Text), Convert::ToSingle(label锗管FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU6->Text), Convert::ToSingle(label锗管FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU7->Text), Convert::ToSingle(label锗管FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU8->Text), Convert::ToSingle(label锗管FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU9->Text), Convert::ToSingle(label锗管FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU10->Text), Convert::ToSingle(label锗管FI10->Text));
	}
	catch (System::Exception^ E) {

	}

	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性的测试实验内容::chart硅管Init() {
	Series ^s = chart硅管->Series[0];
	chart硅管->Titles->Add("  硅管2CP15伏安特性");
	ChartArea ^ c = chart硅管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void 元件伏安特性的测试实验内容::Loadchart硅管() {
	Series ^s = chart硅管->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label硅管ZU1->Text), Convert::ToSingle(label硅管ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU2->Text), Convert::ToSingle(label硅管ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU3->Text), Convert::ToSingle(label硅管ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU4->Text), Convert::ToSingle(label硅管ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU5->Text), Convert::ToSingle(label硅管ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU6->Text), Convert::ToSingle(label硅管ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU7->Text), Convert::ToSingle(label硅管ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU8->Text), Convert::ToSingle(label硅管ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU9->Text), Convert::ToSingle(label硅管ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU10->Text), Convert::ToSingle(label硅管ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU1->Text), Convert::ToSingle(label1硅管FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU2->Text), Convert::ToSingle(label1硅管FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU3->Text), Convert::ToSingle(label1硅管FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU4->Text), Convert::ToSingle(label1硅管FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU5->Text), Convert::ToSingle(label1硅管FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU6->Text), Convert::ToSingle(label1硅管FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU7->Text), Convert::ToSingle(label1硅管FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU8->Text), Convert::ToSingle(label1硅管FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU9->Text), Convert::ToSingle(label1硅管FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU10->Text), Convert::ToSingle(label1硅管FI10->Text));
	}
	catch (System::Exception^ E) {

	}

	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性的测试实验内容::chart稳压Init() {
	Series ^s = chart稳压->Series[0];
	chart稳压->Titles->Add("  稳压二极管伏安特性");
	ChartArea ^ c = chart稳压->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Spline;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0,0);
}


void 元件伏安特性的测试实验内容::Loadchart稳压() {
	Series ^s = chart稳压->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label稳压ZU1->Text), Convert::ToSingle(label稳压ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU2->Text), Convert::ToSingle(label稳压ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU3->Text), Convert::ToSingle(label稳压ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU4->Text), Convert::ToSingle(label稳压ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU5->Text), Convert::ToSingle(label稳压ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU6->Text), Convert::ToSingle(label稳压ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU7->Text), Convert::ToSingle(label稳压ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU8->Text), Convert::ToSingle(label稳压ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU9->Text), Convert::ToSingle(label稳压ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU10->Text), Convert::ToSingle(label稳压ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU1->Text), Convert::ToSingle(label稳压FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU2->Text), Convert::ToSingle(label稳压FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU3->Text), Convert::ToSingle(label稳压FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU4->Text), Convert::ToSingle(label稳压FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU5->Text), Convert::ToSingle(label稳压FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU6->Text), Convert::ToSingle(label稳压FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU7->Text), Convert::ToSingle(label稳压FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU8->Text), Convert::ToSingle(label稳压FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU9->Text), Convert::ToSingle(label稳压FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU10->Text), Convert::ToSingle(label稳压FI10->Text));
	}
	catch (System::Exception^ E) {

	}	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending);
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}


String^ 元件伏安特性的测试实验内容::GetUData() {
	S_PLCRecv p = GetMData();

	if (p.HeaderId == 6) {
		return  DcNumToString(p.U, p.Usymbol);
	}
	else {
		return "0.00";
	}
}

String^ 元件伏安特性的测试实验内容::GetIData() {
	S_PLCRecv p = GetMData();

	if (p.HeaderId == 5) {
		return  DcNumToString(p.I, p.Isymbol);
	}
	else {
		return "0.00";
	}
}


ST_元件伏安特性测试 元件伏安特性的测试实验内容::LoadGradeData() {
    ST_元件伏安特性测试 s;

	snprintf(s.线性SU1, 10, "%s",textBoxSU1->Text);
	snprintf(s.线性SU2, 10, "%s",textBoxSU2->Text );
	snprintf(s.线性SU3, 10, "%s",textBoxSU3->Text );
	snprintf(s.线性SU4, 10, "%s",textBoxSU4->Text );
	snprintf(s.线性SU5, 10, "%s",textBoxSU5->Text );
	snprintf(s.线性SU6, 10, "%s",textBoxSU6->Text );
	snprintf(s.线性SU7, 10, "%s",textBoxSU7->Text );
	snprintf(s.线性SU8, 10, "%s",textBoxSU8->Text );
	snprintf(s.线性SU9, 10, "%s",textBoxSU9->Text );
	snprintf(s.线性SU10, 10, "%s",textBoxSU10->Text);

	snprintf(s.线性I1, 10, "%s", label线性I1->Text);
	snprintf(s.线性I2, 10, "%s", label线性I2->Text);
	snprintf(s.线性I3, 10, "%s", label线性I3->Text);
	snprintf(s.线性I4, 10, "%s", label线性I4->Text);
	snprintf(s.线性I5, 10, "%s", label线性I5->Text);
	snprintf(s.线性I6, 10, "%s", label线性I6->Text);
	snprintf(s.线性I7, 10, "%s", label线性I7->Text);
	snprintf(s.线性I8, 10, "%s", label线性I8->Text);
	snprintf(s.线性I9, 10, "%s", label线性I9->Text);
	snprintf(s.线性I10, 10, "%s", label线性I10->Text);

	snprintf(s.线性U1, 10, "%s", label线性U1->Text);
	snprintf(s.线性U2, 10, "%s", label线性U2->Text);
	snprintf(s.线性U3, 10, "%s", label线性U3->Text);
	snprintf(s.线性U4, 10, "%s", label线性U4->Text);
	snprintf(s.线性U5, 10, "%s", label线性U5->Text);
	snprintf(s.线性U6, 10, "%s", label线性U6->Text);
	snprintf(s.线性U7, 10, "%s", label线性U7->Text);
	snprintf(s.线性U8, 10, "%s", label线性U8->Text);
	snprintf(s.线性U9, 10, "%s", label线性U9->Text);
	snprintf(s.线性U10, 10, "%s", label线性U10->Text);
	snprintf(s.线性summing_up, 100, "%s", textBox线性结论->Text);
	/*******白炽灯******/
	snprintf(s.白炽SU1, 10, "%s", textBox白炽SU1->Text);
	snprintf(s.白炽SU2, 10, "%s", textBox白炽SU2->Text);
	snprintf(s.白炽SU3, 10, "%s", textBox白炽SU3->Text);
	snprintf(s.白炽SU4, 10, "%s", textBox白炽SU4->Text);
	snprintf(s.白炽SU5, 10, "%s", textBox白炽SU5->Text);
	snprintf(s.白炽SU6, 10, "%s", textBox白炽SU6->Text);
	snprintf(s.白炽SU7, 10, "%s", textBox白炽SU7->Text);
	snprintf(s.白炽SU8, 10, "%s", textBox白炽SU8->Text);
	snprintf(s.白炽SU9, 10, "%s", textBox白炽SU9->Text);
	snprintf(s.白炽SU10, 10, "%s", textBox白炽SU10->Text);

	snprintf(s.白炽I1, 10, "%s", label白炽I1->Text);
	snprintf(s.白炽I2, 10, "%s", label白炽I2->Text);
	snprintf(s.白炽I3, 10, "%s", label白炽I3->Text);
	snprintf(s.白炽I4, 10, "%s", label白炽I4->Text);
	snprintf(s.白炽I5, 10, "%s", label白炽I5->Text);
	snprintf(s.白炽I6, 10, "%s", label白炽I6->Text);
	snprintf(s.白炽I7, 10, "%s", label白炽I7->Text);
	snprintf(s.白炽I8, 10, "%s", label白炽I8->Text);
	snprintf(s.白炽I9, 10, "%s", label白炽I9->Text);
	snprintf(s.白炽I10, 10, "%s", label白炽I10->Text);

	snprintf(s.白炽U1, 10, "%s", label白炽U1->Text);
	snprintf(s.白炽U2, 10, "%s", label白炽U2->Text);
	snprintf(s.白炽U3, 10, "%s", label白炽U3->Text);
	snprintf(s.白炽U4, 10, "%s", label白炽U4->Text);
	snprintf(s.白炽U5, 10, "%s", label白炽U5->Text);
	snprintf(s.白炽U6, 10, "%s", label白炽U6->Text);
	snprintf(s.白炽U7, 10, "%s", label白炽U7->Text);
	snprintf(s.白炽U8, 10, "%s", label白炽U8->Text);
	snprintf(s.白炽U9, 10, "%s", label白炽U9->Text);
	snprintf(s.白炽U10, 10, "%s", label白炽U10->Text);

	snprintf(s.白炽summing_up, 100, "%s", textBox白炽结论->Text);

	/**************s_锗管*****************/

	snprintf(s.锗管ZSU1, 10, "%s", textBox锗管ZSU1->Text);
	snprintf(s.锗管ZSU2, 10, "%s", textBox锗管ZSU2->Text);
	snprintf(s.锗管ZSU3, 10, "%s", textBox锗管ZSU3->Text);
	snprintf(s.锗管ZSU4, 10, "%s", textBox锗管ZSU4->Text);
	snprintf(s.锗管ZSU5, 10, "%s", textBox锗管ZSU5->Text);
	snprintf(s.锗管ZSU6, 10, "%s", textBox锗管ZSU6->Text);
	snprintf(s.锗管ZSU7, 10, "%s", textBox锗管ZSU7->Text);
	snprintf(s.锗管ZSU8, 10, "%s", textBox锗管ZSU8->Text);
	snprintf(s.锗管ZSU9, 10, "%s", textBox锗管ZSU9->Text);
	snprintf(s.锗管ZSU10, 10, "%s", textBox锗管ZSU10->Text);
	snprintf(s.锗管FSU1, 10, "%s", textBox锗管FSU1->Text);
	snprintf(s.锗管FSU2, 10, "%s", textBox锗管FSU2->Text);
	snprintf(s.锗管FSU3, 10, "%s", textBox锗管FSU3->Text);
	snprintf(s.锗管FSU4, 10, "%s", textBox锗管FSU4->Text);
	snprintf(s.锗管FSU5, 10, "%s", textBox锗管FSU5->Text);
	snprintf(s.锗管FSU6, 10, "%s", textBox锗管FSU6->Text);
	snprintf(s.锗管FSU7, 10, "%s", textBox锗管FSU7->Text);
	snprintf(s.锗管FSU8, 10, "%s", textBox锗管FSU8->Text);
	snprintf(s.锗管FSU9, 10, "%s", textBox锗管FSU9->Text);
	snprintf(s.锗管FSU10, 10, "%s", textBox锗管FSU10->Text);

	snprintf(s.锗管ZU1, 10, "%s", label锗管ZU1->Text);
	snprintf(s.锗管ZU2, 10, "%s", label锗管ZU2->Text);
	snprintf(s.锗管ZU3, 10, "%s", label锗管ZU3->Text);
	snprintf(s.锗管ZU4, 10, "%s", label锗管ZU4->Text);
	snprintf(s.锗管ZU5, 10, "%s", label锗管ZU5->Text);
	snprintf(s.锗管ZU6, 10, "%s", label锗管ZU6->Text);
	snprintf(s.锗管ZU7, 10, "%s", label锗管ZU7->Text);
	snprintf(s.锗管ZU8, 10, "%s", label锗管ZU8->Text);
	snprintf(s.锗管ZU9, 10, "%s", label锗管ZU9->Text);
	snprintf(s.锗管ZU10, 10, "%s", label锗管ZU10->Text);
	snprintf(s.锗管FU1, 10, "%s", label锗管FU1->Text);
	snprintf(s.锗管FU2, 10, "%s", label锗管FU2->Text);
	snprintf(s.锗管FU3, 10, "%s", label锗管FU3->Text);
	snprintf(s.锗管FU4, 10, "%s", label锗管FU4->Text);
	snprintf(s.锗管FU5, 10, "%s", label锗管FU5->Text);
	snprintf(s.锗管FU6, 10, "%s", label锗管FU6->Text);
	snprintf(s.锗管FU7, 10, "%s", label锗管FU7->Text);
	snprintf(s.锗管FU8, 10, "%s", label锗管FU8->Text);
	snprintf(s.锗管FU9, 10, "%s", label锗管FU9->Text);
	snprintf(s.锗管FU10, 10, "%s", label锗管FU10->Text);

	snprintf(s.锗管ZI1, 10, "%s", label锗管ZI1->Text);
	snprintf(s.锗管ZI2, 10, "%s", label锗管ZI2->Text);
	snprintf(s.锗管ZI3, 10, "%s", label锗管ZI3->Text);
	snprintf(s.锗管ZI4, 10, "%s", label锗管ZI4->Text);
	snprintf(s.锗管ZI5, 10, "%s", label锗管ZI5->Text);
	snprintf(s.锗管ZI6, 10, "%s", label锗管ZI6->Text);
	snprintf(s.锗管ZI7, 10, "%s", label锗管ZI7->Text);
	snprintf(s.锗管ZI8, 10, "%s", label锗管ZI8->Text);
	snprintf(s.锗管ZI9, 10, "%s", label锗管ZI9->Text);
	snprintf(s.锗管ZI10, 10, "%s", label锗管ZI10->Text);
	snprintf(s.锗管FI1, 10, "%s", label锗管FI1->Text);
	snprintf(s.锗管FI2, 10, "%s", label锗管FI2->Text);
	snprintf(s.锗管FI3, 10, "%s", label锗管FI3->Text);
	snprintf(s.锗管FI4, 10, "%s", label锗管FI4->Text);
	snprintf(s.锗管FI5, 10, "%s", label锗管FI5->Text);
	snprintf(s.锗管FI6, 10, "%s", label锗管FI6->Text);
	snprintf(s.锗管FI7, 10, "%s", label锗管FI7->Text);
	snprintf(s.锗管FI8, 10, "%s", label锗管FI8->Text);
	snprintf(s.锗管FI9, 10, "%s", label锗管FI9->Text);
	snprintf(s.锗管FI10, 10, "%s", label锗管FI10->Text);

	snprintf(s.锗管summing_up, 100, "%s", textBox锗管结论->Text);

	/**************s_硅管*****************/

	snprintf(s.硅管ZSU1, 10, "%s", textBox硅管ZSU1->Text);
	snprintf(s.硅管ZSU2, 10, "%s", textBox硅管ZSU2->Text);
	snprintf(s.硅管ZSU3, 10, "%s", textBox硅管ZSU3->Text);
	snprintf(s.硅管ZSU4, 10, "%s", textBox硅管ZSU4->Text);
	snprintf(s.硅管ZSU5, 10, "%s", textBox硅管ZSU5->Text);
	snprintf(s.硅管ZSU6, 10, "%s", textBox硅管ZSU6->Text);
	snprintf(s.硅管ZSU7, 10, "%s", textBox硅管ZSU7->Text);
	snprintf(s.硅管ZSU8, 10, "%s", textBox硅管ZSU8->Text);
	snprintf(s.硅管ZSU9, 10, "%s", textBox硅管ZSU9->Text);
	snprintf(s.硅管ZSU10, 10, "%s", textBox硅管ZSU10->Text);
	snprintf(s.硅管FSU1, 10, "%s", textBox硅管FSU1->Text);
	snprintf(s.硅管FSU2, 10, "%s", textBox硅管FSU2->Text);
	snprintf(s.硅管FSU3, 10, "%s", textBox硅管FSU3->Text);
	snprintf(s.硅管FSU4, 10, "%s", textBox硅管FSU4->Text);
	snprintf(s.硅管FSU5, 10, "%s", textBox硅管FSU5->Text);
	snprintf(s.硅管FSU6, 10, "%s", textBox硅管FSU6->Text);
	snprintf(s.硅管FSU7, 10, "%s", textBox硅管FSU7->Text);
	snprintf(s.硅管FSU8, 10, "%s", textBox硅管FSU8->Text);
	snprintf(s.硅管FSU9, 10, "%s", textBox硅管FSU9->Text);
	snprintf(s.硅管FSU10, 10, "%s", textBox硅管FSU10->Text);

	snprintf(s.硅管ZU1, 10, "%s", label硅管ZU1->Text);
	snprintf(s.硅管ZU2, 10, "%s", label硅管ZU2->Text);
	snprintf(s.硅管ZU3, 10, "%s", label硅管ZU3->Text);
	snprintf(s.硅管ZU4, 10, "%s", label硅管ZU4->Text);
	snprintf(s.硅管ZU5, 10, "%s", label硅管ZU5->Text);
	snprintf(s.硅管ZU6, 10, "%s", label硅管ZU6->Text);
	snprintf(s.硅管ZU7, 10, "%s", label硅管ZU7->Text);
	snprintf(s.硅管ZU8, 10, "%s", label硅管ZU8->Text);
	snprintf(s.硅管ZU9, 10, "%s", label硅管ZU9->Text);
	snprintf(s.硅管ZU10, 10, "%s", label硅管ZU10->Text);
	snprintf(s.硅管FU1, 10, "%s", label1硅管FU1->Text);
	snprintf(s.硅管FU2, 10, "%s", label1硅管FU2->Text);
	snprintf(s.硅管FU3, 10, "%s", label1硅管FU3->Text);
	snprintf(s.硅管FU4, 10, "%s", label1硅管FU4->Text);
	snprintf(s.硅管FU5, 10, "%s", label1硅管FU5->Text);
	snprintf(s.硅管FU6, 10, "%s", label1硅管FU6->Text);
	snprintf(s.硅管FU7, 10, "%s", label1硅管FU7->Text);
	snprintf(s.硅管FU8, 10, "%s", label1硅管FU8->Text);
	snprintf(s.硅管FU9, 10, "%s", label1硅管FU9->Text);
	snprintf(s.硅管FU10, 10, "%s", label1硅管FU10->Text);

	snprintf(s.硅管ZI1, 10, "%s", label硅管ZI1->Text);
	snprintf(s.硅管ZI2, 10, "%s", label硅管ZI2->Text);
	snprintf(s.硅管ZI3, 10, "%s", label硅管ZI3->Text);
	snprintf(s.硅管ZI4, 10, "%s", label硅管ZI4->Text);
	snprintf(s.硅管ZI5, 10, "%s", label硅管ZI5->Text);
	snprintf(s.硅管ZI6, 10, "%s", label硅管ZI6->Text);
	snprintf(s.硅管ZI7, 10, "%s", label硅管ZI7->Text);
	snprintf(s.硅管ZI8, 10, "%s", label硅管ZI8->Text);
	snprintf(s.硅管ZI9, 10, "%s", label硅管ZI9->Text);
	snprintf(s.硅管ZI10, 10, "%s", label硅管ZI10->Text);
	snprintf(s.硅管FI1, 10, "%s", label1硅管FI1->Text);
	snprintf(s.硅管FI2, 10, "%s", label1硅管FI2->Text);
	snprintf(s.硅管FI3, 10, "%s", label1硅管FI3->Text);
	snprintf(s.硅管FI4, 10, "%s", label1硅管FI4->Text);
	snprintf(s.硅管FI5, 10, "%s", label1硅管FI5->Text);
	snprintf(s.硅管FI6, 10, "%s", label1硅管FI6->Text);
	snprintf(s.硅管FI7, 10, "%s", label1硅管FI7->Text);
	snprintf(s.硅管FI8, 10, "%s", label1硅管FI8->Text);
	snprintf(s.硅管FI9, 10, "%s", label1硅管FI9->Text);
	snprintf(s.硅管FI10, 10, "%s", label1硅管FI10->Text);

	snprintf(s.硅管summing_up, 100, "%s", textBox硅管结论->Text);


	/**************s_稳压*****************/
	snprintf(s.稳压ZSU1, 10, "%s", textBox稳压ZSU1->Text);
	snprintf(s.稳压ZSU2, 10, "%s", textBox稳压ZSU2->Text);
	snprintf(s.稳压ZSU3, 10, "%s", textBox稳压ZSU3->Text);
	snprintf(s.稳压ZSU4, 10, "%s", textBox稳压ZSU4->Text);
	snprintf(s.稳压ZSU5, 10, "%s", textBox稳压ZSU5->Text);
	snprintf(s.稳压ZSU6, 10, "%s", textBox稳压ZSU6->Text);
	snprintf(s.稳压ZSU7, 10, "%s", textBox稳压ZSU7->Text);
	snprintf(s.稳压ZSU8, 10, "%s", textBox稳压ZSU8->Text);
	snprintf(s.稳压ZSU9, 10, "%s", textBox稳压ZSU9->Text);
	snprintf(s.稳压ZSU10, 10, "%s", textBox稳压ZSU10->Text);
	snprintf(s.稳压FSU1, 10, "%s", textBox稳压FSU1->Text);
	snprintf(s.稳压FSU2, 10, "%s", textBox稳压FSU2->Text);
	snprintf(s.稳压FSU3, 10, "%s", textBox稳压FSU3->Text);
	snprintf(s.稳压FSU4, 10, "%s", textBox稳压FSU4->Text);
	snprintf(s.稳压FSU5, 10, "%s", textBox稳压FSU5->Text);
	snprintf(s.稳压FSU6, 10, "%s", textBox稳压FSU6->Text);
	snprintf(s.稳压FSU7, 10, "%s", textBox稳压FSU7->Text);
	snprintf(s.稳压FSU8, 10, "%s", textBox稳压FSU8->Text);
	snprintf(s.稳压FSU9, 10, "%s", textBox稳压FSU9->Text);
	snprintf(s.稳压FSU10, 10, "%s", textBox稳压FSU10->Text);

	snprintf(s.稳压ZU1, 10, "%s", label稳压ZU1->Text);
	snprintf(s.稳压ZU2, 10, "%s", label稳压ZU2->Text);
	snprintf(s.稳压ZU3, 10, "%s", label稳压ZU3->Text);
	snprintf(s.稳压ZU4, 10, "%s", label稳压ZU4->Text);
	snprintf(s.稳压ZU5, 10, "%s", label稳压ZU5->Text);
	snprintf(s.稳压ZU6, 10, "%s", label稳压ZU6->Text);
	snprintf(s.稳压ZU7, 10, "%s", label稳压ZU7->Text);
	snprintf(s.稳压ZU8, 10, "%s", label稳压ZU8->Text);
	snprintf(s.稳压ZU9, 10, "%s", label稳压ZU9->Text);
	snprintf(s.稳压ZU10, 10, "%s", label稳压ZU10->Text);
	snprintf(s.稳压FU1, 10, "%s", label稳压FU1->Text);
	snprintf(s.稳压FU2, 10, "%s", label稳压FU2->Text);
	snprintf(s.稳压FU3, 10, "%s", label稳压FU3->Text);
	snprintf(s.稳压FU4, 10, "%s", label稳压FU4->Text);
	snprintf(s.稳压FU5, 10, "%s", label稳压FU5->Text);
	snprintf(s.稳压FU6, 10, "%s", label稳压FU6->Text);
	snprintf(s.稳压FU7, 10, "%s", label稳压FU7->Text);
	snprintf(s.稳压FU8, 10, "%s", label稳压FU8->Text);
	snprintf(s.稳压FU9, 10, "%s", label稳压FU9->Text);
	snprintf(s.稳压FU10, 10, "%s", label稳压FU10->Text);

	snprintf(s.稳压ZI1, 10, "%s", label稳压ZI1->Text);
	snprintf(s.稳压ZI2, 10, "%s", label稳压ZI2->Text);
	snprintf(s.稳压ZI3, 10, "%s", label稳压ZI3->Text);
	snprintf(s.稳压ZI4, 10, "%s", label稳压ZI4->Text);
	snprintf(s.稳压ZI5, 10, "%s", label稳压ZI5->Text);
	snprintf(s.稳压ZI6, 10, "%s", label稳压ZI6->Text);
	snprintf(s.稳压ZI7, 10, "%s", label稳压ZI7->Text);
	snprintf(s.稳压ZI8, 10, "%s", label稳压ZI8->Text);
	snprintf(s.稳压ZI9, 10, "%s", label稳压ZI9->Text);
	snprintf(s.稳压ZI10, 10, "%s", label稳压ZI10->Text);
	snprintf(s.稳压FI1, 10, "%s", label稳压FI1->Text);
	snprintf(s.稳压FI2, 10, "%s", label稳压FI2->Text);
	snprintf(s.稳压FI3, 10, "%s", label稳压FI3->Text);
	snprintf(s.稳压FI4, 10, "%s", label稳压FI4->Text);
	snprintf(s.稳压FI5, 10, "%s", label稳压FI5->Text);
	snprintf(s.稳压FI6, 10, "%s", label稳压FI6->Text);
	snprintf(s.稳压FI7, 10, "%s", label稳压FI7->Text);
	snprintf(s.稳压FI8, 10, "%s", label稳压FI8->Text);
	snprintf(s.稳压FI9, 10, "%s", label稳压FI9->Text);
	snprintf(s.稳压FI10, 10, "%s", label稳压FI10->Text);

	snprintf(s.稳压summing_up, 100, "%s", textBox稳压结论->Text);
	return s;
}



String ^元件伏安特性的测试实验内容::GenerateStuInfo() {
	String ^info;
	info += "专业:  " + gcnew String(trialInfo.major) + "\n";
	info += "班级:  " + gcnew String(trialInfo.Class) + "\n";
	info += "指导老师:  " + gcnew String(trialInfo.teacher) + "\n";
	info += "实验编号:  " + gcnew String(trialInfo.SeriaNumber) + "\n";
	info += "学生1:  " + gcnew String(trialInfo.stuName1) + "\n";
	info += "学号1:  " + gcnew String(trialInfo.XueHao1) + "\n";
	info += "学生2:  " + gcnew String(trialInfo.stuName2) + "\n";
	info += "学号2:  " + gcnew String(trialInfo.XueHao2) + "\n";
	info += "实验名称:  " + gcnew String(Grades[1].c_str()) + "\n";

	return info;
}

