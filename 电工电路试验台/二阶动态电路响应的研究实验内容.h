#pragma once
#include "tool/tool.h"

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// 二阶动态电路响应的研究实验内容 摘要
	/// </summary>
	public ref class 二阶动态电路响应的研究实验内容 : public System::Windows::Forms::Form
	{
	public:
		二阶动态电路响应的研究实验内容(void)
		{
			InitializeComponent();
			File::Delete(Trial1_1PT_name);
			File::Delete(Trial1_2PT_name);
			File::Delete(Trial1_3PT_name);
			File::Delete(Trial2_1PT_name);
			File::Delete(Trial3_1PT_name);
			File::Delete(Trial3_2PT_name);
			File::Delete(Trial3_3PT_name);
			File::Delete(Trial3_4PT_name);
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~二阶动态电路响应的研究实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_3;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_1;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_w;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_α;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_1;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox3;















	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_4w;

	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_4α;

	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_4;

	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_3w;

	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_3α;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_3;

	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::TextBox^  textBoxTrial3_2w;

	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  textBoxTrial3_2α;

	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_2;

	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::TextBox^  textBoxTrial3_1w;


	private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  textBoxTrial3_1α;


	private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_1;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Label^  label105;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(二阶动态电路响应的研究实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxtrial2_w = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial2_α = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_4w = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_4α = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_3w = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_3α = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_2w = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_2α = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_1w = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_1α = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 12);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 663);
			this->groupBox8->TabIndex = 82;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"戴维南定律实验内容";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(312, 143);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(510, 347);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(63, 556);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(913, 77);
			this->label1->TabIndex = 1;
			this->label1->Text = L"    令R1=10KΩ，L＝4.7mH，C＝1000PF，R2为10KΩ可调电阻，（K1、K15、K11、K5闭合，其他断开）令脉冲信号发生器的输出为Um＝1V"
				L"，F＝1KHz的方波脉冲，通过同轴电缆接至上图的激励端，同时用同轴电缆将激励端和响应输出接至双踪示波器的YA和YB两个输入口。";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(63, 62);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 55);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    动态电路实验板与一阶电路的响应测试相同，利用动态电路板中的元件与开关的配合作用，组成如图7－1所示的GCL并联电路。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 713);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 1816);
			this->groupBox2->TabIndex = 91;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(63, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(913, 53);
			this->label6->TabIndex = 3;
			this->label6->Text = L"    1．调节可变电阻器R2之值，观察二阶电路的零输入响应和零状态响应由过阻尼过渡到临界阻尼，最后过渡到欠阻尼的过渡变化过程，分别定性地描绘、记录响应的典型变化"
				L"波形。";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(487, 1765);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 25);
			this->label4->TabIndex = 99;
			this->label4->Text = L"欠阻尼";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(911, 1759);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 33);
			this->button3->TabIndex = 98;
			this->button3->Text = L"获取波形";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button3_Click);
			// 
			// pictureBoxTrial1_3
			// 
			this->pictureBoxTrial1_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_3.Image")));
			this->pictureBoxTrial1_3->Location = System::Drawing::Point(37, 1250);
			this->pictureBoxTrial1_3->Name = L"pictureBoxTrial1_3";
			this->pictureBoxTrial1_3->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial1_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_3->TabIndex = 96;
			this->pictureBoxTrial1_3->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(900, 1187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 33);
			this->button2->TabIndex = 95;
			this->button2->Text = L"获取波形";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button2_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(487, 1184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 94;
			this->label2->Text = L"临界阻尼";
			// 
			// pictureBoxTrial1_2
			// 
			this->pictureBoxTrial1_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_2.Image")));
			this->pictureBoxTrial1_2->Location = System::Drawing::Point(37, 683);
			this->pictureBoxTrial1_2->Name = L"pictureBoxTrial1_2";
			this->pictureBoxTrial1_2->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial1_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_2->TabIndex = 93;
			this->pictureBoxTrial1_2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(931, 610);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 33);
			this->button1->TabIndex = 92;
			this->button1->Text = L"获取波形";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button1_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(487, 616);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 25);
			this->label3->TabIndex = 90;
			this->label3->Text = L"过阻尼";
			// 
			// pictureBoxTrial1_1
			// 
			this->pictureBoxTrial1_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_1.Image")));
			this->pictureBoxTrial1_1->Location = System::Drawing::Point(37, 105);
			this->pictureBoxTrial1_1->Name = L"pictureBoxTrial1_1";
			this->pictureBoxTrial1_1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial1_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_1->TabIndex = 89;
			this->pictureBoxTrial1_1->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::SkyBlue;
			this->label5->Location = System::Drawing::Point(9, 682);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1447, 10);
			this->label5->TabIndex = 185;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxtrial2_w);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBoxtrial2_α);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 2579);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 755);
			this->groupBox1->TabIndex = 186;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			// 
			// textBoxtrial2_w
			// 
			this->textBoxtrial2_w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrial2_w->Location = System::Drawing::Point(229, 665);
			this->textBoxtrial2_w->Name = L"textBoxtrial2_w";
			this->textBoxtrial2_w->Size = System::Drawing::Size(284, 30);
			this->textBoxtrial2_w->TabIndex = 94;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(83, 665);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 25);
			this->label8->TabIndex = 93;
			this->label8->Text = L"振荡频率ωd";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(966, 610);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 34);
			this->button4->TabIndex = 92;
			this->button4->Text = L"获取波形";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button4_Click);
			// 
			// textBoxtrial2_α
			// 
			this->textBoxtrial2_α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrial2_α->Location = System::Drawing::Point(223, 614);
			this->textBoxtrial2_α->Name = L"textBoxtrial2_α";
			this->textBoxtrial2_α->Size = System::Drawing::Size(284, 30);
			this->textBoxtrial2_α->TabIndex = 91;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(77, 619);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 25);
			this->label7->TabIndex = 90;
			this->label7->Text = L"衰减常数α";
			this->label7->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::label7_Click);
			// 
			// pictureBoxTrial2_1
			// 
			this->pictureBoxTrial2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_1.Image")));
			this->pictureBoxTrial2_1->Location = System::Drawing::Point(72, 79);
			this->pictureBoxTrial2_1->Name = L"pictureBoxTrial2_1";
			this->pictureBoxTrial2_1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_1->TabIndex = 89;
			this->pictureBoxTrial2_1->TabStop = false;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1100, 37);
			this->label19->TabIndex = 87;
			this->label19->Text = L"    2．调节R2使示波器荧光屏上呈现稳定的欠阻尼响应波形，定量测定此时电路的衰减常数α和振荡频率ωd 。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox7);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 3340);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1296, 3250);
			this->groupBox3->TabIndex = 187;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验内容三";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBoxTrial3_4w);
			this->groupBox7->Controls->Add(this->label42);
			this->groupBox7->Controls->Add(this->textBoxTrial3_4α);
			this->groupBox7->Controls->Add(this->label43);
			this->groupBox7->Controls->Add(this->pictureBoxTrial3_4);
			this->groupBox7->Controls->Add(this->label44);
			this->groupBox7->Controls->Add(this->button8);
			this->groupBox7->Controls->Add(this->label45);
			this->groupBox7->Controls->Add(this->label46);
			this->groupBox7->Controls->Add(this->label47);
			this->groupBox7->Controls->Add(this->label48);
			this->groupBox7->Controls->Add(this->label49);
			this->groupBox7->Controls->Add(this->label50);
			this->groupBox7->Controls->Add(this->label51);
			this->groupBox7->Location = System::Drawing::Point(46, 2479);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(930, 748);
			this->groupBox7->TabIndex = 188;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"第四组";
			// 
			// textBoxTrial3_4w
			// 
			this->textBoxTrial3_4w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_4w->Location = System::Drawing::Point(192, 699);
			this->textBoxTrial3_4w->Name = L"textBoxTrial3_4w";
			this->textBoxTrial3_4w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_4w->TabIndex = 108;
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(46, 699);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(113, 25);
			this->label42->TabIndex = 107;
			this->label42->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_4α
			// 
			this->textBoxTrial3_4α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_4α->Location = System::Drawing::Point(192, 657);
			this->textBoxTrial3_4α->Name = L"textBoxTrial3_4α";
			this->textBoxTrial3_4α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_4α->TabIndex = 106;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(46, 662);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(113, 25);
			this->label43->TabIndex = 105;
			this->label43->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_4
			// 
			this->pictureBoxTrial3_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_4.Image")));
			this->pictureBoxTrial3_4->Location = System::Drawing::Point(41, 122);
			this->pictureBoxTrial3_4->Name = L"pictureBoxTrial3_4";
			this->pictureBoxTrial3_4->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial3_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_4->TabIndex = 104;
			this->pictureBoxTrial3_4->TabStop = false;
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(37, 37);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(92, 29);
			this->label44->TabIndex = 96;
			this->label44->Text = L"R1";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(749, 653);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 34);
			this->button8->TabIndex = 92;
			this->button8->Text = L"获取波形";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button8_Click);
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(549, 90);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(185, 29);
			this->label45->TabIndex = 103;
			this->label45->Text = L"0.01μF（K13）";
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(176, 37);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(92, 29);
			this->label46->TabIndex = 97;
			this->label46->Text = L"R2";
			// 
			// label47
			// 
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(374, 90);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(132, 29);
			this->label47->TabIndex = 102;
			this->label47->Text = L"4.7mH（K15）";
			// 
			// label48
			// 
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(374, 37);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(92, 29);
			this->label48->TabIndex = 98;
			this->label48->Text = L"L";
			// 
			// label49
			// 
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(176, 90);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(192, 29);
			this->label49->TabIndex = 101;
			this->label49->Text = L"调至某一欠阻尼态";
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(549, 37);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(92, 29);
			this->label50->TabIndex = 99;
			this->label50->Text = L"C";
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(37, 90);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(121, 29);
			this->label51->TabIndex = 100;
			this->label51->Text = L"30KΩ（K2）";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBoxTrial3_3w);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Controls->Add(this->textBoxTrial3_3α);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->pictureBoxTrial3_3);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Controls->Add(this->button7);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Controls->Add(this->label36);
			this->groupBox6->Controls->Add(this->label38);
			this->groupBox6->Controls->Add(this->label39);
			this->groupBox6->Controls->Add(this->label40);
			this->groupBox6->Controls->Add(this->label41);
			this->groupBox6->Location = System::Drawing::Point(46, 1697);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(930, 766);
			this->groupBox6->TabIndex = 106;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"第三组";
			// 
			// textBoxTrial3_3w
			// 
			this->textBoxTrial3_3w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_3w->Location = System::Drawing::Point(192, 729);
			this->textBoxTrial3_3w->Name = L"textBoxTrial3_3w";
			this->textBoxTrial3_3w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_3w->TabIndex = 108;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(46, 729);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(113, 25);
			this->label31->TabIndex = 107;
			this->label31->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_3α
			// 
			this->textBoxTrial3_3α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_3α->Location = System::Drawing::Point(192, 657);
			this->textBoxTrial3_3α->Name = L"textBoxTrial3_3α";
			this->textBoxTrial3_3α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_3α->TabIndex = 106;
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(46, 662);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(113, 25);
			this->label32->TabIndex = 105;
			this->label32->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_3
			// 
			this->pictureBoxTrial3_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_3.Image")));
			this->pictureBoxTrial3_3->Location = System::Drawing::Point(41, 122);
			this->pictureBoxTrial3_3->Name = L"pictureBoxTrial3_3";
			this->pictureBoxTrial3_3->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial3_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_3->TabIndex = 104;
			this->pictureBoxTrial3_3->TabStop = false;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(37, 37);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(92, 29);
			this->label33->TabIndex = 96;
			this->label33->Text = L"R1";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(749, 653);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 34);
			this->button7->TabIndex = 92;
			this->button7->Text = L"获取波形";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button7_Click);
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(549, 90);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(200, 29);
			this->label34->TabIndex = 103;
			this->label34->Text = L"0.01μF（K13）";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(176, 37);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(92, 29);
			this->label35->TabIndex = 97;
			this->label35->Text = L"R2";
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(374, 90);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(141, 29);
			this->label36->TabIndex = 102;
			this->label36->Text = L"4.7mH（K15）";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(374, 37);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(92, 29);
			this->label38->TabIndex = 98;
			this->label38->Text = L"L";
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(176, 90);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(192, 29);
			this->label39->TabIndex = 101;
			this->label39->Text = L"调至某一欠阻尼态";
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(549, 37);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(92, 29);
			this->label40->TabIndex = 99;
			this->label40->Text = L"C";
			// 
			// label41
			// 
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(37, 90);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(121, 29);
			this->label41->TabIndex = 100;
			this->label41->Text = L"30KΩ（K2）";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxTrial3_2w);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->textBoxTrial3_2α);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->pictureBoxTrial3_2);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Location = System::Drawing::Point(46, 909);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(930, 766);
			this->groupBox5->TabIndex = 105;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"第二组";
			// 
			// textBoxTrial3_2w
			// 
			this->textBoxTrial3_2w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_2w->Location = System::Drawing::Point(192, 729);
			this->textBoxTrial3_2w->Name = L"textBoxTrial3_2w";
			this->textBoxTrial3_2w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_2w->TabIndex = 108;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(46, 729);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 25);
			this->label12->TabIndex = 107;
			this->label12->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_2α
			// 
			this->textBoxTrial3_2α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_2α->Location = System::Drawing::Point(192, 657);
			this->textBoxTrial3_2α->Name = L"textBoxTrial3_2α";
			this->textBoxTrial3_2α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_2α->TabIndex = 106;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(46, 662);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(113, 25);
			this->label22->TabIndex = 105;
			this->label22->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_2
			// 
			this->pictureBoxTrial3_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_2.Image")));
			this->pictureBoxTrial3_2->Location = System::Drawing::Point(41, 122);
			this->pictureBoxTrial3_2->Name = L"pictureBoxTrial3_2";
			this->pictureBoxTrial3_2->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial3_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_2->TabIndex = 104;
			this->pictureBoxTrial3_2->TabStop = false;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(37, 37);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(92, 29);
			this->label23->TabIndex = 96;
			this->label23->Text = L"R1";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(749, 653);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 34);
			this->button6->TabIndex = 92;
			this->button6->Text = L"获取波形";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button6_Click);
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(549, 90);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(200, 29);
			this->label24->TabIndex = 103;
			this->label24->Text = L"0.01μF（K13）";
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(176, 37);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 29);
			this->label25->TabIndex = 97;
			this->label25->Text = L"R2";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(374, 90);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(132, 29);
			this->label26->TabIndex = 102;
			this->label26->Text = L"4.7mH（K15）";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(374, 37);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(92, 29);
			this->label27->TabIndex = 98;
			this->label27->Text = L"L";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(176, 90);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(192, 29);
			this->label28->TabIndex = 101;
			this->label28->Text = L"调至某一欠阻尼态";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(549, 37);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(92, 29);
			this->label29->TabIndex = 99;
			this->label29->Text = L"C";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(37, 90);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(121, 29);
			this->label30->TabIndex = 100;
			this->label30->Text = L"10KΩ（K1）";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxTrial3_1w);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBoxTrial3_1α);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->pictureBoxTrial3_1);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Location = System::Drawing::Point(46, 113);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(930, 766);
			this->groupBox4->TabIndex = 104;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"第一组";
			// 
			// textBoxTrial3_1w
			// 
			this->textBoxTrial3_1w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_1w->Location = System::Drawing::Point(192, 729);
			this->textBoxTrial3_1w->Name = L"textBoxTrial3_1w";
			this->textBoxTrial3_1w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_1w->TabIndex = 108;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(46, 729);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 25);
			this->label9->TabIndex = 107;
			this->label9->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_1α
			// 
			this->textBoxTrial3_1α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_1α->Location = System::Drawing::Point(192, 657);
			this->textBoxTrial3_1α->Name = L"textBoxTrial3_1α";
			this->textBoxTrial3_1α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_1α->TabIndex = 106;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(46, 662);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 25);
			this->label10->TabIndex = 105;
			this->label10->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_1
			// 
			this->pictureBoxTrial3_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_1.Image")));
			this->pictureBoxTrial3_1->Location = System::Drawing::Point(41, 122);
			this->pictureBoxTrial3_1->Name = L"pictureBoxTrial3_1";
			this->pictureBoxTrial3_1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial3_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_1->TabIndex = 104;
			this->pictureBoxTrial3_1->TabStop = false;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(37, 37);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 29);
			this->label13->TabIndex = 96;
			this->label13->Text = L"R1";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(749, 653);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 34);
			this->button5->TabIndex = 92;
			this->button5->Text = L"获取波形";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button5_Click);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(549, 90);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(163, 29);
			this->label21->TabIndex = 103;
			this->label21->Text = L"1000PF（K11）";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(176, 37);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 29);
			this->label14->TabIndex = 97;
			this->label14->Text = L"R2";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(374, 90);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(132, 29);
			this->label20->TabIndex = 102;
			this->label20->Text = L"4.7mH（K15）";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(374, 37);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(92, 29);
			this->label15->TabIndex = 98;
			this->label15->Text = L"L";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(176, 90);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(192, 29);
			this->label18->TabIndex = 101;
			this->label18->Text = L"调至某一欠阻尼态";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(549, 37);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 29);
			this->label16->TabIndex = 99;
			this->label16->Text = L"C";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(37, 90);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(121, 29);
			this->label17->TabIndex = 100;
			this->label17->Text = L"10KΩ（K1）";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(33, 39);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(1100, 47);
			this->label11->TabIndex = 87;
			this->label11->Text = L"    改变一组电路参数，如增、减L或C之值，重复步骤2的测量，并作记录。随后仔细观察，改变电路参数时，ωd与α的变化趋势，并作记录。";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(2, 6698);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 191;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(207, 6607);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1087, 28);
			this->textBox结论->TabIndex = 189;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(556, 6656);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 190;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究实验内容::button81_Click);
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(31, 6610);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 188;
			this->label105->Text = L"实验结论";
			// 
			// 二阶动态电路响应的研究实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1576, 1102);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"二阶动态电路响应的研究实验内容";
			this->Text = L"二阶动态电路响应的研究实验内容";
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			 public:ST_二阶动态电路响应的研究 Load_Grade_data();
					void SendData();
	private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
		SendData();
	}
			 String ^picdir = gcnew String(BMPSAVEPATH);
			 String ^Trial1_1PT_name = picdir + "二阶动态电路响应的研究Trial1_1.bmp";
			 String ^Trial1_2PT_name = picdir + "二阶动态电路响应的研究Trial1_2.bmp";
			 String ^Trial1_3PT_name = picdir + "二阶动态电路响应的研究Trial1_3.bmp";
			 String ^Trial2_1PT_name = picdir + "二阶动态电路响应的研究Trial2_1.bmp";
			 String ^Trial3_1PT_name = picdir + "二阶动态电路响应的研究Trial3_1.bmp";
			 String ^Trial3_2PT_name = picdir + "二阶动态电路响应的研究Trial3_2.bmp";
			 String ^Trial3_3PT_name = picdir + "二阶动态电路响应的研究Trial3_3.bmp";
			 String ^Trial3_4PT_name = picdir + "二阶动态电路响应的研究Trial3_4.bmp";

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	File::Delete(Trial1_1PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial1_1PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1_1->ImageLocation = Trial1_1PT_name;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial1_2PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial1_2PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1_2->ImageLocation = Trial1_2PT_name;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial1_3PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial1_3PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1_3->ImageLocation = Trial1_3PT_name;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial2_1PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial2_1PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial2_1->ImageLocation = Trial2_1PT_name;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_1PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_1PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_1->ImageLocation = Trial3_1PT_name;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		File::Delete(Trial3_2PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_2PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_2->ImageLocation = Trial3_2PT_name;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_3PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_3PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_3->ImageLocation = Trial3_3PT_name;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_4PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_4PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_4->ImageLocation = Trial3_4PT_name;
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
