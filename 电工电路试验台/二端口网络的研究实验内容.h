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
	/// 二端口网络的研究实验内容 摘要
	/// </summary>
	public ref class 二端口网络的研究实验内容 : public System::Windows::Forms::Form
	{
	public:
		二端口网络的研究实验内容(void)
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
		~二端口网络的研究实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::GroupBox^  groupBox1;




	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  labelTrial1_2_I22S;
	private: System::Windows::Forms::Label^  labelTrial1_2_I21S;
	private: System::Windows::Forms::Label^  labelTrial1_2_U21S;



	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;




	private: System::Windows::Forms::Label^  labelTrial1_2_I210;

	private: System::Windows::Forms::Label^  labelTrial1_2_U220;

	private: System::Windows::Forms::Label^  labelTrial1_2_U210;

	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;




	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  labelTrial1_1_U12S;

	private: System::Windows::Forms::Label^  labelTrial1_1_I11S;

	private: System::Windows::Forms::Label^  labelTrial1_1_U11S;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;




	private: System::Windows::Forms::Label^  labelTrial1_1_I110;
	private: System::Windows::Forms::Label^  labelTrial1_1_U120;



	private: System::Windows::Forms::Label^  labelTrial1_1_U110;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;


	private: System::Windows::Forms::Label^  label106;


	private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  labelTrial2_1_I2S;

private: System::Windows::Forms::Label^  labelTrial2_1_U2S;

	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;


private: System::Windows::Forms::Label^  labelTrial2_1_I20;

private: System::Windows::Forms::Label^  labelTrial2_1_U20;

	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;


private: System::Windows::Forms::Label^  labelTrial2_1_U1S;



private: System::Windows::Forms::Label^  labelTrial2_1_I10;

private: System::Windows::Forms::Label^  labelTrial2_1_U10;

	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Label^  label103;


private: System::Windows::Forms::Label^  label59;


private: System::Windows::Forms::Label^  label61;


private: System::Windows::Forms::Label^  label57;



private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBoxTrial1_2_D2;

private: System::Windows::Forms::TextBox^  textBoxTrial1_2_C2;

private: System::Windows::Forms::TextBox^  textBoxTrial1_2_B2;

private: System::Windows::Forms::TextBox^  textBoxTrial1_2_A2;

private: System::Windows::Forms::TextBox^  textBoxTrial1_1_D1;

private: System::Windows::Forms::TextBox^  textBoxTrial1_1_C1;

private: System::Windows::Forms::TextBox^  textBoxTrial1_1_B1;

private: System::Windows::Forms::TextBox^  textBoxTrial1_1_A1;


private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBoxTrial2_1_D;
private: System::Windows::Forms::TextBox^  textBoxTrial2_1_C;
private: System::Windows::Forms::TextBox^  textBoxTrial2_1_B;
private: System::Windows::Forms::TextBox^  textBoxTrial2_1_A;

private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Button^  button21;

private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Button^  button24;

private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Button^  button16;

private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Label^  labelTrial2_1_I1S;
private: System::Windows::Forms::TextBox^  labelTrial2_1_R2S;
private: System::Windows::Forms::TextBox^  labelTrial2_1_R20;
private: System::Windows::Forms::TextBox^  labelTrial2_1_R1S;
private: System::Windows::Forms::TextBox^  labelTrial2_1_R10;

private: System::Windows::Forms::TextBox^  textBoxTrial1_1_U21;



private: System::Windows::Forms::TextBox^  textBoxTrial1_1_U11;



private: System::Windows::Forms::TextBox^  textBoxTrial2_1_U;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(二端口网络的研究实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial1_1_U21 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_1_U11 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_2_D2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_2_C2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_2_B2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_2_A2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_1_D1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_1_C1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_1_B1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_1_A1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_I22S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_I21S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_U21S = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_I210 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_U220 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_U210 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U12S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_I11S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U11S = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_I110 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U120 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U110 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_1_U = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_1_R2S = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_1_R20 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_1_R1S = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_1_R10 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_1_D = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_1_C = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_1_B = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_1_A = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I2S = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U2S = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U20 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I1S = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U1S = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U10 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(27, 12);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 733);
			this->groupBox8->TabIndex = 81;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"二端口网络的研究实验原理";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->ForeColor = System::Drawing::Color::Lime;
			this->label14->Location = System::Drawing::Point(791, 52);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(408, 70);
			this->label14->TabIndex = 312;
			this->label14->Text = L"说明:以下表电压用直流电压表3获取，电流用直流电流表2获取";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(224, 406);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(604, 307);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(203, 134);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(995, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 56);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 66);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    双口网络买验线路如图9－2所示。\r\n\r\n    将直流稳压电源的输出电压调到10V，作为双口网络的输入。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial1_1_U21);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1_U11);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->textBoxTrial1_2_D2);
			this->groupBox1->Controls->Add(this->textBoxTrial1_2_C2);
			this->groupBox1->Controls->Add(this->textBoxTrial1_2_B2);
			this->groupBox1->Controls->Add(this->textBoxTrial1_2_A2);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1_D1);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1_C1);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1_B1);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1_A1);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->labelTrial1_2_I22S);
			this->groupBox1->Controls->Add(this->labelTrial1_2_I21S);
			this->groupBox1->Controls->Add(this->labelTrial1_2_U21S);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Controls->Add(this->labelTrial1_2_I210);
			this->groupBox1->Controls->Add(this->labelTrial1_2_U220);
			this->groupBox1->Controls->Add(this->labelTrial1_2_U210);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label48);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U12S);
			this->groupBox1->Controls->Add(this->labelTrial1_1_I11S);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U11S);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->labelTrial1_1_I110);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U120);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U110);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(28, 782);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 900);
			this->groupBox1->TabIndex = 82;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容一";
			// 
			// textBoxTrial1_1_U21
			// 
			this->textBoxTrial1_1_U21->Location = System::Drawing::Point(93, 663);
			this->textBoxTrial1_1_U21->Name = L"textBoxTrial1_1_U21";
			this->textBoxTrial1_1_U21->Size = System::Drawing::Size(130, 30);
			this->textBoxTrial1_1_U21->TabIndex = 76;
			// 
			// textBoxTrial1_1_U11
			// 
			this->textBoxTrial1_1_U11->Location = System::Drawing::Point(104, 249);
			this->textBoxTrial1_1_U11->Name = L"textBoxTrial1_1_U11";
			this->textBoxTrial1_1_U11->Size = System::Drawing::Size(130, 30);
			this->textBoxTrial1_1_U11->TabIndex = 73;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(523, 836);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 34);
			this->button11->TabIndex = 72;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(373, 836);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(96, 34);
			this->button12->TabIndex = 71;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button12_Click);
			// 
			// textBoxTrial1_2_D2
			// 
			this->textBoxTrial1_2_D2->Location = System::Drawing::Point(926, 795);
			this->textBoxTrial1_2_D2->Name = L"textBoxTrial1_2_D2";
			this->textBoxTrial1_2_D2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_2_D2->TabIndex = 70;
			// 
			// textBoxTrial1_2_C2
			// 
			this->textBoxTrial1_2_C2->Location = System::Drawing::Point(723, 792);
			this->textBoxTrial1_2_C2->Name = L"textBoxTrial1_2_C2";
			this->textBoxTrial1_2_C2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_2_C2->TabIndex = 69;
			// 
			// textBoxTrial1_2_B2
			// 
			this->textBoxTrial1_2_B2->Location = System::Drawing::Point(926, 629);
			this->textBoxTrial1_2_B2->Name = L"textBoxTrial1_2_B2";
			this->textBoxTrial1_2_B2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_2_B2->TabIndex = 68;
			// 
			// textBoxTrial1_2_A2
			// 
			this->textBoxTrial1_2_A2->Location = System::Drawing::Point(723, 629);
			this->textBoxTrial1_2_A2->Name = L"textBoxTrial1_2_A2";
			this->textBoxTrial1_2_A2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_2_A2->TabIndex = 67;
			// 
			// textBoxTrial1_1_D1
			// 
			this->textBoxTrial1_1_D1->Location = System::Drawing::Point(937, 415);
			this->textBoxTrial1_1_D1->Name = L"textBoxTrial1_1_D1";
			this->textBoxTrial1_1_D1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_1_D1->TabIndex = 66;
			// 
			// textBoxTrial1_1_C1
			// 
			this->textBoxTrial1_1_C1->Location = System::Drawing::Point(734, 415);
			this->textBoxTrial1_1_C1->Name = L"textBoxTrial1_1_C1";
			this->textBoxTrial1_1_C1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_1_C1->TabIndex = 65;
			// 
			// textBoxTrial1_1_B1
			// 
			this->textBoxTrial1_1_B1->Location = System::Drawing::Point(937, 241);
			this->textBoxTrial1_1_B1->Name = L"textBoxTrial1_1_B1";
			this->textBoxTrial1_1_B1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_1_B1->TabIndex = 64;
			// 
			// textBoxTrial1_1_A1
			// 
			this->textBoxTrial1_1_A1->Location = System::Drawing::Point(734, 241);
			this->textBoxTrial1_1_A1->Name = L"textBoxTrial1_1_A1";
			this->textBoxTrial1_1_A1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_1_A1->TabIndex = 63;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(253, 835);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 34);
			this->button10->TabIndex = 62;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(523, 663);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 34);
			this->button9->TabIndex = 61;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(534, 473);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 34);
			this->button8->TabIndex = 60;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(381, 473);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 34);
			this->button7->TabIndex = 59;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(264, 473);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 34);
			this->button6->TabIndex = 58;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(373, 663);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 34);
			this->button5->TabIndex = 57;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(253, 663);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 34);
			this->button4->TabIndex = 56;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(534, 291);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 34);
			this->button3->TabIndex = 55;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(384, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 34);
			this->button2->TabIndex = 54;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(264, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 34);
			this->button1->TabIndex = 53;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button1_Click);
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(926, 731);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(33, 29);
			this->label29->TabIndex = 50;
			this->label29->Text = L"D2";
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(723, 731);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(33, 29);
			this->label30->TabIndex = 49;
			this->label30->Text = L"C2";
			// 
			// labelTrial1_2_I22S
			// 
			this->labelTrial1_2_I22S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_I22S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_I22S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_I22S->Location = System::Drawing::Point(523, 797);
			this->labelTrial1_2_I22S->Name = L"labelTrial1_2_I22S";
			this->labelTrial1_2_I22S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_I22S->TabIndex = 48;
			// 
			// labelTrial1_2_I21S
			// 
			this->labelTrial1_2_I21S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_I21S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_I21S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_I21S->Location = System::Drawing::Point(373, 797);
			this->labelTrial1_2_I21S->Name = L"labelTrial1_2_I21S";
			this->labelTrial1_2_I21S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_I21S->TabIndex = 47;
			// 
			// labelTrial1_2_U21S
			// 
			this->labelTrial1_2_U21S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_U21S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_U21S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_U21S->Location = System::Drawing::Point(253, 797);
			this->labelTrial1_2_U21S->Name = L"labelTrial1_2_U21S";
			this->labelTrial1_2_U21S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_U21S->TabIndex = 46;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(523, 731);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(117, 29);
			this->label34->TabIndex = 45;
			this->label34->Text = L"I22S（mA）";
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(373, 731);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(118, 29);
			this->label35->TabIndex = 44;
			this->label35->Text = L"I21S（mA）";
			// 
			// label36
			// 
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(253, 731);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(105, 29);
			this->label36->TabIndex = 43;
			this->label36->Text = L"U21S（V）";
			// 
			// labelTrial1_2_I210
			// 
			this->labelTrial1_2_I210->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_I210->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_I210->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_I210->Location = System::Drawing::Point(523, 631);
			this->labelTrial1_2_I210->Name = L"labelTrial1_2_I210";
			this->labelTrial1_2_I210->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_I210->TabIndex = 40;
			// 
			// labelTrial1_2_U220
			// 
			this->labelTrial1_2_U220->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_U220->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_U220->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_U220->Location = System::Drawing::Point(373, 631);
			this->labelTrial1_2_U220->Name = L"labelTrial1_2_U220";
			this->labelTrial1_2_U220->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_U220->TabIndex = 39;
			// 
			// labelTrial1_2_U210
			// 
			this->labelTrial1_2_U210->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_U210->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_U210->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_U210->Location = System::Drawing::Point(253, 631);
			this->labelTrial1_2_U210->Name = L"labelTrial1_2_U210";
			this->labelTrial1_2_U210->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_U210->TabIndex = 38;
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(926, 586);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(33, 29);
			this->label43->TabIndex = 37;
			this->label43->Text = L"B2";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(723, 586);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(33, 29);
			this->label44->TabIndex = 36;
			this->label44->Text = L"A2";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(523, 586);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(117, 29);
			this->label45->TabIndex = 35;
			this->label45->Text = L"I21O（mA）";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(373, 586);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(105, 29);
			this->label46->TabIndex = 34;
			this->label46->Text = L"U22O（V）";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(253, 586);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(105, 29);
			this->label47->TabIndex = 33;
			this->label47->Text = L"U21O（V）";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(820, 548);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(94, 29);
			this->label48->TabIndex = 32;
			this->label48->Text = L"计 算 值";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(397, 548);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(94, 29);
			this->label49->TabIndex = 31;
			this->label49->Text = L"测 量 值";
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(93, 753);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(130, 50);
			this->label50->TabIndex = 30;
			this->label50->Text = L"输出端短路\r\nU22=0";
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(93, 610);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(130, 50);
			this->label51->TabIndex = 29;
			this->label51->Text = L"输出端开路\r\nI22=0";
			// 
			// label52
			// 
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(53, 660);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(34, 110);
			this->label52->TabIndex = 28;
			this->label52->Text = L"双\r\n口\r\n网络\r\nⅡ";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(937, 351);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(33, 29);
			this->label23->TabIndex = 25;
			this->label23->Text = L"D1";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(734, 351);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(33, 29);
			this->label24->TabIndex = 24;
			this->label24->Text = L"C1";
			// 
			// labelTrial1_1_U12S
			// 
			this->labelTrial1_1_U12S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U12S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U12S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U12S->Location = System::Drawing::Point(534, 417);
			this->labelTrial1_1_U12S->Name = L"labelTrial1_1_U12S";
			this->labelTrial1_1_U12S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U12S->TabIndex = 23;
			// 
			// labelTrial1_1_I11S
			// 
			this->labelTrial1_1_I11S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_I11S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_I11S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_I11S->Location = System::Drawing::Point(384, 417);
			this->labelTrial1_1_I11S->Name = L"labelTrial1_1_I11S";
			this->labelTrial1_1_I11S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_I11S->TabIndex = 22;
			// 
			// labelTrial1_1_U11S
			// 
			this->labelTrial1_1_U11S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U11S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U11S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U11S->Location = System::Drawing::Point(264, 417);
			this->labelTrial1_1_U11S->Name = L"labelTrial1_1_U11S";
			this->labelTrial1_1_U11S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U11S->TabIndex = 21;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(534, 351);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 29);
			this->label17->TabIndex = 20;
			this->label17->Text = L"I12S（mA）";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(384, 351);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(118, 29);
			this->label18->TabIndex = 19;
			this->label18->Text = L"I11S（mA）";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(264, 351);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(105, 29);
			this->label19->TabIndex = 18;
			this->label19->Text = L"U11S（V）";
			// 
			// labelTrial1_1_I110
			// 
			this->labelTrial1_1_I110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_I110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_I110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_I110->Location = System::Drawing::Point(534, 241);
			this->labelTrial1_1_I110->Name = L"labelTrial1_1_I110";
			this->labelTrial1_1_I110->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_I110->TabIndex = 15;
			// 
			// labelTrial1_1_U120
			// 
			this->labelTrial1_1_U120->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U120->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U120->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U120->Location = System::Drawing::Point(384, 241);
			this->labelTrial1_1_U120->Name = L"labelTrial1_1_U120";
			this->labelTrial1_1_U120->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U120->TabIndex = 14;
			// 
			// labelTrial1_1_U110
			// 
			this->labelTrial1_1_U110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U110->Location = System::Drawing::Point(264, 241);
			this->labelTrial1_1_U110->Name = L"labelTrial1_1_U110";
			this->labelTrial1_1_U110->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U110->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(937, 196);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 29);
			this->label11->TabIndex = 12;
			this->label11->Text = L"B1";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(734, 196);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 29);
			this->label10->TabIndex = 11;
			this->label10->Text = L"A1";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(534, 196);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 29);
			this->label9->TabIndex = 10;
			this->label9->Text = L"I11O（mA）";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(384, 196);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 29);
			this->label8->TabIndex = 9;
			this->label8->Text = L"U12O（V）";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(264, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 29);
			this->label7->TabIndex = 8;
			this->label7->Text = L"U11O（V）";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(831, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 29);
			this->label6->TabIndex = 7;
			this->label6->Text = L"计 算 值";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(408, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"测 量 值";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(104, 396);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 50);
			this->label4->TabIndex = 5;
			this->label4->Text = L"输出端短路\r\nU12=0";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(104, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 50);
			this->label3->TabIndex = 4;
			this->label3->Text = L"输出端开路\r\nI12=0";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(64, 270);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 110);
			this->label2->TabIndex = 3;
			this->label2->Text = L"双\r\n口\r\n网络\r\nⅠ";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(24, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1174, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"    1．按同时测量法分别测定两个双口网络的传输参数A1、B1、C1、D1和A2、B2、C2、D2，并列出它们的传输方程。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBoxTrial2_1_U);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R2S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R20);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R1S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R10);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->textBoxTrial2_1_D);
			this->groupBox2->Controls->Add(this->textBoxTrial2_1_C);
			this->groupBox2->Controls->Add(this->textBoxTrial2_1_B);
			this->groupBox2->Controls->Add(this->textBoxTrial2_1_A);
			this->groupBox2->Controls->Add(this->label59);
			this->groupBox2->Controls->Add(this->label61);
			this->groupBox2->Controls->Add(this->label57);
			this->groupBox2->Controls->Add(this->label55);
			this->groupBox2->Controls->Add(this->label53);
			this->groupBox2->Controls->Add(this->label106);
			this->groupBox2->Controls->Add(this->label104);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I2S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U2S);
			this->groupBox2->Controls->Add(this->label80);
			this->groupBox2->Controls->Add(this->label81);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I20);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U20);
			this->groupBox2->Controls->Add(this->label85);
			this->groupBox2->Controls->Add(this->label86);
			this->groupBox2->Controls->Add(this->label87);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I1S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U1S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I10);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U10);
			this->groupBox2->Controls->Add(this->label93);
			this->groupBox2->Controls->Add(this->label94);
			this->groupBox2->Controls->Add(this->label95);
			this->groupBox2->Controls->Add(this->label96);
			this->groupBox2->Controls->Add(this->label97);
			this->groupBox2->Controls->Add(this->label98);
			this->groupBox2->Controls->Add(this->label99);
			this->groupBox2->Controls->Add(this->label100);
			this->groupBox2->Controls->Add(this->label101);
			this->groupBox2->Controls->Add(this->label103);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(28, 1707);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 715);
			this->groupBox2->TabIndex = 83;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容二";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &二端口网络的研究实验内容::groupBox2_Enter);
			// 
			// textBoxTrial2_1_U
			// 
			this->textBoxTrial2_1_U->Location = System::Drawing::Point(27, 329);
			this->textBoxTrial2_1_U->Name = L"textBoxTrial2_1_U";
			this->textBoxTrial2_1_U->Size = System::Drawing::Size(155, 30);
			this->textBoxTrial2_1_U->TabIndex = 89;
			// 
			// labelTrial2_1_R2S
			// 
			this->labelTrial2_1_R2S->Location = System::Drawing::Point(994, 448);
			this->labelTrial2_1_R2S->Name = L"labelTrial2_1_R2S";
			this->labelTrial2_1_R2S->Size = System::Drawing::Size(117, 30);
			this->labelTrial2_1_R2S->TabIndex = 88;
			// 
			// labelTrial2_1_R20
			// 
			this->labelTrial2_1_R20->Location = System::Drawing::Point(534, 446);
			this->labelTrial2_1_R20->Name = L"labelTrial2_1_R20";
			this->labelTrial2_1_R20->Size = System::Drawing::Size(117, 30);
			this->labelTrial2_1_R20->TabIndex = 87;
			// 
			// labelTrial2_1_R1S
			// 
			this->labelTrial2_1_R1S->Location = System::Drawing::Point(994, 240);
			this->labelTrial2_1_R1S->Name = L"labelTrial2_1_R1S";
			this->labelTrial2_1_R1S->Size = System::Drawing::Size(117, 30);
			this->labelTrial2_1_R1S->TabIndex = 86;
			// 
			// labelTrial2_1_R10
			// 
			this->labelTrial2_1_R10->Location = System::Drawing::Point(534, 241);
			this->labelTrial2_1_R10->Name = L"labelTrial2_1_R10";
			this->labelTrial2_1_R10->Size = System::Drawing::Size(117, 30);
			this->labelTrial2_1_R10->TabIndex = 85;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(863, 491);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(96, 34);
			this->button20->TabIndex = 84;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(732, 491);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(96, 34);
			this->button21->TabIndex = 83;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button21_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(382, 491);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(96, 34);
			this->button23->TabIndex = 81;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(262, 491);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(96, 34);
			this->button24->TabIndex = 80;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button24_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(863, 285);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(96, 34);
			this->button17->TabIndex = 78;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(732, 285);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(96, 34);
			this->button16->TabIndex = 77;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button16_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(382, 285);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(96, 34);
			this->button14->TabIndex = 75;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(262, 285);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(96, 34);
			this->button13->TabIndex = 74;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button13_Click);
			// 
			// textBoxTrial2_1_D
			// 
			this->textBoxTrial2_1_D->Location = System::Drawing::Point(723, 666);
			this->textBoxTrial2_1_D->Name = L"textBoxTrial2_1_D";
			this->textBoxTrial2_1_D->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_1_D->TabIndex = 73;
			// 
			// textBoxTrial2_1_C
			// 
			this->textBoxTrial2_1_C->Location = System::Drawing::Point(358, 666);
			this->textBoxTrial2_1_C->Name = L"textBoxTrial2_1_C";
			this->textBoxTrial2_1_C->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_1_C->TabIndex = 72;
			// 
			// textBoxTrial2_1_B
			// 
			this->textBoxTrial2_1_B->Location = System::Drawing::Point(723, 612);
			this->textBoxTrial2_1_B->Name = L"textBoxTrial2_1_B";
			this->textBoxTrial2_1_B->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_1_B->TabIndex = 71;
			// 
			// textBoxTrial2_1_A
			// 
			this->textBoxTrial2_1_A->Location = System::Drawing::Point(358, 612);
			this->textBoxTrial2_1_A->Name = L"textBoxTrial2_1_A";
			this->textBoxTrial2_1_A->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_1_A->TabIndex = 70;
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(626, 666);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(68, 29);
			this->label59->TabIndex = 64;
			this->label59->Text = L"D=";
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(264, 666);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(68, 29);
			this->label61->TabIndex = 62;
			this->label61->Text = L"C=";
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(626, 612);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(68, 29);
			this->label57->TabIndex = 60;
			this->label57->Text = L"B=";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(264, 612);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(68, 29);
			this->label55->TabIndex = 58;
			this->label55->Text = L"A=";
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Black;
			this->label53->Location = System::Drawing::Point(456, 557);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(163, 29);
			this->label53->TabIndex = 57;
			this->label53->Text = L"计 算 值";
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->ForeColor = System::Drawing::Color::Black;
			this->label106->Location = System::Drawing::Point(994, 405);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(105, 29);
			this->label106->TabIndex = 55;
			this->label106->Text = L"R2S(KΩ)";
			// 
			// label104
			// 
			this->label104->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(994, 196);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(105, 29);
			this->label104->TabIndex = 53;
			this->label104->Text = L"R1S(KΩ)";
			// 
			// labelTrial2_1_I2S
			// 
			this->labelTrial2_1_I2S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I2S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I2S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I2S->Location = System::Drawing::Point(863, 448);
			this->labelTrial2_1_I2S->Name = L"labelTrial2_1_I2S";
			this->labelTrial2_1_I2S->Size = System::Drawing::Size(105, 26);
			this->labelTrial2_1_I2S->TabIndex = 27;
			// 
			// labelTrial2_1_U2S
			// 
			this->labelTrial2_1_U2S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U2S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U2S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U2S->Location = System::Drawing::Point(732, 448);
			this->labelTrial2_1_U2S->Name = L"labelTrial2_1_U2S";
			this->labelTrial2_1_U2S->Size = System::Drawing::Size(105, 26);
			this->labelTrial2_1_U2S->TabIndex = 26;
			// 
			// label80
			// 
			this->label80->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label80->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label80->ForeColor = System::Drawing::Color::Black;
			this->label80->Location = System::Drawing::Point(865, 405);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(105, 29);
			this->label80->TabIndex = 25;
			this->label80->Text = L"I2S（mA）";
			// 
			// label81
			// 
			this->label81->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label81->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label81->ForeColor = System::Drawing::Color::Black;
			this->label81->Location = System::Drawing::Point(734, 405);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(105, 29);
			this->label81->TabIndex = 24;
			this->label81->Text = L"U2S（V）";
			// 
			// labelTrial2_1_I20
			// 
			this->labelTrial2_1_I20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I20->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I20->Location = System::Drawing::Point(382, 448);
			this->labelTrial2_1_I20->Name = L"labelTrial2_1_I20";
			this->labelTrial2_1_I20->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I20->TabIndex = 22;
			// 
			// labelTrial2_1_U20
			// 
			this->labelTrial2_1_U20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U20->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U20->Location = System::Drawing::Point(262, 448);
			this->labelTrial2_1_U20->Name = L"labelTrial2_1_U20";
			this->labelTrial2_1_U20->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_U20->TabIndex = 21;
			// 
			// label85
			// 
			this->label85->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label85->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label85->ForeColor = System::Drawing::Color::Black;
			this->label85->Location = System::Drawing::Point(534, 405);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(117, 29);
			this->label85->TabIndex = 20;
			this->label85->Text = L"R2O(KΩ)";
			// 
			// label86
			// 
			this->label86->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label86->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label86->ForeColor = System::Drawing::Color::Black;
			this->label86->Location = System::Drawing::Point(384, 405);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(118, 29);
			this->label86->TabIndex = 19;
			this->label86->Text = L"I2O（mA）";
			// 
			// label87
			// 
			this->label87->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label87->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label87->ForeColor = System::Drawing::Color::Black;
			this->label87->Location = System::Drawing::Point(264, 405);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(105, 29);
			this->label87->TabIndex = 18;
			this->label87->Text = L"U2O（V）";
			// 
			// labelTrial2_1_I1S
			// 
			this->labelTrial2_1_I1S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I1S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I1S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I1S->Location = System::Drawing::Point(865, 241);
			this->labelTrial2_1_I1S->Name = L"labelTrial2_1_I1S";
			this->labelTrial2_1_I1S->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I1S->TabIndex = 17;
			// 
			// labelTrial2_1_U1S
			// 
			this->labelTrial2_1_U1S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U1S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U1S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U1S->Location = System::Drawing::Point(734, 241);
			this->labelTrial2_1_U1S->Name = L"labelTrial2_1_U1S";
			this->labelTrial2_1_U1S->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_U1S->TabIndex = 16;
			// 
			// labelTrial2_1_I10
			// 
			this->labelTrial2_1_I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I10->Location = System::Drawing::Point(384, 241);
			this->labelTrial2_1_I10->Name = L"labelTrial2_1_I10";
			this->labelTrial2_1_I10->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I10->TabIndex = 14;
			// 
			// labelTrial2_1_U10
			// 
			this->labelTrial2_1_U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U10->Location = System::Drawing::Point(264, 241);
			this->labelTrial2_1_U10->Name = L"labelTrial2_1_U10";
			this->labelTrial2_1_U10->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_U10->TabIndex = 13;
			// 
			// label93
			// 
			this->label93->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label93->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label93->ForeColor = System::Drawing::Color::Black;
			this->label93->Location = System::Drawing::Point(865, 196);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(105, 29);
			this->label93->TabIndex = 12;
			this->label93->Text = L"I1S（mA）";
			// 
			// label94
			// 
			this->label94->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label94->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label94->ForeColor = System::Drawing::Color::Black;
			this->label94->Location = System::Drawing::Point(734, 196);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(94, 29);
			this->label94->TabIndex = 11;
			this->label94->Text = L"U1S（V）";
			// 
			// label95
			// 
			this->label95->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label95->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label95->ForeColor = System::Drawing::Color::Black;
			this->label95->Location = System::Drawing::Point(534, 196);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(117, 29);
			this->label95->TabIndex = 10;
			this->label95->Text = L"R1O(KΩ)";
			// 
			// label96
			// 
			this->label96->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label96->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label96->ForeColor = System::Drawing::Color::Black;
			this->label96->Location = System::Drawing::Point(384, 196);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(105, 29);
			this->label96->TabIndex = 9;
			this->label96->Text = L"I1O（mA）";
			// 
			// label97
			// 
			this->label97->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label97->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label97->ForeColor = System::Drawing::Color::Black;
			this->label97->Location = System::Drawing::Point(264, 196);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(105, 29);
			this->label97->TabIndex = 8;
			this->label97->Text = L"U1O（V）";
			// 
			// label98
			// 
			this->label98->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label98->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label98->ForeColor = System::Drawing::Color::Black;
			this->label98->Location = System::Drawing::Point(831, 158);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(160, 29);
			this->label98->TabIndex = 7;
			this->label98->Text = L"输出端短路U2=0";
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label99->ForeColor = System::Drawing::Color::Black;
			this->label99->Location = System::Drawing::Point(358, 158);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(153, 29);
			this->label99->TabIndex = 6;
			this->label99->Text = L"输出端开路I2=0";
			// 
			// label100
			// 
			this->label100->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label100->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label100->ForeColor = System::Drawing::Color::Black;
			this->label100->Location = System::Drawing::Point(358, 354);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(153, 30);
			this->label100->TabIndex = 5;
			this->label100->Text = L"输入端开路I1=0";
			// 
			// label101
			// 
			this->label101->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label101->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label101->ForeColor = System::Drawing::Color::Black;
			this->label101->Location = System::Drawing::Point(831, 354);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(160, 30);
			this->label101->TabIndex = 4;
			this->label101->Text = L"输入端短路U1=0";
			// 
			// label103
			// 
			this->label103->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(24, 71);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(1174, 57);
			this->label103->TabIndex = 0;
			this->label103->Text = L"    2．将两个双口网络级联后，用两端口分别测量法测量级联后等效双口网络的传输参数A、B、C、D，并验证等效双口网络传输参数与级联的两个双口网络传输参数之间的关"
				L"系。";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::SkyBlue;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(30, 2481);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1526, 52);
			this->label12->TabIndex = 114;
			this->label12->Text = L"答题结束";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(696, 2428);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(195, 39);
			this->button25->TabIndex = 113;
			this->button25->Text = L"成绩完成并上传";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &二端口网络的研究实验内容::button25_Click);
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(29, 291);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 30);
			this->label13->TabIndex = 90;
			this->label13->Text = L"输入电压";
			// 
			// 二端口网络的研究实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1543, 775);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"二端口网络的研究实验内容";
			this->Text = L"二端口网络的研究实验内容";
			this->Load += gcnew System::EventHandler(this, &二端口网络的研究实验内容::二端口网络的研究实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:void SendGrade();
		public: ST_二端口网络的研究 Load_Grade_data();

	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void 二端口网络的研究实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	lcc.SendComputerInfo(Grades[9] + "正在实验中");
	NowTrial::NowTrailCode = 9;
	NowTrial::NowTrailForm = this;
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {

	SendGrade();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_1_U110->Text = global::GetU30_U400VData();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_1_U120->Text = global::GetU30_U400VData();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_1_I110->Text = global::GetI500Data();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_1_U11S->Text = global::GetU30_U400VData();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_1_I11S->Text = global::GetI500Data();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_1_U12S->Text = global::GetI500Data();
}


private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_2_U210->Text = global::GetU30_U400VData();
}


private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_2_I210->Text = global::GetI500Data();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_2_U21S->Text = global::GetU30_U400VData();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_2_I21S->Text = global::GetI500Data();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_2_I22S->Text = global::GetI500Data();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_U10->Text = global::GetU30_U400VData();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_I10->Text = global::GetI500Data();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_R10->Text = global::GetI500Data();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_U20->Text = global::GetU30_U400VData();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_I20->Text = global::GetI500Data();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_R20->Text = global::GetI500Data();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_U2S->Text = global::GetU30_U400VData();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_U1S->Text = global::GetU30_U400VData();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_I1S->Text = global::GetI500Data();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_1_I2S->Text = global::GetI500Data();
}
private: System::Void button15_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_2_U220->Text = global::GetU30_U400VData();
}
};
};
