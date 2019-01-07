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
	/// 戴维南定理实验内容 摘要
	/// </summary>
	public ref class 戴维南定理实验内容 : public System::Windows::Forms::Form
	{
	public:
		戴维南定理实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void chartTrial2_load();
		void chartTrial6_load();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~戴维南定理实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:

	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label19;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelMethod1Isc;

	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  labelMethod1Uoc;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  labelMethod2I10;

	private: System::Windows::Forms::Label^  labelMethod2I9;

	private: System::Windows::Forms::Label^  labelMethod2I8;

	private: System::Windows::Forms::Label^  labelMethod2I7;

	private: System::Windows::Forms::Label^  labelMethod2I6;

	private: System::Windows::Forms::Label^  labelMethod2I5;

	private: System::Windows::Forms::Label^  labelMethod2I4;

	private: System::Windows::Forms::Label^  labelMethod2I3;

	private: System::Windows::Forms::Label^  labelMethod2I2;



	private: System::Windows::Forms::Label^  labelMethod2URL10;


	private: System::Windows::Forms::Label^  labelMethod2URL8;

	private: System::Windows::Forms::Label^  labelMethod2URL7;

	private: System::Windows::Forms::Label^  labelMethod2URL6;

	private: System::Windows::Forms::Label^  labelMethod2URL5;

	private: System::Windows::Forms::Label^  labelMethod2URL4;

	private: System::Windows::Forms::Label^  labelMethod2URL3;
	private: System::Windows::Forms::TextBox^  textBoxMethod2RL10;


	private: System::Windows::Forms::TextBox^  textBoxMethod2RL9;

	private: System::Windows::Forms::TextBox^  textBoxMethod2RL8;


	private: System::Windows::Forms::TextBox^  textBoxMethod2RL7;

	private: System::Windows::Forms::TextBox^  textBoxMethod2RL6;

	private: System::Windows::Forms::TextBox^  textBoxMethod2RL5;

private: System::Windows::Forms::TextBox^  textBoxMethod2RL4;

private: System::Windows::Forms::TextBox^  textBoxMethod2RL3;

private: System::Windows::Forms::TextBox^  textBoxMethod2RL2;

private: System::Windows::Forms::TextBox^  textBoxMethod2RL1;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  labelMethod2URL2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelMethod2URL1;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox3;

private: System::Windows::Forms::TextBox^  textBoxMethod3Ro;

	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::TextBox^  textBoxMethod3Uoc;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial6;

private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Label^  labelMethod6I10;

private: System::Windows::Forms::Label^  labelMethod6I9;

private: System::Windows::Forms::Label^  labelMethod6I8;

private: System::Windows::Forms::Label^  labelMethod6I7;

private: System::Windows::Forms::Label^  labelMethod6I6;

private: System::Windows::Forms::Label^  labelMethod6I5;

private: System::Windows::Forms::Label^  labelMethod6I4;

private: System::Windows::Forms::Label^  labelMethod6I3;

private: System::Windows::Forms::Label^  labelMethod6I2;

private: System::Windows::Forms::Label^  labelMethod6I1;

private: System::Windows::Forms::Label^  labelMethod6URL10;

private: System::Windows::Forms::Label^  labelMethod6URL9;

private: System::Windows::Forms::Label^  labelMethod6URL8;

private: System::Windows::Forms::Label^  labelMethod6URL7;

private: System::Windows::Forms::Label^  labelMethod6URL6;

private: System::Windows::Forms::Label^  labelMethod6URL5;

private: System::Windows::Forms::Label^  labelMethod6URL4;

private: System::Windows::Forms::Label^  labelMethod6URL3;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL10;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL9;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL8;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL7;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL6;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL5;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL4;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL3;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL2;

private: System::Windows::Forms::TextBox^  textBoxMethod6RL1;

private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Label^  labelMethod6URL2;

private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Label^  labelMethod6URL1;

private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::TextBox^  textBoxMethod1Ro;
private: System::Windows::Forms::Label^  labelMethod2URL9;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial2;

private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::Label^  labelMethod2I1;

private: System::Windows::Forms::TextBox^  textBoxMethod1I;
private: System::Windows::Forms::TextBox^  textBoxMethod1Us;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  textBoxMethod2Ro;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  textBoxMethod4Uoc;
private: System::Windows::Forms::TextBox^  textBoxMethod5R0;

private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Button^  button47;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(戴维南定理实验内容::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->textBoxMethod1I = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod1Us = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod1Ro = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelMethod1Isc = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->labelMethod1Uoc = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod2Ro = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chartTrial2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->labelMethod2I10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I3 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I1 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod2RL10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod2RL1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelMethod2URL2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelMethod2URL1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod3Ro = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBoxMethod3Uoc = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMethod4Uoc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMethod5R0 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->chartTrial6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->labelMethod6I10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I3 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I1 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod6RL10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMethod6RL1 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->labelMethod6URL2 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->labelMethod6URL1 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 12);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(1296, 69);
			this->groupBox8->TabIndex = 81;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"戴维南定律实验内容";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(25, 60);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(1185, 92);
			this->label38->TabIndex = 7;
			this->label38->Text = L"   1）开路电压、短路电流法\r\n\r\n   用电压表直接测其输出端的开路电压Uoc（Uo），然后再输出端并入电流表，测其短路电流Isc，则有源二端网络内阻则为Ro"
				L"=Uoc/Isc";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button47);
			this->groupBox1->Controls->Add(this->textBoxMethod1I);
			this->groupBox1->Controls->Add(this->textBoxMethod1Us);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxMethod1Ro);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->labelMethod1Isc);
			this->groupBox1->Controls->Add(this->button30);
			this->groupBox1->Controls->Add(this->labelMethod1Uoc);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label38);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 172);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1360, 804);
			this->groupBox1->TabIndex = 82;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1.开路电压、短路电流法";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &戴维南定理实验内容::groupBox1_Enter);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(759, 742);
			this->button47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(129, 34);
			this->button47->TabIndex = 254;
			this->button47->Text = L"计算";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button47_Click);
			// 
			// textBoxMethod1I
			// 
			this->textBoxMethod1I->Location = System::Drawing::Point(1106, 708);
			this->textBoxMethod1I->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod1I->Name = L"textBoxMethod1I";
			this->textBoxMethod1I->Size = System::Drawing::Size(119, 30);
			this->textBoxMethod1I->TabIndex = 252;
			// 
			// textBoxMethod1Us
			// 
			this->textBoxMethod1Us->Location = System::Drawing::Point(959, 708);
			this->textBoxMethod1Us->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod1Us->Name = L"textBoxMethod1Us";
			this->textBoxMethod1Us->Size = System::Drawing::Size(119, 30);
			this->textBoxMethod1Us->TabIndex = 251;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(1106, 648);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 25);
			this->label6->TabIndex = 250;
			this->label6->Text = L"Is(mA)";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(601, 606);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 20);
			this->label3->TabIndex = 249;
			this->label3->Text = L"图1";
			// 
			// textBoxMethod1Ro
			// 
			this->textBoxMethod1Ro->Location = System::Drawing::Point(757, 708);
			this->textBoxMethod1Ro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod1Ro->Name = L"textBoxMethod1Ro";
			this->textBoxMethod1Ro->Size = System::Drawing::Size(131, 30);
			this->textBoxMethod1Ro->TabIndex = 207;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(647, 741);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 34);
			this->button1->TabIndex = 197;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button1_Click);
			// 
			// labelMethod1Isc
			// 
			this->labelMethod1Isc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod1Isc->Location = System::Drawing::Point(647, 708);
			this->labelMethod1Isc->Name = L"labelMethod1Isc";
			this->labelMethod1Isc->Size = System::Drawing::Size(93, 30);
			this->labelMethod1Isc->TabIndex = 196;
			this->labelMethod1Isc->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(533, 741);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(93, 34);
			this->button30->TabIndex = 195;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button30_Click);
			// 
			// labelMethod1Uoc
			// 
			this->labelMethod1Uoc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod1Uoc->Location = System::Drawing::Point(533, 708);
			this->labelMethod1Uoc->Name = L"labelMethod1Uoc";
			this->labelMethod1Uoc->Size = System::Drawing::Size(93, 30);
			this->labelMethod1Uoc->TabIndex = 194;
			this->labelMethod1Uoc->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(959, 648);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 25);
			this->label1->TabIndex = 104;
			this->label1->Text = L"Us(V)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(757, 648);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(131, 22);
			this->label25->TabIndex = 103;
			this->label25->Text = L"Ro=Uoc/Isc";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(647, 648);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 22);
			this->label26->TabIndex = 102;
			this->label26->Text = L"Isc";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(533, 648);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 22);
			this->label27->TabIndex = 101;
			this->label27->Text = L"Uoc";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(365, 648);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(104, 22);
			this->label19->TabIndex = 98;
			this->label19->Text = L"被测量";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(371, 168);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 436);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::pictureBox1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBoxMethod2Ro);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->chartTrial2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->labelMethod2I10);
			this->groupBox2->Controls->Add(this->labelMethod2I9);
			this->groupBox2->Controls->Add(this->labelMethod2I8);
			this->groupBox2->Controls->Add(this->labelMethod2I7);
			this->groupBox2->Controls->Add(this->labelMethod2I6);
			this->groupBox2->Controls->Add(this->labelMethod2I5);
			this->groupBox2->Controls->Add(this->labelMethod2I4);
			this->groupBox2->Controls->Add(this->labelMethod2I3);
			this->groupBox2->Controls->Add(this->labelMethod2I2);
			this->groupBox2->Controls->Add(this->labelMethod2I1);
			this->groupBox2->Controls->Add(this->labelMethod2URL10);
			this->groupBox2->Controls->Add(this->labelMethod2URL9);
			this->groupBox2->Controls->Add(this->labelMethod2URL8);
			this->groupBox2->Controls->Add(this->labelMethod2URL7);
			this->groupBox2->Controls->Add(this->labelMethod2URL6);
			this->groupBox2->Controls->Add(this->labelMethod2URL5);
			this->groupBox2->Controls->Add(this->labelMethod2URL4);
			this->groupBox2->Controls->Add(this->labelMethod2URL3);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL10);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL9);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL8);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL7);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL6);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL5);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL4);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL3);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL2);
			this->groupBox2->Controls->Add(this->textBoxMethod2RL1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->labelMethod2URL2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->labelMethod2URL1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 1002);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1372, 741);
			this->groupBox2->TabIndex = 83;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"2.伏安法";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(0, 704);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 26);
			this->label11->TabIndex = 307;
			this->label11->Text = L"直流电流表2";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(0, 610);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 26);
			this->label10->TabIndex = 306;
			this->label10->Text = L"直流电压表3";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxMethod2Ro
			// 
			this->textBoxMethod2Ro->Location = System::Drawing::Point(858, 131);
			this->textBoxMethod2Ro->Name = L"textBoxMethod2Ro";
			this->textBoxMethod2Ro->Size = System::Drawing::Size(143, 30);
			this->textBoxMethod2Ro->TabIndex = 305;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(25, 134);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(827, 34);
			this->label9->TabIndex = 304;
			this->label9->Text = L"根据实验表格绘制外特性曲线，根据外特性曲线计算出相应的有源二端网络内阻为Ro=";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(564, 171);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 34);
			this->button2->TabIndex = 303;
			this->button2->Text = L"曲线生成";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button2_Click);
			// 
			// chartTrial2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTrial2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTrial2->Legends->Add(legend1);
			this->chartTrial2->Location = System::Drawing::Point(685, 171);
			this->chartTrial2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial2->Name = L"chartTrial2";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartTrial2->Series->Add(series1);
			this->chartTrial2->Size = System::Drawing::Size(460, 320);
			this->chartTrial2->TabIndex = 302;
			this->chartTrial2->Text = L"chart2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(269, 471);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 248;
			this->label2->Text = L"图2";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(1255, 696);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 34);
			this->button13->TabIndex = 247;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1129, 696);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 34);
			this->button14->TabIndex = 246;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(1021, 696);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 34);
			this->button15->TabIndex = 245;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(896, 696);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 34);
			this->button16->TabIndex = 244;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(772, 696);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 34);
			this->button17->TabIndex = 243;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(647, 696);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 34);
			this->button18->TabIndex = 242;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(525, 696);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 34);
			this->button19->TabIndex = 241;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(400, 696);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 34);
			this->button20->TabIndex = 240;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(276, 696);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 34);
			this->button21->TabIndex = 239;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(151, 696);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 34);
			this->button22->TabIndex = 238;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button22_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1255, 604);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 34);
			this->button11->TabIndex = 237;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1129, 604);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 34);
			this->button12->TabIndex = 236;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button12_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1021, 604);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 34);
			this->button9->TabIndex = 235;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(896, 604);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 34);
			this->button10->TabIndex = 234;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button10_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(772, 604);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 34);
			this->button7->TabIndex = 233;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(647, 604);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 34);
			this->button8->TabIndex = 232;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button8_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(525, 604);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 34);
			this->button4->TabIndex = 231;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(400, 604);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 34);
			this->button6->TabIndex = 230;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button6_Click);
			// 
			// labelMethod2I10
			// 
			this->labelMethod2I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I10->Location = System::Drawing::Point(1255, 660);
			this->labelMethod2I10->Name = L"labelMethod2I10";
			this->labelMethod2I10->Size = System::Drawing::Size(99, 36);
			this->labelMethod2I10->TabIndex = 229;
			this->labelMethod2I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I9
			// 
			this->labelMethod2I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I9->Location = System::Drawing::Point(1129, 660);
			this->labelMethod2I9->Name = L"labelMethod2I9";
			this->labelMethod2I9->Size = System::Drawing::Size(100, 36);
			this->labelMethod2I9->TabIndex = 228;
			this->labelMethod2I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I8
			// 
			this->labelMethod2I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I8->Location = System::Drawing::Point(1021, 660);
			this->labelMethod2I8->Name = L"labelMethod2I8";
			this->labelMethod2I8->Size = System::Drawing::Size(99, 36);
			this->labelMethod2I8->TabIndex = 227;
			this->labelMethod2I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I7
			// 
			this->labelMethod2I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I7->Location = System::Drawing::Point(896, 660);
			this->labelMethod2I7->Name = L"labelMethod2I7";
			this->labelMethod2I7->Size = System::Drawing::Size(100, 36);
			this->labelMethod2I7->TabIndex = 226;
			this->labelMethod2I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I6
			// 
			this->labelMethod2I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I6->Location = System::Drawing::Point(772, 658);
			this->labelMethod2I6->Name = L"labelMethod2I6";
			this->labelMethod2I6->Size = System::Drawing::Size(99, 36);
			this->labelMethod2I6->TabIndex = 225;
			this->labelMethod2I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I5
			// 
			this->labelMethod2I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I5->Location = System::Drawing::Point(647, 658);
			this->labelMethod2I5->Name = L"labelMethod2I5";
			this->labelMethod2I5->Size = System::Drawing::Size(100, 36);
			this->labelMethod2I5->TabIndex = 224;
			this->labelMethod2I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I4
			// 
			this->labelMethod2I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I4->Location = System::Drawing::Point(525, 660);
			this->labelMethod2I4->Name = L"labelMethod2I4";
			this->labelMethod2I4->Size = System::Drawing::Size(99, 35);
			this->labelMethod2I4->TabIndex = 223;
			this->labelMethod2I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelMethod2I4->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::labelMethod2I4_Click);
			// 
			// labelMethod2I3
			// 
			this->labelMethod2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I3->Location = System::Drawing::Point(400, 660);
			this->labelMethod2I3->Name = L"labelMethod2I3";
			this->labelMethod2I3->Size = System::Drawing::Size(100, 35);
			this->labelMethod2I3->TabIndex = 222;
			this->labelMethod2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I2
			// 
			this->labelMethod2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I2->Location = System::Drawing::Point(276, 658);
			this->labelMethod2I2->Name = L"labelMethod2I2";
			this->labelMethod2I2->Size = System::Drawing::Size(99, 35);
			this->labelMethod2I2->TabIndex = 221;
			this->labelMethod2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I1
			// 
			this->labelMethod2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I1->Location = System::Drawing::Point(151, 658);
			this->labelMethod2I1->Name = L"labelMethod2I1";
			this->labelMethod2I1->Size = System::Drawing::Size(100, 35);
			this->labelMethod2I1->TabIndex = 220;
			this->labelMethod2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL10
			// 
			this->labelMethod2URL10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL10->Location = System::Drawing::Point(1255, 565);
			this->labelMethod2URL10->Name = L"labelMethod2URL10";
			this->labelMethod2URL10->Size = System::Drawing::Size(99, 36);
			this->labelMethod2URL10->TabIndex = 219;
			this->labelMethod2URL10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL9
			// 
			this->labelMethod2URL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL9->Location = System::Drawing::Point(1129, 565);
			this->labelMethod2URL9->Name = L"labelMethod2URL9";
			this->labelMethod2URL9->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL9->TabIndex = 218;
			this->labelMethod2URL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL8
			// 
			this->labelMethod2URL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL8->Location = System::Drawing::Point(1021, 565);
			this->labelMethod2URL8->Name = L"labelMethod2URL8";
			this->labelMethod2URL8->Size = System::Drawing::Size(99, 36);
			this->labelMethod2URL8->TabIndex = 217;
			this->labelMethod2URL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL7
			// 
			this->labelMethod2URL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL7->Location = System::Drawing::Point(896, 565);
			this->labelMethod2URL7->Name = L"labelMethod2URL7";
			this->labelMethod2URL7->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL7->TabIndex = 216;
			this->labelMethod2URL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL6
			// 
			this->labelMethod2URL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL6->Location = System::Drawing::Point(772, 565);
			this->labelMethod2URL6->Name = L"labelMethod2URL6";
			this->labelMethod2URL6->Size = System::Drawing::Size(99, 36);
			this->labelMethod2URL6->TabIndex = 215;
			this->labelMethod2URL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL5
			// 
			this->labelMethod2URL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL5->Location = System::Drawing::Point(647, 565);
			this->labelMethod2URL5->Name = L"labelMethod2URL5";
			this->labelMethod2URL5->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL5->TabIndex = 214;
			this->labelMethod2URL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL4
			// 
			this->labelMethod2URL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL4->Location = System::Drawing::Point(525, 565);
			this->labelMethod2URL4->Name = L"labelMethod2URL4";
			this->labelMethod2URL4->Size = System::Drawing::Size(99, 36);
			this->labelMethod2URL4->TabIndex = 213;
			this->labelMethod2URL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL3
			// 
			this->labelMethod2URL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL3->Location = System::Drawing::Point(400, 565);
			this->labelMethod2URL3->Name = L"labelMethod2URL3";
			this->labelMethod2URL3->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL3->TabIndex = 212;
			this->labelMethod2URL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxMethod2RL10
			// 
			this->textBoxMethod2RL10->Location = System::Drawing::Point(1255, 508);
			this->textBoxMethod2RL10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL10->Name = L"textBoxMethod2RL10";
			this->textBoxMethod2RL10->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL10->TabIndex = 211;
			// 
			// textBoxMethod2RL9
			// 
			this->textBoxMethod2RL9->Location = System::Drawing::Point(1129, 508);
			this->textBoxMethod2RL9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL9->Name = L"textBoxMethod2RL9";
			this->textBoxMethod2RL9->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL9->TabIndex = 210;
			// 
			// textBoxMethod2RL8
			// 
			this->textBoxMethod2RL8->Location = System::Drawing::Point(1021, 508);
			this->textBoxMethod2RL8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL8->Name = L"textBoxMethod2RL8";
			this->textBoxMethod2RL8->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL8->TabIndex = 209;
			// 
			// textBoxMethod2RL7
			// 
			this->textBoxMethod2RL7->Location = System::Drawing::Point(896, 508);
			this->textBoxMethod2RL7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL7->Name = L"textBoxMethod2RL7";
			this->textBoxMethod2RL7->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL7->TabIndex = 208;
			// 
			// textBoxMethod2RL6
			// 
			this->textBoxMethod2RL6->Location = System::Drawing::Point(772, 508);
			this->textBoxMethod2RL6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL6->Name = L"textBoxMethod2RL6";
			this->textBoxMethod2RL6->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL6->TabIndex = 207;
			// 
			// textBoxMethod2RL5
			// 
			this->textBoxMethod2RL5->Location = System::Drawing::Point(647, 508);
			this->textBoxMethod2RL5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL5->Name = L"textBoxMethod2RL5";
			this->textBoxMethod2RL5->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL5->TabIndex = 206;
			// 
			// textBoxMethod2RL4
			// 
			this->textBoxMethod2RL4->Location = System::Drawing::Point(525, 508);
			this->textBoxMethod2RL4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL4->Name = L"textBoxMethod2RL4";
			this->textBoxMethod2RL4->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL4->TabIndex = 205;
			// 
			// textBoxMethod2RL3
			// 
			this->textBoxMethod2RL3->Location = System::Drawing::Point(400, 508);
			this->textBoxMethod2RL3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL3->Name = L"textBoxMethod2RL3";
			this->textBoxMethod2RL3->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL3->TabIndex = 204;
			// 
			// textBoxMethod2RL2
			// 
			this->textBoxMethod2RL2->Location = System::Drawing::Point(276, 508);
			this->textBoxMethod2RL2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL2->Name = L"textBoxMethod2RL2";
			this->textBoxMethod2RL2->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL2->TabIndex = 203;
			// 
			// textBoxMethod2RL1
			// 
			this->textBoxMethod2RL1->Location = System::Drawing::Point(151, 508);
			this->textBoxMethod2RL1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod2RL1->Name = L"textBoxMethod2RL1";
			this->textBoxMethod2RL1->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod2RL1->TabIndex = 202;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(20, 510);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 26);
			this->label8->TabIndex = 201;
			this->label8->Text = L"RL(Ω)";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 604);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 34);
			this->button3->TabIndex = 200;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button3_Click);
			// 
			// labelMethod2URL2
			// 
			this->labelMethod2URL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL2->Location = System::Drawing::Point(276, 565);
			this->labelMethod2URL2->Name = L"labelMethod2URL2";
			this->labelMethod2URL2->Size = System::Drawing::Size(99, 36);
			this->labelMethod2URL2->TabIndex = 199;
			this->labelMethod2URL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelMethod2URL2->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::labelMethod2URL2_Click);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(20, 658);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 38);
			this->label4->TabIndex = 198;
			this->label4->Text = L"I(mA)";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(151, 604);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 34);
			this->button5->TabIndex = 195;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button5_Click);
			// 
			// labelMethod2URL1
			// 
			this->labelMethod2URL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL1->Location = System::Drawing::Point(151, 565);
			this->labelMethod2URL1->Name = L"labelMethod2URL1";
			this->labelMethod2URL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL1->TabIndex = 194;
			this->labelMethod2URL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(20, 567);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 36);
			this->label7->TabIndex = 104;
			this->label7->Text = L"URL(V)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(29, 171);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(500, 320);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(25, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1270, 55);
			this->label12->TabIndex = 7;
			this->label12->Text = L"    按下图在输出端正确接入电流表和电压表，有源网络输出接入负载RL,改变RL阻值（可由电阻箱调节或者调节电位器），观察电压表电流表的数据变化，并将数据记录表中"
				L"。根据实验表格绘制外特性曲线，根据外特性曲线计算出相应的有源二端网络内阻为Ro。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->textBoxMethod3Ro);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->button23);
			this->groupBox3->Controls->Add(this->textBoxMethod3Uoc);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 1768);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1360, 239);
			this->groupBox3->TabIndex = 84;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"3.半电压法";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(400, 128);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 26);
			this->label13->TabIndex = 307;
			this->label13->Text = L"直流电压表3";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxMethod3Ro
			// 
			this->textBoxMethod3Ro->Location = System::Drawing::Point(117, 189);
			this->textBoxMethod3Ro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod3Ro->Name = L"textBoxMethod3Ro";
			this->textBoxMethod3Ro->Size = System::Drawing::Size(152, 30);
			this->textBoxMethod3Ro->TabIndex = 241;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Location = System::Drawing::Point(36, 184);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(76, 36);
			this->label33->TabIndex = 240;
			this->label33->Text = L"Ro =";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(299, 120);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 34);
			this->button23->TabIndex = 239;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button23_Click);
			// 
			// textBoxMethod3Uoc
			// 
			this->textBoxMethod3Uoc->Location = System::Drawing::Point(117, 124);
			this->textBoxMethod3Uoc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod3Uoc->Name = L"textBoxMethod3Uoc";
			this->textBoxMethod3Uoc->Size = System::Drawing::Size(152, 30);
			this->textBoxMethod3Uoc->TabIndex = 106;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Location = System::Drawing::Point(36, 119);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(76, 36);
			this->label32->TabIndex = 105;
			this->label32->Text = L"Uoc =";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(25, 45);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(1185, 62);
			this->label42->TabIndex = 7;
			this->label42->Text = L"    改变RL阻值（可由电阻箱调节），当负载电压为被测网络开路电压一半时，负载电阻（由电阻箱的读数确定）即为被测有源二端网络的等效内阻值。";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxMethod4Uoc);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(12, 2031);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(1360, 439);
			this->groupBox4->TabIndex = 85;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"4.零示法";
			// 
			// textBoxMethod4Uoc
			// 
			this->textBoxMethod4Uoc->Location = System::Drawing::Point(834, 145);
			this->textBoxMethod4Uoc->Name = L"textBoxMethod4Uoc";
			this->textBoxMethod4Uoc->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod4Uoc->TabIndex = 250;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(307, 354);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 20);
			this->label5->TabIndex = 249;
			this->label5->Text = L"图3";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(26, 42);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(590, 299);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(631, 55);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(514, 87);
			this->label36->TabIndex = 7;
			this->label36->Text = L"    如图3所示，在有源网络输出端并联稳压电源（0~30V），并串入电压表，由小到大调节稳压电源的输出，直至电压表显示为0，此时稳压源电压值即为有源二端网端开路"
				L"电压Uoc=";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxMethod5R0);
			this->groupBox5->Controls->Add(this->label34);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(12, 2500);
			this->groupBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Size = System::Drawing::Size(1360, 108);
			this->groupBox5->TabIndex = 86;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"5.直测法";
			// 
			// textBoxMethod5R0
			// 
			this->textBoxMethod5R0->Location = System::Drawing::Point(824, 73);
			this->textBoxMethod5R0->Name = L"textBoxMethod5R0";
			this->textBoxMethod5R0->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod5R0->TabIndex = 251;
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(25, 45);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(1241, 61);
			this->label34->TabIndex = 7;
			this->label34->Text = L"    将被测有源网络内的所有独立源置零（将电流源IS、电压源去除，并在原电压端所接的两点用一根短路导线相连），然后用伏安法或者直接用万用表的欧姆档去测输出端两点"
				L"间的电阻，此值即被测网络的等效内阻R0=";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->button24);
			this->groupBox6->Controls->Add(this->chartTrial6);
			this->groupBox6->Controls->Add(this->button25);
			this->groupBox6->Controls->Add(this->button26);
			this->groupBox6->Controls->Add(this->button27);
			this->groupBox6->Controls->Add(this->button28);
			this->groupBox6->Controls->Add(this->button29);
			this->groupBox6->Controls->Add(this->button31);
			this->groupBox6->Controls->Add(this->button32);
			this->groupBox6->Controls->Add(this->button33);
			this->groupBox6->Controls->Add(this->button34);
			this->groupBox6->Controls->Add(this->button35);
			this->groupBox6->Controls->Add(this->button36);
			this->groupBox6->Controls->Add(this->button37);
			this->groupBox6->Controls->Add(this->button38);
			this->groupBox6->Controls->Add(this->button39);
			this->groupBox6->Controls->Add(this->button40);
			this->groupBox6->Controls->Add(this->button41);
			this->groupBox6->Controls->Add(this->button42);
			this->groupBox6->Controls->Add(this->button43);
			this->groupBox6->Controls->Add(this->labelMethod6I10);
			this->groupBox6->Controls->Add(this->labelMethod6I9);
			this->groupBox6->Controls->Add(this->labelMethod6I8);
			this->groupBox6->Controls->Add(this->labelMethod6I7);
			this->groupBox6->Controls->Add(this->labelMethod6I6);
			this->groupBox6->Controls->Add(this->labelMethod6I5);
			this->groupBox6->Controls->Add(this->labelMethod6I4);
			this->groupBox6->Controls->Add(this->labelMethod6I3);
			this->groupBox6->Controls->Add(this->labelMethod6I2);
			this->groupBox6->Controls->Add(this->labelMethod6I1);
			this->groupBox6->Controls->Add(this->labelMethod6URL10);
			this->groupBox6->Controls->Add(this->labelMethod6URL9);
			this->groupBox6->Controls->Add(this->labelMethod6URL8);
			this->groupBox6->Controls->Add(this->labelMethod6URL7);
			this->groupBox6->Controls->Add(this->labelMethod6URL6);
			this->groupBox6->Controls->Add(this->labelMethod6URL5);
			this->groupBox6->Controls->Add(this->labelMethod6URL4);
			this->groupBox6->Controls->Add(this->labelMethod6URL3);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL10);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL9);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL8);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL7);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL6);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL5);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL4);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL3);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL2);
			this->groupBox6->Controls->Add(this->textBoxMethod6RL1);
			this->groupBox6->Controls->Add(this->label58);
			this->groupBox6->Controls->Add(this->button44);
			this->groupBox6->Controls->Add(this->labelMethod6URL2);
			this->groupBox6->Controls->Add(this->label60);
			this->groupBox6->Controls->Add(this->button45);
			this->groupBox6->Controls->Add(this->labelMethod6URL1);
			this->groupBox6->Controls->Add(this->label62);
			this->groupBox6->Controls->Add(this->pictureBox4);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->Location = System::Drawing::Point(12, 2622);
			this->groupBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Size = System::Drawing::Size(1360, 702);
			this->groupBox6->TabIndex = 87;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"6.验证";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &戴维南定理实验内容::groupBox6_Enter);
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->ForeColor = System::Drawing::Color::Lime;
			this->label14->Location = System::Drawing::Point(-3, 650);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 26);
			this->label14->TabIndex = 309;
			this->label14->Text = L"直流电流表2";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->ForeColor = System::Drawing::Color::Lime;
			this->label15->Location = System::Drawing::Point(-3, 556);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 26);
			this->label15->TabIndex = 308;
			this->label15->Text = L"直流电压表3";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(1151, 82);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(115, 34);
			this->button24->TabIndex = 304;
			this->button24->Text = L"曲线生成";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button24_Click);
			// 
			// chartTrial6
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartTrial6->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartTrial6->Legends->Add(legend2);
			this->chartTrial6->Location = System::Drawing::Point(672, 82);
			this->chartTrial6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial6->Name = L"chartTrial6";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartTrial6->Series->Add(series2);
			this->chartTrial6->Size = System::Drawing::Size(445, 345);
			this->chartTrial6->TabIndex = 301;
			this->chartTrial6->Text = L"chart1";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(1252, 648);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 34);
			this->button25->TabIndex = 300;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(1132, 648);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 34);
			this->button26->TabIndex = 299;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(1019, 648);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 34);
			this->button27->TabIndex = 298;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(893, 648);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 34);
			this->button28->TabIndex = 297;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(769, 648);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 34);
			this->button29->TabIndex = 296;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button29_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(644, 648);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 34);
			this->button31->TabIndex = 295;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(523, 649);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 34);
			this->button32->TabIndex = 294;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(397, 649);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 34);
			this->button33->TabIndex = 293;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(273, 649);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 34);
			this->button34->TabIndex = 292;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(148, 649);
			this->button35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(93, 34);
			this->button35->TabIndex = 291;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(1252, 548);
			this->button36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(93, 34);
			this->button36->TabIndex = 290;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(1132, 548);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 34);
			this->button37->TabIndex = 289;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(1019, 548);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 34);
			this->button38->TabIndex = 288;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(893, 548);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 34);
			this->button39->TabIndex = 287;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(769, 548);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 34);
			this->button40->TabIndex = 286;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(644, 548);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 34);
			this->button41->TabIndex = 285;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(523, 548);
			this->button42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 34);
			this->button42->TabIndex = 284;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(397, 548);
			this->button43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(93, 34);
			this->button43->TabIndex = 283;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button43_Click);
			// 
			// labelMethod6I10
			// 
			this->labelMethod6I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I10->Location = System::Drawing::Point(1252, 611);
			this->labelMethod6I10->Name = L"labelMethod6I10";
			this->labelMethod6I10->Size = System::Drawing::Size(99, 36);
			this->labelMethod6I10->TabIndex = 282;
			this->labelMethod6I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I9
			// 
			this->labelMethod6I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I9->Location = System::Drawing::Point(1132, 611);
			this->labelMethod6I9->Name = L"labelMethod6I9";
			this->labelMethod6I9->Size = System::Drawing::Size(100, 36);
			this->labelMethod6I9->TabIndex = 281;
			this->labelMethod6I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I8
			// 
			this->labelMethod6I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I8->Location = System::Drawing::Point(1019, 612);
			this->labelMethod6I8->Name = L"labelMethod6I8";
			this->labelMethod6I8->Size = System::Drawing::Size(99, 36);
			this->labelMethod6I8->TabIndex = 280;
			this->labelMethod6I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I7
			// 
			this->labelMethod6I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I7->Location = System::Drawing::Point(893, 612);
			this->labelMethod6I7->Name = L"labelMethod6I7";
			this->labelMethod6I7->Size = System::Drawing::Size(100, 36);
			this->labelMethod6I7->TabIndex = 279;
			this->labelMethod6I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I6
			// 
			this->labelMethod6I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I6->Location = System::Drawing::Point(769, 610);
			this->labelMethod6I6->Name = L"labelMethod6I6";
			this->labelMethod6I6->Size = System::Drawing::Size(99, 36);
			this->labelMethod6I6->TabIndex = 278;
			this->labelMethod6I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I5
			// 
			this->labelMethod6I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I5->Location = System::Drawing::Point(644, 610);
			this->labelMethod6I5->Name = L"labelMethod6I5";
			this->labelMethod6I5->Size = System::Drawing::Size(100, 36);
			this->labelMethod6I5->TabIndex = 277;
			this->labelMethod6I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I4
			// 
			this->labelMethod6I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I4->Location = System::Drawing::Point(523, 611);
			this->labelMethod6I4->Name = L"labelMethod6I4";
			this->labelMethod6I4->Size = System::Drawing::Size(99, 35);
			this->labelMethod6I4->TabIndex = 276;
			this->labelMethod6I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I3
			// 
			this->labelMethod6I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I3->Location = System::Drawing::Point(397, 611);
			this->labelMethod6I3->Name = L"labelMethod6I3";
			this->labelMethod6I3->Size = System::Drawing::Size(100, 35);
			this->labelMethod6I3->TabIndex = 275;
			this->labelMethod6I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelMethod6I3->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::labelMethod6I3_Click);
			// 
			// labelMethod6I2
			// 
			this->labelMethod6I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I2->Location = System::Drawing::Point(273, 610);
			this->labelMethod6I2->Name = L"labelMethod6I2";
			this->labelMethod6I2->Size = System::Drawing::Size(99, 35);
			this->labelMethod6I2->TabIndex = 274;
			this->labelMethod6I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I1
			// 
			this->labelMethod6I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I1->Location = System::Drawing::Point(148, 610);
			this->labelMethod6I1->Name = L"labelMethod6I1";
			this->labelMethod6I1->Size = System::Drawing::Size(100, 35);
			this->labelMethod6I1->TabIndex = 273;
			this->labelMethod6I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL10
			// 
			this->labelMethod6URL10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL10->Location = System::Drawing::Point(1252, 509);
			this->labelMethod6URL10->Name = L"labelMethod6URL10";
			this->labelMethod6URL10->Size = System::Drawing::Size(99, 36);
			this->labelMethod6URL10->TabIndex = 272;
			this->labelMethod6URL10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL9
			// 
			this->labelMethod6URL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL9->Location = System::Drawing::Point(1132, 509);
			this->labelMethod6URL9->Name = L"labelMethod6URL9";
			this->labelMethod6URL9->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL9->TabIndex = 271;
			this->labelMethod6URL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL8
			// 
			this->labelMethod6URL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL8->Location = System::Drawing::Point(1019, 509);
			this->labelMethod6URL8->Name = L"labelMethod6URL8";
			this->labelMethod6URL8->Size = System::Drawing::Size(99, 36);
			this->labelMethod6URL8->TabIndex = 270;
			this->labelMethod6URL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL7
			// 
			this->labelMethod6URL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL7->Location = System::Drawing::Point(893, 509);
			this->labelMethod6URL7->Name = L"labelMethod6URL7";
			this->labelMethod6URL7->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL7->TabIndex = 269;
			this->labelMethod6URL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL6
			// 
			this->labelMethod6URL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL6->Location = System::Drawing::Point(769, 509);
			this->labelMethod6URL6->Name = L"labelMethod6URL6";
			this->labelMethod6URL6->Size = System::Drawing::Size(99, 36);
			this->labelMethod6URL6->TabIndex = 268;
			this->labelMethod6URL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL5
			// 
			this->labelMethod6URL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL5->Location = System::Drawing::Point(644, 509);
			this->labelMethod6URL5->Name = L"labelMethod6URL5";
			this->labelMethod6URL5->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL5->TabIndex = 267;
			this->labelMethod6URL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL4
			// 
			this->labelMethod6URL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL4->Location = System::Drawing::Point(523, 509);
			this->labelMethod6URL4->Name = L"labelMethod6URL4";
			this->labelMethod6URL4->Size = System::Drawing::Size(99, 36);
			this->labelMethod6URL4->TabIndex = 266;
			this->labelMethod6URL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL3
			// 
			this->labelMethod6URL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL3->Location = System::Drawing::Point(397, 509);
			this->labelMethod6URL3->Name = L"labelMethod6URL3";
			this->labelMethod6URL3->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL3->TabIndex = 265;
			this->labelMethod6URL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxMethod6RL10
			// 
			this->textBoxMethod6RL10->Location = System::Drawing::Point(1252, 452);
			this->textBoxMethod6RL10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL10->Name = L"textBoxMethod6RL10";
			this->textBoxMethod6RL10->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL10->TabIndex = 264;
			// 
			// textBoxMethod6RL9
			// 
			this->textBoxMethod6RL9->Location = System::Drawing::Point(1132, 452);
			this->textBoxMethod6RL9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL9->Name = L"textBoxMethod6RL9";
			this->textBoxMethod6RL9->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL9->TabIndex = 263;
			// 
			// textBoxMethod6RL8
			// 
			this->textBoxMethod6RL8->Location = System::Drawing::Point(1019, 452);
			this->textBoxMethod6RL8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL8->Name = L"textBoxMethod6RL8";
			this->textBoxMethod6RL8->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL8->TabIndex = 262;
			// 
			// textBoxMethod6RL7
			// 
			this->textBoxMethod6RL7->Location = System::Drawing::Point(893, 452);
			this->textBoxMethod6RL7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL7->Name = L"textBoxMethod6RL7";
			this->textBoxMethod6RL7->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL7->TabIndex = 261;
			// 
			// textBoxMethod6RL6
			// 
			this->textBoxMethod6RL6->Location = System::Drawing::Point(769, 452);
			this->textBoxMethod6RL6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL6->Name = L"textBoxMethod6RL6";
			this->textBoxMethod6RL6->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL6->TabIndex = 260;
			// 
			// textBoxMethod6RL5
			// 
			this->textBoxMethod6RL5->Location = System::Drawing::Point(644, 452);
			this->textBoxMethod6RL5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL5->Name = L"textBoxMethod6RL5";
			this->textBoxMethod6RL5->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL5->TabIndex = 259;
			// 
			// textBoxMethod6RL4
			// 
			this->textBoxMethod6RL4->Location = System::Drawing::Point(523, 452);
			this->textBoxMethod6RL4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL4->Name = L"textBoxMethod6RL4";
			this->textBoxMethod6RL4->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL4->TabIndex = 258;
			// 
			// textBoxMethod6RL3
			// 
			this->textBoxMethod6RL3->Location = System::Drawing::Point(397, 452);
			this->textBoxMethod6RL3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL3->Name = L"textBoxMethod6RL3";
			this->textBoxMethod6RL3->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL3->TabIndex = 257;
			// 
			// textBoxMethod6RL2
			// 
			this->textBoxMethod6RL2->Location = System::Drawing::Point(273, 452);
			this->textBoxMethod6RL2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL2->Name = L"textBoxMethod6RL2";
			this->textBoxMethod6RL2->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL2->TabIndex = 256;
			// 
			// textBoxMethod6RL1
			// 
			this->textBoxMethod6RL1->Location = System::Drawing::Point(148, 452);
			this->textBoxMethod6RL1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMethod6RL1->Name = L"textBoxMethod6RL1";
			this->textBoxMethod6RL1->Size = System::Drawing::Size(100, 30);
			this->textBoxMethod6RL1->TabIndex = 255;
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Location = System::Drawing::Point(36, 452);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(93, 26);
			this->label58->TabIndex = 254;
			this->label58->Text = L"RL";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(273, 548);
			this->button44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(93, 34);
			this->button44->TabIndex = 253;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button44_Click);
			// 
			// labelMethod6URL2
			// 
			this->labelMethod6URL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL2->Location = System::Drawing::Point(273, 509);
			this->labelMethod6URL2->Name = L"labelMethod6URL2";
			this->labelMethod6URL2->Size = System::Drawing::Size(99, 36);
			this->labelMethod6URL2->TabIndex = 252;
			this->labelMethod6URL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Location = System::Drawing::Point(36, 608);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(93, 38);
			this->label60->TabIndex = 251;
			this->label60->Text = L"I(mA)";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(148, 548);
			this->button45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(93, 34);
			this->button45->TabIndex = 250;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button45_Click);
			// 
			// labelMethod6URL1
			// 
			this->labelMethod6URL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL1->Location = System::Drawing::Point(148, 509);
			this->labelMethod6URL1->Name = L"labelMethod6URL1";
			this->labelMethod6URL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL1->TabIndex = 249;
			this->labelMethod6URL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Location = System::Drawing::Point(36, 509);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(93, 36);
			this->label62->TabIndex = 248;
			this->label62->Text = L"URL(V)";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(29, 82);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(590, 345);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(25, 39);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(1185, 41);
			this->label35->TabIndex = 7;
			this->label35->Text = L"如图所示，将实验台稳压源输出设置为ES=U0C，RO（由电阻箱设定）为之前实验所测得值。重复步骤2，绘制外特性曲线。";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(184, 3354);
			this->textBox结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1137, 28);
			this->textBox结论->TabIndex = 179;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(8, 3358);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 178;
			this->label105->Text = L"实验结论";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(7, 3442);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1315, 52);
			this->label106->TabIndex = 181;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(561, 3401);
			this->button81->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 180;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &戴维南定理实验内容::button81_Click);
			// 
			// 戴维南定理实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1621, 738);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"戴维南定理实验内容";
			this->Text = L"戴维南定理实验内容";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &戴维南定理实验内容::戴维南定理实验内容_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &戴维南定理实验内容::戴维南定理实验内容_FormClosed);
			this->Load += gcnew System::EventHandler(this, &戴维南定理实验内容::戴维南定理实验内容_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I1->Text = global::GetI500Data();
}
private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
}
		 public :ST_戴维南定理 Load_Grade_data();
		 void SendData();
