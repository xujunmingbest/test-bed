#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 单相铁心变压器特性的测试实验原理 摘要
	/// </summary>
	public ref class 单相铁心变压器特性的测试实验原理 : public System::Windows::Forms::Form
	{
	public:
		单相铁心变压器特性的测试实验原理(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~单相铁心变压器特性的测试实验原理()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(单相铁心变压器特性的测试实验原理::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(23, 455);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 29);
			this->label2->TabIndex = 27;
			this->label2->Text = L"电压比";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(11, 364);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(960, 51);
			this->label1->TabIndex = 26;
			this->label1->Text = L"    （AX—设为低压侧）的U1、I1、P1及副边（ax设为高压侧）的U2、I2，并用万用表R×1档测出原、副绕组的电阻R1和R2，即可算得变压器的各项参数值。"
				L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(428, 25);
			this->label7->TabIndex = 25;
			this->label7->Text = L"单相铁心变压器特性的测试实验原理";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(11, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(960, 33);
			this->label3->TabIndex = 24;
			this->label3->Text = L"    1．如图14－1所示测试变压器参数的电路，由各仪表读得变压器原边";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(303, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(587, 228);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(137, 443);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(82, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(488, 443);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 57);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(318, 455);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 29);
			this->label4->TabIndex = 30;
			this->label4->Text = L"电流比";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(488, 536);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(78, 58);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(318, 548);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 29);
			this->label5->TabIndex = 34;
			this->label5->Text = L"副边阻抗";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(137, 536);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(82, 58);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 33;
			this->pictureBox5->TabStop = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(23, 548);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 29);
			this->label6->TabIndex = 32;
			this->label6->Text = L"原边阻抗";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(303, 642);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(32, 58);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 37;
			this->pictureBox6->TabStop = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(194, 661);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 29);
			this->label8->TabIndex = 36;
			this->label8->Text = L"阻抗比=";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(303, 734);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(136, 28);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 39;
			this->pictureBox7->TabStop = false;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(189, 738);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 29);
			this->label9->TabIndex = 38;
			this->label9->Text = L"负载功率";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(303, 798);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(102, 30);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 41;
			this->pictureBox8->TabStop = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(189, 799);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 29);
			this->label10->TabIndex = 40;
			this->label10->Text = L"损耗功率";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(474, 860);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(92, 32);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 45;
			this->pictureBox9->TabStop = false;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(318, 863);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 29);
			this->label11->TabIndex = 44;
			this->label11->Text = L"原边线圈铜耗";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(137, 851);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(47, 57);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 43;
			this->pictureBox10->TabStop = false;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(23, 863);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 29);
			this->label12->TabIndex = 42;
			this->label12->Text = L"功率因数=";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(474, 920);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(188, 30);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 49;
			this->pictureBox11->TabStop = false;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(318, 930);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(137, 29);
			this->label13->TabIndex = 48;
			this->label13->Text = L"铁耗";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(137, 918);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(97, 32);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 47;
			this->pictureBox12->TabStop = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(23, 930);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(108, 29);
			this->label14->TabIndex = 46;
			this->label14->Text = L"副边铜耗";
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(23, 970);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(960, 125);
			this->label15->TabIndex = 50;
			this->label15->Text = resources->GetString(L"label15.Text");
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(23, 1095);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(960, 125);
			this->label16->TabIndex = 51;
			this->label16->Text = L"    3．变压器外特性测试。\r\n    为了满足实验台上三组灯泡负载额定电压为220V的要求，故以变压器的低压（36V）绕组作为原边，220V的高压绕组作为副边"
				L"即当作一台升压变压器使用。\r\n在保持原边电压 U1（＝36V）不变时，逐次增加灯泡负载（每只灯为15W），测定U1、U2、I2和 I1，即可绘出变压器的外特性，"
				L"即负载特性曲线U2＝ F（I2） 。";
			// 
			// 单相铁心变压器特性的测试实验原理
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1260, 758);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"单相铁心变压器特性的测试实验原理";
			this->Text = L"单相铁心变压器特性的测试实验原理";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
