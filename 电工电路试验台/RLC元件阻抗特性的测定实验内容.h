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
	/// RLC元件阻抗特性的测定实验内容 摘要
	/// </summary>
	public ref class RLC元件阻抗特性的测定实验内容 : public System::Windows::Forms::Form
	{
	public:
		RLC元件阻抗特性的测定实验内容(void)
		{
			InitializeComponent();
			File::Delete(Trial2_1PT_name);
			File::Delete(Trial2_2PT_name);
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RLC元件阻抗特性的测定实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC;

	private: System::Windows::Forms::Label^  labelTrial1_C_IC;

	private: System::Windows::Forms::Label^  labelTrial1_C_Ur;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL;

	private: System::Windows::Forms::Label^  labelTrial1_L_IL;

	private: System::Windows::Forms::Label^  labelTrial1_L_Ur;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelTrial1_F;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R;


	private: System::Windows::Forms::Label^  labelTrial1_R_IR;

	private: System::Windows::Forms::Label^  labelTrial1_R_Ur;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_2;

	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_1;

	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_n;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_m;



	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  labelTrial3_F;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_φ;



	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::TextBox^  textBox结论;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RLC元件阻抗特性的测定实验内容::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_C_XC = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_L_XL = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_F = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxTrial2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBoxTrial3_n = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_F = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_φ = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(444, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"RLC元件阻抗特性的测定 实验内容";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->chart2);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->labelTrial1_F);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(45, 85);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 619);
			this->groupBox8->TabIndex = 81;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RLC元件阻抗特性的测定 实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::groupBox8_Enter);
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(703, 160);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(520, 406);
			this->chart2->TabIndex = 35;
			this->chart2->Text = L"chart2";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(564, 535);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 31);
			this->button6->TabIndex = 34;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(564, 494);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 31);
			this->button7->TabIndex = 33;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial1_C_XC
			// 
			this->textBoxTrial1_C_XC->Location = System::Drawing::Point(346, 576);
			this->textBoxTrial1_C_XC->Name = L"textBoxTrial1_C_XC";
			this->textBoxTrial1_C_XC->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial1_C_XC->TabIndex = 32;
			// 
			// labelTrial1_C_IC
			// 
			this->labelTrial1_C_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC->Location = System::Drawing::Point(346, 539);
			this->labelTrial1_C_IC->Name = L"labelTrial1_C_IC";
			this->labelTrial1_C_IC->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_C_IC->TabIndex = 31;
			// 
			// labelTrial1_C_Ur
			// 
			this->labelTrial1_C_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur->Location = System::Drawing::Point(346, 500);
			this->labelTrial1_C_Ur->Name = L"labelTrial1_C_Ur";
			this->labelTrial1_C_Ur->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_C_Ur->TabIndex = 30;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(136, 576);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(179, 25);
			this->label18->TabIndex = 29;
			this->label18->Text = L"XC=U/ IC（KΩ）";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(136, 539);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(179, 25);
			this->label19->TabIndex = 28;
			this->label19->Text = L"IC=Ur / r（mA）";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(136, 500);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(179, 25);
			this->label20->TabIndex = 27;
			this->label20->Text = L"Ur（mV）";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(85, 500);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(31, 101);
			this->label21->TabIndex = 26;
			this->label21->Text = L"C";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(564, 401);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 31);
			this->button4->TabIndex = 25;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(564, 360);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 31);
			this->button5->TabIndex = 24;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial1_L_XL
			// 
			this->textBoxTrial1_L_XL->Location = System::Drawing::Point(346, 442);
			this->textBoxTrial1_L_XL->Name = L"textBoxTrial1_L_XL";
			this->textBoxTrial1_L_XL->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial1_L_XL->TabIndex = 21;
			// 
			// labelTrial1_L_IL
			// 
			this->labelTrial1_L_IL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL->Location = System::Drawing::Point(346, 405);
			this->labelTrial1_L_IL->Name = L"labelTrial1_L_IL";
			this->labelTrial1_L_IL->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_L_IL->TabIndex = 20;
			// 
			// labelTrial1_L_Ur
			// 
			this->labelTrial1_L_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur->Location = System::Drawing::Point(346, 366);
			this->labelTrial1_L_Ur->Name = L"labelTrial1_L_Ur";
			this->labelTrial1_L_Ur->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_L_Ur->TabIndex = 19;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(136, 442);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(179, 25);
			this->label13->TabIndex = 18;
			this->label13->Text = L"XL=U / IL（KΩ）";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(136, 405);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(179, 25);
			this->label14->TabIndex = 17;
			this->label14->Text = L"IL=Ur / r（mA）";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(136, 366);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(179, 25);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Ur（mV）";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(85, 366);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 101);
			this->label16->TabIndex = 15;
			this->label16->Text = L"L";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(564, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 31);
			this->button3->TabIndex = 13;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(564, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 31);
			this->button2->TabIndex = 12;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(564, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"设置";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_F
			// 
			this->labelTrial1_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_F->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_F->Location = System::Drawing::Point(346, 179);
			this->labelTrial1_F->Name = L"labelTrial1_F";
			this->labelTrial1_F->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_F->TabIndex = 10;
			// 
			// textBoxTrial1_R_R
			// 
			this->textBoxTrial1_R_R->Location = System::Drawing::Point(346, 306);
			this->textBoxTrial1_R_R->Name = L"textBoxTrial1_R_R";
			this->textBoxTrial1_R_R->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial1_R_R->TabIndex = 9;
			// 
			// labelTrial1_R_IR
			// 
			this->labelTrial1_R_IR->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR->Location = System::Drawing::Point(346, 269);
			this->labelTrial1_R_IR->Name = L"labelTrial1_R_IR";
			this->labelTrial1_R_IR->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_R_IR->TabIndex = 8;
			// 
			// labelTrial1_R_Ur
			// 
			this->labelTrial1_R_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur->Location = System::Drawing::Point(346, 230);
			this->labelTrial1_R_Ur->Name = L"labelTrial1_R_Ur";
			this->labelTrial1_R_Ur->Size = System::Drawing::Size(179, 25);
			this->labelTrial1_R_Ur->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(136, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"R=U/ IR（KΩ）";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(136, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"IR=Ur / r（mA）";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(136, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ur（Mv）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(85, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 101);
			this->label2->TabIndex = 3;
			this->label2->Text = L"R";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(85, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"频率F（KHz）";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 64);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1．测量R、L、C元件的阻抗频率特性。\r\n    利用电阻电容电感搭接如图12-2所示实验电路， 函数信号发生器作为激励源U，并用示波器测量，使激励源电压"
				L"有有效值为U＝3V，并保持不变。\r\n使信号源的输出频率从200Hz逐渐增至5KHz，并使开关S分别接通R、L、C三个元件，用示波器测量Ur，并通过计算得到各频率"
				L"点时的R、XL与Xc之值，记入表中。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(45, 720);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 1128);
			this->groupBox1->TabIndex = 82;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RLC元件阻抗特性的测定 实验内容2";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::groupBox1_Enter);
			// 
			// pictureBoxTrial2_2
			// 
			this->pictureBoxTrial2_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_2.Image")));
			this->pictureBoxTrial2_2->Location = System::Drawing::Point(293, 618);
			this->pictureBoxTrial2_2->Name = L"pictureBoxTrial2_2";
			this->pictureBoxTrial2_2->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_2->TabIndex = 2;
			this->pictureBoxTrial2_2->TabStop = false;
			// 
			// pictureBoxTrial2_1
			// 
			this->pictureBoxTrial2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_1.Image")));
			this->pictureBoxTrial2_1->Location = System::Drawing::Point(293, 86);
			this->pictureBoxTrial2_1->Name = L"pictureBoxTrial2_1";
			this->pictureBoxTrial2_1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_1->TabIndex = 1;
			this->pictureBoxTrial2_1->TabStop = false;
			this->pictureBoxTrial2_1->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::pictureBoxTrial2_1_Click);
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(24, 45);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(913, 29);
			this->label43->TabIndex = 0;
			this->label43->Text = L"    用双踪示波器观察在不同频率下各元件阻抗角的变化情况，并作记录。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->labelTrial3_F);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(45, 1870);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1315, 476);
			this->groupBox2->TabIndex = 83;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"RLC元件阻抗特性的测定 实验内容3";
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(703, 45);
			this->chart1->Name = L"chart1";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(520, 406);
			this->chart1->TabIndex = 26;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::chart1_Click);
			// 
			// textBoxTrial3_n
			// 
			this->textBoxTrial3_n->Location = System::Drawing::Point(334, 147);
			this->textBoxTrial3_n->Name = L"textBoxTrial3_n";
			this->textBoxTrial3_n->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial3_n->TabIndex = 25;
			// 
			// textBoxTrial3_m
			// 
			this->textBoxTrial3_m->Location = System::Drawing::Point(334, 189);
			this->textBoxTrial3_m->Name = L"textBoxTrial3_m";
			this->textBoxTrial3_m->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial3_m->TabIndex = 24;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(552, 95);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(102, 31);
			this->button10->TabIndex = 23;
			this->button10->Text = L"设置";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_F
			// 
			this->labelTrial3_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_F->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_F->Location = System::Drawing::Point(334, 101);
			this->labelTrial3_F->Name = L"labelTrial3_F";
			this->labelTrial3_F->Size = System::Drawing::Size(179, 25);
			this->labelTrial3_F->TabIndex = 22;
			// 
			// textBoxTrial3_φ
			// 
			this->textBoxTrial3_φ->Location = System::Drawing::Point(334, 228);
			this->textBoxTrial3_φ->Name = L"textBoxTrial3_φ";
			this->textBoxTrial3_φ->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial3_φ->TabIndex = 21;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(73, 228);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(230, 25);
			this->label26->TabIndex = 18;
			this->label26->Text = L"φ（度）";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(73, 191);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(230, 25);
			this->label27->TabIndex = 17;
			this->label27->Text = L"m（格）";
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(73, 152);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(230, 25);
			this->label28->TabIndex = 16;
			this->label28->Text = L"n（格）";
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(73, 101);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(230, 25);
			this->label30->TabIndex = 14;
			this->label30->Text = L"频率F（KHz）";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(24, 45);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(913, 29);
			this->label22->TabIndex = 0;
			this->label22->Text = L"    测量R、L、C元件串联的阻抗角频率特性。";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(46, 2452);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 185;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(600, 2410);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 184;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button81_Click);
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(223, 2363);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1137, 28);
			this->textBox结论->TabIndex = 183;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(47, 2366);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 182;
			this->label105->Text = L"实验结论";
			// 
			// RLC元件阻抗特性的测定实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1471, 741);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RLC元件阻抗特性的测定实验内容";
			this->Text = L"RLC元件阻抗特性的测定实验内容";
			this->Load += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::RLC元件阻抗特性的测定实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {


	}
			 String ^picdir = gcnew String(BMPSAVEPATH);
			 String ^Trial2_1PT_name = picdir + "RLC元件阻抗特性的测定Trial2_1.bmp";
			 String ^Trial2_2PT_name = picdir + "元件阻抗特性的测定Trial2_2.bmp";
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
}
		 public: ST_RLC元件阻抗特性的测定 Load_Grade_data();
		 void SendData();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void RLC元件阻抗特性的测定实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBoxTrial2_1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