private: System::Void 戴维南定理实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	chartTrial2->Titles->Add("  外特性曲线");
	chartTrial6->Titles->Add("  外特性曲线");
	lcc.SendComputerInfo(Grades[4] + "正在实验中");
	NowTrial::NowTrailCode = 4;
	NowTrial::NowTrailForm = this;
}
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod1Uoc->Text = global::GetU30_U400VData();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod1Isc->Text = global::GetI500Data();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL1->Text = global::GetU30_U400VData();
}
private: System::Void labelMethod2URL2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL2->Text = global::GetU30_U400VData();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL3->Text = global::GetU30_U400VData();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL4->Text = global::GetU30_U400VData();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL5->Text = global::GetU30_U400VData();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL6->Text = global::GetU30_U400VData();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL7->Text = global::GetU30_U400VData();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL8->Text = global::GetU30_U400VData();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL9->Text = global::GetU30_U400VData();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2URL10->Text = global::GetU30_U400VData();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I1->Text = global::GetI500Data();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I2->Text = global::GetI500Data();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I3->Text = global::GetI500Data();
}
private: System::Void labelMethod2I4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I4->Text = global::GetI500Data();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I5->Text = global::GetI500Data();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I6->Text = global::GetI500Data();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I7->Text = global::GetI500Data();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I8->Text = global::GetI500Data();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I9->Text = global::GetI500Data();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I10->Text = global::GetI500Data();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL1->Text = global::GetU30_U400VData();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL2->Text = global::GetU30_U400VData();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL3->Text = global::GetU30_U400VData();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL4->Text = global::GetU30_U400VData();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL6->Text = global::GetU30_U400VData();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL5->Text = global::GetU30_U400VData();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL7->Text = global::GetU30_U400VData();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL8->Text = global::GetU30_U400VData();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL9->Text = global::GetU30_U400VData();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6URL10->Text = global::GetU30_U400VData();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I2->Text = global::GetI500Data();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I3->Text = global::GetI500Data();
}
private: System::Void labelMethod6I3_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I4->Text = global::GetI500Data();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I5->Text = global::GetI500Data();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I6->Text = global::GetI500Data();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I7->Text = global::GetI500Data();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I8->Text = global::GetI500Data();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I9->Text = global::GetI500Data();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod6I10->Text = global::GetI500Data();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	chartTrial6_load();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	chartTrial2_load();
}
private: System::Void label37_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxMethod1Us->Text, 0, 30);
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float Uoc =  Convert::ToSingle(labelMethod1Uoc->Text);
		float Isc = Convert::ToSingle(labelMethod1Isc->Text);
		textBoxMethod1Ro->Text = (Uoc / Isc).ToString();
	}
	catch (System::Exception ^e) {
	
		textBoxMethod1Ro->Text = "计算失败";
	}

}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMethod2I4->Text = global::GetI500Data();
}
private: System::Void 戴维南定理实验内容_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

}
private: System::Void 戴维南定理实验内容_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxMethod3Uoc->Text = global::GetU30_U400VData();
}
};
}
