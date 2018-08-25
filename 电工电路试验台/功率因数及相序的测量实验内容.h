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
	/// 功率因数及相序的测量实验内容 摘要
	/// </summary>
	public ref class 功率因数及相序的测量实验内容 : public System::Windows::Forms::Form
	{
	public:
		功率因数及相序的测量实验内容(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void SendData();
		ST_功率因数及相序的测量 Load_Grade_data();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~功率因数及相序的测量实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:





















































	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::GroupBox^  groupBox1;





	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_4;

	private: System::Windows::Forms::TextBox^  textBoxTrial2_φ_4;

	private: System::Windows::Forms::Label^  labelTrial2_P_4;

	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  labelTrial2_I_4;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  labelTrial2_UC_4;

	private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Label^  labelTrial2_UL_4;

	private: System::Windows::Forms::Button^  button22;

	private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Label^  labelTrial2_U_4;

	private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_3;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ_3;

private: System::Windows::Forms::Label^  labelTrial2_P_3;

	private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  labelTrial2_I_3;

	private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Label^  labelTrial2_UC_3;

	private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Label^  labelTrial2_UL_3;

	private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Label^  labelTrial2_UR_3;

	private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Label^  labelTrial2_U_3;

	private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_2;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ_2;

private: System::Windows::Forms::Label^  labelTrial2_P_2;

	private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  labelTrial2_I_2;

	private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Label^  labelTrial2_UC_2;

	private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  labelTrial2_UL_2;

	private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Label^  labelTrial2_UR_2;

	private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Label^  labelTrial2_U_2;

	private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_1;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ_1;


	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  labelTrial2_P_1;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  labelTrial2_I_1;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  labelTrial2_UC_1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  labelTrial2_UL_1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  labelTrial2_UR_1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  labelTrial2_U_1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Label^  labelTrial2_UR_4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(功率因数及相序的测量实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_Load_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ_4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_P_4 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_I_4 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UC_4 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_4 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_4 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ_3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_P_3 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_I_3 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UC_3 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_3 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UR_3 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_3 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ_2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_P_2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_I_2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UC_2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UR_2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_2 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ_1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UC_1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UR_1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UR_4 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(25, 85);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1247, 510);
			this->groupBox8->TabIndex = 88;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"功率因数及相序的测量 实验内容1";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(543, 334);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 28);
			this->label9->TabIndex = 90;
			this->label9->Text = L"    图25－1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(455, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 89;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(11, 472);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1119, 35);
			this->label4->TabIndex = 86;
			this->label4->Text = L"    （2）将电源线任意调换两相后再接入电路，观察两灯的明亮状态，判断三相交流电源的相序。";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(34, 389);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1119, 65);
			this->label37->TabIndex = 0;
			this->label37->Text = L" 1．相序的测定\r\n   （1）将实验台上三相调压器输出调节至U1V1=220V，断电取220V、15W白炽灯两只，0.47μF/450V电容器一只按图25－1接"
				L"线，判断三相交流电源的相序。\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(361, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 25);
			this->label1->TabIndex = 87;
			this->label1->Text = L"功率因数及相序的测量 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_4);
			this->groupBox1->Controls->Add(this->labelTrial2_P_4);
			this->groupBox1->Controls->Add(this->button19);
			this->groupBox1->Controls->Add(this->labelTrial2_I_4);
			this->groupBox1->Controls->Add(this->button20);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_4);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_4);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_4);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->labelTrial2_U_4);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_3);
			this->groupBox1->Controls->Add(this->labelTrial2_P_3);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->labelTrial2_I_3);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_3);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_3);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_3);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->labelTrial2_U_3);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_2);
			this->groupBox1->Controls->Add(this->labelTrial2_P_2);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->labelTrial2_I_2);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_2);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_2);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_2);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->labelTrial2_U_2);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_1);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->labelTrial2_P_1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->labelTrial2_I_1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->labelTrial2_U_1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(25, 612);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1247, 866);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"功率因数及相序的测量 实验内容2";
			// 
			// textBoxTrial2_Load_4
			// 
			this->textBoxTrial2_Load_4->Location = System::Drawing::Point(916, 757);
			this->textBoxTrial2_Load_4->Name = L"textBoxTrial2_Load_4";
			this->textBoxTrial2_Load_4->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_4->TabIndex = 215;
			// 
			// textBoxTrial2_φ_4
			// 
			this->textBoxTrial2_φ_4->Location = System::Drawing::Point(805, 757);
			this->textBoxTrial2_φ_4->Name = L"textBoxTrial2_φ_4";
			this->textBoxTrial2_φ_4->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_φ_4->TabIndex = 214;
			// 
			// labelTrial2_P_4
			// 
			this->labelTrial2_P_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_4->Location = System::Drawing::Point(711, 745);
			this->labelTrial2_P_4->Name = L"labelTrial2_P_4";
			this->labelTrial2_P_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_4->TabIndex = 213;
			this->labelTrial2_P_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(711, 798);
			this->button19->Name = L"button19";
			this->button19->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button19->Size = System::Drawing::Size(88, 29);
			this->button19->TabIndex = 212;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_I_4
			// 
			this->labelTrial2_I_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_4->Location = System::Drawing::Point(607, 745);
			this->labelTrial2_I_4->Name = L"labelTrial2_I_4";
			this->labelTrial2_I_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_4->TabIndex = 211;
			this->labelTrial2_I_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(607, 798);
			this->button20->Name = L"button20";
			this->button20->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button20->Size = System::Drawing::Size(88, 29);
			this->button20->TabIndex = 210;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UC_4
			// 
			this->labelTrial2_UC_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_4->Location = System::Drawing::Point(504, 745);
			this->labelTrial2_UC_4->Name = L"labelTrial2_UC_4";
			this->labelTrial2_UC_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_4->TabIndex = 209;
			this->labelTrial2_UC_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(504, 798);
			this->button21->Name = L"button21";
			this->button21->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button21->Size = System::Drawing::Size(88, 29);
			this->button21->TabIndex = 208;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UL_4
			// 
			this->labelTrial2_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_4->Location = System::Drawing::Point(400, 745);
			this->labelTrial2_UL_4->Name = L"labelTrial2_UL_4";
			this->labelTrial2_UL_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_4->TabIndex = 207;
			this->labelTrial2_UL_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(400, 798);
			this->button22->Name = L"button22";
			this->button22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button22->Size = System::Drawing::Size(88, 29);
			this->button22->TabIndex = 206;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(296, 798);
			this->button23->Name = L"button23";
			this->button23->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button23->Size = System::Drawing::Size(88, 29);
			this->button23->TabIndex = 204;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_U_4
			// 
			this->labelTrial2_U_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_4->Location = System::Drawing::Point(192, 745);
			this->labelTrial2_U_4->Name = L"labelTrial2_U_4";
			this->labelTrial2_U_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_4->TabIndex = 203;
			this->labelTrial2_U_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(192, 798);
			this->button24->Name = L"button24";
			this->button24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button24->Size = System::Drawing::Size(88, 29);
			this->button24->TabIndex = 202;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial2_Load_3
			// 
			this->textBoxTrial2_Load_3->Location = System::Drawing::Point(916, 645);
			this->textBoxTrial2_Load_3->Name = L"textBoxTrial2_Load_3";
			this->textBoxTrial2_Load_3->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_3->TabIndex = 201;
			// 
			// textBoxTrial2_φ_3
			// 
			this->textBoxTrial2_φ_3->Location = System::Drawing::Point(805, 645);
			this->textBoxTrial2_φ_3->Name = L"textBoxTrial2_φ_3";
			this->textBoxTrial2_φ_3->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_φ_3->TabIndex = 200;
			// 
			// labelTrial2_P_3
			// 
			this->labelTrial2_P_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_3->Location = System::Drawing::Point(711, 633);
			this->labelTrial2_P_3->Name = L"labelTrial2_P_3";
			this->labelTrial2_P_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_3->TabIndex = 199;
			this->labelTrial2_P_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(711, 686);
			this->button13->Name = L"button13";
			this->button13->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button13->Size = System::Drawing::Size(88, 29);
			this->button13->TabIndex = 198;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_I_3
			// 
			this->labelTrial2_I_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_3->Location = System::Drawing::Point(607, 633);
			this->labelTrial2_I_3->Name = L"labelTrial2_I_3";
			this->labelTrial2_I_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_3->TabIndex = 197;
			this->labelTrial2_I_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(607, 686);
			this->button14->Name = L"button14";
			this->button14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button14->Size = System::Drawing::Size(88, 29);
			this->button14->TabIndex = 196;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UC_3
			// 
			this->labelTrial2_UC_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_3->Location = System::Drawing::Point(504, 633);
			this->labelTrial2_UC_3->Name = L"labelTrial2_UC_3";
			this->labelTrial2_UC_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_3->TabIndex = 195;
			this->labelTrial2_UC_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(504, 686);
			this->button15->Name = L"button15";
			this->button15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button15->Size = System::Drawing::Size(88, 29);
			this->button15->TabIndex = 194;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UL_3
			// 
			this->labelTrial2_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_3->Location = System::Drawing::Point(400, 633);
			this->labelTrial2_UL_3->Name = L"labelTrial2_UL_3";
			this->labelTrial2_UL_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_3->TabIndex = 193;
			this->labelTrial2_UL_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(400, 686);
			this->button16->Name = L"button16";
			this->button16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button16->Size = System::Drawing::Size(88, 29);
			this->button16->TabIndex = 192;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UR_3
			// 
			this->labelTrial2_UR_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_3->Location = System::Drawing::Point(296, 633);
			this->labelTrial2_UR_3->Name = L"labelTrial2_UR_3";
			this->labelTrial2_UR_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_3->TabIndex = 191;
			this->labelTrial2_UR_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(296, 686);
			this->button17->Name = L"button17";
			this->button17->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button17->Size = System::Drawing::Size(88, 29);
			this->button17->TabIndex = 190;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_U_3
			// 
			this->labelTrial2_U_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_3->Location = System::Drawing::Point(192, 633);
			this->labelTrial2_U_3->Name = L"labelTrial2_U_3";
			this->labelTrial2_U_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_3->TabIndex = 189;
			this->labelTrial2_U_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(192, 686);
			this->button18->Name = L"button18";
			this->button18->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button18->Size = System::Drawing::Size(88, 29);
			this->button18->TabIndex = 188;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial2_Load_2
			// 
			this->textBoxTrial2_Load_2->Location = System::Drawing::Point(916, 536);
			this->textBoxTrial2_Load_2->Name = L"textBoxTrial2_Load_2";
			this->textBoxTrial2_Load_2->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_2->TabIndex = 187;
			// 
			// textBoxTrial2_φ_2
			// 
			this->textBoxTrial2_φ_2->Location = System::Drawing::Point(805, 536);
			this->textBoxTrial2_φ_2->Name = L"textBoxTrial2_φ_2";
			this->textBoxTrial2_φ_2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_φ_2->TabIndex = 186;
			// 
			// labelTrial2_P_2
			// 
			this->labelTrial2_P_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_2->Location = System::Drawing::Point(711, 524);
			this->labelTrial2_P_2->Name = L"labelTrial2_P_2";
			this->labelTrial2_P_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_2->TabIndex = 185;
			this->labelTrial2_P_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(711, 577);
			this->button7->Name = L"button7";
			this->button7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button7->Size = System::Drawing::Size(88, 29);
			this->button7->TabIndex = 184;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_I_2
			// 
			this->labelTrial2_I_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_2->Location = System::Drawing::Point(607, 524);
			this->labelTrial2_I_2->Name = L"labelTrial2_I_2";
			this->labelTrial2_I_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_2->TabIndex = 183;
			this->labelTrial2_I_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(607, 577);
			this->button8->Name = L"button8";
			this->button8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button8->Size = System::Drawing::Size(88, 29);
			this->button8->TabIndex = 182;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UC_2
			// 
			this->labelTrial2_UC_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_2->Location = System::Drawing::Point(504, 524);
			this->labelTrial2_UC_2->Name = L"labelTrial2_UC_2";
			this->labelTrial2_UC_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_2->TabIndex = 181;
			this->labelTrial2_UC_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(504, 577);
			this->button9->Name = L"button9";
			this->button9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button9->Size = System::Drawing::Size(88, 29);
			this->button9->TabIndex = 180;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UL_2
			// 
			this->labelTrial2_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_2->Location = System::Drawing::Point(400, 524);
			this->labelTrial2_UL_2->Name = L"labelTrial2_UL_2";
			this->labelTrial2_UL_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_2->TabIndex = 179;
			this->labelTrial2_UL_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(400, 577);
			this->button10->Name = L"button10";
			this->button10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button10->Size = System::Drawing::Size(88, 29);
			this->button10->TabIndex = 178;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UR_2
			// 
			this->labelTrial2_UR_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_2->Location = System::Drawing::Point(296, 524);
			this->labelTrial2_UR_2->Name = L"labelTrial2_UR_2";
			this->labelTrial2_UR_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_2->TabIndex = 177;
			this->labelTrial2_UR_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(296, 577);
			this->button11->Name = L"button11";
			this->button11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button11->Size = System::Drawing::Size(88, 29);
			this->button11->TabIndex = 176;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_U_2
			// 
			this->labelTrial2_U_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_2->Location = System::Drawing::Point(192, 524);
			this->labelTrial2_U_2->Name = L"labelTrial2_U_2";
			this->labelTrial2_U_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_2->TabIndex = 175;
			this->labelTrial2_U_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(192, 577);
			this->button12->Name = L"button12";
			this->button12->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button12->Size = System::Drawing::Size(88, 29);
			this->button12->TabIndex = 174;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial2_Load_1
			// 
			this->textBoxTrial2_Load_1->Location = System::Drawing::Point(916, 432);
			this->textBoxTrial2_Load_1->Name = L"textBoxTrial2_Load_1";
			this->textBoxTrial2_Load_1->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_1->TabIndex = 173;
			// 
			// textBoxTrial2_φ_1
			// 
			this->textBoxTrial2_φ_1->Location = System::Drawing::Point(805, 432);
			this->textBoxTrial2_φ_1->Name = L"textBoxTrial2_φ_1";
			this->textBoxTrial2_φ_1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_φ_1->TabIndex = 172;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(916, 370);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(159, 27);
			this->label22->TabIndex = 171;
			this->label22->Text = L"负载性质";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(812, 370);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(88, 27);
			this->label23->TabIndex = 170;
			this->label23->Text = L"cosφ";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(711, 370);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 27);
			this->label18->TabIndex = 169;
			this->label18->Text = L"P(w)";
			// 
			// labelTrial2_P_1
			// 
			this->labelTrial2_P_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_1->Location = System::Drawing::Point(711, 420);
			this->labelTrial2_P_1->Name = L"labelTrial2_P_1";
			this->labelTrial2_P_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_1->TabIndex = 168;
			this->labelTrial2_P_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(711, 473);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button5->Size = System::Drawing::Size(88, 29);
			this->button5->TabIndex = 167;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(607, 370);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(88, 27);
			this->label20->TabIndex = 166;
			this->label20->Text = L"I(v)";
			// 
			// labelTrial2_I_1
			// 
			this->labelTrial2_I_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_1->Location = System::Drawing::Point(607, 420);
			this->labelTrial2_I_1->Name = L"labelTrial2_I_1";
			this->labelTrial2_I_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_1->TabIndex = 165;
			this->labelTrial2_I_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(607, 473);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button6->Size = System::Drawing::Size(88, 29);
			this->button6->TabIndex = 164;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(504, 370);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 27);
			this->label14->TabIndex = 163;
			this->label14->Text = L"UC(v)";
			// 
			// labelTrial2_UC_1
			// 
			this->labelTrial2_UC_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_1->Location = System::Drawing::Point(504, 420);
			this->labelTrial2_UC_1->Name = L"labelTrial2_UC_1";
			this->labelTrial2_UC_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_1->TabIndex = 162;
			this->labelTrial2_UC_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(504, 473);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(88, 29);
			this->button2->TabIndex = 161;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(400, 370);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(88, 27);
			this->label16->TabIndex = 160;
			this->label16->Text = L"UL(v)";
			// 
			// labelTrial2_UL_1
			// 
			this->labelTrial2_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_1->Location = System::Drawing::Point(400, 420);
			this->labelTrial2_UL_1->Name = L"labelTrial2_UL_1";
			this->labelTrial2_UL_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_1->TabIndex = 159;
			this->labelTrial2_UL_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(400, 473);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button3->Size = System::Drawing::Size(88, 29);
			this->button3->TabIndex = 158;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(296, 370);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 27);
			this->label12->TabIndex = 157;
			this->label12->Text = L"UR(v)";
			// 
			// labelTrial2_UR_1
			// 
			this->labelTrial2_UR_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_1->Location = System::Drawing::Point(296, 420);
			this->labelTrial2_UR_1->Name = L"labelTrial2_UR_1";
			this->labelTrial2_UR_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_1->TabIndex = 156;
			this->labelTrial2_UR_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(296, 473);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(88, 29);
			this->button1->TabIndex = 155;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(192, 370);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 27);
			this->label11->TabIndex = 154;
			this->label11->Text = L"U(v)";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(36, 745);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 50);
			this->label10->TabIndex = 153;
			this->label10->Text = L"SA2，SA3合，\r\nSA1断";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(36, 633);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 50);
			this->label7->TabIndex = 152;
			this->label7->Text = L"SA3合，\r\nSA1，SA2断";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(36, 524);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 50);
			this->label6->TabIndex = 151;
			this->label6->Text = L"SA2合\r\nSA1，SA3断";
			// 
			// labelTrial2_U_1
			// 
			this->labelTrial2_U_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_1->Location = System::Drawing::Point(192, 420);
			this->labelTrial2_U_1->Name = L"labelTrial2_U_1";
			this->labelTrial2_U_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_1->TabIndex = 150;
			this->labelTrial2_U_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(192, 473);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button4->Size = System::Drawing::Size(88, 29);
			this->button4->TabIndex = 149;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(36, 420);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 50);
			this->label3->TabIndex = 147;
			this->label3->Text = L"SA1合\r\nSA2，SA3随意";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(36, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 27);
			this->label5->TabIndex = 146;
			this->label5->Text = L"开关状态";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(503, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 28);
			this->label2->TabIndex = 91;
			this->label2->Text = L"    图25－2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(203, 99);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(746, 221);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 91;
			this->pictureBox2->TabStop = false;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(24, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1119, 61);
			this->label8->TabIndex = 0;
			this->label8->Text = L"2．电路功率（P）和功率因数（cosφ）的测定\r\n    按图25－2接线，按下表所述开关合闸，记录cosφ表及其它各表的读数，并分析负载性质。SA1、SA2、S"
				L"A3用导线代替。";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(12, 1532);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 197;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(566, 1490);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 196;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &功率因数及相序的测量实验内容::button102_Click);
			// 
			// labelTrial2_UR_4
			// 
			this->labelTrial2_UR_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_4->Location = System::Drawing::Point(296, 745);
			this->labelTrial2_UR_4->Name = L"labelTrial2_UR_4";
			this->labelTrial2_UR_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_4->TabIndex = 205;
			this->labelTrial2_UR_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 功率因数及相序的测量实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1416, 812);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"功率因数及相序的测量实验内容";
			this->Text = L"功率因数及相序的测量实验内容";
			this->Load += gcnew System::EventHandler(this, &功率因数及相序的测量实验内容::功率因数及相序的测量实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 功率因数及相序的测量实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
};
}
