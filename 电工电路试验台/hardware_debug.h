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
	/// hardware_debug 摘要
	/// </summary>
	public ref class hardware_debug : public System::Windows::Forms::Form
	{
	public:
		hardware_debug(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~hardware_debug()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;



	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;













	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hardware_debug::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(31, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1091, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(345, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(496, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"硬件调试模块";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &hardware_debug::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(31, 191);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1091, 206);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"电测量参数仪调试";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(310, 165);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &hardware_debug::button3_Click);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(310, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"电压表3的数据";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(310, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &hardware_debug::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(227, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"关闭";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &hardware_debug::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"打开";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &hardware_debug::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"COM1", L"COM2", L"COM3", L"COM4", L"COM5", L"COM6",
					L"COM7", L"COM8", L"COM9", L"COM10", L"COM11", L"COM12", L"COM13", L"COM14", L"COM15", L"COM16", L"COM17", L"COM18", L"COM19",
					L"COM20", L"COM21", L"COM22", L"COM23", L"COM24", L"COM25", L"COM26", L"COM27", L"COM28", L"COM29"
			});
			this->comboBox1->Location = System::Drawing::Point(18, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(31, 419);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1091, 242);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"智能控制电源从机调试";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(310, 199);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(235, 37);
			this->button13->TabIndex = 11;
			this->button13->Text = L"方波设置";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &hardware_debug::button13_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(551, 153);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(43, 30);
			this->button11->TabIndex = 10;
			this->button11->Text = L"HZ";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(600, 153);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(218, 30);
			this->button12->TabIndex = 9;
			this->button12->Text = L"频率设置";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &hardware_debug::button12_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(310, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 30);
			this->textBox3->TabIndex = 8;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(551, 103);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(26, 30);
			this->button10->TabIndex = 7;
			this->button10->Text = L"V";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(583, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(235, 30);
			this->button4->TabIndex = 6;
			this->button4->Text = L"直流电压设置";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &hardware_debug::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(310, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 30);
			this->textBox2->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(227, 48);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 35);
			this->button5->TabIndex = 2;
			this->button5->Text = L"关闭";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &hardware_debug::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(146, 47);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 35);
			this->button6->TabIndex = 1;
			this->button6->Text = L"打开";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &hardware_debug::button6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"COM1", L"COM2", L"COM3", L"COM4", L"COM5", L"COM6",
					L"COM7", L"COM8", L"COM9", L"COM10", L"COM11", L"COM12", L"COM13", L"COM14", L"COM15", L"COM16", L"COM17", L"COM18", L"COM19",
					L"COM20", L"COM21", L"COM22", L"COM23", L"COM24", L"COM25", L"COM26", L"COM27", L"COM28", L"COM29"
			});
			this->comboBox2->Location = System::Drawing::Point(18, 47);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(31, 680);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1091, 612);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"示波器模块调试";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(197, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(726, 474);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(197, 67);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(235, 27);
			this->button7->TabIndex = 4;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &hardware_debug::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(99, 30);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 33);
			this->button8->TabIndex = 2;
			this->button8->Text = L"关闭";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &hardware_debug::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(18, 29);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 33);
			this->button9->TabIndex = 1;
			this->button9->Text = L"打开";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &hardware_debug::button9_Click);
			// 
			// hardware_debug
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1439, 736);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"hardware_debug";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"硬件调试";
			this->Load += gcnew System::EventHandler(this, &hardware_debug::hardware_debug_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void hardware_debug_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "       本调试界面旨在对软件的调试界面进行模拟调试。调试包括: 1、电测量参数仪调试。2、智能控制电源从机调试。3、示波器模块调试。";
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = label1->Text->Substring(1) + label1->Text->Substring(0, 1);
	}
	private: System::Void bindingNavigatorMoveNextItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	configXml.SerialHandle = T_to_string(comboBox1->Text);
	if (!global::sh->SerialHandleInit()) {
		MessageBox::Show("参数测试仪串口初始化失败");
	}
	else {
		MessageBox::Show("参数测试仪串口初始化成功");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	global::sh->SerialHandleClose();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!oscillograph::oscillographOpen()) 	{
		MessageBox::Show("示波器模块初始化失败");
    }
	else {
		MessageBox::Show("示波器模块初始化成功");
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = global::GetU30_U400VData();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	configXml.SerialControlSource = T_to_string(comboBox2->Text);
	if (!global::scs->SerialHandleInit()) {
		MessageBox::Show("控制电源模块串口初始化失败");
	}
	else {
		MessageBox::Show("控制电源模块串口初始化成功");
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	global::scs->SerialHandleClose();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	oscillograph::oscillographClose();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox2->Text,0,30);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBox3->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	global::scs->SetWaveForm(SQUAREWAVE);
}
		 String ^BathPath = gcnew String(BMPSAVEPATH);
		 String ^trial1Path_in = BathPath + "硬件模块调试.bmp";
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial1Path_in;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial1Path_in))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBox2->ImageLocation = imageLocation;
}
};
}
