#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 元件伏安特性的测试实验器件 摘要
	/// </summary>
	public ref class 元件伏安特性的测试实验器件 : public System::Windows::Forms::Form
	{
	public:
		元件伏安特性的测试实验器件(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~元件伏安特性的测试实验器件()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































	protected:






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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label42);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label39);
			this->groupBox1->Controls->Add(this->label41);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label40);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label32);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label38);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(9, 37);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(880, 599);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验器件";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::groupBox1_Enter);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(535, 454);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(53, 19);
			this->label33->TabIndex = 35;
			this->label33->Text = L"DG02";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(367, 454);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(75, 19);
			this->label34->TabIndex = 34;
			this->label34->Text = L"200/5W";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(85, 556);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(240, 19);
			this->label39->TabIndex = 33;
			this->label39->Text = L"*表示多选项中的推荐配置";
			this->label39->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label35_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(161, 454);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(49, 19);
			this->label35->TabIndex = 33;
			this->label35->Text = L"电阻";
			this->label35->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label35_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(85, 352);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(20, 19);
			this->label36->TabIndex = 32;
			this->label36->Text = L"8";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(535, 420);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(53, 19);
			this->label29->TabIndex = 31;
			this->label29->Text = L"DG02";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(367, 420);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(64, 19);
			this->label30->TabIndex = 30;
			this->label30->Text = L"1K/2W";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(161, 420);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(49, 19);
			this->label31->TabIndex = 29;
			this->label31->Text = L"电阻";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(85, 318);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(20, 19);
			this->label32->TabIndex = 28;
			this->label32->Text = L"7";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(535, 386);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 19);
			this->label17->TabIndex = 27;
			this->label17->Text = L"DG03";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(367, 386);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 19);
			this->label18->TabIndex = 26;
			this->label18->Text = L"12V/0.1A";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(161, 386);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(69, 19);
			this->label19->TabIndex = 25;
			this->label19->Text = L"白炽灯";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(85, 284);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 19);
			this->label20->TabIndex = 24;
			this->label20->Text = L"6";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(535, 352);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 19);
			this->label21->TabIndex = 23;
			this->label21->Text = L"DG02";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(367, 352);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(86, 19);
			this->label22->TabIndex = 22;
			this->label22->Text = L"5.1V/1W";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(161, 352);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(69, 19);
			this->label23->TabIndex = 21;
			this->label23->Text = L"稳压管";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(85, 250);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(20, 19);
			this->label24->TabIndex = 20;
			this->label24->Text = L"5";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(535, 318);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 19);
			this->label25->TabIndex = 19;
			this->label25->Text = L"DG02";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(367, 318);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(64, 19);
			this->label26->TabIndex = 18;
			this->label26->Text = L"2CP15";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(161, 318);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(69, 19);
			this->label27->TabIndex = 17;
			this->label27->Text = L"二极管";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(85, 216);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(20, 19);
			this->label28->TabIndex = 16;
			this->label28->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(535, 284);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 19);
			this->label13->TabIndex = 15;
			this->label13->Text = L"DG02";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(367, 284);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 19);
			this->label14->TabIndex = 14;
			this->label14->Text = L"2AP9";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(161, 284);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 19);
			this->label15->TabIndex = 13;
			this->label15->Text = L"二极管";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(85, 182);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 19);
			this->label16->TabIndex = 12;
			this->label16->Text = L"3";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(535, 250);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(146, 19);
			this->label38->TabIndex = 11;
			this->label38->Text = L"DY07(数控型)*";
			this->label38->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(535, 216);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 19);
			this->label9->TabIndex = 11;
			this->label9->Text = L"DY03（普通型）";
			this->label9->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(367, 216);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 19);
			this->label10->TabIndex = 10;
			this->label10->Text = L"0～30V";
			this->label10->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(161, 216);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(109, 19);
			this->label11->TabIndex = 9;
			this->label11->Text = L"可调稳压源";
			this->label11->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(85, 148);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 19);
			this->label12->TabIndex = 8;
			this->label12->Text = L"2";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(535, 182);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(69, 19);
			this->label37->TabIndex = 7;
			this->label37->Text = L"万用表";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(535, 148);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(217, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"CL04(智能电参数仪) *";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(535, 114);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(284, 19);
			this->label5->TabIndex = 7;
			this->label5->Text = L"CL01(DC200mA,DC5A,DC500V)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(161, 114);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 19);
			this->label7->TabIndex = 5;
			this->label7->Text = L"测量仪表";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(85, 114);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 19);
			this->label8->TabIndex = 4;
			this->label8->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(535, 80);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"备注";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(367, 80);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"型号与规格";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(161, 80);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"名称";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 80);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"序号";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(85, 386);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(20, 19);
			this->label40->TabIndex = 32;
			this->label40->Text = L"9";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(161, 483);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(89, 19);
			this->label41->TabIndex = 33;
			this->label41->Text = L"实验导线";
			this->label41->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::label35_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(535, 483);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(69, 19);
			this->label43->TabIndex = 35;
			this->label43->Text = L"安全型";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(367, 483);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(42, 19);
			this->label42->TabIndex = 35;
			this->label42->Text = L"4mm";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(85, 420);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(31, 19);
			this->label44->TabIndex = 32;
			this->label44->Text = L"10";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(85, 454);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(31, 19);
			this->label45->TabIndex = 32;
			this->label45->Text = L"11";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(85, 483);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(31, 19);
			this->label46->TabIndex = 32;
			this->label46->Text = L"12";
			// 
			// 元件伏安特性的测试实验器件
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1390, 880);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"元件伏安特性的测试实验器件";
			this->Text = L"元件伏安特性的测试实验器件";
			this->Load += gcnew System::EventHandler(this, &元件伏安特性的测试实验器件::元件伏安特性的测试实验器件_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 元件伏安特性的测试实验器件_Load(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label50_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label35_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
