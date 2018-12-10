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
	/// 基尔霍夫定律实验内容 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验内容 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::GroupBox^  groupBox2;










	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button37;


	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  labelmeaUDE;


	private: System::Windows::Forms::Label^  labelmeaUCD;

	private: System::Windows::Forms::TextBox^  textBoxcalUDE;




















	private: System::Windows::Forms::TextBox^  textBoxcalUCD;


	private: System::Windows::Forms::TextBox^  textBoxcalUBC;


	private: System::Windows::Forms::TextBox^  textBoxcalUAB;


	private: System::Windows::Forms::TextBox^  textBoxcalUFA;


	private: System::Windows::Forms::TextBox^  textBoxcalU12;


	private: System::Windows::Forms::TextBox^  textBoxcalU11;


	private: System::Windows::Forms::TextBox^  textBoxcalI3;


	private: System::Windows::Forms::TextBox^  textBoxcalI2;


	private: System::Windows::Forms::TextBox^  textBoxcalI1;


	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  labelrelaUBC;

private: System::Windows::Forms::Label^  labelrelaUAB;

private: System::Windows::Forms::Label^  labelrelaUFA;

private: System::Windows::Forms::Label^  labelrelaU12;

private: System::Windows::Forms::Label^  labelrelaU11;

private: System::Windows::Forms::Label^  labelrelaI3;

private: System::Windows::Forms::Label^  labelrelaI2;

private: System::Windows::Forms::Label^  labelrelaI1;
private: System::Windows::Forms::Label^  labelrelaUDE;



private: System::Windows::Forms::Label^  labelrelaUCD;

private: System::Windows::Forms::Label^  labelmeaUBC;

private: System::Windows::Forms::Label^  labelmeaUAB;

private: System::Windows::Forms::Label^  labelmeaUFA;

private: System::Windows::Forms::Label^  labelmeaU12;

private: System::Windows::Forms::Label^  labelmeaU11;

private: System::Windows::Forms::Label^  labelmeaI3;

private: System::Windows::Forms::Label^  labelmeaI2;

