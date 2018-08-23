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
	/// 负阻抗变换器实验内容 摘要
	/// </summary>
	public ref class 负阻抗变换器实验内容 : public System::Windows::Forms::Form
	{
	public:
		负阻抗变换器实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			File::Delete(PT_name1);
			File::Delete(PT_name2);
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~负阻抗变换器实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial1;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_;

	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;



	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::PictureBox^  pictureBox_2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox_1;


	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1;
	private: System::Windows::Forms::Label^  labelTrial1_600_U1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(负阻抗变换器实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chartTrial1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_600_I1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_ = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_600_U1 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_300_I1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_ = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox_2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->chartTrial1);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->pictureBox4);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->pictureBox3);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1);
			this->groupBox8->Controls->Add(this->button29);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(21, 84);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 1407);
			this->groupBox8->TabIndex = 86;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"负阻抗变换器 实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &负阻抗变换器实验内容::groupBox8_Enter);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(240, 1070);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 38);
			this->button3->TabIndex = 164;
			this->button3->Text = L"曲线生成";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &负阻抗变换器实验内容::button3_Click);
			// 
			// chartTrial1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTrial1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTrial1->Legends->Add(legend1);
			this->chartTrial1->Location = System::Drawing::Point(353, 1068);
			this->chartTrial1->Name = L"chartTrial1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartTrial1->Series->Add(series1);
			this->chartTrial1->Size = System::Drawing::Size(457, 327);
			this->chartTrial1->TabIndex = 163;
			this->chartTrial1->Text = L"chart1";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(47, 1028);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(468, 27);
			this->label17->TabIndex = 162;
			this->label17->Text = L"（5）绘制负阻的伏安特性曲线   U1＝ F（I1）";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(241, 955);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(113, 58);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 161;
			this->pictureBox4->TabStop = false;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(82, 970);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 27);
			this->label16->TabIndex = 160;
			this->label16->Text = L"电流增益：";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(398, 877);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(172, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 159;
			this->pictureBox3->TabStop = false;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(220, 896);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(136, 27);
			this->label15->TabIndex = 158;
			this->label15->Text = L"　理论计算值";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(399, 795);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 157;
			this->pictureBox2->TabStop = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(84, 806);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(234, 27);
			this->label14->TabIndex = 156;
			this->label14->Text = L"等效负阻：　　　实测值    ";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(6, 633);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1161, 158);
			this->label13->TabIndex = 155;
			this->label13->Text = L"    （1）调节负载电阻箱的电阻值，令 RL＝300Ω。\r\n\r\n    （2）令直流稳压源的输出电压在（0~1）V范围内的不同值时，分别测量INIC的输入电压U"
				L"1及输入电流I1。\r\n\r\n    （3）令 RL＝600Ω，重复上述的测量。\r\n\r\n    （4）计算：";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(642, 514);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 27);
			this->button2->TabIndex = 154;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_600_I1
			// 
			this->labelTrial1_600_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1->Location = System::Drawing::Point(353, 514);
			this->labelTrial1_600_I1->Name = L"labelTrial1_600_I1";
			this->labelTrial1_600_I1->Size = System::Drawing::Size(283, 25);
			this->labelTrial1_600_I1->TabIndex = 153;
			this->labelTrial1_600_I1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(146, 553);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(191, 25);
			this->label8->TabIndex = 152;
			this->label8->Text = L"R_（KΩ）";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(146, 514);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(191, 25);
			this->label12->TabIndex = 151;
			this->label12->Text = L"I1（mA）";
			// 
			// textBoxTrial1_600_R_
			// 
			this->textBoxTrial1_600_R_->Location = System::Drawing::Point(353, 551);
			this->textBoxTrial1_600_R_->Name = L"textBoxTrial1_600_R_";
			this->textBoxTrial1_600_R_->Size = System::Drawing::Size(283, 30);
			this->textBoxTrial1_600_R_->TabIndex = 150;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(642, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 27);
			this->button1->TabIndex = 149;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_600_U1
			// 
			this->labelTrial1_600_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1->Location = System::Drawing::Point(353, 473);
			this->labelTrial1_600_U1->Name = L"labelTrial1_600_U1";
			this->labelTrial1_600_U1->Size = System::Drawing::Size(283, 25);
			this->labelTrial1_600_U1->TabIndex = 148;
			this->labelTrial1_600_U1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(642, 395);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(97, 27);
			this->button29->TabIndex = 147;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_300_I1
			// 
			this->labelTrial1_300_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1->Location = System::Drawing::Point(353, 395);
			this->labelTrial1_300_I1->Name = L"labelTrial1_300_I1";
			this->labelTrial1_300_I1->Size = System::Drawing::Size(283, 25);
			this->labelTrial1_300_I1->TabIndex = 146;
			this->labelTrial1_300_I1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(146, 434);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 25);
			this->label4->TabIndex = 145;
			this->label4->Text = L"R_（KΩ）";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(146, 395);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 25);
			this->label3->TabIndex = 144;
			this->label3->Text = L"I1（mA）";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(23, 473);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 108);
			this->label11->TabIndex = 64;
			this->label11->Text = L"RL=600Ω";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(23, 356);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 103);
			this->label10->TabIndex = 63;
			this->label10->Text = L"RL=300Ω";
			// 
			// textBoxTrial1_300_R_
			// 
			this->textBoxTrial1_300_R_->Location = System::Drawing::Point(353, 432);
			this->textBoxTrial1_300_R_->Name = L"textBoxTrial1_300_R_";
			this->textBoxTrial1_300_R_->Size = System::Drawing::Size(283, 30);
			this->textBoxTrial1_300_R_->TabIndex = 62;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(642, 354);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 27);
			this->button9->TabIndex = 59;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(146, 473);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(191, 25);
			this->labelTrial1_U1_line1->TabIndex = 56;
			this->labelTrial1_U1_line1->Text = L"U1（v）";
			// 
			// labelTrial1_300_U1
			// 
			this->labelTrial1_300_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1->Location = System::Drawing::Point(353, 356);
			this->labelTrial1_300_U1->Name = L"labelTrial1_300_U1";
			this->labelTrial1_300_U1->Size = System::Drawing::Size(283, 25);
			this->labelTrial1_300_U1->TabIndex = 50;
			this->labelTrial1_300_U1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(146, 356);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 25);
			this->label9->TabIndex = 46;
			this->label9->Text = L"U1（v）";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(437, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"      图 20-4";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(353, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(359, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1161, 38);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1．测量负电阻的伏安特性，计算电流增益K及等值负阻。实验线路如图 20－4所示。    ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(504, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 25);
			this->label1->TabIndex = 85;
			this->label1->Text = L"负阻抗变换器 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox_2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->pictureBox_1);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label129);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->pictureBox8);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(21, 1508);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 1505);
			this->groupBox1->TabIndex = 87;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"负阻抗变换器 实验内容2";
			// 
			// pictureBox_2
			// 
			this->pictureBox_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_2.Image")));
			this->pictureBox_2->Location = System::Drawing::Point(158, 1029);
			this->pictureBox_2->Name = L"pictureBox_2";
			this->pictureBox_2->Size = System::Drawing::Size(605, 395);
			this->pictureBox_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_2->TabIndex = 293;
			this->pictureBox_2->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(10, 1029);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 27);
			this->button4->TabIndex = 292;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &负阻抗变换器实验内容::button4_Click);
			// 
			// pictureBox_1
			// 
			this->pictureBox_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_1.Image")));
			this->pictureBox_1->Location = System::Drawing::Point(158, 475);
			this->pictureBox_1->Name = L"pictureBox_1";
			this->pictureBox_1->Size = System::Drawing::Size(605, 395);
			this->pictureBox_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_1->TabIndex = 291;
			this->pictureBox_1->TabStop = false;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::SkyBlue;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(-5, 996);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1314, 12);
			this->label18->TabIndex = 290;
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(-5, 448);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 12);
			this->label129->TabIndex = 289;
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(10, 475);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 27);
			this->button8->TabIndex = 59;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(453, 385);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(199, 29);
			this->label35->TabIndex = 2;
			this->label35->Text = L"      图 20-5";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(369, 165);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(394, 195);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(24, 45);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(1161, 117);
			this->label36->TabIndex = 0;
			this->label36->Text = resources->GetString(L"label36.Text");
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::SkyBlue;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(12, 3062);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1314, 52);
			this->label19->TabIndex = 295;
			this->label19->Text = L"答题结束";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(566, 3020);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 294;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &负阻抗变换器实验内容::button102_Click);
			// 
			// 负阻抗变换器实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1434, 729);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"负阻抗变换器实验内容";
			this->Text = L"负阻抗变换器实验内容";
			this->Load += gcnew System::EventHandler(this, &负阻抗变换器实验内容::负阻抗变换器实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void SendData();
		public:ST_负阻抗变换器 Load_Grade_data();
		String ^picdir = gcnew String(BMPSAVEPATH);
		String ^PT_name1 = picdir + "负阻抗变换器_1.bmp";
		String ^PT_name2 = picdir + "负阻抗变换器_2.bmp";

	private: System::Void 负阻抗变换器实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(PT_name1);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(PT_name1))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBox_1->ImageLocation = PT_name1;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(PT_name2);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(PT_name2))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBox_2->ImageLocation = PT_name2;
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
};
}
