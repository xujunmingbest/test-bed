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

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;














	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;















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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
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
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->label4);
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
			this->groupBox1->Size = System::Drawing::Size(1091, 189);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"电测量参数仪调试";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &hardware_debug::groupBox1_Enter);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(332, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(300, 30);
			this->textBox4->TabIndex = 8;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(332, 143);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(300, 35);
			this->button14->TabIndex = 7;
			this->button14->Text = L"设置";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &hardware_debug::button14_Click);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(332, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 31);
			this->label4->TabIndex = 5;
			this->label4->Text = L"监控的参数仪器编号（正整数）";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(662, 143);
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
			this->label3->Location = System::Drawing::Point(662, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"电压表3的数据";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(662, 94);
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(31, 400);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1091, 612);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"示波器模块调试";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &hardware_debug::groupBox3_Enter);
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
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(31, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1091, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// hardware_debug
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1481, 736);
			this->Controls->Add(this->groupBox3);
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
	configXml.SerialControlSource = T_to_string(comboBox1->Text);
	if (!global::scs->SerialHandleInit()) {
		MessageBox::Show("参数测试仪串口初始化失败");
	}
	else {
		MessageBox::Show("参数测试仪串口初始化成功");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//global::sh->SerialHandleClose();
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

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	global::scs->SerialHandleClose();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	oscillograph::oscillographClose();
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

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	uint Id;
	try {
		Id = Convert::ToUInt32(textBox4->Text);
	}catch(System::Exception^e){
		MessageBox::Show("输入不合法");
		return;
	}
	global::MeterId = Id;
	MessageBox::Show("设置成功");
}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
