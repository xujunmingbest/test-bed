#pragma once
#include "元件伏安特性的测试.h"
namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 元件伏安特性的测试实验报告 摘要
	/// </summary>
	public ref class 元件伏安特性的测试实验报告 : public System::Windows::Forms::Form
	{
	public:
		元件伏安特性的测试实验报告(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~元件伏安特性的测试实验报告()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox1;






























	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart线性;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart白炽;

	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label15;































	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart锗管;

private: System::Windows::Forms::GroupBox^  groupBox3;

private: System::Windows::Forms::Label^  label19;






























private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart硅管;

private: System::Windows::Forms::GroupBox^  groupBox4;

private: System::Windows::Forms::Label^  label23;































private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart稳压;






































private: System::Windows::Forms::GroupBox^  groupBox6;

private: System::Windows::Forms::Label^  label31;































private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label线性I10;



private: System::Windows::Forms::Label^  label线性I9;

private: System::Windows::Forms::Label^  label线性I8;

private: System::Windows::Forms::Label^  label线性I7;

private: System::Windows::Forms::Label^  label线性I6;

private: System::Windows::Forms::Label^  label线性I5;

private: System::Windows::Forms::Label^  label线性I4;

private: System::Windows::Forms::Label^  label线性I3;

private: System::Windows::Forms::Label^  label线性I2;

private: System::Windows::Forms::Label^  label线性I1;

private: System::Windows::Forms::Label^  label线性U10;

private: System::Windows::Forms::Label^  label线性U9;

private: System::Windows::Forms::Label^  label线性U8;

private: System::Windows::Forms::Label^  label线性U7;

private: System::Windows::Forms::Label^  label线性U6;

private: System::Windows::Forms::Label^  label线性U5;

private: System::Windows::Forms::Label^  label线性U4;

private: System::Windows::Forms::Label^  label线性U3;

private: System::Windows::Forms::Label^  label线性U2;

private: System::Windows::Forms::Label^  label线性U1;
private: System::Windows::Forms::Label^  label线性SU10;



private: System::Windows::Forms::Label^  label线性SU9;


private: System::Windows::Forms::Label^  label线性SU8;


private: System::Windows::Forms::Label^  label线性SU7;



private: System::Windows::Forms::Label^  label线性SU6;


private: System::Windows::Forms::Label^  label线性SU5;


private: System::Windows::Forms::Label^  label线性SU4;


private: System::Windows::Forms::Label^  label线性SU3;


private: System::Windows::Forms::Label^  label线性SU2;


private: System::Windows::Forms::Label^  label线性SU1;
private: System::Windows::Forms::Label^  label锗管ZSU10;
























private: System::Windows::Forms::Label^  label锗管ZSU9;

private: System::Windows::Forms::Label^  label锗管ZSU8;

private: System::Windows::Forms::Label^  label锗管ZSU7;

private: System::Windows::Forms::Label^  label锗管ZSU6;

private: System::Windows::Forms::Label^  label锗管ZSU5;

private: System::Windows::Forms::Label^  label锗管ZSU4;

private: System::Windows::Forms::Label^  label锗管ZSU3;

private: System::Windows::Forms::Label^  label锗管ZSU2;

private: System::Windows::Forms::Label^  label锗管ZSU1;
private: System::Windows::Forms::Label^  label稳压ZSU10;





















































private: System::Windows::Forms::Label^  label稳压ZSU9;

private: System::Windows::Forms::Label^  label稳压ZSU8;

private: System::Windows::Forms::Label^  label稳压ZSU7;

private: System::Windows::Forms::Label^  label稳压ZSU6;

private: System::Windows::Forms::Label^  label稳压ZSU5;

private: System::Windows::Forms::Label^  label稳压ZSU4;

private: System::Windows::Forms::Label^  label稳压ZSU3;


private: System::Windows::Forms::Label^  label稳压ZSU2;

private: System::Windows::Forms::Label^  label稳压ZSU1;

private: System::Windows::Forms::Label^  label硅管ZSU10;



















































private: System::Windows::Forms::Label^  label硅管ZSU9;

private: System::Windows::Forms::Label^  label硅管ZSU8;

private: System::Windows::Forms::Label^  label硅管ZSU7;

private: System::Windows::Forms::Label^  label硅管ZSU6;


private: System::Windows::Forms::Label^  label硅管ZSU4;

private: System::Windows::Forms::Label^  label硅管ZSU3;

private: System::Windows::Forms::Label^  label硅管ZSU2;

private: System::Windows::Forms::Label^  label硅管ZSU1;

private: System::Windows::Forms::Label^  label线性结论;

private: System::Windows::Forms::Label^  label215;
private: System::Windows::Forms::Label^  label锗管结论;

private: System::Windows::Forms::Label^  label白炽结论;
private: System::Windows::Forms::Label^  label稳压结论;


private: System::Windows::Forms::Label^  label硅管结论;


private: System::Windows::Forms::Label^  label锗管FSU10;





















private: System::Windows::Forms::Label^  label锗管FSU9;

private: System::Windows::Forms::Label^  label锗管FSU8;

private: System::Windows::Forms::Label^  label锗管FSU7;

private: System::Windows::Forms::Label^  label锗管FSU6;

private: System::Windows::Forms::Label^  label锗管FSU5;

private: System::Windows::Forms::Label^  label锗管FSU4;

private: System::Windows::Forms::Label^  label锗管FSU3;

private: System::Windows::Forms::Label^  label锗管FSU2;
private: System::Windows::Forms::Label^  label稳压FSU10;























private: System::Windows::Forms::Label^  label稳压FSU9;

private: System::Windows::Forms::Label^  label稳压FSU8;

private: System::Windows::Forms::Label^  label稳压FSU7;

private: System::Windows::Forms::Label^  label稳压FSU6;

private: System::Windows::Forms::Label^  label稳压FSU5;

private: System::Windows::Forms::Label^  label稳压FSU4;

private: System::Windows::Forms::Label^  label稳压FSU3;

private: System::Windows::Forms::Label^  label稳压FSU2;

private: System::Windows::Forms::Label^  label稳压FSU1;

private: System::Windows::Forms::Label^  label硅管FSU10;





















private: System::Windows::Forms::Label^  label硅管FSU9;

private: System::Windows::Forms::Label^  label硅管FSU8;

private: System::Windows::Forms::Label^  label硅管FSU7;

private: System::Windows::Forms::Label^  label硅管FSU6;

private: System::Windows::Forms::Label^  label硅管FSU5;

private: System::Windows::Forms::Label^  label硅管FSU4;

private: System::Windows::Forms::Label^  label硅管FSU3;

private: System::Windows::Forms::Label^  label硅管FSU2;

private: System::Windows::Forms::Label^  label硅管FSU1;

private: System::Windows::Forms::PrintDialog^  printDialog1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Button^  button5;

private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  label白炽I10;
private: System::Windows::Forms::Label^  label白炽I9;
private: System::Windows::Forms::Label^  label白炽I8;
private: System::Windows::Forms::Label^  label白炽I7;
private: System::Windows::Forms::Label^  label白炽I6;
private: System::Windows::Forms::Label^  label白炽I5;
private: System::Windows::Forms::Label^  label白炽I4;
private: System::Windows::Forms::Label^  label白炽I3;
private: System::Windows::Forms::Label^  label白炽I2;
private: System::Windows::Forms::Label^  label白炽I1;
private: System::Windows::Forms::Label^  label白炽U10;
private: System::Windows::Forms::Label^  label白炽U9;
private: System::Windows::Forms::Label^  label白炽U8;
private: System::Windows::Forms::Label^  label白炽U7;
private: System::Windows::Forms::Label^  label白炽U6;
private: System::Windows::Forms::Label^  label白炽U5;
private: System::Windows::Forms::Label^  label白炽U4;
private: System::Windows::Forms::Label^  label白炽U3;
private: System::Windows::Forms::Label^  label白炽U2;
private: System::Windows::Forms::Label^  label白炽U1;
private: System::Windows::Forms::Label^  label白炽SU10;

private: System::Windows::Forms::Label^  label白炽SU9;

private: System::Windows::Forms::Label^  label白炽SU8;

private: System::Windows::Forms::Label^  label白炽SU7;

private: System::Windows::Forms::Label^  label白炽SU6;

private: System::Windows::Forms::Label^  label白炽SU5;

private: System::Windows::Forms::Label^  label白炽SU4;

private: System::Windows::Forms::Label^  label白炽SU3;

private: System::Windows::Forms::Label^  label白炽SU2;

private: System::Windows::Forms::Label^  label白炽SU1;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label锗管ZI10;
private: System::Windows::Forms::Label^  label锗管ZI9;
private: System::Windows::Forms::Label^  label锗管ZI8;
private: System::Windows::Forms::Label^  label锗管ZI7;
private: System::Windows::Forms::Label^  label锗管ZI6;
private: System::Windows::Forms::Label^  label锗管ZI5;
private: System::Windows::Forms::Label^  label锗管ZI4;
private: System::Windows::Forms::Label^  label锗管ZI3;
private: System::Windows::Forms::Label^  label锗管ZI2;
private: System::Windows::Forms::Label^  label锗管ZI1;
private: System::Windows::Forms::Label^  label锗管ZU10;
private: System::Windows::Forms::Label^  label锗管ZU9;
private: System::Windows::Forms::Label^  label锗管ZU8;
private: System::Windows::Forms::Label^  label锗管ZU7;
private: System::Windows::Forms::Label^  label锗管ZU6;
private: System::Windows::Forms::Label^  label锗管ZU5;
private: System::Windows::Forms::Label^  label锗管ZU4;
private: System::Windows::Forms::Label^  label锗管ZU3;
private: System::Windows::Forms::Label^  label锗管ZU2;
private: System::Windows::Forms::Label^  label锗管ZU1;
private: System::Windows::Forms::Label^  label锗管FI10;
private: System::Windows::Forms::Label^  label锗管FI9;
private: System::Windows::Forms::Label^  label锗管FI8;
private: System::Windows::Forms::Label^  label锗管FI7;
private: System::Windows::Forms::Label^  label锗管FI6;
private: System::Windows::Forms::Label^  label锗管FI5;
private: System::Windows::Forms::Label^  label锗管FI4;
private: System::Windows::Forms::Label^  label锗管FI3;
private: System::Windows::Forms::Label^  label锗管FI2;
private: System::Windows::Forms::Label^  label锗管FI1;
private: System::Windows::Forms::Label^  label锗管FU10;
private: System::Windows::Forms::Label^  label锗管FU9;
private: System::Windows::Forms::Label^  label锗管FU8;
private: System::Windows::Forms::Label^  label锗管FU7;
private: System::Windows::Forms::Label^  label锗管FU6;
private: System::Windows::Forms::Label^  label锗管FU5;
private: System::Windows::Forms::Label^  label锗管FU4;
private: System::Windows::Forms::Label^  label锗管FU3;
private: System::Windows::Forms::Label^  label锗管FU2;
private: System::Windows::Forms::Label^  label锗管FU1;
private: System::Windows::Forms::Label^  label硅管ZI10;
private: System::Windows::Forms::Label^  label硅管ZI9;
private: System::Windows::Forms::Label^  label硅管ZI8;
private: System::Windows::Forms::Label^  label硅管ZI7;
private: System::Windows::Forms::Label^  label硅管ZI6;
private: System::Windows::Forms::Label^  label硅管ZI5;
private: System::Windows::Forms::Label^  label硅管ZI4;
private: System::Windows::Forms::Label^  label硅管ZI3;
private: System::Windows::Forms::Label^  label硅管ZI2;
private: System::Windows::Forms::Label^  label硅管ZI1;
private: System::Windows::Forms::Label^  label硅管ZU10;
private: System::Windows::Forms::Label^  label硅管ZU9;
private: System::Windows::Forms::Label^  label硅管ZU8;
private: System::Windows::Forms::Label^  label硅管ZU7;
private: System::Windows::Forms::Label^  label硅管ZU6;
private: System::Windows::Forms::Label^  label硅管ZU5;
private: System::Windows::Forms::Label^  label硅管ZU4;
private: System::Windows::Forms::Label^  label硅管ZU3;
private: System::Windows::Forms::Label^  label硅管ZU2;
private: System::Windows::Forms::Label^  label硅管ZU1;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label1硅管FI10;
private: System::Windows::Forms::Label^  label1硅管FI9;
private: System::Windows::Forms::Label^  label1硅管FI8;
private: System::Windows::Forms::Label^  label1硅管FI7;
private: System::Windows::Forms::Label^  label1硅管FI6;
private: System::Windows::Forms::Label^  label1硅管FI5;
private: System::Windows::Forms::Label^  label1硅管FI4;
private: System::Windows::Forms::Label^  label1硅管FI3;
private: System::Windows::Forms::Label^  label1硅管FI2;
private: System::Windows::Forms::Label^  label1硅管FI1;
private: System::Windows::Forms::Label^  label1硅管FU10;
private: System::Windows::Forms::Label^  label1硅管FU9;
private: System::Windows::Forms::Label^  label1硅管FU8;
private: System::Windows::Forms::Label^  label1硅管FU7;
private: System::Windows::Forms::Label^  label1硅管FU6;
private: System::Windows::Forms::Label^  label1硅管FU5;
private: System::Windows::Forms::Label^  label1硅管FU4;
private: System::Windows::Forms::Label^  label1硅管FU3;
private: System::Windows::Forms::Label^  label1硅管FU2;
private: System::Windows::Forms::Label^  label1硅管FU1;
private: System::Windows::Forms::Label^  label稳压ZI10;
private: System::Windows::Forms::Label^  label稳压ZI9;
private: System::Windows::Forms::Label^  label稳压ZI8;
private: System::Windows::Forms::Label^  label稳压ZI7;
private: System::Windows::Forms::Label^  label稳压ZI6;
private: System::Windows::Forms::Label^  label稳压ZI5;
private: System::Windows::Forms::Label^  label稳压ZI4;
private: System::Windows::Forms::Label^  label稳压ZI3;
private: System::Windows::Forms::Label^  label稳压ZI2;
private: System::Windows::Forms::Label^  label稳压ZI1;
private: System::Windows::Forms::Label^  label稳压ZU10;
private: System::Windows::Forms::Label^  label稳压ZU9;
private: System::Windows::Forms::Label^  label稳压ZU8;
private: System::Windows::Forms::Label^  label稳压ZU7;
private: System::Windows::Forms::Label^  label稳压ZU6;
private: System::Windows::Forms::Label^  label稳压ZU5;
private: System::Windows::Forms::Label^  label稳压ZU4;
private: System::Windows::Forms::Label^  label稳压ZU3;
private: System::Windows::Forms::Label^  label稳压ZU2;
private: System::Windows::Forms::Label^  label稳压ZU1;
private: System::Windows::Forms::Label^  label32;










private: System::Windows::Forms::Label^  label稳压FI10;
private: System::Windows::Forms::Label^  label稳压FI9;
private: System::Windows::Forms::Label^  label稳压FI8;
private: System::Windows::Forms::Label^  label稳压FI7;
private: System::Windows::Forms::Label^  label稳压FI6;
private: System::Windows::Forms::Label^  label稳压FI5;
private: System::Windows::Forms::Label^  label稳压FI4;
private: System::Windows::Forms::Label^  label稳压FI3;
private: System::Windows::Forms::Label^  label稳压FI2;
private: System::Windows::Forms::Label^  label稳压FI1;
private: System::Windows::Forms::Label^  label稳压FU10;
private: System::Windows::Forms::Label^  label稳压FU9;
private: System::Windows::Forms::Label^  label稳压FU8;
private: System::Windows::Forms::Label^  label稳压FU7;
private: System::Windows::Forms::Label^  label稳压FU6;
private: System::Windows::Forms::Label^  label稳压FU5;
private: System::Windows::Forms::Label^  label稳压FU4;
private: System::Windows::Forms::Label^  label稳压FU3;
private: System::Windows::Forms::Label^  label稳压FU2;
private: System::Windows::Forms::Label^  label稳压FU1;
private: System::Windows::Forms::Label^  label锗管FSU1;
private: System::Windows::Forms::Label^  label硅管ZSU5;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Button^  button250;










































































	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(元件伏安特性的测试实验报告::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label线性结论 = (gcnew System::Windows::Forms::Label());
			this->label线性I10 = (gcnew System::Windows::Forms::Label());
			this->label线性I9 = (gcnew System::Windows::Forms::Label());
			this->label线性I8 = (gcnew System::Windows::Forms::Label());
			this->label线性I7 = (gcnew System::Windows::Forms::Label());
			this->label线性I6 = (gcnew System::Windows::Forms::Label());
			this->label线性I5 = (gcnew System::Windows::Forms::Label());
			this->label线性I4 = (gcnew System::Windows::Forms::Label());
			this->label线性I3 = (gcnew System::Windows::Forms::Label());
			this->label线性I2 = (gcnew System::Windows::Forms::Label());
			this->label线性I1 = (gcnew System::Windows::Forms::Label());
			this->label线性U10 = (gcnew System::Windows::Forms::Label());
			this->label线性U9 = (gcnew System::Windows::Forms::Label());
			this->label线性U8 = (gcnew System::Windows::Forms::Label());
			this->label线性U7 = (gcnew System::Windows::Forms::Label());
			this->label线性U6 = (gcnew System::Windows::Forms::Label());
			this->label线性U5 = (gcnew System::Windows::Forms::Label());
			this->label线性U4 = (gcnew System::Windows::Forms::Label());
			this->label线性U3 = (gcnew System::Windows::Forms::Label());
			this->label线性U2 = (gcnew System::Windows::Forms::Label());
			this->label线性U1 = (gcnew System::Windows::Forms::Label());
			this->label线性SU10 = (gcnew System::Windows::Forms::Label());
			this->label线性SU9 = (gcnew System::Windows::Forms::Label());
			this->label线性SU8 = (gcnew System::Windows::Forms::Label());
			this->label线性SU7 = (gcnew System::Windows::Forms::Label());
			this->label线性SU6 = (gcnew System::Windows::Forms::Label());
			this->label线性SU5 = (gcnew System::Windows::Forms::Label());
			this->label线性SU4 = (gcnew System::Windows::Forms::Label());
			this->label线性SU3 = (gcnew System::Windows::Forms::Label());
			this->label线性SU2 = (gcnew System::Windows::Forms::Label());
			this->label线性SU1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->chart线性 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart锗管 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label锗管ZI10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI1 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU1 = (gcnew System::Windows::Forms::Label());
			this->label锗管结论 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->chart白炽 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label白炽I10 = (gcnew System::Windows::Forms::Label());
			this->label白炽I9 = (gcnew System::Windows::Forms::Label());
			this->label白炽I8 = (gcnew System::Windows::Forms::Label());
			this->label白炽I7 = (gcnew System::Windows::Forms::Label());
			this->label白炽I6 = (gcnew System::Windows::Forms::Label());
			this->label白炽I5 = (gcnew System::Windows::Forms::Label());
			this->label白炽I4 = (gcnew System::Windows::Forms::Label());
			this->label白炽I3 = (gcnew System::Windows::Forms::Label());
			this->label白炽I2 = (gcnew System::Windows::Forms::Label());
			this->label白炽I1 = (gcnew System::Windows::Forms::Label());
			this->label白炽U10 = (gcnew System::Windows::Forms::Label());
			this->label白炽U9 = (gcnew System::Windows::Forms::Label());
			this->label白炽U8 = (gcnew System::Windows::Forms::Label());
			this->label白炽U7 = (gcnew System::Windows::Forms::Label());
			this->label白炽U6 = (gcnew System::Windows::Forms::Label());
			this->label白炽U5 = (gcnew System::Windows::Forms::Label());
			this->label白炽U4 = (gcnew System::Windows::Forms::Label());
			this->label白炽U3 = (gcnew System::Windows::Forms::Label());
			this->label白炽U2 = (gcnew System::Windows::Forms::Label());
			this->label白炽U1 = (gcnew System::Windows::Forms::Label());
			this->label白炽结论 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU10 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU9 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU8 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU7 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU6 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU5 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU4 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU3 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU2 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label稳压FI10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI1 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU1 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI1 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU1 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU1 = (gcnew System::Windows::Forms::Label());
			this->label稳压结论 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->chart稳压 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart硅管 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label1硅管FI10 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI9 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI8 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI7 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI6 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI5 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI4 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI3 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI2 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI1 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU10 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU9 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU8 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU7 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU6 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU5 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU4 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU3 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU2 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU1 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI1 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU1 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU1 = (gcnew System::Windows::Forms::Label());
			this->label硅管结论 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->button250 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart线性))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart锗管))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart白炽))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart稳压))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart硅管))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"实验名称";
			this->label1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(8, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"姓名";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(8, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"姓名";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(67, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 28);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(67, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 28);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(284, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 28);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(284, 49);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 28);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(231, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"学号";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(231, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"学号";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(708, 52);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(184, 28);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(651, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"专业";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(924, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"实验室";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1023, 46);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(184, 28);
			this->textBox7->TabIndex = 13;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1023, 88);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(184, 28);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(924, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"指导老师";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1289, 88);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(200, 28);
			this->textBox9->TabIndex = 19;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(1232, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"时间";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(1289, 46);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(200, 28);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(1232, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"编号";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label线性结论);
			this->groupBox1->Controls->Add(this->label线性I10);
			this->groupBox1->Controls->Add(this->label线性I9);
			this->groupBox1->Controls->Add(this->label线性I8);
			this->groupBox1->Controls->Add(this->label线性I7);
			this->groupBox1->Controls->Add(this->label线性I6);
			this->groupBox1->Controls->Add(this->label线性I5);
			this->groupBox1->Controls->Add(this->label线性I4);
			this->groupBox1->Controls->Add(this->label线性I3);
			this->groupBox1->Controls->Add(this->label线性I2);
			this->groupBox1->Controls->Add(this->label线性I1);
			this->groupBox1->Controls->Add(this->label线性U10);
			this->groupBox1->Controls->Add(this->label线性U9);
			this->groupBox1->Controls->Add(this->label线性U8);
			this->groupBox1->Controls->Add(this->label线性U7);
			this->groupBox1->Controls->Add(this->label线性U6);
			this->groupBox1->Controls->Add(this->label线性U5);
			this->groupBox1->Controls->Add(this->label线性U4);
			this->groupBox1->Controls->Add(this->label线性U3);
			this->groupBox1->Controls->Add(this->label线性U2);
			this->groupBox1->Controls->Add(this->label线性U1);
			this->groupBox1->Controls->Add(this->label线性SU10);
			this->groupBox1->Controls->Add(this->label线性SU9);
			this->groupBox1->Controls->Add(this->label线性SU8);
			this->groupBox1->Controls->Add(this->label线性SU7);
			this->groupBox1->Controls->Add(this->label线性SU6);
			this->groupBox1->Controls->Add(this->label线性SU5);
			this->groupBox1->Controls->Add(this->label线性SU4);
			this->groupBox1->Controls->Add(this->label线性SU3);
			this->groupBox1->Controls->Add(this->label线性SU2);
			this->groupBox1->Controls->Add(this->label线性SU1);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 149);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(879, 226);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"测定线性电阻器的伏安特性";
			// 
			// label线性结论
			// 
			this->label线性结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性结论->Location = System::Drawing::Point(193, 43);
			this->label线性结论->Name = L"label线性结论";
			this->label线性结论->Size = System::Drawing::Size(672, 23);
			this->label线性结论->TabIndex = 90;
			this->label线性结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I10
			// 
			this->label线性I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I10->Location = System::Drawing::Point(803, 175);
			this->label线性I10->Name = L"label线性I10";
			this->label线性I10->Size = System::Drawing::Size(62, 23);
			this->label线性I10->TabIndex = 89;
			this->label线性I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I9
			// 
			this->label线性I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I9->Location = System::Drawing::Point(735, 175);
			this->label线性I9->Name = L"label线性I9";
			this->label线性I9->Size = System::Drawing::Size(62, 23);
			this->label线性I9->TabIndex = 88;
			this->label线性I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I8
			// 
			this->label线性I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I8->Location = System::Drawing::Point(667, 175);
			this->label线性I8->Name = L"label线性I8";
			this->label线性I8->Size = System::Drawing::Size(62, 23);
			this->label线性I8->TabIndex = 87;
			this->label线性I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I7
			// 
			this->label线性I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I7->Location = System::Drawing::Point(599, 176);
			this->label线性I7->Name = L"label线性I7";
			this->label线性I7->Size = System::Drawing::Size(62, 23);
			this->label线性I7->TabIndex = 86;
			this->label线性I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I6
			// 
			this->label线性I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I6->Location = System::Drawing::Point(531, 175);
			this->label线性I6->Name = L"label线性I6";
			this->label线性I6->Size = System::Drawing::Size(62, 23);
			this->label线性I6->TabIndex = 85;
			this->label线性I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I5
			// 
			this->label线性I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I5->Location = System::Drawing::Point(463, 175);
			this->label线性I5->Name = L"label线性I5";
			this->label线性I5->Size = System::Drawing::Size(62, 23);
			this->label线性I5->TabIndex = 84;
			this->label线性I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I4
			// 
			this->label线性I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I4->Location = System::Drawing::Point(395, 175);
			this->label线性I4->Name = L"label线性I4";
			this->label线性I4->Size = System::Drawing::Size(62, 23);
			this->label线性I4->TabIndex = 83;
			this->label线性I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I3
			// 
			this->label线性I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I3->Location = System::Drawing::Point(327, 176);
			this->label线性I3->Name = L"label线性I3";
			this->label线性I3->Size = System::Drawing::Size(62, 23);
			this->label线性I3->TabIndex = 82;
			this->label线性I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I2
			// 
			this->label线性I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I2->Location = System::Drawing::Point(259, 176);
			this->label线性I2->Name = L"label线性I2";
			this->label线性I2->Size = System::Drawing::Size(62, 23);
			this->label线性I2->TabIndex = 81;
			this->label线性I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I1
			// 
			this->label线性I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I1->Location = System::Drawing::Point(193, 176);
			this->label线性I1->Name = L"label线性I1";
			this->label线性I1->Size = System::Drawing::Size(62, 23);
			this->label线性I1->TabIndex = 80;
			this->label线性I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U10
			// 
			this->label线性U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U10->Location = System::Drawing::Point(803, 129);
			this->label线性U10->Name = L"label线性U10";
			this->label线性U10->Size = System::Drawing::Size(62, 23);
			this->label线性U10->TabIndex = 79;
			this->label线性U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U9
			// 
			this->label线性U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U9->Location = System::Drawing::Point(735, 129);
			this->label线性U9->Name = L"label线性U9";
			this->label线性U9->Size = System::Drawing::Size(62, 23);
			this->label线性U9->TabIndex = 78;
			this->label线性U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U8
			// 
			this->label线性U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U8->Location = System::Drawing::Point(667, 129);
			this->label线性U8->Name = L"label线性U8";
			this->label线性U8->Size = System::Drawing::Size(62, 23);
			this->label线性U8->TabIndex = 77;
			this->label线性U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U7
			// 
			this->label线性U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U7->Location = System::Drawing::Point(599, 130);
			this->label线性U7->Name = L"label线性U7";
			this->label线性U7->Size = System::Drawing::Size(62, 23);
			this->label线性U7->TabIndex = 76;
			this->label线性U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U6
			// 
			this->label线性U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U6->Location = System::Drawing::Point(531, 129);
			this->label线性U6->Name = L"label线性U6";
			this->label线性U6->Size = System::Drawing::Size(62, 23);
			this->label线性U6->TabIndex = 75;
			this->label线性U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U5
			// 
			this->label线性U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U5->Location = System::Drawing::Point(463, 129);
			this->label线性U5->Name = L"label线性U5";
			this->label线性U5->Size = System::Drawing::Size(62, 23);
			this->label线性U5->TabIndex = 74;
			this->label线性U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U4
			// 
			this->label线性U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U4->Location = System::Drawing::Point(395, 129);
			this->label线性U4->Name = L"label线性U4";
			this->label线性U4->Size = System::Drawing::Size(62, 23);
			this->label线性U4->TabIndex = 73;
			this->label线性U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U3
			// 
			this->label线性U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U3->Location = System::Drawing::Point(327, 130);
			this->label线性U3->Name = L"label线性U3";
			this->label线性U3->Size = System::Drawing::Size(62, 23);
			this->label线性U3->TabIndex = 72;
			this->label线性U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U2
			// 
			this->label线性U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U2->Location = System::Drawing::Point(259, 130);
			this->label线性U2->Name = L"label线性U2";
			this->label线性U2->Size = System::Drawing::Size(62, 23);
			this->label线性U2->TabIndex = 71;
			this->label线性U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U1
			// 
			this->label线性U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U1->Location = System::Drawing::Point(193, 130);
			this->label线性U1->Name = L"label线性U1";
			this->label线性U1->Size = System::Drawing::Size(62, 23);
			this->label线性U1->TabIndex = 70;
			this->label线性U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU10
			// 
			this->label线性SU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU10->Location = System::Drawing::Point(803, 83);
			this->label线性SU10->Name = L"label线性SU10";
			this->label线性SU10->Size = System::Drawing::Size(62, 23);
			this->label线性SU10->TabIndex = 69;
			this->label线性SU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU9
			// 
			this->label线性SU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU9->Location = System::Drawing::Point(735, 83);
			this->label线性SU9->Name = L"label线性SU9";
			this->label线性SU9->Size = System::Drawing::Size(62, 23);
			this->label线性SU9->TabIndex = 68;
			this->label线性SU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU8
			// 
			this->label线性SU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU8->Location = System::Drawing::Point(667, 83);
			this->label线性SU8->Name = L"label线性SU8";
			this->label线性SU8->Size = System::Drawing::Size(62, 23);
			this->label线性SU8->TabIndex = 67;
			this->label线性SU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU7
			// 
			this->label线性SU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU7->Location = System::Drawing::Point(599, 84);
			this->label线性SU7->Name = L"label线性SU7";
			this->label线性SU7->Size = System::Drawing::Size(62, 23);
			this->label线性SU7->TabIndex = 66;
			this->label线性SU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU6
			// 
			this->label线性SU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU6->Location = System::Drawing::Point(531, 83);
			this->label线性SU6->Name = L"label线性SU6";
			this->label线性SU6->Size = System::Drawing::Size(62, 23);
			this->label线性SU6->TabIndex = 65;
			this->label线性SU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU5
			// 
			this->label线性SU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU5->Location = System::Drawing::Point(463, 83);
			this->label线性SU5->Name = L"label线性SU5";
			this->label线性SU5->Size = System::Drawing::Size(62, 23);
			this->label线性SU5->TabIndex = 64;
			this->label线性SU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU4
			// 
			this->label线性SU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU4->Location = System::Drawing::Point(395, 83);
			this->label线性SU4->Name = L"label线性SU4";
			this->label线性SU4->Size = System::Drawing::Size(62, 23);
			this->label线性SU4->TabIndex = 63;
			this->label线性SU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU3
			// 
			this->label线性SU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU3->Location = System::Drawing::Point(327, 84);
			this->label线性SU3->Name = L"label线性SU3";
			this->label线性SU3->Size = System::Drawing::Size(62, 23);
			this->label线性SU3->TabIndex = 62;
			this->label线性SU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU2
			// 
			this->label线性SU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU2->Location = System::Drawing::Point(259, 84);
			this->label线性SU2->Name = L"label线性SU2";
			this->label线性SU2->Size = System::Drawing::Size(62, 23);
			this->label线性SU2->TabIndex = 61;
			this->label线性SU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU1
			// 
			this->label线性SU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU1->Location = System::Drawing::Point(193, 84);
			this->label线性SU1->Name = L"label线性SU1";
			this->label线性SU1->Size = System::Drawing::Size(62, 23);
			this->label线性SU1->TabIndex = 60;
			this->label线性SU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(8, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(95, 23);
			this->label14->TabIndex = 58;
			this->label14->Text = L"实验结论";
			// 
			// label11
			// 
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(8, 175);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(176, 23);
			this->label11->TabIndex = 7;
			this->label11->Text = L"电流表读数I(mA)";
			// 
			// label12
			// 
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(6, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 23);
			this->label12->TabIndex = 6;
			this->label12->Text = L"电压表读数Ur(V)";
			// 
			// label13
			// 
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(8, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 23);
			this->label13->TabIndex = 5;
			this->label13->Text = L"电源电压U(V)";
			// 
			// chart线性
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart线性->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart线性->Legends->Add(legend1);
			this->chart线性->Location = System::Drawing::Point(903, 149);
			this->chart线性->Name = L"chart线性";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart线性->Series->Add(series1);
			this->chart线性->Size = System::Drawing::Size(300, 226);
			this->chart线性->TabIndex = 21;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1580, 1102);
			this->tabControl1->TabIndex = 63;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage1->Controls->Add(this->button250);
			this->tabPage1->Controls->Add(this->label27);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label215);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->chart锗管);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->chart白炽);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->chart线性);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1572, 1068);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"元件伏安特性测试实验报告第1页";
			this->tabPage1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::tabPage1_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(427, 54);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(51, 20);
			this->label27->TabIndex = 78;
			this->label27->Text = L"班级";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(427, 84);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(51, 20);
			this->label28->TabIndex = 79;
			this->label28->Text = L"班级";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(480, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 28);
			this->textBox1->TabIndex = 80;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(480, 85);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(134, 28);
			this->textBox11->TabIndex = 81;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 935);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 32);
			this->button5->TabIndex = 77;
			this->button5->Text = L"打印选项";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::button5_Click);
			// 
			// label215
			// 
			this->label215->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label215->Location = System::Drawing::Point(113, 11);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(199, 23);
			this->label215->TabIndex = 76;
			this->label215->Text = L"元件伏安特性的测试";
			this->label215->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(235, 935);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 32);
			this->button3->TabIndex = 75;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(138, 935);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 32);
			this->button4->TabIndex = 74;
			this->button4->Text = L"预览";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::button4_Click);
			// 
			// chart锗管
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart锗管->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart锗管->Legends->Add(legend2);
			this->chart锗管->Location = System::Drawing::Point(1219, 395);
			this->chart锗管->Name = L"chart锗管";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart锗管->Series->Add(series2);
			this->chart锗管->Size = System::Drawing::Size(300, 226);
			this->chart锗管->TabIndex = 65;
			this->chart锗管->Text = L"chart3";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label锗管ZI10);
			this->groupBox3->Controls->Add(this->label锗管ZI9);
			this->groupBox3->Controls->Add(this->label锗管ZI8);
			this->groupBox3->Controls->Add(this->label锗管ZI7);
			this->groupBox3->Controls->Add(this->label锗管ZI6);
			this->groupBox3->Controls->Add(this->label锗管ZI5);
			this->groupBox3->Controls->Add(this->label锗管ZI4);
			this->groupBox3->Controls->Add(this->label锗管ZI3);
			this->groupBox3->Controls->Add(this->label锗管ZI2);
			this->groupBox3->Controls->Add(this->label锗管ZI1);
			this->groupBox3->Controls->Add(this->label锗管FI10);
			this->groupBox3->Controls->Add(this->label锗管ZU10);
			this->groupBox3->Controls->Add(this->label锗管FI9);
			this->groupBox3->Controls->Add(this->label锗管ZU9);
			this->groupBox3->Controls->Add(this->label锗管FI8);
			this->groupBox3->Controls->Add(this->label锗管ZU8);
			this->groupBox3->Controls->Add(this->label锗管FI7);
			this->groupBox3->Controls->Add(this->label锗管ZU7);
			this->groupBox3->Controls->Add(this->label锗管FI6);
			this->groupBox3->Controls->Add(this->label锗管ZU6);
			this->groupBox3->Controls->Add(this->label锗管FI5);
			this->groupBox3->Controls->Add(this->label锗管ZU5);
			this->groupBox3->Controls->Add(this->label锗管FI4);
			this->groupBox3->Controls->Add(this->label锗管ZU4);
			this->groupBox3->Controls->Add(this->label锗管FI3);
			this->groupBox3->Controls->Add(this->label锗管ZU3);
			this->groupBox3->Controls->Add(this->label锗管FI2);
			this->groupBox3->Controls->Add(this->label锗管ZU2);
			this->groupBox3->Controls->Add(this->label锗管FI1);
			this->groupBox3->Controls->Add(this->label锗管ZU1);
			this->groupBox3->Controls->Add(this->label锗管FU10);
			this->groupBox3->Controls->Add(this->label锗管FSU10);
			this->groupBox3->Controls->Add(this->label锗管FU9);
			this->groupBox3->Controls->Add(this->label锗管FSU9);
			this->groupBox3->Controls->Add(this->label锗管FU8);
			this->groupBox3->Controls->Add(this->label锗管FSU8);
			this->groupBox3->Controls->Add(this->label锗管FU7);
			this->groupBox3->Controls->Add(this->label锗管FSU7);
			this->groupBox3->Controls->Add(this->label锗管FU6);
			this->groupBox3->Controls->Add(this->label锗管FSU6);
			this->groupBox3->Controls->Add(this->label锗管FU5);
			this->groupBox3->Controls->Add(this->label锗管FSU5);
			this->groupBox3->Controls->Add(this->label锗管FU4);
			this->groupBox3->Controls->Add(this->label锗管FSU4);
			this->groupBox3->Controls->Add(this->label锗管FU3);
			this->groupBox3->Controls->Add(this->label锗管FSU3);
			this->groupBox3->Controls->Add(this->label锗管FU2);
			this->groupBox3->Controls->Add(this->label锗管FSU2);
			this->groupBox3->Controls->Add(this->label锗管FU1);
			this->groupBox3->Controls->Add(this->label锗管FSU1);
			this->groupBox3->Controls->Add(this->label锗管结论);
			this->groupBox3->Controls->Add(this->label锗管ZSU10);
			this->groupBox3->Controls->Add(this->label锗管ZSU9);
			this->groupBox3->Controls->Add(this->label锗管ZSU8);
			this->groupBox3->Controls->Add(this->label锗管ZSU7);
			this->groupBox3->Controls->Add(this->label锗管ZSU6);
			this->groupBox3->Controls->Add(this->label锗管ZSU5);
			this->groupBox3->Controls->Add(this->label锗管ZSU4);
			this->groupBox3->Controls->Add(this->label锗管ZSU3);
			this->groupBox3->Controls->Add(this->label锗管ZSU2);
			this->groupBox3->Controls->Add(this->label锗管ZSU1);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 649);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1543, 217);
			this->groupBox3->TabIndex = 64;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"测定半导体的伏安特性-锗管2AP9";
			// 
			// label锗管ZI10
			// 
			this->label锗管ZI10->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label锗管ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI10->Location = System::Drawing::Point(795, 172);
			this->label锗管ZI10->Name = L"label锗管ZI10";
			this->label锗管ZI10->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI10->TabIndex = 141;
			this->label锗管ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI9
			// 
			this->label锗管ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI9->Location = System::Drawing::Point(727, 172);
			this->label锗管ZI9->Name = L"label锗管ZI9";
			this->label锗管ZI9->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI9->TabIndex = 140;
			this->label锗管ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI8
			// 
			this->label锗管ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI8->Location = System::Drawing::Point(659, 172);
			this->label锗管ZI8->Name = L"label锗管ZI8";
			this->label锗管ZI8->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI8->TabIndex = 139;
			this->label锗管ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI7
			// 
			this->label锗管ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI7->Location = System::Drawing::Point(591, 173);
			this->label锗管ZI7->Name = L"label锗管ZI7";
			this->label锗管ZI7->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI7->TabIndex = 138;
			this->label锗管ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI6
			// 
			this->label锗管ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI6->Location = System::Drawing::Point(523, 172);
			this->label锗管ZI6->Name = L"label锗管ZI6";
			this->label锗管ZI6->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI6->TabIndex = 137;
			this->label锗管ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI5
			// 
			this->label锗管ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI5->Location = System::Drawing::Point(455, 172);
			this->label锗管ZI5->Name = L"label锗管ZI5";
			this->label锗管ZI5->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI5->TabIndex = 136;
			this->label锗管ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI4
			// 
			this->label锗管ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI4->Location = System::Drawing::Point(387, 172);
			this->label锗管ZI4->Name = L"label锗管ZI4";
			this->label锗管ZI4->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI4->TabIndex = 135;
			this->label锗管ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI3
			// 
			this->label锗管ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI3->Location = System::Drawing::Point(319, 173);
			this->label锗管ZI3->Name = L"label锗管ZI3";
			this->label锗管ZI3->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI3->TabIndex = 134;
			this->label锗管ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI2
			// 
			this->label锗管ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI2->Location = System::Drawing::Point(251, 173);
			this->label锗管ZI2->Name = L"label锗管ZI2";
			this->label锗管ZI2->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI2->TabIndex = 133;
			this->label锗管ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI1
			// 
			this->label锗管ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI1->Location = System::Drawing::Point(185, 173);
			this->label锗管ZI1->Name = L"label锗管ZI1";
			this->label锗管ZI1->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI1->TabIndex = 132;
			this->label锗管ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI10
			// 
			this->label锗管FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI10->Location = System::Drawing::Point(1473, 172);
			this->label锗管FI10->Name = L"label锗管FI10";
			this->label锗管FI10->Size = System::Drawing::Size(62, 23);
			this->label锗管FI10->TabIndex = 98;
			this->label锗管FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU10
			// 
			this->label锗管ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU10->Location = System::Drawing::Point(795, 130);
			this->label锗管ZU10->Name = L"label锗管ZU10";
			this->label锗管ZU10->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU10->TabIndex = 131;
			this->label锗管ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI9
			// 
			this->label锗管FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI9->Location = System::Drawing::Point(1405, 172);
			this->label锗管FI9->Name = L"label锗管FI9";
			this->label锗管FI9->Size = System::Drawing::Size(62, 23);
			this->label锗管FI9->TabIndex = 97;
			this->label锗管FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU9
			// 
			this->label锗管ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU9->Location = System::Drawing::Point(727, 130);
			this->label锗管ZU9->Name = L"label锗管ZU9";
			this->label锗管ZU9->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU9->TabIndex = 130;
			this->label锗管ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI8
			// 
			this->label锗管FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI8->Location = System::Drawing::Point(1337, 172);
			this->label锗管FI8->Name = L"label锗管FI8";
			this->label锗管FI8->Size = System::Drawing::Size(62, 23);
			this->label锗管FI8->TabIndex = 96;
			this->label锗管FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU8
			// 
			this->label锗管ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU8->Location = System::Drawing::Point(659, 130);
			this->label锗管ZU8->Name = L"label锗管ZU8";
			this->label锗管ZU8->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU8->TabIndex = 129;
			this->label锗管ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI7
			// 
			this->label锗管FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI7->Location = System::Drawing::Point(1269, 173);
			this->label锗管FI7->Name = L"label锗管FI7";
			this->label锗管FI7->Size = System::Drawing::Size(62, 23);
			this->label锗管FI7->TabIndex = 95;
			this->label锗管FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU7
			// 
			this->label锗管ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU7->Location = System::Drawing::Point(591, 131);
			this->label锗管ZU7->Name = L"label锗管ZU7";
			this->label锗管ZU7->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU7->TabIndex = 128;
			this->label锗管ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI6
			// 
			this->label锗管FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI6->Location = System::Drawing::Point(1201, 172);
			this->label锗管FI6->Name = L"label锗管FI6";
			this->label锗管FI6->Size = System::Drawing::Size(62, 23);
			this->label锗管FI6->TabIndex = 94;
			this->label锗管FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU6
			// 
			this->label锗管ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU6->Location = System::Drawing::Point(523, 130);
			this->label锗管ZU6->Name = L"label锗管ZU6";
			this->label锗管ZU6->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU6->TabIndex = 127;
			this->label锗管ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI5
			// 
			this->label锗管FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI5->Location = System::Drawing::Point(1133, 172);
			this->label锗管FI5->Name = L"label锗管FI5";
			this->label锗管FI5->Size = System::Drawing::Size(62, 23);
			this->label锗管FI5->TabIndex = 93;
			this->label锗管FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU5
			// 
			this->label锗管ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU5->Location = System::Drawing::Point(455, 130);
			this->label锗管ZU5->Name = L"label锗管ZU5";
			this->label锗管ZU5->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU5->TabIndex = 126;
			this->label锗管ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI4
			// 
			this->label锗管FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI4->Location = System::Drawing::Point(1065, 172);
			this->label锗管FI4->Name = L"label锗管FI4";
			this->label锗管FI4->Size = System::Drawing::Size(62, 23);
			this->label锗管FI4->TabIndex = 92;
			this->label锗管FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU4
			// 
			this->label锗管ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU4->Location = System::Drawing::Point(387, 130);
			this->label锗管ZU4->Name = L"label锗管ZU4";
			this->label锗管ZU4->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU4->TabIndex = 125;
			this->label锗管ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI3
			// 
			this->label锗管FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI3->Location = System::Drawing::Point(997, 173);
			this->label锗管FI3->Name = L"label锗管FI3";
			this->label锗管FI3->Size = System::Drawing::Size(62, 23);
			this->label锗管FI3->TabIndex = 91;
			this->label锗管FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU3
			// 
			this->label锗管ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU3->Location = System::Drawing::Point(319, 131);
			this->label锗管ZU3->Name = L"label锗管ZU3";
			this->label锗管ZU3->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU3->TabIndex = 124;
			this->label锗管ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI2
			// 
			this->label锗管FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI2->Location = System::Drawing::Point(929, 173);
			this->label锗管FI2->Name = L"label锗管FI2";
			this->label锗管FI2->Size = System::Drawing::Size(62, 23);
			this->label锗管FI2->TabIndex = 90;
			this->label锗管FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU2
			// 
			this->label锗管ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU2->Location = System::Drawing::Point(251, 131);
			this->label锗管ZU2->Name = L"label锗管ZU2";
			this->label锗管ZU2->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU2->TabIndex = 123;
			this->label锗管ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI1
			// 
			this->label锗管FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI1->Location = System::Drawing::Point(863, 173);
			this->label锗管FI1->Name = L"label锗管FI1";
			this->label锗管FI1->Size = System::Drawing::Size(62, 23);
			this->label锗管FI1->TabIndex = 89;
			this->label锗管FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU1
			// 
			this->label锗管ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU1->Location = System::Drawing::Point(185, 131);
			this->label锗管ZU1->Name = L"label锗管ZU1";
			this->label锗管ZU1->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU1->TabIndex = 122;
			this->label锗管ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU10
			// 
			this->label锗管FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU10->Location = System::Drawing::Point(1473, 129);
			this->label锗管FU10->Name = L"label锗管FU10";
			this->label锗管FU10->Size = System::Drawing::Size(62, 23);
			this->label锗管FU10->TabIndex = 88;
			this->label锗管FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU10
			// 
			this->label锗管FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU10->Location = System::Drawing::Point(1473, 83);
			this->label锗管FSU10->Name = L"label锗管FSU10";
			this->label锗管FSU10->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU10->TabIndex = 101;
			this->label锗管FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU9
			// 
			this->label锗管FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU9->Location = System::Drawing::Point(1405, 129);
			this->label锗管FU9->Name = L"label锗管FU9";
			this->label锗管FU9->Size = System::Drawing::Size(62, 23);
			this->label锗管FU9->TabIndex = 87;
			this->label锗管FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU9
			// 
			this->label锗管FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU9->Location = System::Drawing::Point(1405, 83);
			this->label锗管FSU9->Name = L"label锗管FSU9";
			this->label锗管FSU9->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU9->TabIndex = 100;
			this->label锗管FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU8
			// 
			this->label锗管FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU8->Location = System::Drawing::Point(1337, 129);
			this->label锗管FU8->Name = L"label锗管FU8";
			this->label锗管FU8->Size = System::Drawing::Size(62, 23);
			this->label锗管FU8->TabIndex = 86;
			this->label锗管FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU8
			// 
			this->label锗管FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU8->Location = System::Drawing::Point(1337, 83);
			this->label锗管FSU8->Name = L"label锗管FSU8";
			this->label锗管FSU8->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU8->TabIndex = 99;
			this->label锗管FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU7
			// 
			this->label锗管FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU7->Location = System::Drawing::Point(1269, 130);
			this->label锗管FU7->Name = L"label锗管FU7";
			this->label锗管FU7->Size = System::Drawing::Size(62, 23);
			this->label锗管FU7->TabIndex = 85;
			this->label锗管FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU7
			// 
			this->label锗管FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU7->Location = System::Drawing::Point(1269, 84);
			this->label锗管FSU7->Name = L"label锗管FSU7";
			this->label锗管FSU7->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU7->TabIndex = 98;
			this->label锗管FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU6
			// 
			this->label锗管FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU6->Location = System::Drawing::Point(1201, 129);
			this->label锗管FU6->Name = L"label锗管FU6";
			this->label锗管FU6->Size = System::Drawing::Size(62, 23);
			this->label锗管FU6->TabIndex = 84;
			this->label锗管FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU6
			// 
			this->label锗管FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU6->Location = System::Drawing::Point(1201, 83);
			this->label锗管FSU6->Name = L"label锗管FSU6";
			this->label锗管FSU6->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU6->TabIndex = 97;
			this->label锗管FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU5
			// 
			this->label锗管FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU5->Location = System::Drawing::Point(1133, 129);
			this->label锗管FU5->Name = L"label锗管FU5";
			this->label锗管FU5->Size = System::Drawing::Size(62, 23);
			this->label锗管FU5->TabIndex = 83;
			this->label锗管FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU5
			// 
			this->label锗管FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU5->Location = System::Drawing::Point(1133, 83);
			this->label锗管FSU5->Name = L"label锗管FSU5";
			this->label锗管FSU5->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU5->TabIndex = 96;
			this->label锗管FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU4
			// 
			this->label锗管FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU4->Location = System::Drawing::Point(1065, 129);
			this->label锗管FU4->Name = L"label锗管FU4";
			this->label锗管FU4->Size = System::Drawing::Size(62, 23);
			this->label锗管FU4->TabIndex = 82;
			this->label锗管FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU4
			// 
			this->label锗管FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU4->Location = System::Drawing::Point(1065, 83);
			this->label锗管FSU4->Name = L"label锗管FSU4";
			this->label锗管FSU4->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU4->TabIndex = 95;
			this->label锗管FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU3
			// 
			this->label锗管FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU3->Location = System::Drawing::Point(997, 130);
			this->label锗管FU3->Name = L"label锗管FU3";
			this->label锗管FU3->Size = System::Drawing::Size(62, 23);
			this->label锗管FU3->TabIndex = 81;
			this->label锗管FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU3
			// 
			this->label锗管FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU3->Location = System::Drawing::Point(997, 84);
			this->label锗管FSU3->Name = L"label锗管FSU3";
			this->label锗管FSU3->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU3->TabIndex = 94;
			this->label锗管FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU2
			// 
			this->label锗管FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU2->Location = System::Drawing::Point(929, 130);
			this->label锗管FU2->Name = L"label锗管FU2";
			this->label锗管FU2->Size = System::Drawing::Size(62, 23);
			this->label锗管FU2->TabIndex = 80;
			this->label锗管FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU2
			// 
			this->label锗管FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU2->Location = System::Drawing::Point(929, 84);
			this->label锗管FSU2->Name = L"label锗管FSU2";
			this->label锗管FSU2->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU2->TabIndex = 93;
			this->label锗管FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU1
			// 
			this->label锗管FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU1->Location = System::Drawing::Point(863, 130);
			this->label锗管FU1->Name = L"label锗管FU1";
			this->label锗管FU1->Size = System::Drawing::Size(62, 23);
			this->label锗管FU1->TabIndex = 79;
			this->label锗管FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU1
			// 
			this->label锗管FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU1->Location = System::Drawing::Point(863, 84);
			this->label锗管FSU1->Name = L"label锗管FSU1";
			this->label锗管FSU1->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU1->TabIndex = 92;
			this->label锗管FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管结论
			// 
			this->label锗管结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label锗管结论->Location = System::Drawing::Point(185, 43);
			this->label锗管结论->Name = L"label锗管结论";
			this->label锗管结论->Size = System::Drawing::Size(1350, 23);
			this->label锗管结论->TabIndex = 91;
			this->label锗管结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU10
			// 
			this->label锗管ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU10->Location = System::Drawing::Point(795, 83);
			this->label锗管ZSU10->Name = L"label锗管ZSU10";
			this->label锗管ZSU10->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU10->TabIndex = 69;
			this->label锗管ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU9
			// 
			this->label锗管ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU9->Location = System::Drawing::Point(727, 83);
			this->label锗管ZSU9->Name = L"label锗管ZSU9";
			this->label锗管ZSU9->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU9->TabIndex = 68;
			this->label锗管ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU8
			// 
			this->label锗管ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU8->Location = System::Drawing::Point(659, 83);
			this->label锗管ZSU8->Name = L"label锗管ZSU8";
			this->label锗管ZSU8->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU8->TabIndex = 67;
			this->label锗管ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU7
			// 
			this->label锗管ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU7->Location = System::Drawing::Point(591, 84);
			this->label锗管ZSU7->Name = L"label锗管ZSU7";
			this->label锗管ZSU7->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU7->TabIndex = 66;
			this->label锗管ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU6
			// 
			this->label锗管ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU6->Location = System::Drawing::Point(523, 83);
			this->label锗管ZSU6->Name = L"label锗管ZSU6";
			this->label锗管ZSU6->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU6->TabIndex = 65;
			this->label锗管ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU5
			// 
			this->label锗管ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU5->Location = System::Drawing::Point(455, 83);
			this->label锗管ZSU5->Name = L"label锗管ZSU5";
			this->label锗管ZSU5->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU5->TabIndex = 64;
			this->label锗管ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU4
			// 
			this->label锗管ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU4->Location = System::Drawing::Point(387, 83);
			this->label锗管ZSU4->Name = L"label锗管ZSU4";
			this->label锗管ZSU4->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU4->TabIndex = 63;
			this->label锗管ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU3
			// 
			this->label锗管ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU3->Location = System::Drawing::Point(319, 84);
			this->label锗管ZSU3->Name = L"label锗管ZSU3";
			this->label锗管ZSU3->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU3->TabIndex = 62;
			this->label锗管ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU2
			// 
			this->label锗管ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU2->Location = System::Drawing::Point(251, 84);
			this->label锗管ZSU2->Name = L"label锗管ZSU2";
			this->label锗管ZSU2->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU2->TabIndex = 61;
			this->label锗管ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU1
			// 
			this->label锗管ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU1->Location = System::Drawing::Point(185, 84);
			this->label锗管ZSU1->Name = L"label锗管ZSU1";
			this->label锗管ZSU1->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU1->TabIndex = 60;
			this->label锗管ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(8, 44);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 23);
			this->label19->TabIndex = 58;
			this->label19->Text = L"实验结论";
			// 
			// label20
			// 
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(9, 175);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(176, 23);
			this->label20->TabIndex = 7;
			this->label20->Text = L"电流表读数I(mA)";
			// 
			// label21
			// 
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(7, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(176, 23);
			this->label21->TabIndex = 6;
			this->label21->Text = L"电压表读数Ud(V)";
			// 
			// label22
			// 
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(8, 84);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(145, 23);
			this->label22->TabIndex = 5;
			this->label22->Text = L"电源电压U(V)";
			// 
			// chart白炽
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart白炽->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart白炽->Legends->Add(legend3);
			this->chart白炽->Location = System::Drawing::Point(903, 395);
			this->chart白炽->Name = L"chart白炽";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart白炽->Series->Add(series3);
			this->chart白炽->Size = System::Drawing::Size(300, 226);
			this->chart白炽->TabIndex = 63;
			this->chart白炽->Text = L"chart2";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label白炽I10);
			this->groupBox2->Controls->Add(this->label白炽I9);
			this->groupBox2->Controls->Add(this->label白炽I8);
			this->groupBox2->Controls->Add(this->label白炽I7);
			this->groupBox2->Controls->Add(this->label白炽I6);
			this->groupBox2->Controls->Add(this->label白炽I5);
			this->groupBox2->Controls->Add(this->label白炽I4);
			this->groupBox2->Controls->Add(this->label白炽I3);
			this->groupBox2->Controls->Add(this->label白炽I2);
			this->groupBox2->Controls->Add(this->label白炽I1);
			this->groupBox2->Controls->Add(this->label白炽U10);
			this->groupBox2->Controls->Add(this->label白炽U9);
			this->groupBox2->Controls->Add(this->label白炽U8);
			this->groupBox2->Controls->Add(this->label白炽U7);
			this->groupBox2->Controls->Add(this->label白炽U6);
			this->groupBox2->Controls->Add(this->label白炽U5);
			this->groupBox2->Controls->Add(this->label白炽U4);
			this->groupBox2->Controls->Add(this->label白炽U3);
			this->groupBox2->Controls->Add(this->label白炽U2);
			this->groupBox2->Controls->Add(this->label白炽U1);
			this->groupBox2->Controls->Add(this->label白炽结论);
			this->groupBox2->Controls->Add(this->label白炽SU10);
			this->groupBox2->Controls->Add(this->label白炽SU9);
			this->groupBox2->Controls->Add(this->label白炽SU8);
			this->groupBox2->Controls->Add(this->label白炽SU7);
			this->groupBox2->Controls->Add(this->label白炽SU6);
			this->groupBox2->Controls->Add(this->label白炽SU5);
			this->groupBox2->Controls->Add(this->label白炽SU4);
			this->groupBox2->Controls->Add(this->label白炽SU3);
			this->groupBox2->Controls->Add(this->label白炽SU2);
			this->groupBox2->Controls->Add(this->label白炽SU1);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 396);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(879, 226);
			this->groupBox2->TabIndex = 62;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"测定白炽灯泡的伏安特性";
			// 
			// label白炽I10
			// 
			this->label白炽I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I10->Location = System::Drawing::Point(803, 175);
			this->label白炽I10->Name = L"label白炽I10";
			this->label白炽I10->Size = System::Drawing::Size(62, 23);
			this->label白炽I10->TabIndex = 111;
			this->label白炽I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I9
			// 
			this->label白炽I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I9->Location = System::Drawing::Point(735, 175);
			this->label白炽I9->Name = L"label白炽I9";
			this->label白炽I9->Size = System::Drawing::Size(62, 23);
			this->label白炽I9->TabIndex = 110;
			this->label白炽I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I8
			// 
			this->label白炽I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I8->Location = System::Drawing::Point(667, 175);
			this->label白炽I8->Name = L"label白炽I8";
			this->label白炽I8->Size = System::Drawing::Size(62, 23);
			this->label白炽I8->TabIndex = 109;
			this->label白炽I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I7
			// 
			this->label白炽I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I7->Location = System::Drawing::Point(599, 176);
			this->label白炽I7->Name = L"label白炽I7";
			this->label白炽I7->Size = System::Drawing::Size(62, 23);
			this->label白炽I7->TabIndex = 108;
			this->label白炽I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I6
			// 
			this->label白炽I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I6->Location = System::Drawing::Point(531, 175);
			this->label白炽I6->Name = L"label白炽I6";
			this->label白炽I6->Size = System::Drawing::Size(62, 23);
			this->label白炽I6->TabIndex = 107;
			this->label白炽I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I5
			// 
			this->label白炽I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I5->Location = System::Drawing::Point(463, 175);
			this->label白炽I5->Name = L"label白炽I5";
			this->label白炽I5->Size = System::Drawing::Size(62, 23);
			this->label白炽I5->TabIndex = 106;
			this->label白炽I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I4
			// 
			this->label白炽I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I4->Location = System::Drawing::Point(395, 175);
			this->label白炽I4->Name = L"label白炽I4";
			this->label白炽I4->Size = System::Drawing::Size(62, 23);
			this->label白炽I4->TabIndex = 105;
			this->label白炽I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I3
			// 
			this->label白炽I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I3->Location = System::Drawing::Point(327, 176);
			this->label白炽I3->Name = L"label白炽I3";
			this->label白炽I3->Size = System::Drawing::Size(62, 23);
			this->label白炽I3->TabIndex = 104;
			this->label白炽I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I2
			// 
			this->label白炽I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I2->Location = System::Drawing::Point(259, 176);
			this->label白炽I2->Name = L"label白炽I2";
			this->label白炽I2->Size = System::Drawing::Size(62, 23);
			this->label白炽I2->TabIndex = 103;
			this->label白炽I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I1
			// 
			this->label白炽I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I1->Location = System::Drawing::Point(193, 176);
			this->label白炽I1->Name = L"label白炽I1";
			this->label白炽I1->Size = System::Drawing::Size(62, 23);
			this->label白炽I1->TabIndex = 102;
			this->label白炽I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U10
			// 
			this->label白炽U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U10->Location = System::Drawing::Point(803, 129);
			this->label白炽U10->Name = L"label白炽U10";
			this->label白炽U10->Size = System::Drawing::Size(62, 23);
			this->label白炽U10->TabIndex = 101;
			this->label白炽U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U9
			// 
			this->label白炽U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U9->Location = System::Drawing::Point(735, 129);
			this->label白炽U9->Name = L"label白炽U9";
			this->label白炽U9->Size = System::Drawing::Size(62, 23);
			this->label白炽U9->TabIndex = 100;
			this->label白炽U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U8
			// 
			this->label白炽U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U8->Location = System::Drawing::Point(667, 129);
			this->label白炽U8->Name = L"label白炽U8";
			this->label白炽U8->Size = System::Drawing::Size(62, 23);
			this->label白炽U8->TabIndex = 99;
			this->label白炽U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U7
			// 
			this->label白炽U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U7->Location = System::Drawing::Point(599, 130);
			this->label白炽U7->Name = L"label白炽U7";
			this->label白炽U7->Size = System::Drawing::Size(62, 23);
			this->label白炽U7->TabIndex = 98;
			this->label白炽U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U6
			// 
			this->label白炽U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U6->Location = System::Drawing::Point(531, 129);
			this->label白炽U6->Name = L"label白炽U6";
			this->label白炽U6->Size = System::Drawing::Size(62, 23);
			this->label白炽U6->TabIndex = 97;
			this->label白炽U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U5
			// 
			this->label白炽U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U5->Location = System::Drawing::Point(463, 129);
			this->label白炽U5->Name = L"label白炽U5";
			this->label白炽U5->Size = System::Drawing::Size(62, 23);
			this->label白炽U5->TabIndex = 96;
			this->label白炽U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U4
			// 
			this->label白炽U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U4->Location = System::Drawing::Point(395, 129);
			this->label白炽U4->Name = L"label白炽U4";
			this->label白炽U4->Size = System::Drawing::Size(62, 23);
			this->label白炽U4->TabIndex = 95;
			this->label白炽U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U3
			// 
			this->label白炽U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U3->Location = System::Drawing::Point(327, 130);
			this->label白炽U3->Name = L"label白炽U3";
			this->label白炽U3->Size = System::Drawing::Size(62, 23);
			this->label白炽U3->TabIndex = 94;
			this->label白炽U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U2
			// 
			this->label白炽U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U2->Location = System::Drawing::Point(259, 130);
			this->label白炽U2->Name = L"label白炽U2";
			this->label白炽U2->Size = System::Drawing::Size(62, 23);
			this->label白炽U2->TabIndex = 93;
			this->label白炽U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U1
			// 
			this->label白炽U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U1->Location = System::Drawing::Point(193, 130);
			this->label白炽U1->Name = L"label白炽U1";
			this->label白炽U1->Size = System::Drawing::Size(62, 23);
			this->label白炽U1->TabIndex = 92;
			this->label白炽U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽结论
			// 
			this->label白炽结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label白炽结论->Location = System::Drawing::Point(193, 44);
			this->label白炽结论->Name = L"label白炽结论";
			this->label白炽结论->Size = System::Drawing::Size(672, 23);
			this->label白炽结论->TabIndex = 91;
			this->label白炽结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU10
			// 
			this->label白炽SU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU10->Location = System::Drawing::Point(803, 83);
			this->label白炽SU10->Name = L"label白炽SU10";
			this->label白炽SU10->Size = System::Drawing::Size(62, 23);
			this->label白炽SU10->TabIndex = 69;
			this->label白炽SU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU9
			// 
			this->label白炽SU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU9->Location = System::Drawing::Point(735, 83);
			this->label白炽SU9->Name = L"label白炽SU9";
			this->label白炽SU9->Size = System::Drawing::Size(62, 23);
			this->label白炽SU9->TabIndex = 68;
			this->label白炽SU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU8
			// 
			this->label白炽SU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU8->Location = System::Drawing::Point(667, 83);
			this->label白炽SU8->Name = L"label白炽SU8";
			this->label白炽SU8->Size = System::Drawing::Size(62, 23);
			this->label白炽SU8->TabIndex = 67;
			this->label白炽SU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU7
			// 
			this->label白炽SU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU7->Location = System::Drawing::Point(599, 84);
			this->label白炽SU7->Name = L"label白炽SU7";
			this->label白炽SU7->Size = System::Drawing::Size(62, 23);
			this->label白炽SU7->TabIndex = 66;
			this->label白炽SU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU6
			// 
			this->label白炽SU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU6->Location = System::Drawing::Point(531, 83);
			this->label白炽SU6->Name = L"label白炽SU6";
			this->label白炽SU6->Size = System::Drawing::Size(62, 23);
			this->label白炽SU6->TabIndex = 65;
			this->label白炽SU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU5
			// 
			this->label白炽SU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU5->Location = System::Drawing::Point(463, 83);
			this->label白炽SU5->Name = L"label白炽SU5";
			this->label白炽SU5->Size = System::Drawing::Size(62, 23);
			this->label白炽SU5->TabIndex = 64;
			this->label白炽SU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU4
			// 
			this->label白炽SU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU4->Location = System::Drawing::Point(395, 83);
			this->label白炽SU4->Name = L"label白炽SU4";
			this->label白炽SU4->Size = System::Drawing::Size(62, 23);
			this->label白炽SU4->TabIndex = 63;
			this->label白炽SU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU3
			// 
			this->label白炽SU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU3->Location = System::Drawing::Point(327, 84);
			this->label白炽SU3->Name = L"label白炽SU3";
			this->label白炽SU3->Size = System::Drawing::Size(62, 23);
			this->label白炽SU3->TabIndex = 62;
			this->label白炽SU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU2
			// 
			this->label白炽SU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU2->Location = System::Drawing::Point(259, 84);
			this->label白炽SU2->Name = L"label白炽SU2";
			this->label白炽SU2->Size = System::Drawing::Size(62, 23);
			this->label白炽SU2->TabIndex = 61;
			this->label白炽SU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU1
			// 
			this->label白炽SU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU1->Location = System::Drawing::Point(193, 84);
			this->label白炽SU1->Name = L"label白炽SU1";
			this->label白炽SU1->Size = System::Drawing::Size(62, 23);
			this->label白炽SU1->TabIndex = 60;
			this->label白炽SU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(8, 44);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 23);
			this->label15->TabIndex = 58;
			this->label15->Text = L"实验结论";
			// 
			// label16
			// 
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(8, 175);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(176, 23);
			this->label16->TabIndex = 7;
			this->label16->Text = L"电流表读数I(mA)";
			// 
			// label17
			// 
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(6, 131);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(176, 23);
			this->label17->TabIndex = 6;
			this->label17->Text = L"电压表读数Ul(V)";
			// 
			// label18
			// 
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(8, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(145, 23);
			this->label18->TabIndex = 5;
			this->label18->Text = L"电源电压U(V)";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Controls->Add(this->chart稳压);
			this->tabPage2->Controls->Add(this->chart硅管);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1572, 1068);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"元件伏安特性测试实验报告第2页";
			this->tabPage2->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::tabPage2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(117, 924);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 32);
			this->button2->TabIndex = 79;
			this->button2->Text = L"打印";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::button2_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(20, 924);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 32);
			this->button6->TabIndex = 78;
			this->button6->Text = L"预览";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::button6_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label稳压FI10);
			this->groupBox6->Controls->Add(this->label稳压FI9);
			this->groupBox6->Controls->Add(this->label稳压FI8);
			this->groupBox6->Controls->Add(this->label稳压FI7);
			this->groupBox6->Controls->Add(this->label稳压FI6);
			this->groupBox6->Controls->Add(this->label稳压FI5);
			this->groupBox6->Controls->Add(this->label稳压FI4);
			this->groupBox6->Controls->Add(this->label稳压FI3);
			this->groupBox6->Controls->Add(this->label稳压FI2);
			this->groupBox6->Controls->Add(this->label稳压FI1);
			this->groupBox6->Controls->Add(this->label稳压FU10);
			this->groupBox6->Controls->Add(this->label稳压FU9);
			this->groupBox6->Controls->Add(this->label稳压FU8);
			this->groupBox6->Controls->Add(this->label稳压FU7);
			this->groupBox6->Controls->Add(this->label稳压FU6);
			this->groupBox6->Controls->Add(this->label稳压FU5);
			this->groupBox6->Controls->Add(this->label稳压FU4);
			this->groupBox6->Controls->Add(this->label稳压FU3);
			this->groupBox6->Controls->Add(this->label稳压FU2);
			this->groupBox6->Controls->Add(this->label稳压FU1);
			this->groupBox6->Controls->Add(this->label稳压ZI10);
			this->groupBox6->Controls->Add(this->label稳压ZI9);
			this->groupBox6->Controls->Add(this->label稳压ZI8);
			this->groupBox6->Controls->Add(this->label稳压ZI7);
			this->groupBox6->Controls->Add(this->label稳压ZI6);
			this->groupBox6->Controls->Add(this->label稳压ZI5);
			this->groupBox6->Controls->Add(this->label稳压ZI4);
			this->groupBox6->Controls->Add(this->label稳压ZI3);
			this->groupBox6->Controls->Add(this->label稳压ZI2);
			this->groupBox6->Controls->Add(this->label稳压ZI1);
			this->groupBox6->Controls->Add(this->label稳压ZU10);
			this->groupBox6->Controls->Add(this->label稳压ZU9);
			this->groupBox6->Controls->Add(this->label稳压ZU8);
			this->groupBox6->Controls->Add(this->label稳压ZU7);
			this->groupBox6->Controls->Add(this->label稳压ZU6);
			this->groupBox6->Controls->Add(this->label稳压ZU5);
			this->groupBox6->Controls->Add(this->label稳压ZU4);
			this->groupBox6->Controls->Add(this->label稳压ZU3);
			this->groupBox6->Controls->Add(this->label稳压ZU2);
			this->groupBox6->Controls->Add(this->label稳压ZU1);
			this->groupBox6->Controls->Add(this->label稳压FSU10);
			this->groupBox6->Controls->Add(this->label稳压FSU9);
			this->groupBox6->Controls->Add(this->label稳压FSU8);
			this->groupBox6->Controls->Add(this->label稳压FSU7);
			this->groupBox6->Controls->Add(this->label稳压FSU6);
			this->groupBox6->Controls->Add(this->label稳压FSU5);
			this->groupBox6->Controls->Add(this->label稳压FSU4);
			this->groupBox6->Controls->Add(this->label稳压FSU3);
			this->groupBox6->Controls->Add(this->label稳压FSU2);
			this->groupBox6->Controls->Add(this->label稳压FSU1);
			this->groupBox6->Controls->Add(this->label稳压结论);
			this->groupBox6->Controls->Add(this->label稳压ZSU10);
			this->groupBox6->Controls->Add(this->label稳压ZSU9);
			this->groupBox6->Controls->Add(this->label稳压ZSU8);
			this->groupBox6->Controls->Add(this->label稳压ZSU7);
			this->groupBox6->Controls->Add(this->label稳压ZSU6);
			this->groupBox6->Controls->Add(this->label稳压ZSU5);
			this->groupBox6->Controls->Add(this->label稳压ZSU4);
			this->groupBox6->Controls->Add(this->label稳压ZSU3);
			this->groupBox6->Controls->Add(this->label稳压ZSU2);
			this->groupBox6->Controls->Add(this->label稳压ZSU1);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->Location = System::Drawing::Point(6, 279);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(1550, 226);
			this->groupBox6->TabIndex = 70;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"测定稳压二极管的伏安特性";
			// 
			// label稳压FI10
			// 
			this->label稳压FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI10->Location = System::Drawing::Point(1473, 174);
			this->label稳压FI10->Name = L"label稳压FI10";
			this->label稳压FI10->Size = System::Drawing::Size(62, 23);
			this->label稳压FI10->TabIndex = 161;
			this->label稳压FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI10->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI10_Click);
			// 
			// label稳压FI9
			// 
			this->label稳压FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI9->Location = System::Drawing::Point(1405, 174);
			this->label稳压FI9->Name = L"label稳压FI9";
			this->label稳压FI9->Size = System::Drawing::Size(62, 23);
			this->label稳压FI9->TabIndex = 160;
			this->label稳压FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI9->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI9_Click);
			// 
			// label稳压FI8
			// 
			this->label稳压FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI8->Location = System::Drawing::Point(1337, 174);
			this->label稳压FI8->Name = L"label稳压FI8";
			this->label稳压FI8->Size = System::Drawing::Size(62, 23);
			this->label稳压FI8->TabIndex = 159;
			this->label稳压FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI8->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI8_Click);
			// 
			// label稳压FI7
			// 
			this->label稳压FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI7->Location = System::Drawing::Point(1269, 175);
			this->label稳压FI7->Name = L"label稳压FI7";
			this->label稳压FI7->Size = System::Drawing::Size(62, 23);
			this->label稳压FI7->TabIndex = 158;
			this->label稳压FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI7->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI7_Click);
			// 
			// label稳压FI6
			// 
			this->label稳压FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI6->Location = System::Drawing::Point(1201, 174);
			this->label稳压FI6->Name = L"label稳压FI6";
			this->label稳压FI6->Size = System::Drawing::Size(62, 23);
			this->label稳压FI6->TabIndex = 157;
			this->label稳压FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI6->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI6_Click);
			// 
			// label稳压FI5
			// 
			this->label稳压FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI5->Location = System::Drawing::Point(1133, 174);
			this->label稳压FI5->Name = L"label稳压FI5";
			this->label稳压FI5->Size = System::Drawing::Size(62, 23);
			this->label稳压FI5->TabIndex = 156;
			this->label稳压FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI5->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI5_Click);
			// 
			// label稳压FI4
			// 
			this->label稳压FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI4->Location = System::Drawing::Point(1065, 174);
			this->label稳压FI4->Name = L"label稳压FI4";
			this->label稳压FI4->Size = System::Drawing::Size(62, 23);
			this->label稳压FI4->TabIndex = 155;
			this->label稳压FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI4->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI4_Click);
			// 
			// label稳压FI3
			// 
			this->label稳压FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI3->Location = System::Drawing::Point(997, 175);
			this->label稳压FI3->Name = L"label稳压FI3";
			this->label稳压FI3->Size = System::Drawing::Size(62, 23);
			this->label稳压FI3->TabIndex = 154;
			this->label稳压FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI3->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI3_Click);
			// 
			// label稳压FI2
			// 
			this->label稳压FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI2->Location = System::Drawing::Point(929, 175);
			this->label稳压FI2->Name = L"label稳压FI2";
			this->label稳压FI2->Size = System::Drawing::Size(62, 23);
			this->label稳压FI2->TabIndex = 153;
			this->label稳压FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI2->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI2_Click);
			// 
			// label稳压FI1
			// 
			this->label稳压FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI1->Location = System::Drawing::Point(863, 175);
			this->label稳压FI1->Name = L"label稳压FI1";
			this->label稳压FI1->Size = System::Drawing::Size(62, 23);
			this->label稳压FI1->TabIndex = 152;
			this->label稳压FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FI1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FI1_Click);
			// 
			// label稳压FU10
			// 
			this->label稳压FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU10->Location = System::Drawing::Point(1473, 130);
			this->label稳压FU10->Name = L"label稳压FU10";
			this->label稳压FU10->Size = System::Drawing::Size(62, 23);
			this->label稳压FU10->TabIndex = 151;
			this->label稳压FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU10->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU10_Click);
			// 
			// label稳压FU9
			// 
			this->label稳压FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU9->Location = System::Drawing::Point(1405, 130);
			this->label稳压FU9->Name = L"label稳压FU9";
			this->label稳压FU9->Size = System::Drawing::Size(62, 23);
			this->label稳压FU9->TabIndex = 150;
			this->label稳压FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU9->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU9_Click);
			// 
			// label稳压FU8
			// 
			this->label稳压FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU8->Location = System::Drawing::Point(1336, 129);
			this->label稳压FU8->Name = L"label稳压FU8";
			this->label稳压FU8->Size = System::Drawing::Size(62, 23);
			this->label稳压FU8->TabIndex = 149;
			this->label稳压FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU8->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU8_Click);
			// 
			// label稳压FU7
			// 
			this->label稳压FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU7->Location = System::Drawing::Point(1269, 131);
			this->label稳压FU7->Name = L"label稳压FU7";
			this->label稳压FU7->Size = System::Drawing::Size(62, 23);
			this->label稳压FU7->TabIndex = 148;
			this->label稳压FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU7->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU7_Click);
			// 
			// label稳压FU6
			// 
			this->label稳压FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU6->Location = System::Drawing::Point(1201, 130);
			this->label稳压FU6->Name = L"label稳压FU6";
			this->label稳压FU6->Size = System::Drawing::Size(62, 23);
			this->label稳压FU6->TabIndex = 147;
			this->label稳压FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU6->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU6_Click);
			// 
			// label稳压FU5
			// 
			this->label稳压FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU5->Location = System::Drawing::Point(1133, 130);
			this->label稳压FU5->Name = L"label稳压FU5";
			this->label稳压FU5->Size = System::Drawing::Size(62, 23);
			this->label稳压FU5->TabIndex = 146;
			this->label稳压FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU5->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU5_Click);
			// 
			// label稳压FU4
			// 
			this->label稳压FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU4->Location = System::Drawing::Point(1065, 130);
			this->label稳压FU4->Name = L"label稳压FU4";
			this->label稳压FU4->Size = System::Drawing::Size(62, 23);
			this->label稳压FU4->TabIndex = 145;
			this->label稳压FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU4->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU4_Click);
			// 
			// label稳压FU3
			// 
			this->label稳压FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU3->Location = System::Drawing::Point(997, 131);
			this->label稳压FU3->Name = L"label稳压FU3";
			this->label稳压FU3->Size = System::Drawing::Size(62, 23);
			this->label稳压FU3->TabIndex = 144;
			this->label稳压FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU3->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU3_Click);
			// 
			// label稳压FU2
			// 
			this->label稳压FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU2->Location = System::Drawing::Point(929, 131);
			this->label稳压FU2->Name = L"label稳压FU2";
			this->label稳压FU2->Size = System::Drawing::Size(62, 23);
			this->label稳压FU2->TabIndex = 143;
			this->label稳压FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU2->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU2_Click);
			// 
			// label稳压FU1
			// 
			this->label稳压FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU1->Location = System::Drawing::Point(863, 131);
			this->label稳压FU1->Name = L"label稳压FU1";
			this->label稳压FU1->Size = System::Drawing::Size(62, 23);
			this->label稳压FU1->TabIndex = 142;
			this->label稳压FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压FU1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::label稳压FU1_Click);
			// 
			// label稳压ZI10
			// 
			this->label稳压ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI10->Location = System::Drawing::Point(795, 175);
			this->label稳压ZI10->Name = L"label稳压ZI10";
			this->label稳压ZI10->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI10->TabIndex = 141;
			this->label稳压ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI9
			// 
			this->label稳压ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI9->Location = System::Drawing::Point(727, 175);
			this->label稳压ZI9->Name = L"label稳压ZI9";
			this->label稳压ZI9->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI9->TabIndex = 140;
			this->label稳压ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI8
			// 
			this->label稳压ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI8->Location = System::Drawing::Point(659, 175);
			this->label稳压ZI8->Name = L"label稳压ZI8";
			this->label稳压ZI8->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI8->TabIndex = 139;
			this->label稳压ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI7
			// 
			this->label稳压ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI7->Location = System::Drawing::Point(591, 176);
			this->label稳压ZI7->Name = L"label稳压ZI7";
			this->label稳压ZI7->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI7->TabIndex = 138;
			this->label稳压ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI6
			// 
			this->label稳压ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI6->Location = System::Drawing::Point(523, 175);
			this->label稳压ZI6->Name = L"label稳压ZI6";
			this->label稳压ZI6->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI6->TabIndex = 137;
			this->label稳压ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI5
			// 
			this->label稳压ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI5->Location = System::Drawing::Point(455, 175);
			this->label稳压ZI5->Name = L"label稳压ZI5";
			this->label稳压ZI5->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI5->TabIndex = 136;
			this->label稳压ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI4
			// 
			this->label稳压ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI4->Location = System::Drawing::Point(387, 175);
			this->label稳压ZI4->Name = L"label稳压ZI4";
			this->label稳压ZI4->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI4->TabIndex = 135;
			this->label稳压ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI3
			// 
			this->label稳压ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI3->Location = System::Drawing::Point(319, 176);
			this->label稳压ZI3->Name = L"label稳压ZI3";
			this->label稳压ZI3->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI3->TabIndex = 134;
			this->label稳压ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI2
			// 
			this->label稳压ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI2->Location = System::Drawing::Point(251, 176);
			this->label稳压ZI2->Name = L"label稳压ZI2";
			this->label稳压ZI2->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI2->TabIndex = 133;
			this->label稳压ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI1
			// 
			this->label稳压ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI1->Location = System::Drawing::Point(185, 175);
			this->label稳压ZI1->Name = L"label稳压ZI1";
			this->label稳压ZI1->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI1->TabIndex = 132;
			this->label稳压ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU10
			// 
			this->label稳压ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU10->Location = System::Drawing::Point(795, 130);
			this->label稳压ZU10->Name = L"label稳压ZU10";
			this->label稳压ZU10->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU10->TabIndex = 131;
			this->label稳压ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU9
			// 
			this->label稳压ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU9->Location = System::Drawing::Point(727, 130);
			this->label稳压ZU9->Name = L"label稳压ZU9";
			this->label稳压ZU9->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU9->TabIndex = 130;
			this->label稳压ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU8
			// 
			this->label稳压ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU8->Location = System::Drawing::Point(659, 130);
			this->label稳压ZU8->Name = L"label稳压ZU8";
			this->label稳压ZU8->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU8->TabIndex = 129;
			this->label稳压ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU7
			// 
			this->label稳压ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU7->Location = System::Drawing::Point(591, 131);
			this->label稳压ZU7->Name = L"label稳压ZU7";
			this->label稳压ZU7->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU7->TabIndex = 128;
			this->label稳压ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU6
			// 
			this->label稳压ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU6->Location = System::Drawing::Point(523, 130);
			this->label稳压ZU6->Name = L"label稳压ZU6";
			this->label稳压ZU6->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU6->TabIndex = 127;
			this->label稳压ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU5
			// 
			this->label稳压ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU5->Location = System::Drawing::Point(455, 130);
			this->label稳压ZU5->Name = L"label稳压ZU5";
			this->label稳压ZU5->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU5->TabIndex = 126;
			this->label稳压ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU4
			// 
			this->label稳压ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU4->Location = System::Drawing::Point(387, 130);
			this->label稳压ZU4->Name = L"label稳压ZU4";
			this->label稳压ZU4->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU4->TabIndex = 125;
			this->label稳压ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU3
			// 
			this->label稳压ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU3->Location = System::Drawing::Point(319, 131);
			this->label稳压ZU3->Name = L"label稳压ZU3";
			this->label稳压ZU3->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU3->TabIndex = 124;
			this->label稳压ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU2
			// 
			this->label稳压ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU2->Location = System::Drawing::Point(251, 131);
			this->label稳压ZU2->Name = L"label稳压ZU2";
			this->label稳压ZU2->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU2->TabIndex = 123;
			this->label稳压ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU1
			// 
			this->label稳压ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU1->Location = System::Drawing::Point(185, 131);
			this->label稳压ZU1->Name = L"label稳压ZU1";
			this->label稳压ZU1->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU1->TabIndex = 122;
			this->label稳压ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU10
			// 
			this->label稳压FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU10->Location = System::Drawing::Point(1474, 83);
			this->label稳压FSU10->Name = L"label稳压FSU10";
			this->label稳压FSU10->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU10->TabIndex = 101;
			this->label稳压FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU9
			// 
			this->label稳压FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU9->Location = System::Drawing::Point(1406, 83);
			this->label稳压FSU9->Name = L"label稳压FSU9";
			this->label稳压FSU9->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU9->TabIndex = 100;
			this->label稳压FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU8
			// 
			this->label稳压FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU8->Location = System::Drawing::Point(1338, 83);
			this->label稳压FSU8->Name = L"label稳压FSU8";
			this->label稳压FSU8->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU8->TabIndex = 99;
			this->label稳压FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU7
			// 
			this->label稳压FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU7->Location = System::Drawing::Point(1270, 84);
			this->label稳压FSU7->Name = L"label稳压FSU7";
			this->label稳压FSU7->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU7->TabIndex = 98;
			this->label稳压FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU6
			// 
			this->label稳压FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU6->Location = System::Drawing::Point(1202, 83);
			this->label稳压FSU6->Name = L"label稳压FSU6";
			this->label稳压FSU6->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU6->TabIndex = 97;
			this->label稳压FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU5
			// 
			this->label稳压FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU5->Location = System::Drawing::Point(1134, 83);
			this->label稳压FSU5->Name = L"label稳压FSU5";
			this->label稳压FSU5->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU5->TabIndex = 96;
			this->label稳压FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU4
			// 
			this->label稳压FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU4->Location = System::Drawing::Point(1066, 83);
			this->label稳压FSU4->Name = L"label稳压FSU4";
			this->label稳压FSU4->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU4->TabIndex = 95;
			this->label稳压FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU3
			// 
			this->label稳压FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU3->Location = System::Drawing::Point(998, 84);
			this->label稳压FSU3->Name = L"label稳压FSU3";
			this->label稳压FSU3->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU3->TabIndex = 94;
			this->label稳压FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU2
			// 
			this->label稳压FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU2->Location = System::Drawing::Point(930, 84);
			this->label稳压FSU2->Name = L"label稳压FSU2";
			this->label稳压FSU2->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU2->TabIndex = 93;
			this->label稳压FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU1
			// 
			this->label稳压FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU1->Location = System::Drawing::Point(864, 84);
			this->label稳压FSU1->Name = L"label稳压FSU1";
			this->label稳压FSU1->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU1->TabIndex = 92;
			this->label稳压FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压结论
			// 
			this->label稳压结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压结论->Location = System::Drawing::Point(186, 43);
			this->label稳压结论->Name = L"label稳压结论";
			this->label稳压结论->Size = System::Drawing::Size(1349, 23);
			this->label稳压结论->TabIndex = 91;
			this->label稳压结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU10
			// 
			this->label稳压ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU10->Location = System::Drawing::Point(796, 83);
			this->label稳压ZSU10->Name = L"label稳压ZSU10";
			this->label稳压ZSU10->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU10->TabIndex = 69;
			this->label稳压ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU9
			// 
			this->label稳压ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU9->Location = System::Drawing::Point(728, 83);
			this->label稳压ZSU9->Name = L"label稳压ZSU9";
			this->label稳压ZSU9->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU9->TabIndex = 68;
			this->label稳压ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU8
			// 
			this->label稳压ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU8->Location = System::Drawing::Point(660, 83);
			this->label稳压ZSU8->Name = L"label稳压ZSU8";
			this->label稳压ZSU8->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU8->TabIndex = 67;
			this->label稳压ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU7
			// 
			this->label稳压ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU7->Location = System::Drawing::Point(592, 84);
			this->label稳压ZSU7->Name = L"label稳压ZSU7";
			this->label稳压ZSU7->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU7->TabIndex = 66;
			this->label稳压ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU6
			// 
			this->label稳压ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU6->Location = System::Drawing::Point(524, 83);
			this->label稳压ZSU6->Name = L"label稳压ZSU6";
			this->label稳压ZSU6->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU6->TabIndex = 65;
			this->label稳压ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU5
			// 
			this->label稳压ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU5->Location = System::Drawing::Point(456, 83);
			this->label稳压ZSU5->Name = L"label稳压ZSU5";
			this->label稳压ZSU5->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU5->TabIndex = 64;
			this->label稳压ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU4
			// 
			this->label稳压ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU4->Location = System::Drawing::Point(388, 83);
			this->label稳压ZSU4->Name = L"label稳压ZSU4";
			this->label稳压ZSU4->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU4->TabIndex = 63;
			this->label稳压ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU3
			// 
			this->label稳压ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU3->Location = System::Drawing::Point(320, 84);
			this->label稳压ZSU3->Name = L"label稳压ZSU3";
			this->label稳压ZSU3->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU3->TabIndex = 62;
			this->label稳压ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU2
			// 
			this->label稳压ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU2->Location = System::Drawing::Point(252, 84);
			this->label稳压ZSU2->Name = L"label稳压ZSU2";
			this->label稳压ZSU2->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU2->TabIndex = 61;
			this->label稳压ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU1
			// 
			this->label稳压ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU1->Location = System::Drawing::Point(186, 84);
			this->label稳压ZSU1->Name = L"label稳压ZSU1";
			this->label稳压ZSU1->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU1->TabIndex = 60;
			this->label稳压ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(8, 44);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(95, 23);
			this->label31->TabIndex = 58;
			this->label31->Text = L"实验结论";
			// 
			// label32
			// 
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(8, 175);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(176, 23);
			this->label32->TabIndex = 7;
			this->label32->Text = L"电流表读数I(mA)";
			// 
			// label33
			// 
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(6, 131);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(176, 23);
			this->label33->TabIndex = 6;
			this->label33->Text = L"电压表读数Ud(V)";
			// 
			// label34
			// 
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(8, 84);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(145, 23);
			this->label34->TabIndex = 5;
			this->label34->Text = L"电源电压U(V)";
			// 
			// chart稳压
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart稳压->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart稳压->Legends->Add(legend4);
			this->chart稳压->Location = System::Drawing::Point(431, 522);
			this->chart稳压->Name = L"chart稳压";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart稳压->Series->Add(series4);
			this->chart稳压->Size = System::Drawing::Size(396, 311);
			this->chart稳压->TabIndex = 69;
			this->chart稳压->Text = L"chart5";
			// 
			// chart硅管
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart硅管->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart硅管->Legends->Add(legend5);
			this->chart硅管->Location = System::Drawing::Point(8, 522);
			this->chart硅管->Name = L"chart硅管";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart硅管->Series->Add(series5);
			this->chart硅管->Size = System::Drawing::Size(396, 311);
			this->chart硅管->TabIndex = 67;
			this->chart硅管->Text = L"chart4";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label1硅管FI10);
			this->groupBox4->Controls->Add(this->label1硅管FI9);
			this->groupBox4->Controls->Add(this->label1硅管FI8);
			this->groupBox4->Controls->Add(this->label1硅管FI7);
			this->groupBox4->Controls->Add(this->label1硅管FI6);
			this->groupBox4->Controls->Add(this->label1硅管FI5);
			this->groupBox4->Controls->Add(this->label1硅管FI4);
			this->groupBox4->Controls->Add(this->label1硅管FI3);
			this->groupBox4->Controls->Add(this->label1硅管FI2);
			this->groupBox4->Controls->Add(this->label1硅管FI1);
			this->groupBox4->Controls->Add(this->label1硅管FU10);
			this->groupBox4->Controls->Add(this->label1硅管FU9);
			this->groupBox4->Controls->Add(this->label1硅管FU8);
			this->groupBox4->Controls->Add(this->label1硅管FU7);
			this->groupBox4->Controls->Add(this->label1硅管FU6);
			this->groupBox4->Controls->Add(this->label1硅管FU5);
			this->groupBox4->Controls->Add(this->label1硅管FU4);
			this->groupBox4->Controls->Add(this->label1硅管FU3);
			this->groupBox4->Controls->Add(this->label1硅管FU2);
			this->groupBox4->Controls->Add(this->label1硅管FU1);
			this->groupBox4->Controls->Add(this->label硅管ZI10);
			this->groupBox4->Controls->Add(this->label硅管ZI9);
			this->groupBox4->Controls->Add(this->label硅管ZI8);
			this->groupBox4->Controls->Add(this->label硅管ZI7);
			this->groupBox4->Controls->Add(this->label硅管ZI6);
			this->groupBox4->Controls->Add(this->label硅管ZI5);
			this->groupBox4->Controls->Add(this->label硅管ZI4);
			this->groupBox4->Controls->Add(this->label硅管ZI3);
			this->groupBox4->Controls->Add(this->label硅管ZI2);
			this->groupBox4->Controls->Add(this->label硅管ZI1);
			this->groupBox4->Controls->Add(this->label硅管ZU10);
			this->groupBox4->Controls->Add(this->label硅管ZU9);
			this->groupBox4->Controls->Add(this->label硅管ZU8);
			this->groupBox4->Controls->Add(this->label硅管ZU7);
			this->groupBox4->Controls->Add(this->label硅管ZU6);
			this->groupBox4->Controls->Add(this->label硅管ZU5);
			this->groupBox4->Controls->Add(this->label硅管ZU4);
			this->groupBox4->Controls->Add(this->label硅管ZU3);
			this->groupBox4->Controls->Add(this->label硅管ZU2);
			this->groupBox4->Controls->Add(this->label硅管ZU1);
			this->groupBox4->Controls->Add(this->label硅管FSU10);
			this->groupBox4->Controls->Add(this->label硅管FSU9);
			this->groupBox4->Controls->Add(this->label硅管FSU8);
			this->groupBox4->Controls->Add(this->label硅管FSU7);
			this->groupBox4->Controls->Add(this->label硅管FSU6);
			this->groupBox4->Controls->Add(this->label硅管FSU5);
			this->groupBox4->Controls->Add(this->label硅管FSU4);
			this->groupBox4->Controls->Add(this->label硅管FSU3);
			this->groupBox4->Controls->Add(this->label硅管FSU2);
			this->groupBox4->Controls->Add(this->label硅管FSU1);
			this->groupBox4->Controls->Add(this->label硅管结论);
			this->groupBox4->Controls->Add(this->label硅管ZSU10);
			this->groupBox4->Controls->Add(this->label硅管ZSU9);
			this->groupBox4->Controls->Add(this->label硅管ZSU8);
			this->groupBox4->Controls->Add(this->label硅管ZSU7);
			this->groupBox4->Controls->Add(this->label硅管ZSU6);
			this->groupBox4->Controls->Add(this->label硅管ZSU5);
			this->groupBox4->Controls->Add(this->label硅管ZSU4);
			this->groupBox4->Controls->Add(this->label硅管ZSU3);
			this->groupBox4->Controls->Add(this->label硅管ZSU2);
			this->groupBox4->Controls->Add(this->label硅管ZSU1);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(8, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1548, 226);
			this->groupBox4->TabIndex = 66;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"测定半导体的伏安特性-硅管2CP15";
			// 
			// label1硅管FI10
			// 
			this->label1硅管FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI10->Location = System::Drawing::Point(1472, 174);
			this->label1硅管FI10->Name = L"label1硅管FI10";
			this->label1硅管FI10->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI10->TabIndex = 161;
			this->label1硅管FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI9
			// 
			this->label1硅管FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI9->Location = System::Drawing::Point(1404, 174);
			this->label1硅管FI9->Name = L"label1硅管FI9";
			this->label1硅管FI9->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI9->TabIndex = 160;
			this->label1硅管FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI8
			// 
			this->label1硅管FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI8->Location = System::Drawing::Point(1336, 174);
			this->label1硅管FI8->Name = L"label1硅管FI8";
			this->label1硅管FI8->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI8->TabIndex = 159;
			this->label1硅管FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI7
			// 
			this->label1硅管FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI7->Location = System::Drawing::Point(1268, 175);
			this->label1硅管FI7->Name = L"label1硅管FI7";
			this->label1硅管FI7->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI7->TabIndex = 158;
			this->label1硅管FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI6
			// 
			this->label1硅管FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI6->Location = System::Drawing::Point(1200, 174);
			this->label1硅管FI6->Name = L"label1硅管FI6";
			this->label1硅管FI6->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI6->TabIndex = 157;
			this->label1硅管FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI5
			// 
			this->label1硅管FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI5->Location = System::Drawing::Point(1132, 174);
			this->label1硅管FI5->Name = L"label1硅管FI5";
			this->label1硅管FI5->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI5->TabIndex = 156;
			this->label1硅管FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI4
			// 
			this->label1硅管FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI4->Location = System::Drawing::Point(1064, 174);
			this->label1硅管FI4->Name = L"label1硅管FI4";
			this->label1硅管FI4->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI4->TabIndex = 155;
			this->label1硅管FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI3
			// 
			this->label1硅管FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI3->Location = System::Drawing::Point(996, 175);
			this->label1硅管FI3->Name = L"label1硅管FI3";
			this->label1硅管FI3->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI3->TabIndex = 154;
			this->label1硅管FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI2
			// 
			this->label1硅管FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI2->Location = System::Drawing::Point(928, 175);
			this->label1硅管FI2->Name = L"label1硅管FI2";
			this->label1硅管FI2->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI2->TabIndex = 153;
			this->label1硅管FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI1
			// 
			this->label1硅管FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI1->Location = System::Drawing::Point(862, 175);
			this->label1硅管FI1->Name = L"label1硅管FI1";
			this->label1硅管FI1->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI1->TabIndex = 152;
			this->label1硅管FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU10
			// 
			this->label1硅管FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU10->Location = System::Drawing::Point(1472, 130);
			this->label1硅管FU10->Name = L"label1硅管FU10";
			this->label1硅管FU10->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU10->TabIndex = 151;
			this->label1硅管FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU9
			// 
			this->label1硅管FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU9->Location = System::Drawing::Point(1404, 130);
			this->label1硅管FU9->Name = L"label1硅管FU9";
			this->label1硅管FU9->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU9->TabIndex = 150;
			this->label1硅管FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU8
			// 
			this->label1硅管FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU8->Location = System::Drawing::Point(1336, 130);
			this->label1硅管FU8->Name = L"label1硅管FU8";
			this->label1硅管FU8->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU8->TabIndex = 149;
			this->label1硅管FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU7
			// 
			this->label1硅管FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU7->Location = System::Drawing::Point(1268, 131);
			this->label1硅管FU7->Name = L"label1硅管FU7";
			this->label1硅管FU7->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU7->TabIndex = 148;
			this->label1硅管FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU6
			// 
			this->label1硅管FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU6->Location = System::Drawing::Point(1200, 130);
			this->label1硅管FU6->Name = L"label1硅管FU6";
			this->label1硅管FU6->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU6->TabIndex = 147;
			this->label1硅管FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU5
			// 
			this->label1硅管FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU5->Location = System::Drawing::Point(1132, 130);
			this->label1硅管FU5->Name = L"label1硅管FU5";
			this->label1硅管FU5->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU5->TabIndex = 146;
			this->label1硅管FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU4
			// 
			this->label1硅管FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU4->Location = System::Drawing::Point(1064, 130);
			this->label1硅管FU4->Name = L"label1硅管FU4";
			this->label1硅管FU4->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU4->TabIndex = 145;
			this->label1硅管FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU3
			// 
			this->label1硅管FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU3->Location = System::Drawing::Point(996, 131);
			this->label1硅管FU3->Name = L"label1硅管FU3";
			this->label1硅管FU3->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU3->TabIndex = 144;
			this->label1硅管FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU2
			// 
			this->label1硅管FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU2->Location = System::Drawing::Point(928, 131);
			this->label1硅管FU2->Name = L"label1硅管FU2";
			this->label1硅管FU2->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU2->TabIndex = 143;
			this->label1硅管FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU1
			// 
			this->label1硅管FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU1->Location = System::Drawing::Point(862, 131);
			this->label1硅管FU1->Name = L"label1硅管FU1";
			this->label1硅管FU1->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU1->TabIndex = 142;
			this->label1硅管FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI10
			// 
			this->label硅管ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI10->Location = System::Drawing::Point(793, 174);
			this->label硅管ZI10->Name = L"label硅管ZI10";
			this->label硅管ZI10->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI10->TabIndex = 141;
			this->label硅管ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI9
			// 
			this->label硅管ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI9->Location = System::Drawing::Point(725, 174);
			this->label硅管ZI9->Name = L"label硅管ZI9";
			this->label硅管ZI9->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI9->TabIndex = 140;
			this->label硅管ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI8
			// 
			this->label硅管ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI8->Location = System::Drawing::Point(657, 174);
			this->label硅管ZI8->Name = L"label硅管ZI8";
			this->label硅管ZI8->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI8->TabIndex = 139;
			this->label硅管ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI7
			// 
			this->label硅管ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI7->Location = System::Drawing::Point(589, 175);
			this->label硅管ZI7->Name = L"label硅管ZI7";
			this->label硅管ZI7->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI7->TabIndex = 138;
			this->label硅管ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI6
			// 
			this->label硅管ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI6->Location = System::Drawing::Point(521, 174);
			this->label硅管ZI6->Name = L"label硅管ZI6";
			this->label硅管ZI6->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI6->TabIndex = 137;
			this->label硅管ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI5
			// 
			this->label硅管ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI5->Location = System::Drawing::Point(453, 174);
			this->label硅管ZI5->Name = L"label硅管ZI5";
			this->label硅管ZI5->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI5->TabIndex = 136;
			this->label硅管ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI4
			// 
			this->label硅管ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI4->Location = System::Drawing::Point(385, 174);
			this->label硅管ZI4->Name = L"label硅管ZI4";
			this->label硅管ZI4->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI4->TabIndex = 135;
			this->label硅管ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI3
			// 
			this->label硅管ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI3->Location = System::Drawing::Point(317, 175);
			this->label硅管ZI3->Name = L"label硅管ZI3";
			this->label硅管ZI3->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI3->TabIndex = 134;
			this->label硅管ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI2
			// 
			this->label硅管ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI2->Location = System::Drawing::Point(249, 175);
			this->label硅管ZI2->Name = L"label硅管ZI2";
			this->label硅管ZI2->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI2->TabIndex = 133;
			this->label硅管ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI1
			// 
			this->label硅管ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI1->Location = System::Drawing::Point(183, 175);
			this->label硅管ZI1->Name = L"label硅管ZI1";
			this->label硅管ZI1->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI1->TabIndex = 132;
			this->label硅管ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU10
			// 
			this->label硅管ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU10->Location = System::Drawing::Point(793, 128);
			this->label硅管ZU10->Name = L"label硅管ZU10";
			this->label硅管ZU10->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU10->TabIndex = 131;
			this->label硅管ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU9
			// 
			this->label硅管ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU9->Location = System::Drawing::Point(725, 128);
			this->label硅管ZU9->Name = L"label硅管ZU9";
			this->label硅管ZU9->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU9->TabIndex = 130;
			this->label硅管ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU8
			// 
			this->label硅管ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU8->Location = System::Drawing::Point(657, 128);
			this->label硅管ZU8->Name = L"label硅管ZU8";
			this->label硅管ZU8->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU8->TabIndex = 129;
			this->label硅管ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU7
			// 
			this->label硅管ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU7->Location = System::Drawing::Point(589, 129);
			this->label硅管ZU7->Name = L"label硅管ZU7";
			this->label硅管ZU7->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU7->TabIndex = 128;
			this->label硅管ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU6
			// 
			this->label硅管ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU6->Location = System::Drawing::Point(521, 128);
			this->label硅管ZU6->Name = L"label硅管ZU6";
			this->label硅管ZU6->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU6->TabIndex = 127;
			this->label硅管ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU5
			// 
			this->label硅管ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU5->Location = System::Drawing::Point(453, 128);
			this->label硅管ZU5->Name = L"label硅管ZU5";
			this->label硅管ZU5->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU5->TabIndex = 126;
			this->label硅管ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU4
			// 
			this->label硅管ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU4->Location = System::Drawing::Point(385, 128);
			this->label硅管ZU4->Name = L"label硅管ZU4";
			this->label硅管ZU4->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU4->TabIndex = 125;
			this->label硅管ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU3
			// 
			this->label硅管ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU3->Location = System::Drawing::Point(317, 129);
			this->label硅管ZU3->Name = L"label硅管ZU3";
			this->label硅管ZU3->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU3->TabIndex = 124;
			this->label硅管ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU2
			// 
			this->label硅管ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU2->Location = System::Drawing::Point(249, 129);
			this->label硅管ZU2->Name = L"label硅管ZU2";
			this->label硅管ZU2->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU2->TabIndex = 123;
			this->label硅管ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU1
			// 
			this->label硅管ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU1->Location = System::Drawing::Point(183, 129);
			this->label硅管ZU1->Name = L"label硅管ZU1";
			this->label硅管ZU1->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU1->TabIndex = 122;
			this->label硅管ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU10
			// 
			this->label硅管FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU10->Location = System::Drawing::Point(1471, 84);
			this->label硅管FSU10->Name = L"label硅管FSU10";
			this->label硅管FSU10->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU10->TabIndex = 101;
			this->label硅管FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU9
			// 
			this->label硅管FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU9->Location = System::Drawing::Point(1403, 84);
			this->label硅管FSU9->Name = L"label硅管FSU9";
			this->label硅管FSU9->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU9->TabIndex = 100;
			this->label硅管FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU8
			// 
			this->label硅管FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU8->Location = System::Drawing::Point(1335, 84);
			this->label硅管FSU8->Name = L"label硅管FSU8";
			this->label硅管FSU8->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU8->TabIndex = 99;
			this->label硅管FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU7
			// 
			this->label硅管FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU7->Location = System::Drawing::Point(1267, 85);
			this->label硅管FSU7->Name = L"label硅管FSU7";
			this->label硅管FSU7->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU7->TabIndex = 98;
			this->label硅管FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU6
			// 
			this->label硅管FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU6->Location = System::Drawing::Point(1199, 84);
			this->label硅管FSU6->Name = L"label硅管FSU6";
			this->label硅管FSU6->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU6->TabIndex = 97;
			this->label硅管FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU5
			// 
			this->label硅管FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU5->Location = System::Drawing::Point(1131, 84);
			this->label硅管FSU5->Name = L"label硅管FSU5";
			this->label硅管FSU5->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU5->TabIndex = 96;
			this->label硅管FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU4
			// 
			this->label硅管FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU4->Location = System::Drawing::Point(1063, 84);
			this->label硅管FSU4->Name = L"label硅管FSU4";
			this->label硅管FSU4->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU4->TabIndex = 95;
			this->label硅管FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU3
			// 
			this->label硅管FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU3->Location = System::Drawing::Point(995, 85);
			this->label硅管FSU3->Name = L"label硅管FSU3";
			this->label硅管FSU3->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU3->TabIndex = 94;
			this->label硅管FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU2
			// 
			this->label硅管FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU2->Location = System::Drawing::Point(927, 85);
			this->label硅管FSU2->Name = L"label硅管FSU2";
			this->label硅管FSU2->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU2->TabIndex = 93;
			this->label硅管FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU1
			// 
			this->label硅管FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU1->Location = System::Drawing::Point(861, 85);
			this->label硅管FSU1->Name = L"label硅管FSU1";
			this->label硅管FSU1->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU1->TabIndex = 92;
			this->label硅管FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管结论
			// 
			this->label硅管结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管结论->Location = System::Drawing::Point(183, 44);
			this->label硅管结论->Name = L"label硅管结论";
			this->label硅管结论->Size = System::Drawing::Size(1350, 23);
			this->label硅管结论->TabIndex = 91;
			this->label硅管结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU10
			// 
			this->label硅管ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU10->Location = System::Drawing::Point(793, 84);
			this->label硅管ZSU10->Name = L"label硅管ZSU10";
			this->label硅管ZSU10->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU10->TabIndex = 69;
			this->label硅管ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU9
			// 
			this->label硅管ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU9->Location = System::Drawing::Point(725, 84);
			this->label硅管ZSU9->Name = L"label硅管ZSU9";
			this->label硅管ZSU9->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU9->TabIndex = 68;
			this->label硅管ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU8
			// 
			this->label硅管ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU8->Location = System::Drawing::Point(657, 84);
			this->label硅管ZSU8->Name = L"label硅管ZSU8";
			this->label硅管ZSU8->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU8->TabIndex = 67;
			this->label硅管ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU7
			// 
			this->label硅管ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU7->Location = System::Drawing::Point(589, 85);
			this->label硅管ZSU7->Name = L"label硅管ZSU7";
			this->label硅管ZSU7->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU7->TabIndex = 66;
			this->label硅管ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU6
			// 
			this->label硅管ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU6->Location = System::Drawing::Point(521, 84);
			this->label硅管ZSU6->Name = L"label硅管ZSU6";
			this->label硅管ZSU6->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU6->TabIndex = 65;
			this->label硅管ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU5
			// 
			this->label硅管ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU5->Location = System::Drawing::Point(453, 84);
			this->label硅管ZSU5->Name = L"label硅管ZSU5";
			this->label硅管ZSU5->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU5->TabIndex = 64;
			this->label硅管ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU4
			// 
			this->label硅管ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU4->Location = System::Drawing::Point(385, 84);
			this->label硅管ZSU4->Name = L"label硅管ZSU4";
			this->label硅管ZSU4->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU4->TabIndex = 63;
			this->label硅管ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU3
			// 
			this->label硅管ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU3->Location = System::Drawing::Point(317, 85);
			this->label硅管ZSU3->Name = L"label硅管ZSU3";
			this->label硅管ZSU3->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU3->TabIndex = 62;
			this->label硅管ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU2
			// 
			this->label硅管ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU2->Location = System::Drawing::Point(249, 85);
			this->label硅管ZSU2->Name = L"label硅管ZSU2";
			this->label硅管ZSU2->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU2->TabIndex = 61;
			this->label硅管ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU1
			// 
			this->label硅管ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU1->Location = System::Drawing::Point(183, 85);
			this->label硅管ZSU1->Name = L"label硅管ZSU1";
			this->label硅管ZSU1->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU1->TabIndex = 60;
			this->label硅管ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(8, 44);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(95, 23);
			this->label23->TabIndex = 58;
			this->label23->Text = L"实验结论";
			// 
			// label24
			// 
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(8, 175);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(176, 23);
			this->label24->TabIndex = 7;
			this->label24->Text = L"电流表读数I(mA)";
			// 
			// label25
			// 
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(6, 131);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(176, 23);
			this->label25->TabIndex = 6;
			this->label25->Text = L"电压表读数Ud(V)";
			// 
			// label26
			// 
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(8, 84);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(145, 23);
			this->label26->TabIndex = 5;
			this->label26->Text = L"电源电压U(V)";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &元件伏安特性的测试实验报告::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::printPreviewDialog1_Load);
			// 
			// button250
			// 
			this->button250->Location = System::Drawing::Point(12, 1016);
			this->button250->Name = L"button250";
			this->button250->Size = System::Drawing::Size(199, 34);
			this->button250->TabIndex = 111;
			this->button250->Text = L"成绩完成并上传";
			this->button250->UseVisualStyleBackColor = true;
			// 
			// 元件伏安特性的测试实验报告
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1580, 1102);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"元件伏安特性的测试实验报告";
			this->Text = L"元件伏安特性的测试实验报告";
			this->Load += gcnew System::EventHandler(this, &元件伏安特性的测试实验报告::元件伏安特性的测试实验报告_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart线性))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart锗管))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart白炽))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart稳压))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart硅管))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^_NewBitmap = gcnew Bitmap(this->Width, this->Height);
	//System::Windows::Forms::Control::DrawToBitmap(_NewBitmap, Rectangle(100,100,Width-100, Height-100));
	this->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, this->Width, this->Height));
	//e->Graphics->DrawImage(_NewBitmap, 0, 0, _NewBitmap->Width, _NewBitmap->Height);
    //int x = printDialog1->PrinterSettings->PaperSizes[0]->Width;//打印机默认纸张大小
	//int y = printDialog1->PrinterSettings->PaperSizes[0]->Height;
	//int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	//int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	
	//MessageBox::Show(x.ToString());
	//MessageBox::Show(y.ToString());

	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
	//e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height));

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		printDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {
	
	}
}
private: System::Void printPreviewDialog1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	YuLang();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	DaYing();
}

		 void DaYing() {
			 try {
				 printDocument1->DefaultPageSettings->Landscape = true;
				 printDocument1->Print();
			 }
			 catch (System::Exception ^ e) {

			 }
		 }
		 void YuLang() {

			 try {
				 printDocument1->DefaultPageSettings->Landscape = true;

				 printPreviewDialog1->ShowDialog();
			 }
			 catch (System::Exception ^ e) {

			 }
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	YuLang();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	DaYing();
}
		 void this_load();
		 void chart线性_load();
		 void chart白炽_load();
		 void chart稳压_load();
		 void chart锗管_load();
		 void chart硅管_load();
private: System::Void 元件伏安特性的测试实验报告_Load(System::Object^  sender, System::EventArgs^  e) {
	this_load();
	chart线性_load();
	chart白炽_load();
	chart稳压_load();
	chart锗管_load();
	chart硅管_load();
}
		
private: System::Void label稳压FU1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button205_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button206_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button207_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button208_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button209_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button210_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button211_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button212_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button213_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FI1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label稳压FU2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button204_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
