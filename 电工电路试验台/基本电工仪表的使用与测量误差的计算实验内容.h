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
	/// 基本电工仪表的使用与测量误差的计算实验内容 摘要
	/// </summary>
	public ref class 基本电工仪表的使用与测量误差的计算实验内容 : public System::Windows::Forms::Form
	{
	public:
		基本电工仪表的使用与测量误差的计算实验内容(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		ST_基本电工仪表的使用与测量误差的计算 Load_Grade_data();
		void SendData();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基本电工仪表的使用与测量误差的计算实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  labelTrial1_IA_5mA;

	protected:
































	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_RB_5mA;


















	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_RA_5V;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RA_5mA;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_R1_5V;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_R1_5mA;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RB_5V;

	private: System::Windows::Forms::Label^  labelTrial1_IA1_5V;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelTrial1_IA1_5mA;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  labelTrial1_IA_5V;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label50;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基本电工仪表的使用与测量误差的计算实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial1_RA_5V = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RA_5mA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_R1_5V = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_R1_5mA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RB_5V = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_IA1_5V = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_IA1_5mA = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_IA_5V = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelTrial1_IA_5mA = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_RB_5mA = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label50);
			this->groupBox8->Controls->Add(this->textBoxTrial1_RA_5V);
			this->groupBox8->Controls->Add(this->textBoxTrial1_RA_5mA);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R1_5V);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R1_5mA);
			this->groupBox8->Controls->Add(this->textBoxTrial1_RB_5V);
			this->groupBox8->Controls->Add(this->labelTrial1_IA1_5V);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->labelTrial1_IA1_5mA);
			this->groupBox8->Controls->Add(this->button10);
			this->groupBox8->Controls->Add(this->labelTrial1_IA_5V);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->labelTrial1_IA_5mA);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->textBoxTrial1_RB_5mA);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(56, 92);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1247, 690);
			this->groupBox8->TabIndex = 88;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"基本电工仪表的使用与测量误差的计算 实验内容1";
			// 
			// textBoxTrial1_RA_5V
			// 
			this->textBoxTrial1_RA_5V->Location = System::Drawing::Point(932, 609);
			this->textBoxTrial1_RA_5V->Name = L"textBoxTrial1_RA_5V";
			this->textBoxTrial1_RA_5V->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial1_RA_5V->TabIndex = 178;
			// 
			// textBoxTrial1_RA_5mA
			// 
			this->textBoxTrial1_RA_5mA->Location = System::Drawing::Point(932, 530);
			this->textBoxTrial1_RA_5mA->Name = L"textBoxTrial1_RA_5mA";
			this->textBoxTrial1_RA_5mA->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial1_RA_5mA->TabIndex = 177;
			// 
			// textBoxTrial1_R1_5V
			// 
			this->textBoxTrial1_R1_5V->Location = System::Drawing::Point(811, 605);
			this->textBoxTrial1_R1_5V->Name = L"textBoxTrial1_R1_5V";
			this->textBoxTrial1_R1_5V->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial1_R1_5V->TabIndex = 176;
			// 
			// textBoxTrial1_R1_5mA
			// 
			this->textBoxTrial1_R1_5mA->Location = System::Drawing::Point(811, 526);
			this->textBoxTrial1_R1_5mA->Name = L"textBoxTrial1_R1_5mA";
			this->textBoxTrial1_R1_5mA->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial1_R1_5mA->TabIndex = 175;
			// 
			// textBoxTrial1_RB_5V
			// 
			this->textBoxTrial1_RB_5V->Location = System::Drawing::Point(703, 606);
			this->textBoxTrial1_RB_5V->Name = L"textBoxTrial1_RB_5V";
			this->textBoxTrial1_RB_5V->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial1_RB_5V->TabIndex = 174;
			// 
			// labelTrial1_IA1_5V
			// 
			this->labelTrial1_IA1_5V->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IA1_5V->Location = System::Drawing::Point(453, 610);
			this->labelTrial1_IA1_5V->Name = L"labelTrial1_IA1_5V";
			this->labelTrial1_IA1_5V->Size = System::Drawing::Size(243, 27);
			this->labelTrial1_IA1_5V->TabIndex = 173;
			this->labelTrial1_IA1_5V->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(453, 651);
			this->button9->Name = L"button9";
			this->button9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button9->Size = System::Drawing::Size(243, 29);
			this->button9->TabIndex = 172;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &基本电工仪表的使用与测量误差的计算实验内容::button9_Click);
			// 
			// labelTrial1_IA1_5mA
			// 
			this->labelTrial1_IA1_5mA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IA1_5mA->Location = System::Drawing::Point(454, 530);
			this->labelTrial1_IA1_5mA->Name = L"labelTrial1_IA1_5mA";
			this->labelTrial1_IA1_5mA->Size = System::Drawing::Size(243, 27);
			this->labelTrial1_IA1_5mA->TabIndex = 171;
			this->labelTrial1_IA1_5mA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(454, 571);
			this->button10->Name = L"button10";
			this->button10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button10->Size = System::Drawing::Size(243, 29);
			this->button10->TabIndex = 170;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &基本电工仪表的使用与测量误差的计算实验内容::button10_Click);
			// 
			// labelTrial1_IA_5V
			// 
			this->labelTrial1_IA_5V->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IA_5V->Location = System::Drawing::Point(241, 610);
			this->labelTrial1_IA_5V->Name = L"labelTrial1_IA_5V";
			this->labelTrial1_IA_5V->Size = System::Drawing::Size(197, 27);
			this->labelTrial1_IA_5V->TabIndex = 169;
			this->labelTrial1_IA_5V->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(241, 651);
			this->button16->Name = L"button16";
			this->button16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button16->Size = System::Drawing::Size(197, 29);
			this->button16->TabIndex = 168;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &基本电工仪表的使用与测量误差的计算实验内容::button16_Click);
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(55, 609);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 27);
			this->label5->TabIndex = 167;
			this->label5->Text = L"5V";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(932, 487);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 27);
			this->label4->TabIndex = 166;
			this->label4->Text = L"计算内阻RA（Ω）";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(811, 487);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 27);
			this->label10->TabIndex = 165;
			this->label10->Text = L"R1（Ω）";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(703, 487);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 27);
			this->label9->TabIndex = 164;
			this->label9->Text = L"RB（Ω）";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(454, 487);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(243, 27);
			this->label8->TabIndex = 163;
			this->label8->Text = L"S闭合断开时的I′A（mA）";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(241, 487);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(198, 27);
			this->label7->TabIndex = 162;
			this->label7->Text = L"S断开时的IA（mA）";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(459, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 333);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 161;
			this->pictureBox1->TabStop = false;
			// 
			// labelTrial1_IA_5mA
			// 
			this->labelTrial1_IA_5mA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IA_5mA->Location = System::Drawing::Point(242, 530);
			this->labelTrial1_IA_5mA->Name = L"labelTrial1_IA_5mA";
			this->labelTrial1_IA_5mA->Size = System::Drawing::Size(197, 27);
			this->labelTrial1_IA_5mA->TabIndex = 145;
			this->labelTrial1_IA_5mA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(242, 571);
			this->button15->Name = L"button15";
			this->button15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button15->Size = System::Drawing::Size(197, 29);
			this->button15->TabIndex = 71;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &基本电工仪表的使用与测量误差的计算实验内容::button15_Click);
			// 
			// textBoxTrial1_RB_5mA
			// 
			this->textBoxTrial1_RB_5mA->Location = System::Drawing::Point(703, 527);
			this->textBoxTrial1_RB_5mA->Name = L"textBoxTrial1_RB_5mA";
			this->textBoxTrial1_RB_5mA->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial1_RB_5mA->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(55, 529);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"5mA";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(55, 487);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"被测电流表量限";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1119, 31);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1．根据“分流法”原理测定直流毫安5mA档量限的内阻，线路如图24－1所示。 ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(392, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(572, 25);
			this->label1->TabIndex = 87;
			this->label1->Text = L"基本电工仪表的使用与测量误差的计算 实验内容";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(20, 830);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 50);
			this->label129->TabIndex = 197;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(574, 788);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 37);
			this->button102->TabIndex = 196;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &基本电工仪表的使用与测量误差的计算实验内容::button102_Click);
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->ForeColor = System::Drawing::Color::Lime;
			this->label50->Location = System::Drawing::Point(55, 571);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(160, 28);
			this->label50->TabIndex = 392;
			this->label50->Text = L"直流电流表2";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(55, 651);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 28);
			this->label6->TabIndex = 393;
			this->label6->Text = L"直流电压表3";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// 基本电工仪表的使用与测量误差的计算实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1613, 788);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button102);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"基本电工仪表的使用与测量误差的计算实验内容";
			this->Text = L"基本电工仪表的使用与测量误差的计算实验内容";
			this->Load += gcnew System::EventHandler(this, &基本电工仪表的使用与测量误差的计算实验内容::基本电工仪表的使用与测量误差的计算实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 基本电工仪表的使用与测量误差的计算实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_IA_5mA->Text = global::GetI500Data();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_IA_5V->Text = global::GetI500Data();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_IA1_5mA->Text = global::GetI500Data();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_IA1_5V->Text = global::GetI500Data();
}
};
}
