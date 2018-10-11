#pragma once
#include "tool/tool.h"

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 单相铁心变压器特性的测试实验内容 摘要
	/// </summary>
	public ref class 单相铁心变压器特性的测试实验内容 : public System::Windows::Forms::Form
	{
	public:
		单相铁心变压器特性的测试实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void chartTrial2_load();
		void chartTrial3_load();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~单相铁心变压器特性的测试实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label64;
	protected:
	private: System::Windows::Forms::TextBox^  textBox结论;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button246;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  labelTrial3_U1_1;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  labelTrial3_U1_2;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Label^  labelTrial3_U1_3;
	private: System::Windows::Forms::Label^  labelTrial3_U1_4;
	private: System::Windows::Forms::Label^  labelTrial3_U1_5;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  labelTrial3_U20_1;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  labelTrial3_U20_2;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  labelTrial3_U20_3;
	private: System::Windows::Forms::Label^  labelTrial3_U20_4;
	private: System::Windows::Forms::Label^  labelTrial3_U20_5;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  labelTrial3_I10_1;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  labelTrial3_I10_2;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  labelTrial3_I10_3;
	private: System::Windows::Forms::Label^  labelTrial3_I10_4;
	private: System::Windows::Forms::Label^  labelTrial3_I10_5;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  labelTrial3_U1_6;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Label^  labelTrial3_U1_7;
	private: System::Windows::Forms::Label^  labelTrial3_U1_8;
	private: System::Windows::Forms::Label^  labelTrial3_U1_9;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Label^  labelTrial3_U20_6;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Label^  labelTrial3_U20_7;
	private: System::Windows::Forms::Label^  labelTrial3_U20_8;
	private: System::Windows::Forms::Label^  labelTrial3_U20_9;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Label^  labelTrial3_I10_6;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Label^  labelTrial3_I10_7;
	private: System::Windows::Forms::Label^  labelTrial3_I10_8;
	private: System::Windows::Forms::Label^  labelTrial3_I10_9;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  labelTrial3_U1_10;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Label^  labelTrial3_U20_10;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Label^  labelTrial3_I10_10;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_I1;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_U1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_I2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_U2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_I1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_U1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_I2;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_U2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_I1;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_U1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_I2;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_U2;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  labelTrial2_Line1_W;
	private: System::Windows::Forms::TextBox^  labelTrial2_Line2_W;
	private: System::Windows::Forms::TextBox^  labelTrial2_Line3_W;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label16;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(单相铁心变压器特性的测试实验内容::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button246 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_1 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U1_2 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_5 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_1 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U20_2 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U20_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_5 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_1 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_I10_2 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_I10_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_5 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U1_6 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U1_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_9 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U20_6 = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U20_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_9 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_I10_6 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_I10_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_9 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U1_10 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_U20_10 = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_I10_10 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->chartTrial3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_I1 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_U1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_I2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_U2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_I1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_U1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_U2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line3_I1 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line3_U1 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line3_I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line3_U2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_W = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_Line2_W = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_Line3_W = (gcnew System::Windows::Forms::TextBox());
			this->chartTrial2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(53, 2125);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 249;
			this->label64->Text = L"实验结论";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(162, 2122);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1297, 28);
			this->textBox结论->TabIndex = 250;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::SkyBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(-14, 2218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1526, 52);
			this->label5->TabIndex = 251;
			this->label5->Text = L"答题结束";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button246
			// 
			this->button246->Location = System::Drawing::Point(688, 2171);
			this->button246->Name = L"button246";
			this->button246->Size = System::Drawing::Size(189, 37);
			this->button246->TabIndex = 248;
			this->button246->Text = L"成绩完成并上传";
			this->button246->UseVisualStyleBackColor = true;
			this->button246->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button246_Click);
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(6, 42);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(1118, 55);
			this->label50->TabIndex = 87;
			this->label50->Text = L"    3．将高压线圈（副边）开路，确认调压器处在零位后，合上电源，调节调压器输出电压，使U1从零逐次上升到1.2倍额定电压（1.2×36V），分别记下各次测得的"
				L"U1，U20和I10数据，记入自拟的数据表格，绘制变压器的空载特性曲线。";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(10, 116);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(157, 30);
			this->label45->TabIndex = 212;
			this->label45->Text = L"U1";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_1
			// 
			this->labelTrial3_U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_1->Location = System::Drawing::Point(173, 116);
			this->labelTrial3_U1_1->Name = L"labelTrial3_U1_1";
			this->labelTrial3_U1_1->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_1->TabIndex = 213;
			this->labelTrial3_U1_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button29
			// 
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(173, 149);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 34);
			this->button29->TabIndex = 214;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button29_Click);
			// 
			// labelTrial3_U1_2
			// 
			this->labelTrial3_U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_2->Location = System::Drawing::Point(287, 116);
			this->labelTrial3_U1_2->Name = L"labelTrial3_U1_2";
			this->labelTrial3_U1_2->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_2->TabIndex = 215;
			this->labelTrial3_U1_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button28
			// 
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(287, 149);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 34);
			this->button28->TabIndex = 216;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button28_Click);
			// 
			// labelTrial3_U1_3
			// 
			this->labelTrial3_U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_3->Location = System::Drawing::Point(398, 116);
			this->labelTrial3_U1_3->Name = L"labelTrial3_U1_3";
			this->labelTrial3_U1_3->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_3->TabIndex = 217;
			this->labelTrial3_U1_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_4
			// 
			this->labelTrial3_U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_4->Location = System::Drawing::Point(515, 115);
			this->labelTrial3_U1_4->Name = L"labelTrial3_U1_4";
			this->labelTrial3_U1_4->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_4->TabIndex = 219;
			this->labelTrial3_U1_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_5
			// 
			this->labelTrial3_U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_5->Location = System::Drawing::Point(628, 115);
			this->labelTrial3_U1_5->Name = L"labelTrial3_U1_5";
			this->labelTrial3_U1_5->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_5->TabIndex = 221;
			this->labelTrial3_U1_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button27
			// 
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(398, 149);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 34);
			this->button27->TabIndex = 222;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button27_Click);
			// 
			// button26
			// 
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(515, 149);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 34);
			this->button26->TabIndex = 223;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button26_Click);
			// 
			// button25
			// 
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(628, 149);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 34);
			this->button25->TabIndex = 224;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button25_Click);
			// 
			// label37
			// 
			this->label37->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(10, 206);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(157, 30);
			this->label37->TabIndex = 225;
			this->label37->Text = L"U20";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_1
			// 
			this->labelTrial3_U20_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_1->Location = System::Drawing::Point(173, 206);
			this->labelTrial3_U20_1->Name = L"labelTrial3_U20_1";
			this->labelTrial3_U20_1->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_1->TabIndex = 226;
			this->labelTrial3_U20_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button24
			// 
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(173, 239);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 34);
			this->button24->TabIndex = 227;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button24_Click);
			// 
			// labelTrial3_U20_2
			// 
			this->labelTrial3_U20_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_2->Location = System::Drawing::Point(287, 206);
			this->labelTrial3_U20_2->Name = L"labelTrial3_U20_2";
			this->labelTrial3_U20_2->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_2->TabIndex = 228;
			this->labelTrial3_U20_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button23
			// 
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(287, 239);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 34);
			this->button23->TabIndex = 229;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button23_Click);
			// 
			// labelTrial3_U20_3
			// 
			this->labelTrial3_U20_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_3->Location = System::Drawing::Point(398, 206);
			this->labelTrial3_U20_3->Name = L"labelTrial3_U20_3";
			this->labelTrial3_U20_3->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_3->TabIndex = 230;
			this->labelTrial3_U20_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_4
			// 
			this->labelTrial3_U20_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_4->Location = System::Drawing::Point(515, 205);
			this->labelTrial3_U20_4->Name = L"labelTrial3_U20_4";
			this->labelTrial3_U20_4->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_4->TabIndex = 231;
			this->labelTrial3_U20_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_5
			// 
			this->labelTrial3_U20_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_5->Location = System::Drawing::Point(628, 205);
			this->labelTrial3_U20_5->Name = L"labelTrial3_U20_5";
			this->labelTrial3_U20_5->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_5->TabIndex = 232;
			this->labelTrial3_U20_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button22
			// 
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(398, 239);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 34);
			this->button22->TabIndex = 233;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button22_Click);
			// 
			// button21
			// 
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(515, 239);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 34);
			this->button21->TabIndex = 234;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button21_Click);
			// 
			// button20
			// 
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(628, 239);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 34);
			this->button20->TabIndex = 235;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button20_Click);
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(10, 296);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(157, 33);
			this->label31->TabIndex = 236;
			this->label31->Text = L"I10";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_1
			// 
			this->labelTrial3_I10_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_1->Location = System::Drawing::Point(173, 296);
			this->labelTrial3_I10_1->Name = L"labelTrial3_I10_1";
			this->labelTrial3_I10_1->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_1->TabIndex = 237;
			this->labelTrial3_I10_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button19
			// 
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(173, 329);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 34);
			this->button19->TabIndex = 238;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button19_Click);
			// 
			// labelTrial3_I10_2
			// 
			this->labelTrial3_I10_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_2->Location = System::Drawing::Point(287, 296);
			this->labelTrial3_I10_2->Name = L"labelTrial3_I10_2";
			this->labelTrial3_I10_2->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_2->TabIndex = 239;
			this->labelTrial3_I10_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button18
			// 
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(287, 329);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 34);
			this->button18->TabIndex = 240;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button18_Click);
			// 
			// labelTrial3_I10_3
			// 
			this->labelTrial3_I10_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_3->Location = System::Drawing::Point(398, 296);
			this->labelTrial3_I10_3->Name = L"labelTrial3_I10_3";
			this->labelTrial3_I10_3->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_3->TabIndex = 241;
			this->labelTrial3_I10_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_4
			// 
			this->labelTrial3_I10_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_4->Location = System::Drawing::Point(515, 295);
			this->labelTrial3_I10_4->Name = L"labelTrial3_I10_4";
			this->labelTrial3_I10_4->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_4->TabIndex = 242;
			this->labelTrial3_I10_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_5
			// 
			this->labelTrial3_I10_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_5->Location = System::Drawing::Point(628, 295);
			this->labelTrial3_I10_5->Name = L"labelTrial3_I10_5";
			this->labelTrial3_I10_5->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_5->TabIndex = 243;
			this->labelTrial3_I10_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button17
			// 
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(398, 329);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 34);
			this->button17->TabIndex = 244;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button17_Click);
			// 
			// button16
			// 
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(515, 329);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 34);
			this->button16->TabIndex = 245;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button16_Click);
			// 
			// button15
			// 
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(628, 329);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 34);
			this->button15->TabIndex = 246;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button15_Click);
			// 
			// labelTrial3_U1_6
			// 
			this->labelTrial3_U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_6->Location = System::Drawing::Point(727, 115);
			this->labelTrial3_U1_6->Name = L"labelTrial3_U1_6";
			this->labelTrial3_U1_6->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_6->TabIndex = 247;
			this->labelTrial3_U1_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button42
			// 
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(727, 148);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 34);
			this->button42->TabIndex = 248;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button42_Click);
			// 
			// labelTrial3_U1_7
			// 
			this->labelTrial3_U1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_7->Location = System::Drawing::Point(838, 115);
			this->labelTrial3_U1_7->Name = L"labelTrial3_U1_7";
			this->labelTrial3_U1_7->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_7->TabIndex = 249;
			this->labelTrial3_U1_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_8
			// 
			this->labelTrial3_U1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_8->Location = System::Drawing::Point(955, 114);
			this->labelTrial3_U1_8->Name = L"labelTrial3_U1_8";
			this->labelTrial3_U1_8->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_8->TabIndex = 250;
			this->labelTrial3_U1_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_9
			// 
			this->labelTrial3_U1_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_9->Location = System::Drawing::Point(1068, 114);
			this->labelTrial3_U1_9->Name = L"labelTrial3_U1_9";
			this->labelTrial3_U1_9->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_9->TabIndex = 251;
			this->labelTrial3_U1_9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button41
			// 
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(838, 148);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 34);
			this->button41->TabIndex = 252;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button41_Click);
			// 
			// button40
			// 
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(955, 148);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 34);
			this->button40->TabIndex = 253;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button40_Click);
			// 
			// button39
			// 
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(1068, 148);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 34);
			this->button39->TabIndex = 254;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button39_Click);
			// 
			// labelTrial3_U20_6
			// 
			this->labelTrial3_U20_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_6->Location = System::Drawing::Point(727, 205);
			this->labelTrial3_U20_6->Name = L"labelTrial3_U20_6";
			this->labelTrial3_U20_6->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_6->TabIndex = 255;
			this->labelTrial3_U20_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button38
			// 
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(727, 238);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 34);
			this->button38->TabIndex = 256;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button38_Click);
			// 
			// labelTrial3_U20_7
			// 
			this->labelTrial3_U20_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_7->Location = System::Drawing::Point(838, 205);
			this->labelTrial3_U20_7->Name = L"labelTrial3_U20_7";
			this->labelTrial3_U20_7->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_7->TabIndex = 257;
			this->labelTrial3_U20_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_8
			// 
			this->labelTrial3_U20_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_8->Location = System::Drawing::Point(955, 204);
			this->labelTrial3_U20_8->Name = L"labelTrial3_U20_8";
			this->labelTrial3_U20_8->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_8->TabIndex = 258;
			this->labelTrial3_U20_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_9
			// 
			this->labelTrial3_U20_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_9->Location = System::Drawing::Point(1068, 204);
			this->labelTrial3_U20_9->Name = L"labelTrial3_U20_9";
			this->labelTrial3_U20_9->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_9->TabIndex = 259;
			this->labelTrial3_U20_9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button37
			// 
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(838, 238);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 34);
			this->button37->TabIndex = 260;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button37_Click);
			// 
			// button36
			// 
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(955, 238);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(93, 34);
			this->button36->TabIndex = 261;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button36_Click);
			// 
			// button35
			// 
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(1068, 238);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(93, 34);
			this->button35->TabIndex = 262;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button35_Click);
			// 
			// labelTrial3_I10_6
			// 
			this->labelTrial3_I10_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_6->Location = System::Drawing::Point(727, 295);
			this->labelTrial3_I10_6->Name = L"labelTrial3_I10_6";
			this->labelTrial3_I10_6->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_6->TabIndex = 263;
			this->labelTrial3_I10_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button34
			// 
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(727, 328);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 34);
			this->button34->TabIndex = 264;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button34_Click);
			// 
			// labelTrial3_I10_7
			// 
			this->labelTrial3_I10_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_7->Location = System::Drawing::Point(838, 295);
			this->labelTrial3_I10_7->Name = L"labelTrial3_I10_7";
			this->labelTrial3_I10_7->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_7->TabIndex = 265;
			this->labelTrial3_I10_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_8
			// 
			this->labelTrial3_I10_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_8->Location = System::Drawing::Point(955, 294);
			this->labelTrial3_I10_8->Name = L"labelTrial3_I10_8";
			this->labelTrial3_I10_8->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_8->TabIndex = 266;
			this->labelTrial3_I10_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_9
			// 
			this->labelTrial3_I10_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_9->Location = System::Drawing::Point(1068, 294);
			this->labelTrial3_I10_9->Name = L"labelTrial3_I10_9";
			this->labelTrial3_I10_9->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_9->TabIndex = 267;
			this->labelTrial3_I10_9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button33
			// 
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(838, 328);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 34);
			this->button33->TabIndex = 268;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button33_Click);
			// 
			// button32
			// 
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(955, 328);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 34);
			this->button32->TabIndex = 269;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button32_Click);
			// 
			// button31
			// 
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(1068, 328);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 34);
			this->button31->TabIndex = 270;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button31_Click);
			// 
			// labelTrial3_U1_10
			// 
			this->labelTrial3_U1_10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_10->Location = System::Drawing::Point(1167, 114);
			this->labelTrial3_U1_10->Name = L"labelTrial3_U1_10";
			this->labelTrial3_U1_10->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_10->TabIndex = 271;
			this->labelTrial3_U1_10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button45
			// 
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(1167, 148);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(93, 34);
			this->button45->TabIndex = 272;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button45_Click);
			// 
			// labelTrial3_U20_10
			// 
			this->labelTrial3_U20_10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_10->Location = System::Drawing::Point(1167, 204);
			this->labelTrial3_U20_10->Name = L"labelTrial3_U20_10";
			this->labelTrial3_U20_10->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_10->TabIndex = 273;
			this->labelTrial3_U20_10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button44
			// 
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(1167, 238);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(93, 34);
			this->button44->TabIndex = 274;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button44_Click);
			// 
			// labelTrial3_I10_10
			// 
			this->labelTrial3_I10_10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_10->Location = System::Drawing::Point(1167, 294);
			this->labelTrial3_I10_10->Name = L"labelTrial3_I10_10";
			this->labelTrial3_I10_10->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_10->TabIndex = 275;
			this->labelTrial3_I10_10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button43
			// 
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(1167, 328);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(93, 34);
			this->button43->TabIndex = 276;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button43_Click);
			// 
			// chartTrial3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTrial3->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTrial3->Legends->Add(legend1);
			this->chartTrial3->Location = System::Drawing::Point(173, 400);
			this->chartTrial3->Name = L"chartTrial3";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartTrial3->Series->Add(series1);
			this->chartTrial3->Size = System::Drawing::Size(647, 349);
			this->chartTrial3->TabIndex = 277;
			this->chartTrial3->Text = L"chartTrial3";
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(6, 400);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 37);
			this->button3->TabIndex = 252;
			this->button3->Text = L"曲线生成";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->chartTrial3);
			this->groupBox3->Controls->Add(this->button43);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_10);
			this->groupBox3->Controls->Add(this->button44);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_10);
			this->groupBox3->Controls->Add(this->button45);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_10);
			this->groupBox3->Controls->Add(this->button31);
			this->groupBox3->Controls->Add(this->button32);
			this->groupBox3->Controls->Add(this->button33);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_9);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_8);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_7);
			this->groupBox3->Controls->Add(this->button34);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_6);
			this->groupBox3->Controls->Add(this->button35);
			this->groupBox3->Controls->Add(this->button36);
			this->groupBox3->Controls->Add(this->button37);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_9);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_8);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_7);
			this->groupBox3->Controls->Add(this->button38);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_6);
			this->groupBox3->Controls->Add(this->button39);
			this->groupBox3->Controls->Add(this->button40);
			this->groupBox3->Controls->Add(this->button41);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_9);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_8);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_7);
			this->groupBox3->Controls->Add(this->button42);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_6);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Controls->Add(this->button16);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_5);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_4);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_3);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_2);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_1);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Controls->Add(this->button22);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_5);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_4);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_3);
			this->groupBox3->Controls->Add(this->button23);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_2);
			this->groupBox3->Controls->Add(this->button24);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_1);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->button25);
			this->groupBox3->Controls->Add(this->button26);
			this->groupBox3->Controls->Add(this->button27);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_5);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_4);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_3);
			this->groupBox3->Controls->Add(this->button28);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_2);
			this->groupBox3->Controls->Add(this->button29);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_1);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(57, 1330);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1407, 776);
			this->groupBox3->TabIndex = 247;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验内容三";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(499, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(442, 25);
			this->label1->TabIndex = 89;
			this->label1->Text = L"单相铁心变压器特性的测试 实验内容";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(21, 41);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1118, 68);
			this->label19->TabIndex = 87;
			this->label19->Text = L"    1．调节调压器U1V1输出为AC36V，断电并按图14－1线路接线，即低压绕组N1接调压器输出U1V1，高压绕组N2接220V/15W的灯组负载AE接口，"
				L"经指导教师检查后方可进行通电实验。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(57, 84);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1407, 399);
			this->groupBox2->TabIndex = 90;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(344, 146);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(587, 228);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 88;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1118, 47);
			this->label2->TabIndex = 87;
			this->label2->Text = L"    2．K1、K2、K3断开，控制SA1、SA2、SA3的通断来增减负载，分别测出五个仪表的读数，记入自拟的数据表格，绘制变压器外特性曲线，实验完毕将调压器调"
				L"回零位，断开电源。";
			// 
			// label4
			// 
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(48, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 23);
			this->label4->TabIndex = 208;
			this->label4->Text = L"被测量";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(286, 119);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 23);
			this->label27->TabIndex = 209;
			this->label27->Text = L"(I1)A1";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(484, 119);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 23);
			this->label26->TabIndex = 210;
			this->label26->Text = L"(U1)V1";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(636, 120);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(97, 23);
			this->label25->TabIndex = 211;
			this->label25->Text = L"W";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(52, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 67);
			this->label3->TabIndex = 212;
			this->label3->Text = L"SA1通   SA2,SA3断";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_I1
			// 
			this->labelTrial2_Line1_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_I1->Location = System::Drawing::Point(286, 179);
			this->labelTrial2_Line1_I1->Name = L"labelTrial2_Line1_I1";
			this->labelTrial2_Line1_I1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_I1->TabIndex = 213;
			this->labelTrial2_Line1_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button30
			// 
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(286, 212);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(93, 34);
			this->button30->TabIndex = 214;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button30_Click);
			// 
			// labelTrial2_Line1_U1
			// 
			this->labelTrial2_Line1_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_U1->Location = System::Drawing::Point(484, 180);
			this->labelTrial2_Line1_U1->Name = L"labelTrial2_Line1_U1";
			this->labelTrial2_Line1_U1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_U1->TabIndex = 215;
			this->labelTrial2_Line1_U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(484, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 34);
			this->button1->TabIndex = 216;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button1_Click);
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(787, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 23);
			this->label7->TabIndex = 218;
			this->label7->Text = L"(I2)A2";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_I2
			// 
			this->labelTrial2_Line1_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_I2->Location = System::Drawing::Point(787, 179);
			this->labelTrial2_Line1_I2->Name = L"labelTrial2_Line1_I2";
			this->labelTrial2_Line1_I2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_I2->TabIndex = 219;
			this->labelTrial2_Line1_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(939, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 23);
			this->label9->TabIndex = 220;
			this->label9->Text = L"(U2)V2";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_U2
			// 
			this->labelTrial2_Line1_U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_U2->Location = System::Drawing::Point(939, 179);
			this->labelTrial2_Line1_U2->Name = L"labelTrial2_Line1_U2";
			this->labelTrial2_Line1_U2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_U2->TabIndex = 221;
			this->labelTrial2_Line1_U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(787, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 34);
			this->button2->TabIndex = 223;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button2_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(939, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 34);
			this->button4->TabIndex = 224;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button4_Click);
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(52, 269);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(228, 67);
			this->label15->TabIndex = 225;
			this->label15->Text = L"SA1,SA2通   SA3断";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_I1
			// 
			this->labelTrial2_Line2_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_I1->Location = System::Drawing::Point(286, 269);
			this->labelTrial2_Line2_I1->Name = L"labelTrial2_Line2_I1";
			this->labelTrial2_Line2_I1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_I1->TabIndex = 226;
			this->labelTrial2_Line2_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button9
			// 
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(286, 302);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 34);
			this->button9->TabIndex = 227;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button9_Click);
			// 
			// labelTrial2_Line2_U1
			// 
			this->labelTrial2_Line2_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_U1->Location = System::Drawing::Point(484, 270);
			this->labelTrial2_Line2_U1->Name = L"labelTrial2_Line2_U1";
			this->labelTrial2_Line2_U1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_U1->TabIndex = 228;
			this->labelTrial2_Line2_U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button8
			// 
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(484, 303);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 34);
			this->button8->TabIndex = 229;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button8_Click);
			// 
			// labelTrial2_Line2_I2
			// 
			this->labelTrial2_Line2_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_I2->Location = System::Drawing::Point(787, 269);
			this->labelTrial2_Line2_I2->Name = L"labelTrial2_Line2_I2";
			this->labelTrial2_Line2_I2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_I2->TabIndex = 231;
			this->labelTrial2_Line2_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_U2
			// 
			this->labelTrial2_Line2_U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_U2->Location = System::Drawing::Point(939, 269);
			this->labelTrial2_Line2_U2->Name = L"labelTrial2_Line2_U2";
			this->labelTrial2_Line2_U2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_U2->TabIndex = 232;
			this->labelTrial2_Line2_U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(787, 303);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 34);
			this->button6->TabIndex = 234;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button6_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(939, 303);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 34);
			this->button5->TabIndex = 235;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button5_Click);
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(52, 359);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(228, 67);
			this->label22->TabIndex = 236;
			this->label22->Text = L"SA1,SA2,SA3通";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line3_I1
			// 
			this->labelTrial2_Line3_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_I1->Location = System::Drawing::Point(286, 359);
			this->labelTrial2_Line3_I1->Name = L"labelTrial2_Line3_I1";
			this->labelTrial2_Line3_I1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_I1->TabIndex = 237;
			this->labelTrial2_Line3_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button14
			// 
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(286, 392);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 34);
			this->button14->TabIndex = 238;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button14_Click);
			// 
			// labelTrial2_Line3_U1
			// 
			this->labelTrial2_Line3_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_U1->Location = System::Drawing::Point(484, 360);
			this->labelTrial2_Line3_U1->Name = L"labelTrial2_Line3_U1";
			this->labelTrial2_Line3_U1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_U1->TabIndex = 239;
			this->labelTrial2_Line3_U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button13
			// 
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(484, 393);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 34);
			this->button13->TabIndex = 240;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button13_Click);
			// 
			// labelTrial2_Line3_I2
			// 
			this->labelTrial2_Line3_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_I2->Location = System::Drawing::Point(787, 359);
			this->labelTrial2_Line3_I2->Name = L"labelTrial2_Line3_I2";
			this->labelTrial2_Line3_I2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_I2->TabIndex = 242;
			this->labelTrial2_Line3_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line3_U2
			// 
			this->labelTrial2_Line3_U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_U2->Location = System::Drawing::Point(939, 359);
			this->labelTrial2_Line3_U2->Name = L"labelTrial2_Line3_U2";
			this->labelTrial2_Line3_U2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_U2->TabIndex = 243;
			this->labelTrial2_Line3_U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button11
			// 
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(787, 393);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 34);
			this->button11->TabIndex = 245;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button11_Click);
			// 
			// button10
			// 
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(939, 393);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 34);
			this->button10->TabIndex = 246;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button10_Click);
			// 
			// labelTrial2_Line1_W
			// 
			this->labelTrial2_Line1_W->Location = System::Drawing::Point(633, 180);
			this->labelTrial2_Line1_W->Name = L"labelTrial2_Line1_W";
			this->labelTrial2_Line1_W->Size = System::Drawing::Size(100, 30);
			this->labelTrial2_Line1_W->TabIndex = 247;
			// 
			// labelTrial2_Line2_W
			// 
			this->labelTrial2_Line2_W->Location = System::Drawing::Point(633, 272);
			this->labelTrial2_Line2_W->Name = L"labelTrial2_Line2_W";
			this->labelTrial2_Line2_W->Size = System::Drawing::Size(100, 30);
			this->labelTrial2_Line2_W->TabIndex = 248;
			// 
			// labelTrial2_Line3_W
			// 
			this->labelTrial2_Line3_W->Location = System::Drawing::Point(633, 362);
			this->labelTrial2_Line3_W->Name = L"labelTrial2_Line3_W";
			this->labelTrial2_Line3_W->Size = System::Drawing::Size(100, 30);
			this->labelTrial2_Line3_W->TabIndex = 249;
			// 
			// chartTrial2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartTrial2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartTrial2->Legends->Add(legend2);
			this->chartTrial2->Location = System::Drawing::Point(276, 450);
			this->chartTrial2->Name = L"chartTrial2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartTrial2->Series->Add(series2);
			this->chartTrial2->Size = System::Drawing::Size(608, 349);
			this->chartTrial2->TabIndex = 279;
			this->chartTrial2->Text = L"chart2";
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(109, 450);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 37);
			this->button7->TabIndex = 278;
			this->button7->Text = L"曲线生成";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::button7_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->chartTrial2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_W);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_W);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_W);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_U2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_I2);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_U1);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_I1);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_U2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_I2);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_U1);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_I1);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_U2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_I2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_U1);
			this->groupBox1->Controls->Add(this->button30);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_I1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(57, 504);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1407, 805);
			this->groupBox1->TabIndex = 91;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::groupBox1_Enter);
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->ForeColor = System::Drawing::Color::Lime;
			this->label16->Location = System::Drawing::Point(461, 143);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 28);
			this->label16->TabIndex = 382;
			this->label16->Text = L"交流电压表2";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(267, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 28);
			this->label6->TabIndex = 383;
			this->label6->Text = L"交流电流表1";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(761, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 28);
			this->label8->TabIndex = 385;
			this->label8->Text = L"交流电流表1";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(912, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(136, 28);
			this->label10->TabIndex = 384;
			this->label10->Text = L"交流电压表2";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(6, 155);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(136, 28);
			this->label11->TabIndex = 383;
			this->label11->Text = L"交流电压表2";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->ForeColor = System::Drawing::Color::Lime;
			this->label12->Location = System::Drawing::Point(8, 242);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(136, 28);
			this->label12->TabIndex = 384;
			this->label12->Text = L"交流电压表2";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(10, 335);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(136, 28);
			this->label13->TabIndex = 386;
			this->label13->Text = L"交流电流表1";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// 单相铁心变压器特性的测试实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1552, 764);
			this->Controls->Add(this->button246);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"单相铁心变压器特性的测试实验内容";
			this->Text = L"单相铁心变压器特性的测试实验内容";
			this->Load += gcnew System::EventHandler(this, &单相铁心变压器特性的测试实验内容::单相铁心变压器特性的测试实验内容_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBoxMethod1Ro_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
			public: ST_单相铁心变压器特性的测试 Load_Grade_data();
			 void SendData();
private: System::Void 单相铁心变压器特性的测试实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	chartTrial3->Titles->Add("变压器的空载特性曲线");
	chartTrial2->Titles->Add("变压器外特性曲线");
}
private: System::Void button246_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line1_I1->Text = global::GetGongPingI();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line1_U1->Text = global::GetGongPingU();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line1_I2->Text = global::GetGongPingI();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line1_U2->Text = global::GetGongPingU();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line2_I1->Text = global::GetGongPingI();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line3_I1->Text = global::GetGongPingI();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line2_U1->Text = global::GetGongPingU();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line3_U1->Text = global::GetGongPingU();
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line2_I2->Text = global::GetGongPingI();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line3_I2->Text = global::GetGongPingI();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line2_U2->Text = global::GetGongPingU();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Line3_U2->Text = global::GetGongPingU();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_1->Text = global::GetGongPingU();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_2->Text = global::GetGongPingU();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_3->Text = global::GetGongPingU();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_4->Text = global::GetGongPingU();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_5->Text = global::GetGongPingU();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_6->Text = global::GetGongPingU();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_7->Text = global::GetGongPingU();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_8->Text = global::GetGongPingU();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_9->Text = global::GetGongPingU();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U1_10->Text = global::GetGongPingU();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_1->Text = global::GetGongPingU();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_2->Text = global::GetGongPingU();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_3->Text = global::GetGongPingU();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_4->Text = global::GetGongPingU();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_5->Text = global::GetGongPingU();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_6->Text = global::GetGongPingU();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_7->Text = global::GetGongPingU();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_8->Text = global::GetGongPingU();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_9->Text = global::GetGongPingU();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U20_10->Text = global::GetGongPingU();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_1->Text = global::GetGongPingI();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_2->Text = global::GetGongPingI();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_3->Text = global::GetGongPingI();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_4->Text = global::GetGongPingI();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_5->Text = global::GetGongPingI();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_6->Text = global::GetGongPingI();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_7->Text = global::GetGongPingI();
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_8->Text = global::GetGongPingI();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_9->Text = global::GetGongPingI();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I10_10->Text = global::GetGongPingI();
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	chartTrial3_load();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	chartTrial2_load();
}
};
}
