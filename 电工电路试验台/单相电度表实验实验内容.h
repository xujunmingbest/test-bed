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
	/// 单相电度表实验实验内容 摘要
	/// </summary>
	public ref class 单相电度表实验实验内容 : public System::Windows::Forms::Form
	{
	public:
		单相电度表实验实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~单相电度表实验实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_accuracy;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_N;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_UN;


	private: System::Windows::Forms::TextBox^  textBoxTrial1_IN;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_N;




	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_mea_n;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_mea_time;


	private: System::Windows::Forms::Label^  label26;

	private: System::Windows::Forms::Label^  label28;

	private: System::Windows::Forms::Label^  label30;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  labelTrial1_mea_P;


	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  labelTrial1_mea_I;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  labelTrial1_mea_V;



	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_WW;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_calW;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_meaW;

	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::Button^  button102;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(单相电度表实验实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial1_cal_WW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_calW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_meaW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_N = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_mea_n = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_mea_time = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_mea_P = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_mea_I = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_mea_V = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_accuracy = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_N = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_UN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_IN = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_WW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_calW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_meaW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_N);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->textBoxTrial1_mea_n);
			this->groupBox8->Controls->Add(this->textBoxTrial1_mea_time);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->labelTrial1_mea_P);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->labelTrial1_mea_I);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->labelTrial1_mea_V);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_accuracy);
			this->groupBox8->Controls->Add(this->textBoxTrial1_N);
			this->groupBox8->Controls->Add(this->textBoxTrial1_UN);
			this->groupBox8->Controls->Add(this->textBoxTrial1_IN);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(83, 98);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1247, 1350);
			this->groupBox8->TabIndex = 84;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RLC元件阻抗特性的测定 实验内容1";
			// 
			// textBoxTrial1_cal_WW
			// 
			this->textBoxTrial1_cal_WW->Location = System::Drawing::Point(438, 1270);
			this->textBoxTrial1_cal_WW->Name = L"textBoxTrial1_cal_WW";
			this->textBoxTrial1_cal_WW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_WW->TabIndex = 51;
			// 
			// textBoxTrial1_cal_calW
			// 
			this->textBoxTrial1_cal_calW->Location = System::Drawing::Point(324, 1271);
			this->textBoxTrial1_cal_calW->Name = L"textBoxTrial1_cal_calW";
			this->textBoxTrial1_cal_calW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_calW->TabIndex = 50;
			// 
			// textBoxTrial1_cal_meaW
			// 
			this->textBoxTrial1_cal_meaW->Location = System::Drawing::Point(208, 1271);
			this->textBoxTrial1_cal_meaW->Name = L"textBoxTrial1_cal_meaW";
			this->textBoxTrial1_cal_meaW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_meaW->TabIndex = 49;
			// 
			// textBoxTrial1_cal_N
			// 
			this->textBoxTrial1_cal_N->Location = System::Drawing::Point(553, 1270);
			this->textBoxTrial1_cal_N->Name = L"textBoxTrial1_cal_N";
			this->textBoxTrial1_cal_N->Size = System::Drawing::Size(135, 30);
			this->textBoxTrial1_cal_N->TabIndex = 45;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(436, 1023);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 32);
			this->button3->TabIndex = 44;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(325, 1023);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 32);
			this->button2->TabIndex = 43;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(208, 1021);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 42;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(43, 1123);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(148, 27);
			this->label19->TabIndex = 41;
			this->label19->Text = L"负 载  情 况";
			// 
			// textBoxTrial1_mea_n
			// 
			this->textBoxTrial1_mea_n->Location = System::Drawing::Point(720, 978);
			this->textBoxTrial1_mea_n->Name = L"textBoxTrial1_mea_n";
			this->textBoxTrial1_mea_n->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_mea_n->TabIndex = 40;
			// 
			// textBoxTrial1_mea_time
			// 
			this->textBoxTrial1_mea_time->Location = System::Drawing::Point(549, 978);
			this->textBoxTrial1_mea_time->Name = L"textBoxTrial1_mea_time";
			this->textBoxTrial1_mea_time->Size = System::Drawing::Size(150, 30);
			this->textBoxTrial1_mea_time->TabIndex = 39;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(549, 1180);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(132, 49);
			this->label26->TabIndex = 35;
			this->label26->Text = L"电度表常数N";
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(437, 1181);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(96, 48);
			this->label28->TabIndex = 33;
			this->label28->Text = L"△W/W";
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(325, 1180);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(96, 50);
			this->label30->TabIndex = 31;
			this->label30->Text = L"计算电能W（KWh）";
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(211, 1180);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 48);
			this->label32->TabIndex = 29;
			this->label32->Text = L"实测电能W（KWh）";
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(43, 1271);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(148, 27);
			this->label33->TabIndex = 28;
			this->label33->Text = L"9×15W";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(43, 1181);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(148, 50);
			this->label34->TabIndex = 27;
			this->label34->Text = L"9×15W";
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(720, 930);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(92, 27);
			this->label22->TabIndex = 25;
			this->label22->Text = L"转数n";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(549, 929);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(153, 27);
			this->label20->TabIndex = 23;
			this->label20->Text = L"测定时间（s）";
			// 
			// labelTrial1_mea_P
			// 
			this->labelTrial1_mea_P->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_mea_P->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_mea_P->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_mea_P->Location = System::Drawing::Point(436, 979);
			this->labelTrial1_mea_P->Name = L"labelTrial1_mea_P";
			this->labelTrial1_mea_P->Size = System::Drawing::Size(96, 27);
			this->labelTrial1_mea_P->TabIndex = 22;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(437, 929);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(96, 27);
			this->label18->TabIndex = 21;
			this->label18->Text = L"P(W)";
			// 
			// labelTrial1_mea_I
			// 
			this->labelTrial1_mea_I->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_mea_I->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_mea_I->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_mea_I->Location = System::Drawing::Point(324, 978);
			this->labelTrial1_mea_I->Name = L"labelTrial1_mea_I";
			this->labelTrial1_mea_I->Size = System::Drawing::Size(96, 27);
			this->labelTrial1_mea_I->TabIndex = 20;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(325, 928);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 27);
			this->label16->TabIndex = 19;
			this->label16->Text = L"I(A)";
			// 
			// labelTrial1_mea_V
			// 
			this->labelTrial1_mea_V->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_mea_V->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_mea_V->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_mea_V->Location = System::Drawing::Point(210, 978);
			this->labelTrial1_mea_V->Name = L"labelTrial1_mea_V";
			this->labelTrial1_mea_V->Size = System::Drawing::Size(96, 27);
			this->labelTrial1_mea_V->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(211, 928);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 27);
			this->label13->TabIndex = 17;
			this->label13->Text = L"V(V)";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(43, 979);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(148, 27);
			this->label12->TabIndex = 16;
			this->label12->Text = L"9×15W";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(43, 929);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(148, 27);
			this->label11->TabIndex = 15;
			this->label11->Text = L"9×15W";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(210, 1121);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(622, 28);
			this->label10->TabIndex = 14;
			this->label10->Text = L"计   算   值";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &单相电度表实验实验内容::label10_Click);
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(208, 869);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(623, 23);
			this->label9->TabIndex = 13;
			this->label9->Text = L"测   量  值";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(43, 867);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 27);
			this->label8->TabIndex = 12;
			this->label8->Text = L"负 载  情 况";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(39, 791);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1104, 78);
			this->label7->TabIndex = 11;
			this->label7->Text = L"    线路经指导教师检查后，通电实验。将SA1～SA9全部闭合，秒表定时一段时间后，读取电度表读数。注意为实验效果明显，需尽量延长时间。";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(39, 682);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1104, 78);
			this->label6->TabIndex = 10;
			this->label6->Text = L"    1．用功率表、秒表法校验电度表的准确度\r\n    将调压器的输出U1V1电压调到220V，断电并按图15－1接线， 灯炮负载接口AE、BF、CG并联，通过"
				L"控制SA1～SA9的通断(K1～K9始终断开),可以控制电度表接入1～9只灯炮负载。";
			// 
			// textBoxTrial1_accuracy
			// 
			this->textBoxTrial1_accuracy->Location = System::Drawing::Point(716, 147);
			this->textBoxTrial1_accuracy->Name = L"textBoxTrial1_accuracy";
			this->textBoxTrial1_accuracy->Size = System::Drawing::Size(183, 30);
			this->textBoxTrial1_accuracy->TabIndex = 9;
			// 
			// textBoxTrial1_N
			// 
			this->textBoxTrial1_N->Location = System::Drawing::Point(716, 93);
			this->textBoxTrial1_N->Name = L"textBoxTrial1_N";
			this->textBoxTrial1_N->Size = System::Drawing::Size(183, 30);
			this->textBoxTrial1_N->TabIndex = 8;
			// 
			// textBoxTrial1_UN
			// 
			this->textBoxTrial1_UN->Location = System::Drawing::Point(279, 149);
			this->textBoxTrial1_UN->Name = L"textBoxTrial1_UN";
			this->textBoxTrial1_UN->Size = System::Drawing::Size(183, 30);
			this->textBoxTrial1_UN->TabIndex = 7;
			// 
			// textBoxTrial1_IN
			// 
			this->textBoxTrial1_IN->Location = System::Drawing::Point(279, 93);
			this->textBoxTrial1_IN->Name = L"textBoxTrial1_IN";
			this->textBoxTrial1_IN->Size = System::Drawing::Size(183, 30);
			this->textBoxTrial1_IN->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(489, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(211, 27);
			this->label5->TabIndex = 5;
			this->label5->Text = L"准确度为";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(489, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 27);
			this->label4->TabIndex = 4;
			this->label4->Text = L"电度表常数N =";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(52, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"额定电压UN  =";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(52, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"额定电流IN ＝";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 312);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1115, 335);
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
			this->label37->Size = System::Drawing::Size(263, 34);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    被校验电度表的数据：";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(419, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 25);
			this->label1->TabIndex = 83;
			this->label1->Text = L"RLC元件阻抗特性的测定 实验内容";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(44, 1499);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 193;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(598, 1457);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 192;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &单相电度表实验实验内容::button102_Click);
			// 
			// 单相电度表实验实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1577, 740);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"单相电度表实验实验内容";
			this->Text = L"单相电度表实验实验内容";
			this->Load += gcnew System::EventHandler(this, &单相电度表实验实验内容::单相电度表实验实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 void 单相电度表实验实验内容::SendData();
			 public: ST_单相电度表实验 单相电度表实验实验内容::Load_Grade_data();
private: System::Void 单相电度表实验实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
};
}
