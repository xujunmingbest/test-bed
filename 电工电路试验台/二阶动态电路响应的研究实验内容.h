#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 二阶动态电路响应的研究实验内容 摘要
	/// </summary>
	public ref class 二阶动态电路响应的研究实验内容 : public System::Windows::Forms::Form
	{
	public:
		二阶动态电路响应的研究实验内容(void)
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

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBoxtrialτ;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1;
	private: System::Windows::Forms::Label^  label19;


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
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrialτ = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->BeginInit();
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
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(63, 62);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 53);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    动态电路实验板与实验六相同，利用动态电路板中的元件与开关的配合作用，组成如图7－1所示的GCL并联电路。";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(63, 556);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(913, 92);
			this->label1->TabIndex = 1;
			this->label1->Text = L"    令R1=10KΩ，L＝4.7mH，C＝1000PF，R2为10KΩ可调电阻，（K1、K15、K11、K5闭合，其他断开）令脉冲信号发生器的输出为Um＝1V"
				L"，F＝1KHz的方波脉冲，通过同轴电缆接至上图的激励端，同时用同轴电缆将激励端和响应输出接至双踪示波器的YA和YB两个输入口。";
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 713);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 1816);
			this->groupBox2->TabIndex = 91;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
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
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(37, 105);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1014, 498);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 89;
			this->pictureBox2->TabStop = false;
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
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(37, 683);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1014, 498);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 93;
			this->pictureBox3->TabStop = false;
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
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(37, 1250);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1014, 498);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 96;
			this->pictureBox4->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::SkyBlue;
			this->label5->Location = System::Drawing::Point(9, 682);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1447, 10);
			this->label5->TabIndex = 185;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBoxtrialτ);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->pictureBoxTrial1);
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
			// 
			// textBoxtrialτ
			// 
			this->textBoxtrialτ->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrialτ->Location = System::Drawing::Point(223, 614);
			this->textBoxtrialτ->Name = L"textBoxtrialτ";
			this->textBoxtrialτ->Size = System::Drawing::Size(284, 30);
			this->textBoxtrialτ->TabIndex = 91;
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
			// 
			// pictureBoxTrial1
			// 
			this->pictureBoxTrial1->Location = System::Drawing::Point(72, 79);
			this->pictureBoxTrial1->Name = L"pictureBoxTrial1";
			this->pictureBoxTrial1->Size = System::Drawing::Size(1014, 498);
			this->pictureBoxTrial1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1->TabIndex = 89;
			this->pictureBoxTrial1->TabStop = false;
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
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(77, 686);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 25);
			this->label8->TabIndex = 93;
			this->label8->Text = L"振荡频率ωd";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(223, 686);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 30);
			this->textBox1->TabIndex = 94;
			// 
			// 二阶动态电路响应的研究实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1527, 1102);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
