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
	/// RC网络的频率特性实验内容 摘要
	/// </summary>
	public ref class RC网络的频率特性实验内容 : public System::Windows::Forms::Form
	{
	public:
		RC网络的频率特性实验内容(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void SendData();
		ST_RC网络的频率特性 Load_Grade_data();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RC网络的频率特性实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_F1;
	protected:





































	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button17;

	private: System::Windows::Forms::Button^  button18;

	private: System::Windows::Forms::Button^  button19;

	private: System::Windows::Forms::Button^  button20;

	private: System::Windows::Forms::Button^  button21;

	private: System::Windows::Forms::Button^  button22;

	private: System::Windows::Forms::Button^  button23;

	private: System::Windows::Forms::Button^  button24;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button10;

	private: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::Button^  button12;

	private: System::Windows::Forms::Button^  button13;

	private: System::Windows::Forms::Button^  button14;

	private: System::Windows::Forms::Button^  button15;

	private: System::Windows::Forms::Button^  button16;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F8;

	private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F7;

	private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F6;

	private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F5;

	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F4;

	private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F3;

	private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_8;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_7;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_6;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_5;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_3;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_2;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2_1;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  textBoxTrial2_T8;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T7;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T6;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T5;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T3;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T2;


private: System::Windows::Forms::TextBox^  textBoxTrial2_T1;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F8;

	private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F7;

	private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F6;

	private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F5;

	private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F4;

	private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F3;

	private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F2;

	private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F1;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  labelTrial1_Uo2_8;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_7;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_6;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_5;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_4;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_3;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_2;

private: System::Windows::Forms::Label^  labelTrial1_Uo2_1;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_8;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_7;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_6;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_5;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_4;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_3;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_2;

private: System::Windows::Forms::Label^  labelTrial1_Uo1_1;
private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_8;


private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_3;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_2;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2_1;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBoxTrial2_φ8;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ3;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ2;

private: System::Windows::Forms::TextBox^  textBoxTrial2_φ1;


private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  textBoxTrial2_τ8;










private: System::Windows::Forms::TextBox^  textBoxTrial2_τ7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_τ6;


private: System::Windows::Forms::TextBox^  textBoxTrial2_τ4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_τ3;

private: System::Windows::Forms::TextBox^  textBoxTrial2_τ2;

private: System::Windows::Forms::TextBox^  textBoxTrial2_τ1;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::TextBox^  textBoxTrial2_τ5;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RC网络的频率特性实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial1_Uo2_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_1 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F8 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F7 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F6 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_φ2_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_φ1 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ1 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_τ2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_T1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F8 = (gcnew System::Windows::Forms::TextBox());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F7 = (gcnew System::Windows::Forms::TextBox());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F6 = (gcnew System::Windows::Forms::TextBox());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F5 = (gcnew System::Windows::Forms::TextBox());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F4 = (gcnew System::Windows::Forms::TextBox());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F3 = (gcnew System::Windows::Forms::TextBox());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F2 = (gcnew System::Windows::Forms::TextBox());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_8);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_7);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_6);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_5);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_4);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_3);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_2);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_1);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_8);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_7);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_1);
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Controls->Add(this->button18);
			this->groupBox8->Controls->Add(this->button19);
			this->groupBox8->Controls->Add(this->button20);
			this->groupBox8->Controls->Add(this->button21);
			this->groupBox8->Controls->Add(this->button22);
			this->groupBox8->Controls->Add(this->button23);
			this->groupBox8->Controls->Add(this->button24);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->button10);
			this->groupBox8->Controls->Add(this->button11);
			this->groupBox8->Controls->Add(this->button12);
			this->groupBox8->Controls->Add(this->button13);
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F8);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F7);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F6);
			this->groupBox8->Controls->Add(this->button8);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F5);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F4);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F3);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F2);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F1);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(62, 78);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1247, 849);
			this->groupBox8->TabIndex = 86;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RC网络的频率特性 实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::groupBox8_Enter);
			// 
			// labelTrial1_Uo2_8
			// 
			this->labelTrial1_Uo2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_8->Location = System::Drawing::Point(810, 489);
			this->labelTrial1_Uo2_8->Name = L"labelTrial1_Uo2_8";
			this->labelTrial1_Uo2_8->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_8->TabIndex = 160;
			this->labelTrial1_Uo2_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_7
			// 
			this->labelTrial1_Uo2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_7->Location = System::Drawing::Point(711, 489);
			this->labelTrial1_Uo2_7->Name = L"labelTrial1_Uo2_7";
			this->labelTrial1_Uo2_7->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_7->TabIndex = 159;
			this->labelTrial1_Uo2_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_6
			// 
			this->labelTrial1_Uo2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_6->Location = System::Drawing::Point(613, 489);
			this->labelTrial1_Uo2_6->Name = L"labelTrial1_Uo2_6";
			this->labelTrial1_Uo2_6->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_6->TabIndex = 158;
			this->labelTrial1_Uo2_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_5
			// 
			this->labelTrial1_Uo2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_5->Location = System::Drawing::Point(520, 489);
			this->labelTrial1_Uo2_5->Name = L"labelTrial1_Uo2_5";
			this->labelTrial1_Uo2_5->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_5->TabIndex = 157;
			this->labelTrial1_Uo2_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_4
			// 
			this->labelTrial1_Uo2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_4->Location = System::Drawing::Point(426, 489);
			this->labelTrial1_Uo2_4->Name = L"labelTrial1_Uo2_4";
			this->labelTrial1_Uo2_4->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_4->TabIndex = 156;
			this->labelTrial1_Uo2_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_3
			// 
			this->labelTrial1_Uo2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_3->Location = System::Drawing::Point(323, 490);
			this->labelTrial1_Uo2_3->Name = L"labelTrial1_Uo2_3";
			this->labelTrial1_Uo2_3->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_3->TabIndex = 155;
			this->labelTrial1_Uo2_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_2
			// 
			this->labelTrial1_Uo2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_2->Location = System::Drawing::Point(229, 490);
			this->labelTrial1_Uo2_2->Name = L"labelTrial1_Uo2_2";
			this->labelTrial1_Uo2_2->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_2->TabIndex = 154;
			this->labelTrial1_Uo2_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_1
			// 
			this->labelTrial1_Uo2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_1->Location = System::Drawing::Point(135, 490);
			this->labelTrial1_Uo2_1->Name = L"labelTrial1_Uo2_1";
			this->labelTrial1_Uo2_1->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_1->TabIndex = 153;
			this->labelTrial1_Uo2_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_8
			// 
			this->labelTrial1_Uo1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_8->Location = System::Drawing::Point(810, 350);
			this->labelTrial1_Uo1_8->Name = L"labelTrial1_Uo1_8";
			this->labelTrial1_Uo1_8->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_8->TabIndex = 152;
			this->labelTrial1_Uo1_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_7
			// 
			this->labelTrial1_Uo1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_7->Location = System::Drawing::Point(711, 350);
			this->labelTrial1_Uo1_7->Name = L"labelTrial1_Uo1_7";
			this->labelTrial1_Uo1_7->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_7->TabIndex = 151;
			this->labelTrial1_Uo1_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_6
			// 
			this->labelTrial1_Uo1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_6->Location = System::Drawing::Point(613, 350);
			this->labelTrial1_Uo1_6->Name = L"labelTrial1_Uo1_6";
			this->labelTrial1_Uo1_6->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_6->TabIndex = 150;
			this->labelTrial1_Uo1_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_5
			// 
			this->labelTrial1_Uo1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_5->Location = System::Drawing::Point(520, 350);
			this->labelTrial1_Uo1_5->Name = L"labelTrial1_Uo1_5";
			this->labelTrial1_Uo1_5->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_5->TabIndex = 149;
			this->labelTrial1_Uo1_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_4
			// 
			this->labelTrial1_Uo1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_4->Location = System::Drawing::Point(426, 350);
			this->labelTrial1_Uo1_4->Name = L"labelTrial1_Uo1_4";
			this->labelTrial1_Uo1_4->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_4->TabIndex = 148;
			this->labelTrial1_Uo1_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_3
			// 
			this->labelTrial1_Uo1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_3->Location = System::Drawing::Point(323, 351);
			this->labelTrial1_Uo1_3->Name = L"labelTrial1_Uo1_3";
			this->labelTrial1_Uo1_3->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_3->TabIndex = 147;
			this->labelTrial1_Uo1_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_2
			// 
			this->labelTrial1_Uo1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_2->Location = System::Drawing::Point(229, 351);
			this->labelTrial1_Uo1_2->Name = L"labelTrial1_Uo1_2";
			this->labelTrial1_Uo1_2->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_2->TabIndex = 146;
			this->labelTrial1_Uo1_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_1
			// 
			this->labelTrial1_Uo1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_1->Location = System::Drawing::Point(135, 351);
			this->labelTrial1_Uo1_1->Name = L"labelTrial1_Uo1_1";
			this->labelTrial1_Uo1_1->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_1->TabIndex = 145;
			this->labelTrial1_Uo1_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(810, 526);
			this->button17->Name = L"button17";
			this->button17->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button17->Size = System::Drawing::Size(88, 29);
			this->button17->TabIndex = 101;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(711, 526);
			this->button18->Name = L"button18";
			this->button18->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button18->Size = System::Drawing::Size(88, 29);
			this->button18->TabIndex = 99;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(614, 526);
			this->button19->Name = L"button19";
			this->button19->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button19->Size = System::Drawing::Size(88, 29);
			this->button19->TabIndex = 97;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(520, 526);
			this->button20->Name = L"button20";
			this->button20->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button20->Size = System::Drawing::Size(88, 29);
			this->button20->TabIndex = 95;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(425, 526);
			this->button21->Name = L"button21";
			this->button21->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button21->Size = System::Drawing::Size(88, 29);
			this->button21->TabIndex = 93;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(326, 526);
			this->button22->Name = L"button22";
			this->button22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button22->Size = System::Drawing::Size(88, 29);
			this->button22->TabIndex = 91;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(229, 526);
			this->button23->Name = L"button23";
			this->button23->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button23->Size = System::Drawing::Size(88, 29);
			this->button23->TabIndex = 89;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(135, 526);
			this->button24->Name = L"button24";
			this->button24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button24->Size = System::Drawing::Size(88, 29);
			this->button24->TabIndex = 87;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button24_Click);
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(315, 571);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(332, 27);
			this->label5->TabIndex = 85;
			this->label5->Text = L"R=200Ω，C=2μF";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(27, 489);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 27);
			this->label6->TabIndex = 84;
			this->label6->Text = L"Uo（v）";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(810, 389);
			this->button9->Name = L"button9";
			this->button9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button9->Size = System::Drawing::Size(88, 29);
			this->button9->TabIndex = 83;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(711, 389);
			this->button10->Name = L"button10";
			this->button10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button10->Size = System::Drawing::Size(88, 29);
			this->button10->TabIndex = 81;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(614, 389);
			this->button11->Name = L"button11";
			this->button11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button11->Size = System::Drawing::Size(88, 29);
			this->button11->TabIndex = 79;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(520, 389);
			this->button12->Name = L"button12";
			this->button12->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button12->Size = System::Drawing::Size(88, 29);
			this->button12->TabIndex = 77;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(425, 389);
			this->button13->Name = L"button13";
			this->button13->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button13->Size = System::Drawing::Size(88, 29);
			this->button13->TabIndex = 75;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(326, 389);
			this->button14->Name = L"button14";
			this->button14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button14->Size = System::Drawing::Size(88, 29);
			this->button14->TabIndex = 73;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(229, 389);
			this->button15->Name = L"button15";
			this->button15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button15->Size = System::Drawing::Size(88, 29);
			this->button15->TabIndex = 71;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(135, 389);
			this->button16->Name = L"button16";
			this->button16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button16->Size = System::Drawing::Size(88, 29);
			this->button16->TabIndex = 69;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button16_Click);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(315, 434);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(332, 27);
			this->label4->TabIndex = 67;
			this->label4->Text = L"R=1KΩ，C=0.1μF";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(810, 308);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button3->Size = System::Drawing::Size(88, 29);
			this->button3->TabIndex = 66;
			this->button3->Text = L"设置";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button3_Click);
			// 
			// textBoxTrial1_F8
			// 
			this->textBoxTrial1_F8->Location = System::Drawing::Point(810, 271);
			this->textBoxTrial1_F8->Name = L"textBoxTrial1_F8";
			this->textBoxTrial1_F8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F8->TabIndex = 65;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(711, 308);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button6->Size = System::Drawing::Size(88, 29);
			this->button6->TabIndex = 64;
			this->button6->Text = L"设置";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button6_Click);
			// 
			// textBoxTrial1_F7
			// 
			this->textBoxTrial1_F7->Location = System::Drawing::Point(711, 271);
			this->textBoxTrial1_F7->Name = L"textBoxTrial1_F7";
			this->textBoxTrial1_F7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F7->TabIndex = 63;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(614, 308);
			this->button7->Name = L"button7";
			this->button7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button7->Size = System::Drawing::Size(88, 29);
			this->button7->TabIndex = 62;
			this->button7->Text = L"设置";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button7_Click);
			// 
			// textBoxTrial1_F6
			// 
			this->textBoxTrial1_F6->Location = System::Drawing::Point(614, 271);
			this->textBoxTrial1_F6->Name = L"textBoxTrial1_F6";
			this->textBoxTrial1_F6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F6->TabIndex = 61;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(520, 308);
			this->button8->Name = L"button8";
			this->button8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button8->Size = System::Drawing::Size(88, 29);
			this->button8->TabIndex = 60;
			this->button8->Text = L"设置";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button8_Click);
			// 
			// textBoxTrial1_F5
			// 
			this->textBoxTrial1_F5->Location = System::Drawing::Point(520, 271);
			this->textBoxTrial1_F5->Name = L"textBoxTrial1_F5";
			this->textBoxTrial1_F5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F5->TabIndex = 59;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(425, 308);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(88, 29);
			this->button1->TabIndex = 58;
			this->button1->Text = L"设置";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button1_Click);
			// 
			// textBoxTrial1_F4
			// 
			this->textBoxTrial1_F4->Location = System::Drawing::Point(425, 271);
			this->textBoxTrial1_F4->Name = L"textBoxTrial1_F4";
			this->textBoxTrial1_F4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F4->TabIndex = 57;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(326, 308);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(88, 29);
			this->button2->TabIndex = 56;
			this->button2->Text = L"设置";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button2_Click);
			// 
			// textBoxTrial1_F3
			// 
			this->textBoxTrial1_F3->Location = System::Drawing::Point(326, 271);
			this->textBoxTrial1_F3->Name = L"textBoxTrial1_F3";
			this->textBoxTrial1_F3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F3->TabIndex = 55;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(229, 308);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button5->Size = System::Drawing::Size(88, 29);
			this->button5->TabIndex = 54;
			this->button5->Text = L"设置";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button5_Click);
			// 
			// textBoxTrial1_F2
			// 
			this->textBoxTrial1_F2->Location = System::Drawing::Point(229, 271);
			this->textBoxTrial1_F2->Name = L"textBoxTrial1_F2";
			this->textBoxTrial1_F2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F2->TabIndex = 53;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(135, 308);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button4->Size = System::Drawing::Size(88, 29);
			this->button4->TabIndex = 52;
			this->button4->Text = L"设置";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button4_Click);
			// 
			// textBoxTrial1_F1
			// 
			this->textBoxTrial1_F1->Location = System::Drawing::Point(135, 271);
			this->textBoxTrial1_F1->Name = L"textBoxTrial1_F1";
			this->textBoxTrial1_F1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial1_F1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(27, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Uo（v）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(28, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"F（Hz）";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1119, 226);
			this->label37->TabIndex = 0;
			this->label37->Text = resources->GetString(L"label37.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(398, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 25);
			this->label1->TabIndex = 85;
			this->label1->Text = L"RC网络的频率特性 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_1);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ1);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ1);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button41);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F8);
			this->groupBox1->Controls->Add(this->button42);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F7);
			this->groupBox1->Controls->Add(this->button43);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F6);
			this->groupBox1->Controls->Add(this->button44);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F5);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F4);
			this->groupBox1->Controls->Add(this->button46);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F3);
			this->groupBox1->Controls->Add(this->button47);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2);
			this->groupBox1->Controls->Add(this->button48);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(62, 942);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1247, 479);
			this->groupBox1->TabIndex = 87;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RC网络的频率特性 实验内容2";
			// 
			// textBoxTrial2_φ2_8
			// 
			this->textBoxTrial2_φ2_8->Location = System::Drawing::Point(798, 380);
			this->textBoxTrial2_φ2_8->Name = L"textBoxTrial2_φ2_8";
			this->textBoxTrial2_φ2_8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_8->TabIndex = 137;
			// 
			// textBoxTrial2_φ2_7
			// 
			this->textBoxTrial2_φ2_7->Location = System::Drawing::Point(699, 380);
			this->textBoxTrial2_φ2_7->Name = L"textBoxTrial2_φ2_7";
			this->textBoxTrial2_φ2_7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_7->TabIndex = 136;
			// 
			// textBoxTrial2_φ2_6
			// 
			this->textBoxTrial2_φ2_6->Location = System::Drawing::Point(602, 380);
			this->textBoxTrial2_φ2_6->Name = L"textBoxTrial2_φ2_6";
			this->textBoxTrial2_φ2_6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_6->TabIndex = 135;
			// 
			// textBoxTrial2_φ2_5
			// 
			this->textBoxTrial2_φ2_5->Location = System::Drawing::Point(508, 380);
			this->textBoxTrial2_φ2_5->Name = L"textBoxTrial2_φ2_5";
			this->textBoxTrial2_φ2_5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_5->TabIndex = 134;
			// 
			// textBoxTrial2_φ2_4
			// 
			this->textBoxTrial2_φ2_4->Location = System::Drawing::Point(413, 380);
			this->textBoxTrial2_φ2_4->Name = L"textBoxTrial2_φ2_4";
			this->textBoxTrial2_φ2_4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_4->TabIndex = 133;
			// 
			// textBoxTrial2_φ2_3
			// 
			this->textBoxTrial2_φ2_3->Location = System::Drawing::Point(314, 380);
			this->textBoxTrial2_φ2_3->Name = L"textBoxTrial2_φ2_3";
			this->textBoxTrial2_φ2_3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_3->TabIndex = 132;
			// 
			// textBoxTrial2_φ2_2
			// 
			this->textBoxTrial2_φ2_2->Location = System::Drawing::Point(217, 380);
			this->textBoxTrial2_φ2_2->Name = L"textBoxTrial2_φ2_2";
			this->textBoxTrial2_φ2_2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_2->TabIndex = 131;
			// 
			// textBoxTrial2_φ2_1
			// 
			this->textBoxTrial2_φ2_1->Location = System::Drawing::Point(123, 380);
			this->textBoxTrial2_φ2_1->Name = L"textBoxTrial2_φ2_1";
			this->textBoxTrial2_φ2_1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2_1->TabIndex = 130;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(15, 380);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(99, 27);
			this->label31->TabIndex = 129;
			this->label31->Text = L"φ";
			// 
			// textBoxTrial2_φ8
			// 
			this->textBoxTrial2_φ8->Location = System::Drawing::Point(797, 254);
			this->textBoxTrial2_φ8->Name = L"textBoxTrial2_φ8";
			this->textBoxTrial2_φ8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ8->TabIndex = 128;
			// 
			// textBoxTrial2_φ7
			// 
			this->textBoxTrial2_φ7->Location = System::Drawing::Point(698, 254);
			this->textBoxTrial2_φ7->Name = L"textBoxTrial2_φ7";
			this->textBoxTrial2_φ7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ7->TabIndex = 127;
			// 
			// textBoxTrial2_φ6
			// 
			this->textBoxTrial2_φ6->Location = System::Drawing::Point(601, 254);
			this->textBoxTrial2_φ6->Name = L"textBoxTrial2_φ6";
			this->textBoxTrial2_φ6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ6->TabIndex = 126;
			// 
			// textBoxTrial2_φ5
			// 
			this->textBoxTrial2_φ5->Location = System::Drawing::Point(507, 254);
			this->textBoxTrial2_φ5->Name = L"textBoxTrial2_φ5";
			this->textBoxTrial2_φ5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ5->TabIndex = 125;
			// 
			// textBoxTrial2_φ4
			// 
			this->textBoxTrial2_φ4->Location = System::Drawing::Point(412, 254);
			this->textBoxTrial2_φ4->Name = L"textBoxTrial2_φ4";
			this->textBoxTrial2_φ4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ4->TabIndex = 124;
			// 
			// textBoxTrial2_φ3
			// 
			this->textBoxTrial2_φ3->Location = System::Drawing::Point(313, 254);
			this->textBoxTrial2_φ3->Name = L"textBoxTrial2_φ3";
			this->textBoxTrial2_φ3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ3->TabIndex = 123;
			// 
			// textBoxTrial2_φ2
			// 
			this->textBoxTrial2_φ2->Location = System::Drawing::Point(216, 254);
			this->textBoxTrial2_φ2->Name = L"textBoxTrial2_φ2";
			this->textBoxTrial2_φ2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ2->TabIndex = 122;
			// 
			// textBoxTrial2_φ1
			// 
			this->textBoxTrial2_φ1->Location = System::Drawing::Point(122, 254);
			this->textBoxTrial2_φ1->Name = L"textBoxTrial2_φ1";
			this->textBoxTrial2_φ1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_φ1->TabIndex = 121;
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(14, 254);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(99, 27);
			this->label30->TabIndex = 120;
			this->label30->Text = L"φ";
			// 
			// textBoxTrial2_τ8
			// 
			this->textBoxTrial2_τ8->Location = System::Drawing::Point(797, 218);
			this->textBoxTrial2_τ8->Name = L"textBoxTrial2_τ8";
			this->textBoxTrial2_τ8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ8->TabIndex = 110;
			// 
			// textBoxTrial2_τ7
			// 
			this->textBoxTrial2_τ7->Location = System::Drawing::Point(698, 218);
			this->textBoxTrial2_τ7->Name = L"textBoxTrial2_τ7";
			this->textBoxTrial2_τ7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ7->TabIndex = 109;
			// 
			// textBoxTrial2_τ6
			// 
			this->textBoxTrial2_τ6->Location = System::Drawing::Point(601, 218);
			this->textBoxTrial2_τ6->Name = L"textBoxTrial2_τ6";
			this->textBoxTrial2_τ6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ6->TabIndex = 108;
			// 
			// textBoxTrial2_τ5
			// 
			this->textBoxTrial2_τ5->Location = System::Drawing::Point(507, 218);
			this->textBoxTrial2_τ5->Name = L"textBoxTrial2_τ5";
			this->textBoxTrial2_τ5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ5->TabIndex = 107;
			// 
			// textBoxTrial2_τ4
			// 
			this->textBoxTrial2_τ4->Location = System::Drawing::Point(412, 218);
			this->textBoxTrial2_τ4->Name = L"textBoxTrial2_τ4";
			this->textBoxTrial2_τ4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ4->TabIndex = 106;
			// 
			// textBoxTrial2_τ3
			// 
			this->textBoxTrial2_τ3->Location = System::Drawing::Point(313, 218);
			this->textBoxTrial2_τ3->Name = L"textBoxTrial2_τ3";
			this->textBoxTrial2_τ3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ3->TabIndex = 105;
			// 
			// textBoxTrial2_τ2
			// 
			this->textBoxTrial2_τ2->Location = System::Drawing::Point(216, 218);
			this->textBoxTrial2_τ2->Name = L"textBoxTrial2_τ2";
			this->textBoxTrial2_τ2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2->TabIndex = 104;
			// 
			// textBoxTrial2_τ1
			// 
			this->textBoxTrial2_τ1->Location = System::Drawing::Point(122, 218);
			this->textBoxTrial2_τ1->Name = L"textBoxTrial2_τ1";
			this->textBoxTrial2_τ1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ1->TabIndex = 103;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(14, 218);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(99, 27);
			this->label28->TabIndex = 102;
			this->label28->Text = L"τ（ms）";
			// 
			// textBoxTrial2_τ2_8
			// 
			this->textBoxTrial2_τ2_8->Location = System::Drawing::Point(798, 344);
			this->textBoxTrial2_τ2_8->Name = L"textBoxTrial2_τ2_8";
			this->textBoxTrial2_τ2_8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_8->TabIndex = 100;
			// 
			// textBoxTrial2_τ2_7
			// 
			this->textBoxTrial2_τ2_7->Location = System::Drawing::Point(699, 344);
			this->textBoxTrial2_τ2_7->Name = L"textBoxTrial2_τ2_7";
			this->textBoxTrial2_τ2_7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_7->TabIndex = 98;
			// 
			// textBoxTrial2_τ2_6
			// 
			this->textBoxTrial2_τ2_6->Location = System::Drawing::Point(602, 344);
			this->textBoxTrial2_τ2_6->Name = L"textBoxTrial2_τ2_6";
			this->textBoxTrial2_τ2_6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_6->TabIndex = 96;
			// 
			// textBoxTrial2_τ2_5
			// 
			this->textBoxTrial2_τ2_5->Location = System::Drawing::Point(508, 344);
			this->textBoxTrial2_τ2_5->Name = L"textBoxTrial2_τ2_5";
			this->textBoxTrial2_τ2_5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_5->TabIndex = 94;
			// 
			// textBoxTrial2_τ2_4
			// 
			this->textBoxTrial2_τ2_4->Location = System::Drawing::Point(413, 344);
			this->textBoxTrial2_τ2_4->Name = L"textBoxTrial2_τ2_4";
			this->textBoxTrial2_τ2_4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_4->TabIndex = 92;
			// 
			// textBoxTrial2_τ2_3
			// 
			this->textBoxTrial2_τ2_3->Location = System::Drawing::Point(314, 344);
			this->textBoxTrial2_τ2_3->Name = L"textBoxTrial2_τ2_3";
			this->textBoxTrial2_τ2_3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_3->TabIndex = 90;
			// 
			// textBoxTrial2_τ2_2
			// 
			this->textBoxTrial2_τ2_2->Location = System::Drawing::Point(217, 344);
			this->textBoxTrial2_τ2_2->Name = L"textBoxTrial2_τ2_2";
			this->textBoxTrial2_τ2_2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_2->TabIndex = 88;
			// 
			// textBoxTrial2_τ2_1
			// 
			this->textBoxTrial2_τ2_1->Location = System::Drawing::Point(123, 344);
			this->textBoxTrial2_τ2_1->Name = L"textBoxTrial2_τ2_1";
			this->textBoxTrial2_τ2_1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_τ2_1->TabIndex = 86;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(303, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(332, 27);
			this->label7->TabIndex = 85;
			this->label7->Text = L"R=200Ω，C=2μF";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(15, 344);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 27);
			this->label8->TabIndex = 84;
			this->label8->Text = L"τ（ms）";
			// 
			// textBoxTrial2_T8
			// 
			this->textBoxTrial2_T8->Location = System::Drawing::Point(797, 182);
			this->textBoxTrial2_T8->Name = L"textBoxTrial2_T8";
			this->textBoxTrial2_T8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T8->TabIndex = 82;
			// 
			// textBoxTrial2_T7
			// 
			this->textBoxTrial2_T7->Location = System::Drawing::Point(698, 182);
			this->textBoxTrial2_T7->Name = L"textBoxTrial2_T7";
			this->textBoxTrial2_T7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T7->TabIndex = 80;
			// 
			// textBoxTrial2_T6
			// 
			this->textBoxTrial2_T6->Location = System::Drawing::Point(601, 182);
			this->textBoxTrial2_T6->Name = L"textBoxTrial2_T6";
			this->textBoxTrial2_T6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T6->TabIndex = 78;
			// 
			// textBoxTrial2_T5
			// 
			this->textBoxTrial2_T5->Location = System::Drawing::Point(507, 182);
			this->textBoxTrial2_T5->Name = L"textBoxTrial2_T5";
			this->textBoxTrial2_T5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T5->TabIndex = 76;
			// 
			// textBoxTrial2_T4
			// 
			this->textBoxTrial2_T4->Location = System::Drawing::Point(412, 182);
			this->textBoxTrial2_T4->Name = L"textBoxTrial2_T4";
			this->textBoxTrial2_T4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T4->TabIndex = 74;
			// 
			// textBoxTrial2_T3
			// 
			this->textBoxTrial2_T3->Location = System::Drawing::Point(313, 182);
			this->textBoxTrial2_T3->Name = L"textBoxTrial2_T3";
			this->textBoxTrial2_T3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T3->TabIndex = 72;
			// 
			// textBoxTrial2_T2
			// 
			this->textBoxTrial2_T2->Location = System::Drawing::Point(216, 182);
			this->textBoxTrial2_T2->Name = L"textBoxTrial2_T2";
			this->textBoxTrial2_T2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T2->TabIndex = 70;
			// 
			// textBoxTrial2_T1
			// 
			this->textBoxTrial2_T1->Location = System::Drawing::Point(122, 182);
			this->textBoxTrial2_T1->Name = L"textBoxTrial2_T1";
			this->textBoxTrial2_T1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_T1->TabIndex = 68;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(302, 307);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(332, 27);
			this->label9->TabIndex = 67;
			this->label9->Text = L"R=1KΩ，C=0.1μF";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(797, 138);
			this->button41->Name = L"button41";
			this->button41->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button41->Size = System::Drawing::Size(88, 29);
			this->button41->TabIndex = 66;
			this->button41->Text = L"设置";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button41_Click);
			// 
			// textBoxTrial2_F8
			// 
			this->textBoxTrial2_F8->Location = System::Drawing::Point(797, 101);
			this->textBoxTrial2_F8->Name = L"textBoxTrial2_F8";
			this->textBoxTrial2_F8->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F8->TabIndex = 65;
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(698, 138);
			this->button42->Name = L"button42";
			this->button42->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button42->Size = System::Drawing::Size(88, 29);
			this->button42->TabIndex = 64;
			this->button42->Text = L"设置";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button42_Click);
			// 
			// textBoxTrial2_F7
			// 
			this->textBoxTrial2_F7->Location = System::Drawing::Point(698, 101);
			this->textBoxTrial2_F7->Name = L"textBoxTrial2_F7";
			this->textBoxTrial2_F7->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F7->TabIndex = 63;
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(601, 138);
			this->button43->Name = L"button43";
			this->button43->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button43->Size = System::Drawing::Size(88, 29);
			this->button43->TabIndex = 62;
			this->button43->Text = L"设置";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button43_Click);
			// 
			// textBoxTrial2_F6
			// 
			this->textBoxTrial2_F6->Location = System::Drawing::Point(601, 101);
			this->textBoxTrial2_F6->Name = L"textBoxTrial2_F6";
			this->textBoxTrial2_F6->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F6->TabIndex = 61;
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(507, 138);
			this->button44->Name = L"button44";
			this->button44->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button44->Size = System::Drawing::Size(88, 29);
			this->button44->TabIndex = 60;
			this->button44->Text = L"设置";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button44_Click);
			// 
			// textBoxTrial2_F5
			// 
			this->textBoxTrial2_F5->Location = System::Drawing::Point(507, 101);
			this->textBoxTrial2_F5->Name = L"textBoxTrial2_F5";
			this->textBoxTrial2_F5->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F5->TabIndex = 59;
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(412, 138);
			this->button45->Name = L"button45";
			this->button45->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button45->Size = System::Drawing::Size(88, 29);
			this->button45->TabIndex = 58;
			this->button45->Text = L"设置";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button45_Click);
			// 
			// textBoxTrial2_F4
			// 
			this->textBoxTrial2_F4->Location = System::Drawing::Point(412, 101);
			this->textBoxTrial2_F4->Name = L"textBoxTrial2_F4";
			this->textBoxTrial2_F4->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F4->TabIndex = 57;
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(313, 138);
			this->button46->Name = L"button46";
			this->button46->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button46->Size = System::Drawing::Size(88, 29);
			this->button46->TabIndex = 56;
			this->button46->Text = L"设置";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button46_Click);
			// 
			// textBoxTrial2_F3
			// 
			this->textBoxTrial2_F3->Location = System::Drawing::Point(313, 101);
			this->textBoxTrial2_F3->Name = L"textBoxTrial2_F3";
			this->textBoxTrial2_F3->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F3->TabIndex = 55;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(216, 138);
			this->button47->Name = L"button47";
			this->button47->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button47->Size = System::Drawing::Size(88, 29);
			this->button47->TabIndex = 54;
			this->button47->Text = L"设置";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button47_Click);
			// 
			// textBoxTrial2_F2
			// 
			this->textBoxTrial2_F2->Location = System::Drawing::Point(216, 101);
			this->textBoxTrial2_F2->Name = L"textBoxTrial2_F2";
			this->textBoxTrial2_F2->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F2->TabIndex = 53;
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(122, 138);
			this->button48->Name = L"button48";
			this->button48->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button48->Size = System::Drawing::Size(88, 29);
			this->button48->TabIndex = 52;
			this->button48->Text = L"设置";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button48_Click);
			// 
			// textBoxTrial2_F1
			// 
			this->textBoxTrial2_F1->Location = System::Drawing::Point(122, 101);
			this->textBoxTrial2_F1->Name = L"textBoxTrial2_F1";
			this->textBoxTrial2_F1->Size = System::Drawing::Size(88, 30);
			this->textBoxTrial2_F1->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(14, 182);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 27);
			this->label10->TabIndex = 3;
			this->label10->Text = L"T（ms）";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(15, 101);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 27);
			this->label11->TabIndex = 2;
			this->label11->Text = L"F（Hz）";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(24, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1119, 56);
			this->label12->TabIndex = 0;
			this->label12->Text = L"    2．测定RC串并联电路的相频特性\r\n    按实验原理说明2的内容、方法步骤进行，选定两组电路参数进行测量。";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(-20, 1515);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 195;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(534, 1473);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 194;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::button102_Click);
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(245, 1439);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1070, 28);
			this->textBox结论->TabIndex = 197;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(69, 1442);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 196;
			this->label105->Text = L"实验结论";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(556, 822);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 27);
			this->label13->TabIndex = 162;
			this->label13->Text = L"图21-1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(370, 603);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(455, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 161;
			this->pictureBox1->TabStop = false;
			// 
			// RC网络的频率特性实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1395, 682);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RC网络的频率特性实验内容";
			this->Text = L"RC网络的频率特性实验内容";
			this->Load += gcnew System::EventHandler(this, &RC网络的频率特性实验内容::RC网络的频率特性实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void RC网络的频率特性实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F1->Text);
		int value = valuef * 100 ;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F2->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F3->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F4->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F5->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F6->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F7->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial1_F8->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo1_8->Text = global::GetKuangPingURMS1();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_Uo2_8->Text = global::GetKuangPingURMS1();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F1->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F2->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F3->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F4->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}

private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F5->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F6->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F7->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial2_F8->Text);
		int value = valuef * 100;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
};
}