private: System::Windows::Forms::Label^  labelmeaI1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxcalU11 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBoxcalU12 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->labelmeaU11 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->labelmeaU12 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->labelrelaU11 = (gcnew System::Windows::Forms::Label());
			this->labelrelaUBC = (gcnew System::Windows::Forms::Label());
			this->labelrelaU12 = (gcnew System::Windows::Forms::Label());
			this->labelrelaUAB = (gcnew System::Windows::Forms::Label());
			this->labelrelaUFA = (gcnew System::Windows::Forms::Label());
			this->labelrelaI3 = (gcnew System::Windows::Forms::Label());
			this->labelrelaI2 = (gcnew System::Windows::Forms::Label());
			this->labelrelaI1 = (gcnew System::Windows::Forms::Label());
			this->labelrelaUDE = (gcnew System::Windows::Forms::Label());
			this->labelrelaUCD = (gcnew System::Windows::Forms::Label());
			this->labelmeaUBC = (gcnew System::Windows::Forms::Label());
			this->labelmeaUAB = (gcnew System::Windows::Forms::Label());
			this->labelmeaUFA = (gcnew System::Windows::Forms::Label());
			this->labelmeaI3 = (gcnew System::Windows::Forms::Label());
			this->labelmeaI2 = (gcnew System::Windows::Forms::Label());
			this->labelmeaI1 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->labelmeaUDE = (gcnew System::Windows::Forms::Label());
			this->labelmeaUCD = (gcnew System::Windows::Forms::Label());
			this->textBoxcalUDE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalUCD = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalUBC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalUAB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalUFA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalI3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalI2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalI1 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 25);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(1296, 406);
			this->groupBox8->TabIndex = 79;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"基尔霍夫定律实验内容";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 54);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 64);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    实验前，认真接线，确认仪表工作在正确的量程，极性正接入，无误后再通电； \r\n\r\n    电源两端不可碰线短路。";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(24, 178);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(992, 208);
			this->label38->TabIndex = 7;
			this->label38->Text = resources->GetString(L"label38.Text");
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox结论);
			this->groupBox2->Controls->Add(this->label64);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->textBoxcalU11);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->textBoxcalU12);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->labelmeaU11);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->labelmeaU12);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->labelrelaU11);
			this->groupBox2->Controls->Add(this->labelrelaUBC);
			this->groupBox2->Controls->Add(this->labelrelaU12);
			this->groupBox2->Controls->Add(this->labelrelaUAB);
			this->groupBox2->Controls->Add(this->labelrelaUFA);
			this->groupBox2->Controls->Add(this->labelrelaI3);
			this->groupBox2->Controls->Add(this->labelrelaI2);
			this->groupBox2->Controls->Add(this->labelrelaI1);
			this->groupBox2->Controls->Add(this->labelrelaUDE);
			this->groupBox2->Controls->Add(this->labelrelaUCD);
			this->groupBox2->Controls->Add(this->labelmeaUBC);
			this->groupBox2->Controls->Add(this->labelmeaUAB);
			this->groupBox2->Controls->Add(this->labelmeaUFA);
			this->groupBox2->Controls->Add(this->labelmeaI3);
			this->groupBox2->Controls->Add(this->labelmeaI2);
			this->groupBox2->Controls->Add(this->labelmeaI1);
			this->groupBox2->Controls->Add(this->button41);
			this->groupBox2->Controls->Add(this->button40);
			this->groupBox2->Controls->Add(this->button39);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->labelmeaUDE);
			this->groupBox2->Controls->Add(this->labelmeaUCD);
			this->groupBox2->Controls->Add(this->textBoxcalUDE);
			this->groupBox2->Controls->Add(this->textBoxcalUCD);
			this->groupBox2->Controls->Add(this->textBoxcalUBC);
			this->groupBox2->Controls->Add(this->textBoxcalUAB);
			this->groupBox2->Controls->Add(this->textBoxcalUFA);
			this->groupBox2->Controls->Add(this->textBoxcalI3);
			this->groupBox2->Controls->Add(this->textBoxcalI2);
			this->groupBox2->Controls->Add(this->textBoxcalI1);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->label42);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 1019);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1293, 382);
			this->groupBox2->TabIndex = 81;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"测量数据";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(297, 175);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 29);
			this->button12->TabIndex = 128;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(203, 175);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 29);
			this->button13->TabIndex = 127;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button13_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1107, 269);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 29);
			this->button2->TabIndex = 126;
			this->button2->Text = L"计算";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1005, 269);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 29);
			this->button3->TabIndex = 125;
			this->button3->Text = L"计算";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(901, 269);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 29);
			this->button4->TabIndex = 124;
			this->button4->Text = L"计算";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(799, 269);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 29);
			this->button5->TabIndex = 123;
			this->button5->Text = L"计算";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(697, 269);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 29);
			this->button6->TabIndex = 122;
			this->button6->Text = L"计算";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(297, 269);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 29);
			this->button7->TabIndex = 121;
			this->button7->Text = L"计算";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(599, 269);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 29);
			this->button9->TabIndex = 119;
			this->button9->Text = L"计算";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(499, 269);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 29);
			this->button10->TabIndex = 118;
			this->button10->Text = L"计算";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button10_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(203, 269);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 29);
			this->button8->TabIndex = 120;
			this->button8->Text = L"计算";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button8_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(395, 269);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 29);
			this->button11->TabIndex = 117;
			this->button11->Text = L"计算";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button11_Click);
			// 
			// label11
			// 
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(26, 175);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 22);
			this->label11->TabIndex = 116;
			this->label11->Text = L"直流电流表2";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(197, 312);
			this->textBox结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1001, 28);
			this->textBox结论->TabIndex = 109;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(33, 315);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 108;
			this->label64->Text = L"实验结论";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Location = System::Drawing::Point(901, 39);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 22);
			this->label20->TabIndex = 97;
			this->label20->Text = L"UBC";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Location = System::Drawing::Point(799, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 22);
			this->label21->TabIndex = 96;
			this->label21->Text = L"UAB";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Location = System::Drawing::Point(203, 39);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 22);
			this->label24->TabIndex = 93;
			this->label24->Text = L"U11";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Location = System::Drawing::Point(697, 39);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 22);
			this->label22->TabIndex = 95;
			this->label22->Text = L"UFA";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxcalU11
			// 
			this->textBoxcalU11->Location = System::Drawing::Point(203, 88);
			this->textBoxcalU11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalU11->Name = L"textBoxcalU11";
			this->textBoxcalU11->Size = System::Drawing::Size(89, 30);
			this->textBoxcalU11->TabIndex = 14;
			this->textBoxcalU11->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalU11_TextChanged);
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(599, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 22);
			this->label25->TabIndex = 92;
			this->label25->Text = L"I3(mA)";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxcalU12
			// 
			this->textBoxcalU12->Location = System::Drawing::Point(297, 88);
			this->textBoxcalU12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalU12->Name = L"textBoxcalU12";
			this->textBoxcalU12->Size = System::Drawing::Size(93, 30);
			this->textBoxcalU12->TabIndex = 16;
			this->textBoxcalU12->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalU12_TextChanged);
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(499, 39);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 22);
			this->label26->TabIndex = 91;
			this->label26->Text = L"I2(mA)";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(398, 39);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 22);
			this->label27->TabIndex = 90;
			this->label27->Text = L"I1(mA)";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Location = System::Drawing::Point(1107, 39);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(93, 22);
			this->label28->TabIndex = 89;
			this->label28->Text = L"UDE";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Location = System::Drawing::Point(297, 39);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 22);
			this->label23->TabIndex = 94;
			this->label23->Text = L"U12";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaU11
			// 
			this->labelmeaU11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaU11->Location = System::Drawing::Point(203, 146);
			this->labelmeaU11->Name = L"labelmeaU11";
			this->labelmeaU11->Size = System::Drawing::Size(89, 22);
			this->labelmeaU11->TabIndex = 72;
			this->labelmeaU11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Location = System::Drawing::Point(1005, 39);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(93, 22);
			this->label29->TabIndex = 88;
			this->label29->Text = L"UCD";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaU12
			// 
			this->labelmeaU12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaU12->Location = System::Drawing::Point(297, 146);
			this->labelmeaU12->Name = L"labelmeaU12";
			this->labelmeaU12->Size = System::Drawing::Size(93, 22);
			this->labelmeaU12->TabIndex = 73;
			this->labelmeaU12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(104, 22);
			this->label19->TabIndex = 87;
			this->label19->Text = L"被测量";
			// 
			// labelrelaU11
			// 
			this->labelrelaU11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaU11->Location = System::Drawing::Point(203, 235);
			this->labelrelaU11->Name = L"labelrelaU11";
			this->labelrelaU11->Size = System::Drawing::Size(89, 22);
			this->labelrelaU11->TabIndex = 82;
			this->labelrelaU11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUBC
			// 
			this->labelrelaUBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUBC->Location = System::Drawing::Point(901, 235);
			this->labelrelaUBC->Name = L"labelrelaUBC";
			this->labelrelaUBC->Size = System::Drawing::Size(93, 22);
			this->labelrelaUBC->TabIndex = 86;
			this->labelrelaUBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaU12
			// 
			this->labelrelaU12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaU12->Location = System::Drawing::Point(297, 235);
			this->labelrelaU12->Name = L"labelrelaU12";
			this->labelrelaU12->Size = System::Drawing::Size(93, 22);
			this->labelrelaU12->TabIndex = 83;
			this->labelrelaU12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUAB
			// 
			this->labelrelaUAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUAB->Location = System::Drawing::Point(799, 235);
			this->labelrelaUAB->Name = L"labelrelaUAB";
			this->labelrelaUAB->Size = System::Drawing::Size(93, 22);
			this->labelrelaUAB->TabIndex = 85;
			this->labelrelaUAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUFA
			// 
			this->labelrelaUFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUFA->Location = System::Drawing::Point(697, 235);
			this->labelrelaUFA->Name = L"labelrelaUFA";
			this->labelrelaUFA->Size = System::Drawing::Size(93, 22);
			this->labelrelaUFA->TabIndex = 84;
			this->labelrelaUFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaI3
			// 
			this->labelrelaI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaI3->Location = System::Drawing::Point(599, 235);
			this->labelrelaI3->Name = L"labelrelaI3";
			this->labelrelaI3->Size = System::Drawing::Size(92, 22);
			this->labelrelaI3->TabIndex = 81;
			this->labelrelaI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaI2
			// 
			this->labelrelaI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaI2->Location = System::Drawing::Point(499, 235);
			this->labelrelaI2->Name = L"labelrelaI2";
			this->labelrelaI2->Size = System::Drawing::Size(93, 22);
			this->labelrelaI2->TabIndex = 80;
			this->labelrelaI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaI1
			// 
			this->labelrelaI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaI1->Location = System::Drawing::Point(398, 235);
			this->labelrelaI1->Name = L"labelrelaI1";
			this->labelrelaI1->Size = System::Drawing::Size(93, 22);
			this->labelrelaI1->TabIndex = 79;
			this->labelrelaI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUDE
			// 
			this->labelrelaUDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUDE->Location = System::Drawing::Point(1107, 235);
			this->labelrelaUDE->Name = L"labelrelaUDE";
			this->labelrelaUDE->Size = System::Drawing::Size(93, 22);
			this->labelrelaUDE->TabIndex = 78;
			this->labelrelaUDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUCD
			// 
			this->labelrelaUCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUCD->Location = System::Drawing::Point(1005, 235);
			this->labelrelaUCD->Name = L"labelrelaUCD";
			this->labelrelaUCD->Size = System::Drawing::Size(93, 22);
			this->labelrelaUCD->TabIndex = 77;
			this->labelrelaUCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUBC
			// 
			this->labelmeaUBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUBC->Location = System::Drawing::Point(901, 146);
			this->labelmeaUBC->Name = L"labelmeaUBC";
			this->labelmeaUBC->Size = System::Drawing::Size(93, 22);
			this->labelmeaUBC->TabIndex = 76;
			this->labelmeaUBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUAB
			// 
			this->labelmeaUAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUAB->Location = System::Drawing::Point(799, 146);
			this->labelmeaUAB->Name = L"labelmeaUAB";
			this->labelmeaUAB->Size = System::Drawing::Size(93, 22);
			this->labelmeaUAB->TabIndex = 75;
			this->labelmeaUAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUFA
			// 
			this->labelmeaUFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUFA->Location = System::Drawing::Point(697, 146);
			this->labelmeaUFA->Name = L"labelmeaUFA";
			this->labelmeaUFA->Size = System::Drawing::Size(93, 22);
			this->labelmeaUFA->TabIndex = 74;
			this->labelmeaUFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaI3
			// 
			this->labelmeaI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaI3->Location = System::Drawing::Point(599, 146);
			this->labelmeaI3->Name = L"labelmeaI3";
			this->labelmeaI3->Size = System::Drawing::Size(92, 22);
			this->labelmeaI3->TabIndex = 71;
			this->labelmeaI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaI2
			// 
			this->labelmeaI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaI2->Location = System::Drawing::Point(499, 146);
			this->labelmeaI2->Name = L"labelmeaI2";
			this->labelmeaI2->Size = System::Drawing::Size(93, 22);
			this->labelmeaI2->TabIndex = 70;
			this->labelmeaI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaI1
			// 
			this->labelmeaI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaI1->Location = System::Drawing::Point(398, 146);
			this->labelmeaI1->Name = L"labelmeaI1";
			this->labelmeaI1->Size = System::Drawing::Size(93, 22);
			this->labelmeaI1->TabIndex = 69;
			this->labelmeaI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(1107, 175);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 29);
			this->button41->TabIndex = 58;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button41_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(1005, 175);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 29);
			this->button40->TabIndex = 57;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button40_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(901, 175);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 29);
			this->button39->TabIndex = 56;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button39_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(799, 175);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 29);
			this->button38->TabIndex = 55;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button38_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(697, 175);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 29);
			this->button37->TabIndex = 54;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button37_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(599, 175);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 29);
			this->button34->TabIndex = 51;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button34_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(499, 175);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 29);
			this->button33->TabIndex = 50;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button33_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(395, 175);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 29);
			this->button32->TabIndex = 49;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button32_Click);
			// 
			// labelmeaUDE
			// 
			this->labelmeaUDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUDE->Location = System::Drawing::Point(1107, 146);
			this->labelmeaUDE->Name = L"labelmeaUDE";
			this->labelmeaUDE->Size = System::Drawing::Size(93, 22);
			this->labelmeaUDE->TabIndex = 47;
			this->labelmeaUDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUCD
			// 
			this->labelmeaUCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUCD->Location = System::Drawing::Point(1005, 146);
			this->labelmeaUCD->Name = L"labelmeaUCD";
			this->labelmeaUCD->Size = System::Drawing::Size(93, 22);
			this->labelmeaUCD->TabIndex = 46;
			this->labelmeaUCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxcalUDE
			// 
			this->textBoxcalUDE->Location = System::Drawing::Point(1107, 88);
			this->textBoxcalUDE->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalUDE->Name = L"textBoxcalUDE";
			this->textBoxcalUDE->Size = System::Drawing::Size(93, 30);
			this->textBoxcalUDE->TabIndex = 26;
			this->textBoxcalUDE->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalUDE_TextChanged);
			// 
			// textBoxcalUCD
			// 
			this->textBoxcalUCD->Location = System::Drawing::Point(1005, 88);
			this->textBoxcalUCD->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalUCD->Name = L"textBoxcalUCD";
			this->textBoxcalUCD->Size = System::Drawing::Size(93, 30);
			this->textBoxcalUCD->TabIndex = 24;
			this->textBoxcalUCD->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalUCD_TextChanged);
			// 
			// textBoxcalUBC
			// 
			this->textBoxcalUBC->Location = System::Drawing::Point(901, 88);
			this->textBoxcalUBC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalUBC->Name = L"textBoxcalUBC";
			this->textBoxcalUBC->Size = System::Drawing::Size(97, 30);
			this->textBoxcalUBC->TabIndex = 22;
			this->textBoxcalUBC->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalUBC_TextChanged);
			// 
			// textBoxcalUAB
			// 
			this->textBoxcalUAB->Location = System::Drawing::Point(799, 88);
			this->textBoxcalUAB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalUAB->Name = L"textBoxcalUAB";
			this->textBoxcalUAB->Size = System::Drawing::Size(93, 30);
			this->textBoxcalUAB->TabIndex = 20;
			this->textBoxcalUAB->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalUAB_TextChanged);
			// 
			// textBoxcalUFA
			// 
			this->textBoxcalUFA->Location = System::Drawing::Point(697, 88);
			this->textBoxcalUFA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalUFA->Name = L"textBoxcalUFA";
			this->textBoxcalUFA->Size = System::Drawing::Size(93, 30);
			this->textBoxcalUFA->TabIndex = 18;
			this->textBoxcalUFA->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalUFA_TextChanged);
			// 
			// textBoxcalI3
			// 
			this->textBoxcalI3->Location = System::Drawing::Point(598, 88);
			this->textBoxcalI3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalI3->Name = L"textBoxcalI3";
			this->textBoxcalI3->Size = System::Drawing::Size(93, 30);
			this->textBoxcalI3->TabIndex = 12;
			this->textBoxcalI3->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalI3_TextChanged);
			// 
			// textBoxcalI2
			// 
			this->textBoxcalI2->Location = System::Drawing::Point(499, 88);
			this->textBoxcalI2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalI2->Name = L"textBoxcalI2";
			this->textBoxcalI2->Size = System::Drawing::Size(93, 30);
			this->textBoxcalI2->TabIndex = 10;
			this->textBoxcalI2->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalI2_TextChanged);
			// 
			// textBoxcalI1
			// 
			this->textBoxcalI1->Location = System::Drawing::Point(395, 88);
			this->textBoxcalI1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxcalI1->Name = L"textBoxcalI1";
			this->textBoxcalI1->Size = System::Drawing::Size(93, 30);
			this->textBoxcalI1->TabIndex = 8;
			this->textBoxcalI1->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBoxcalI1_TextChanged);
			// 
			// label40
			// 
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(33, 236);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(115, 22);
			this->label40->TabIndex = 7;
			this->label40->Text = L"相对误差";
			// 
			// label41
			// 
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(33, 148);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(91, 22);
			this->label41->TabIndex = 6;
			this->label41->Text = L"测量值";
			// 
			// label42
			// 
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(33, 90);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(104, 22);
			this->label42->TabIndex = 5;
			this->label42->Text = L"计算值";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(665, 1405);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 39);
			this->button1->TabIndex = 98;
			this->button1->Text = L"成绩完成并上传";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(49, 472);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 469);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 82;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(737, 685);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(200, 200);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 83;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1096, 685);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 200);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 84;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(227, 958);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 85;
			this->label1->Text = L"图1电路图";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(939, 948);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 20);
			this->label2->TabIndex = 86;
			this->label2->Text = L"图2电流检测头";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(811, 888);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 20);
			this->label3->TabIndex = 87;
			this->label3->Text = L"公头";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1176, 888);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 20);
			this->label4->TabIndex = 88;
			this->label4->Text = L"母头";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::SkyBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(8, 1453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1525, 52);
			this->label5->TabIndex = 112;
			this->label5->Text = L"答题结束";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// 基尔霍夫定律实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1543, 823);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"基尔霍夫定律实验内容";
			this->Text = L"基尔霍夫定律实验内容";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::基尔霍夫定律实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SendGrade();
	}

			public: ST_基尔霍夫定律 Load_Grade_data();
			public: void SendGrade();
