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
	/// 仪表量程的扩展实验内容 摘要
	/// </summary>
	public ref class 仪表量程的扩展实验内容 : public System::Windows::Forms::Form
	{
	public:
		仪表量程的扩展实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}
		ST_仪表量程的扩展 Load_Grade_data();
		void SendData();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~仪表量程的扩展实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:






	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line1;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;






	private: System::Windows::Forms::GroupBox^  groupBox1;












	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;












	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_3;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_2;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_1;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_6;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_5;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_4;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_3;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_2;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_1;
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
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial1_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U2_line1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I2_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_1 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_1);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line1);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(57, 89);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 302);
			this->groupBox8->TabIndex = 86;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"回转器 实验内容1";
			// 
			// textBoxTrial1_6
			// 
			this->textBoxTrial1_6->Location = System::Drawing::Point(813, 207);
			this->textBoxTrial1_6->Name = L"textBoxTrial1_6";
			this->textBoxTrial1_6->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial1_6->TabIndex = 108;
			// 
			// textBoxTrial1_5
			// 
			this->textBoxTrial1_5->Location = System::Drawing::Point(685, 207);
			this->textBoxTrial1_5->Name = L"textBoxTrial1_5";
			this->textBoxTrial1_5->Size = System::Drawing::Size(106, 30);
			this->textBoxTrial1_5->TabIndex = 107;
			// 
			// textBoxTrial1_4
			// 
			this->textBoxTrial1_4->Location = System::Drawing::Point(565, 207);
			this->textBoxTrial1_4->Name = L"textBoxTrial1_4";
			this->textBoxTrial1_4->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial1_4->TabIndex = 106;
			// 
			// textBoxTrial1_3
			// 
			this->textBoxTrial1_3->Location = System::Drawing::Point(437, 207);
			this->textBoxTrial1_3->Name = L"textBoxTrial1_3";
			this->textBoxTrial1_3->Size = System::Drawing::Size(106, 30);
			this->textBoxTrial1_3->TabIndex = 105;
			// 
			// textBoxTrial1_2
			// 
			this->textBoxTrial1_2->Location = System::Drawing::Point(324, 207);
			this->textBoxTrial1_2->Name = L"textBoxTrial1_2";
			this->textBoxTrial1_2->Size = System::Drawing::Size(91, 30);
			this->textBoxTrial1_2->TabIndex = 104;
			// 
			// textBoxTrial1_1
			// 
			this->textBoxTrial1_1->Location = System::Drawing::Point(215, 207);
			this->textBoxTrial1_1->Name = L"textBoxTrial1_1";
			this->textBoxTrial1_1->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial1_1->TabIndex = 103;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(812, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 78;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(684, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 77;
			this->label3->Text = L"1";
			// 
			// labelTrial1_U2_line1
			// 
			this->labelTrial1_U2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line1->Location = System::Drawing::Point(323, 157);
			this->labelTrial1_U2_line1->Name = L"labelTrial1_U2_line1";
			this->labelTrial1_U2_line1->Size = System::Drawing::Size(92, 25);
			this->labelTrial1_U2_line1->TabIndex = 76;
			this->labelTrial1_U2_line1->Text = L"4";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(28, 209);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(169, 25);
			this->label11->TabIndex = 64;
			this->label11->Text = L"表头读数(mA)";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(28, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 32);
			this->label10->TabIndex = 63;
			this->label10->Text = L"恒流源输出(mA)";
			// 
			// labelTrial1_I2_line1
			// 
			this->labelTrial1_I2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line1->Location = System::Drawing::Point(564, 157);
			this->labelTrial1_I2_line1->Name = L"labelTrial1_I2_line1";
			this->labelTrial1_I2_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line1->TabIndex = 60;
			this->labelTrial1_I2_line1->Text = L"2";
			// 
			// labelTrial1_I1_line1
			// 
			this->labelTrial1_I1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line1->Location = System::Drawing::Point(436, 157);
			this->labelTrial1_I1_line1->Name = L"labelTrial1_I1_line1";
			this->labelTrial1_I1_line1->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line1->TabIndex = 58;
			this->labelTrial1_I1_line1->Text = L"3";
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(214, 157);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_U1_line1->TabIndex = 56;
			this->labelTrial1_U1_line1->Text = L"5";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 41);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1161, 98);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1、5mA表表头的检验。\r\n    1）、调节恒流源的输出，最大不超过5mA；\r\n    2）、先对毫安表进行机械调零，再将恒流源的输出接至毫安表的信号输"
				L"入端；\r\n    3）、调节恒流源的输出，令其从5mA调至0，分别读取指针表的读数，并记录之。";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(393, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 25);
			this->label1->TabIndex = 85;
			this->label1->Text = L"仪表量程的扩展 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(57, 410);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 302);
			this->groupBox1->TabIndex = 91;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"回转器 实验内容2";
			// 
			// textBoxTrial2_6
			// 
			this->textBoxTrial2_6->Location = System::Drawing::Point(813, 207);
			this->textBoxTrial2_6->Name = L"textBoxTrial2_6";
			this->textBoxTrial2_6->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial2_6->TabIndex = 108;
			// 
			// textBoxTrial2_5
			// 
			this->textBoxTrial2_5->Location = System::Drawing::Point(685, 207);
			this->textBoxTrial2_5->Name = L"textBoxTrial2_5";
			this->textBoxTrial2_5->Size = System::Drawing::Size(106, 30);
			this->textBoxTrial2_5->TabIndex = 107;
			// 
			// textBoxTrial2_4
			// 
			this->textBoxTrial2_4->Location = System::Drawing::Point(565, 207);
			this->textBoxTrial2_4->Name = L"textBoxTrial2_4";
			this->textBoxTrial2_4->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial2_4->TabIndex = 106;
			// 
			// textBoxTrial2_3
			// 
			this->textBoxTrial2_3->Location = System::Drawing::Point(437, 207);
			this->textBoxTrial2_3->Name = L"textBoxTrial2_3";
			this->textBoxTrial2_3->Size = System::Drawing::Size(106, 30);
			this->textBoxTrial2_3->TabIndex = 105;
			// 
			// textBoxTrial2_2
			// 
			this->textBoxTrial2_2->Location = System::Drawing::Point(324, 207);
			this->textBoxTrial2_2->Name = L"textBoxTrial2_2";
			this->textBoxTrial2_2->Size = System::Drawing::Size(91, 30);
			this->textBoxTrial2_2->TabIndex = 104;
			// 
			// textBoxTrial2_1
			// 
			this->textBoxTrial2_1->Location = System::Drawing::Point(215, 207);
			this->textBoxTrial2_1->Name = L"textBoxTrial2_1";
			this->textBoxTrial2_1->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial2_1->TabIndex = 103;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(812, 157);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 25);
			this->label18->TabIndex = 78;
			this->label18->Text = L"0";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(684, 157);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 25);
			this->label19->TabIndex = 77;
			this->label19->Text = L"10";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(323, 157);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(92, 25);
			this->label20->TabIndex = 76;
			this->label20->Text = L"40";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(28, 209);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(169, 25);
			this->label21->TabIndex = 64;
			this->label21->Text = L"毫安表读数(mA)";
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(28, 157);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(169, 32);
			this->label22->TabIndex = 63;
			this->label22->Text = L"恒流源输出(mA)";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(564, 157);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(97, 25);
			this->label23->TabIndex = 60;
			this->label23->Text = L"20";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(436, 157);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 25);
			this->label24->TabIndex = 58;
			this->label24->Text = L"30";
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(214, 157);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(97, 25);
			this->label25->TabIndex = 56;
			this->label25->Text = L"50";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(24, 41);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(1161, 98);
			this->label26->TabIndex = 0;
			this->label26->Text = L"    2、将基本表改装为量程为50mA的毫安表。\r\n    1）、用电阻箱选择正确的电阻，并将分流电阻并接在基本表的两端，这样就将基本表改装成了满量程为50mA"
				L"的毫安表；\r\n    2）、将恒流源的输出调至50mA；\r\n    3）、调节恒流源的输出，使其从50mA调至0，依次减小，用改装好的毫安表依次测量恒流源的输出"
				L"电流，并记录之；";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_1);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->label39);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->label36);
			this->groupBox2->Controls->Add(this->label38);
			this->groupBox2->Controls->Add(this->label42);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(57, 729);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 302);
			this->groupBox2->TabIndex = 92;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"回转器 实验内容3";
			// 
			// textBoxTrial3_6
			// 
			this->textBoxTrial3_6->Location = System::Drawing::Point(812, 204);
			this->textBoxTrial3_6->Name = L"textBoxTrial3_6";
			this->textBoxTrial3_6->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial3_6->TabIndex = 102;
			// 
			// textBoxTrial3_5
			// 
			this->textBoxTrial3_5->Location = System::Drawing::Point(684, 204);
			this->textBoxTrial3_5->Name = L"textBoxTrial3_5";
			this->textBoxTrial3_5->Size = System::Drawing::Size(106, 30);
			this->textBoxTrial3_5->TabIndex = 101;
			// 
			// textBoxTrial3_4
			// 
			this->textBoxTrial3_4->Location = System::Drawing::Point(564, 204);
			this->textBoxTrial3_4->Name = L"textBoxTrial3_4";
			this->textBoxTrial3_4->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial3_4->TabIndex = 100;
			// 
			// textBoxTrial3_3
			// 
			this->textBoxTrial3_3->Location = System::Drawing::Point(436, 204);
			this->textBoxTrial3_3->Name = L"textBoxTrial3_3";
			this->textBoxTrial3_3->Size = System::Drawing::Size(106, 30);
			this->textBoxTrial3_3->TabIndex = 99;
			// 
			// textBoxTrial3_2
			// 
			this->textBoxTrial3_2->Location = System::Drawing::Point(323, 204);
			this->textBoxTrial3_2->Name = L"textBoxTrial3_2";
			this->textBoxTrial3_2->Size = System::Drawing::Size(91, 30);
			this->textBoxTrial3_2->TabIndex = 98;
			// 
			// textBoxTrial3_1
			// 
			this->textBoxTrial3_1->Location = System::Drawing::Point(214, 204);
			this->textBoxTrial3_1->Name = L"textBoxTrial3_1";
			this->textBoxTrial3_1->Size = System::Drawing::Size(97, 30);
			this->textBoxTrial3_1->TabIndex = 97;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(812, 157);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(97, 25);
			this->label33->TabIndex = 96;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(684, 157);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(106, 25);
			this->label34->TabIndex = 95;
			this->label34->Text = L"1";
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(323, 157);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(92, 25);
			this->label35->TabIndex = 94;
			this->label35->Text = L"4";
			// 
			// label39
			// 
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(564, 157);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(97, 25);
			this->label39->TabIndex = 93;
			this->label39->Text = L"2";
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(436, 157);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(106, 25);
			this->label40->TabIndex = 92;
			this->label40->Text = L"3";
			// 
			// label41
			// 
			this->label41->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(214, 157);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(97, 25);
			this->label41->TabIndex = 91;
			this->label41->Text = L"5";
			// 
			// label36
			// 
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(28, 209);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(169, 25);
			this->label36->TabIndex = 64;
			this->label36->Text = L"改装表读数（V）";
			// 
			// label38
			// 
			this->label38->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(28, 157);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(169, 32);
			this->label38->TabIndex = 63;
			this->label38->Text = L"电压源输出（V）";
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(24, 41);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(1161, 98);
			this->label42->TabIndex = 0;
			this->label42->Text = L"    3、将基本表改装为一只电压表。\r\n    1）、用电阻箱选择正确的电阻，并将分压电阻与基本表相串接，这样基本表就被改装成为满量程为5V的电压表；\r\n   "
				L" 2）、将电压源的输出调至5V；\r\n    3）、调节电压源的输出，使其从5V至0，依次减小，并用改装成的电压表进行测量，并记录之。";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(39, 1079);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 197;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(593, 1037);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 196;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &仪表量程的扩展实验内容::button102_Click);
			// 
			// 仪表量程的扩展实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1452, 733);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"仪表量程的扩展实验内容";
			this->Text = L"仪表量程的扩展实验内容";
			this->Load += gcnew System::EventHandler(this, &仪表量程的扩展实验内容::仪表量程的扩展实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 仪表量程的扩展实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
};
}
