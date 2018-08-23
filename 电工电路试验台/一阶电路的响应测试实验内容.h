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
	/// 一阶电路的响应测试实验内容 摘要
	/// </summary>
	public ref class 一阶电路的响应测试实验内容 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			String^ trial1bmp = gcnew String(BMPSAVEPATH) + trial1Path;
			File::Delete(trial1bmp);

			String^ trial2bmp = gcnew String(BMPSAVEPATH) + trial2Path;
			File::Delete(trial2bmp);

			String^ trial3bmp = gcnew String(BMPSAVEPATH) + trial3Path;
			File::Delete(trial3bmp);
		
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~一阶电路的响应测试实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;









































































	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBoxtrialτ;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial1;

private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial2;

private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3;

private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Label^  label105;






















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(一阶电路的响应测试实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrialτ = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->pictureBox3);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 12);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 1290);
			this->groupBox8->TabIndex = 81;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"一阶电路的响应测试实验内容";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 963);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(787, 308);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(212, 496);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(795, 441);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(607, 467);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"图6-3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(119, 186);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 54);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 64);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    实验前，认真接线，确认仪表工作在正确的量程，极性接入正确，无误后再通电； \r\n\r\n    电源两端不可碰线短路，当电源过载指示灯亮，说明超载，请断电检查电"
				L"路。";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(70, 128);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(912, 26);
			this->label38->TabIndex = 7;
			this->label38->Text = L"实验线路板的结构如图6－3所示，认清R、C元件的布局及其标称值，各开关的通断位置等等。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBoxtrialτ);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 1308);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 755);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(1107, 664);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 33);
			this->button1->TabIndex = 92;
			this->button1->Text = L"获取波形";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::button1_Click);
			// 
			// textBoxtrialτ
			// 
			this->textBoxtrialτ->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrialτ->Location = System::Drawing::Point(199, 719);
			this->textBoxtrialτ->Name = L"textBoxtrialτ";
			this->textBoxtrialτ->Size = System::Drawing::Size(284, 30);
			this->textBoxtrialτ->TabIndex = 91;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(68, 719);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 25);
			this->label3->TabIndex = 90;
			this->label3->Text = L"时间常数τ";
			// 
			// pictureBoxTrial1
			// 
			this->pictureBoxTrial1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1.Image")));
			this->pictureBoxTrial1->Location = System::Drawing::Point(72, 202);
			this->pictureBoxTrial1->Name = L"pictureBoxTrial1";
			this->pictureBoxTrial1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1->TabIndex = 89;
			this->pictureBoxTrial1->TabStop = false;
			this->pictureBoxTrial1->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::pictureBoxTrial1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1100, 34);
			this->label2->TabIndex = 88;
			this->label2->Text = L"    少量地改变电容值或电阻值，定性地观察对响应的影响，记录观察到的现象  。";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1100, 111);
			this->label19->TabIndex = 87;
			this->label19->Text = L"    1．选择动态电路板上的R、C元件，令R＝30KΩ，C＝1000PF（K2、K11闭合，其他断开）组成如图6－1（b）所示的RC充放电电路，E为脉冲信号发生"
				L"器输出Um＝3V，F＝1KHz的方波电压信号，并通过两根同轴电缆线，将激励源E和响应Uc的信号分别连至示波器的两个输入口YA和YB，这时可在示波器的屏幕上观察到"
				L"激励与响应的变化规律，求测时间常数τ，并用方格纸按1：1的比例描绘波形 。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 2081);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 655);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(1096, 601);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 33);
			this->button2->TabIndex = 92;
			this->button2->Text = L"获取波形";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::button2_Click);
			// 
			// pictureBoxTrial2
			// 
			this->pictureBoxTrial2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2.Image")));
			this->pictureBoxTrial2->Location = System::Drawing::Point(62, 107);
			this->pictureBoxTrial2->Name = L"pictureBoxTrial2";
			this->pictureBoxTrial2->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2->TabIndex = 89;
			this->pictureBoxTrial2->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(33, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1100, 52);
			this->label6->TabIndex = 87;
			this->label6->Text = L"    2．令R＝10KΩ，C＝0.1μF（K1、K16闭合，其他断开），观察并描绘响应的波形，继续增大C之值，定性地观察对响应的影响。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->pictureBoxTrial3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 2754);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1296, 672);
			this->groupBox3->TabIndex = 90;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验内容三";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(1096, 621);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 33);
			this->button3->TabIndex = 92;
			this->button3->Text = L"获取波形";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::button3_Click);
			// 
			// pictureBoxTrial3
			// 
			this->pictureBoxTrial3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3.Image")));
			this->pictureBoxTrial3->Location = System::Drawing::Point(72, 149);
			this->pictureBoxTrial3->Name = L"pictureBoxTrial3";
			this->pictureBoxTrial3->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3->TabIndex = 89;
			this->pictureBoxTrial3->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1100, 95);
			this->label4->TabIndex = 87;
			this->label4->Text = L"    3．选择动态板上的R、C元件，组成如图6-2（a）所示的微分电路，令C＝0.01μF，R＝100Ω。（K4、K6闭合，其他断开）\r\n    在同样的方波激"
				L"励信号（Um＝2V，F =1KHz）作用下，观测并描绘激励与响应的波形。\r\n增减R之值，定性地观察对响应的影响，并作记录，当R增至1MΩ时，输入输出波形有何本质"
				L"上的区别？";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(6, 3537);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 183;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(199, 3461);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1002, 28);
			this->textBox结论->TabIndex = 181;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(560, 3495);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 182;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::button81_Click);
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(12, 3461);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 180;
			this->label105->Text = L"实验结论";
			// 
			// 一阶电路的响应测试实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1502, 758);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"一阶电路的响应测试实验内容";
			this->Text = L"一阶电路的响应测试实验内容";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::一阶电路的响应测试实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 一阶电路的响应测试实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	string path =  "一阶电路的响应测试Trial1.bmp";
	String ^imageLocation = gcnew String((string(BMPSAVEPATH) + path).c_str());
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(path)) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1->ImageLocation = imageLocation;
}
private: System::Void pictureBoxTrial1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	string path = "一阶电路的响应测试Trial3.bmp";
	String ^imageLocation = gcnew String((string(BMPSAVEPATH) + path).c_str());
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(path)) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3->ImageLocation = imageLocation;
}
		 String ^trial1Path = "一阶电路的响应测试Trial1.bmp";
		 String ^trial2Path = "一阶电路的响应测试Trial2.bmp";
		 String ^trial3Path = "一阶电路的响应测试Trial3.bmp";

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	string path = "一阶电路的响应测试Trial2.bmp";
	String ^imageLocation = gcnew String((string(BMPSAVEPATH) + path).c_str());
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(path)) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial2->ImageLocation = imageLocation;

}

				 public:ST_一阶电路的响应测试 Load_Grade_data();
				 void SendData();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();

}
};
}