private: System::Void 基尔霍夫定律实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaI1->Text = global::GetI500Data();
}


private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaI2->Text = global::GetI500Data();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaI3->Text = global::GetI500Data();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaU11->Text = textBoxcalU11->Text;
	SetDVNum(textBoxcalU11->Text, 0, 30);
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaU12->Text = textBoxcalU12->Text;
	SetDVNum(textBoxcalU12->Text, 0, 30);
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaUFA->Text = global::GetU30_U400VData();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaUAB->Text = global::GetU30_U400VData();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaUBC->Text = global::GetU30_U400VData();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaUCD->Text = global::GetU30_U400VData();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaUDE->Text = global::GetU30_U400VData();
}
		 void Calculation(TextBox^ t1, Label^ l1, Label^ld) {
			 try {
				 float a = Convert::ToSingle(t1->Text);
				 float b = Convert::ToSingle(l1->Text);
				 ld->Text = (a - b).ToString();
			 }
			 catch (Exception^e) {
				 ld->Text = "计算失败";
			 }
		 }
private: System::Void textBoxcalI1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalI1,labelmeaI1,labelrelaI1);
}
private: System::Void textBoxcalI2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalI2, labelmeaI2, labelrelaI2);
}
private: System::Void textBoxcalI3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalI3, labelmeaI3, labelrelaI3);
}
private: System::Void textBoxcalU11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalU11, labelmeaU11, labelrelaU11);
}
private: System::Void textBoxcalU12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalU12, labelmeaU12, labelrelaU12);
}
private: System::Void textBoxcalUFA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUFA, labelmeaUFA, labelrelaUFA);
}
private: System::Void textBoxcalUAB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUAB, labelmeaUAB, labelrelaUAB);
}
private: System::Void textBoxcalUBC_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUBC, labelmeaUBC, labelrelaUBC);
}
private: System::Void textBoxcalUCD_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUCD, labelmeaUCD, labelrelaUCD);
}
private: System::Void textBoxcalUDE_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUDE, labelmeaUDE, labelrelaUDE);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalI1, labelmeaI1, labelrelaI1);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalI2, labelmeaI2, labelrelaI2);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalI3, labelmeaI3, labelrelaI3);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalU11, labelmeaU11, labelrelaU11);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalU12, labelmeaU12, labelrelaU12);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUFA, labelmeaUFA, labelrelaUFA);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUAB, labelmeaUAB, labelrelaUAB);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUBC, labelmeaUBC, labelrelaUBC);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUCD, labelmeaUCD, labelrelaUCD);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculation(textBoxcalUDE, labelmeaUDE, labelrelaUDE);
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaU11->Text = global::GetU30_U400VData();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelmeaU12->Text = global::GetU30_U400VData();
}
};
}
