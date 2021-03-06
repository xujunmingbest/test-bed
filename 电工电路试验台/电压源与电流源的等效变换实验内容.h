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
	/// 电压源与电流源的等效变换实验内容 摘要
	/// </summary>
	public ref class 电压源与电流源的等效变换实验内容 : public System::Windows::Forms::Form
	{
	public:
		电压源与电流源的等效变换实验内容(void)
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
		~电压源与电流源的等效变换实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  labelTrial11I8;

	private: System::Windows::Forms::Label^  labelTrial11I7;












	private: System::Windows::Forms::Label^  labelTrial11I6;


	private: System::Windows::Forms::Label^  labelTrial11I5;


	private: System::Windows::Forms::Label^  labelTrial11I4;


	private: System::Windows::Forms::Label^  labelTrial11I3;


	private: System::Windows::Forms::Label^  labelTrial11I2;


	private: System::Windows::Forms::Label^  labelTrial11I1;
	private: System::Windows::Forms::Label^  labelTrial11I10;



	private: System::Windows::Forms::Label^  labelTrial11I9;



	private: System::Windows::Forms::Label^  labelTrial11U8;


	private: System::Windows::Forms::Label^  labelTrial11U7;


	private: System::Windows::Forms::Label^  labelTrial11U6;


	private: System::Windows::Forms::Label^  labelTrial11U5;


	private: System::Windows::Forms::Label^  labelTrial11U4;


	private: System::Windows::Forms::Label^  labelTrial11U3;


	private: System::Windows::Forms::Label^  labelTrial11U2;


	private: System::Windows::Forms::Label^  labelTrial11U1;
	private: System::Windows::Forms::Label^  labelTrial11U10;



	private: System::Windows::Forms::Label^  labelTrial11U9;














	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBoxTrial12Load10;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load9;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load8;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load7;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load6;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load5;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load4;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load3;

private: System::Windows::Forms::TextBox^  textBoxTrial12Load2;


private: System::Windows::Forms::TextBox^  textBoxTrial12Load1;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
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
private: System::Windows::Forms::Label^  labelTrial12I8;

private: System::Windows::Forms::Label^  labelTrial12I7;

private: System::Windows::Forms::Label^  labelTrial12I6;

private: System::Windows::Forms::Label^  labelTrial12I5;

private: System::Windows::Forms::Label^  labelTrial12I4;

private: System::Windows::Forms::Label^  labelTrial12I3;

private: System::Windows::Forms::Label^  labelTrial12I2;

private: System::Windows::Forms::Label^  labelTrial12I1;
private: System::Windows::Forms::Label^  labelTrial12I10;


private: System::Windows::Forms::Label^  labelTrial12I9;

private: System::Windows::Forms::Label^  labelTrial12U8;

private: System::Windows::Forms::Label^  labelTrial12U7;

private: System::Windows::Forms::Label^  labelTrial12U6;

private: System::Windows::Forms::Label^  labelTrial12U5;

private: System::Windows::Forms::Label^  labelTrial12U4;

private: System::Windows::Forms::Label^  labelTrial12U3;

private: System::Windows::Forms::Label^  labelTrial12U2;

private: System::Windows::Forms::Label^  labelTrial12U1;
private: System::Windows::Forms::Label^  labelTrial12U10;


private: System::Windows::Forms::Label^  labelTrial12U9;

	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  textBoxTrial11Load10;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load9;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load8;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load7;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load6;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load5;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load4;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load3;

private: System::Windows::Forms::TextBox^  textBoxTrial11Load2;

	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBoxTrial11Load1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::TextBox^  textBoxTrial2Load10;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load9;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load8;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load7;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load6;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load5;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load4;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load3;

private: System::Windows::Forms::TextBox^  textBoxTrial2Load2;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBoxTrial2Load1;

private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Label^  labelTrial2I8;

private: System::Windows::Forms::Label^  labelTrial2I7;


private: System::Windows::Forms::Label^  labelTrial2I6;


private: System::Windows::Forms::Label^  labelTrial2I5;


private: System::Windows::Forms::Label^  labelTrial2I4;


private: System::Windows::Forms::Label^  labelTrial2I3;
private: System::Windows::Forms::Label^  labelTrial2I2;




private: System::Windows::Forms::Label^  labelTrial2I1;
private: System::Windows::Forms::Label^  labelTrial2I10;



private: System::Windows::Forms::Label^  labelTrial2I9;




private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Button^  button81;

private: System::Windows::Forms::TextBox^  textBoxTrial11UP2;


private: System::Windows::Forms::TextBox^  textBoxTrial11UP1;
private: System::Windows::Forms::TextBox^  textBoxTrial2Is;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label17;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(电压源与电流源的等效变换实验内容::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial11UP2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11UP1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
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
			this->labelTrial12I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial11Load10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial11Load2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial11Load1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->labelTrial11I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U9 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Is = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTrial2Load10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2Load2 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Load1 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I9 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBoxTrial11UP2);
			this->groupBox2->Controls->Add(this->textBoxTrial11UP1);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load10);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load9);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load8);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load7);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load6);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load5);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load4);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load3);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load2);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->button35);
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Controls->Add(this->button39);
			this->groupBox2->Controls->Add(this->button40);
			this->groupBox2->Controls->Add(this->labelTrial12I8);
			this->groupBox2->Controls->Add(this->labelTrial12I7);
			this->groupBox2->Controls->Add(this->labelTrial12I6);
			this->groupBox2->Controls->Add(this->labelTrial12I5);
			this->groupBox2->Controls->Add(this->labelTrial12I4);
			this->groupBox2->Controls->Add(this->labelTrial12I3);
			this->groupBox2->Controls->Add(this->labelTrial12I2);
			this->groupBox2->Controls->Add(this->labelTrial12I1);
			this->groupBox2->Controls->Add(this->labelTrial12I10);
			this->groupBox2->Controls->Add(this->labelTrial12I9);
			this->groupBox2->Controls->Add(this->labelTrial12U8);
			this->groupBox2->Controls->Add(this->labelTrial12U7);
			this->groupBox2->Controls->Add(this->labelTrial12U6);
			this->groupBox2->Controls->Add(this->labelTrial12U5);
			this->groupBox2->Controls->Add(this->labelTrial12U4);
			this->groupBox2->Controls->Add(this->labelTrial12U3);
			this->groupBox2->Controls->Add(this->labelTrial12U2);
			this->groupBox2->Controls->Add(this->labelTrial12U1);
			this->groupBox2->Controls->Add(this->labelTrial12U10);
			this->groupBox2->Controls->Add(this->labelTrial12U9);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load10);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load9);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load8);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load7);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load6);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load5);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load4);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load3);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBoxTrial11Load1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->labelTrial11I8);
			this->groupBox2->Controls->Add(this->labelTrial11I7);
			this->groupBox2->Controls->Add(this->labelTrial11I6);
			this->groupBox2->Controls->Add(this->labelTrial11I5);
			this->groupBox2->Controls->Add(this->labelTrial11I4);
			this->groupBox2->Controls->Add(this->labelTrial11I3);
			this->groupBox2->Controls->Add(this->labelTrial11I2);
			this->groupBox2->Controls->Add(this->labelTrial11I1);
			this->groupBox2->Controls->Add(this->labelTrial11I10);
			this->groupBox2->Controls->Add(this->labelTrial11I9);
			this->groupBox2->Controls->Add(this->labelTrial11U8);
			this->groupBox2->Controls->Add(this->labelTrial11U7);
			this->groupBox2->Controls->Add(this->labelTrial11U6);
			this->groupBox2->Controls->Add(this->labelTrial11U5);
			this->groupBox2->Controls->Add(this->labelTrial11U4);
			this->groupBox2->Controls->Add(this->labelTrial11U3);
			this->groupBox2->Controls->Add(this->labelTrial11U2);
			this->groupBox2->Controls->Add(this->labelTrial11U1);
			this->groupBox2->Controls->Add(this->labelTrial11U10);
			this->groupBox2->Controls->Add(this->labelTrial11U9);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1289, 1162);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"1．测定直流稳压电源与电压源的外特性";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::groupBox2_Enter);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(10, 881);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 32);
			this->label7->TabIndex = 312;
			this->label7->Text = L"负载(欧姆)";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(6, 1086);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 26);
			this->label13->TabIndex = 311;
			this->label13->Text = L"直流电流表2";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->ForeColor = System::Drawing::Color::Lime;
			this->label14->Location = System::Drawing::Point(6, 992);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 26);
			this->label14->TabIndex = 310;
			this->label14->Text = L"直流电压表3";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(6, 758);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 26);
			this->label11->TabIndex = 309;
			this->label11->Text = L"直流电流表2";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->ForeColor = System::Drawing::Color::Lime;
			this->label12->Location = System::Drawing::Point(6, 664);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 26);
			this->label12->TabIndex = 308;
			this->label12->Text = L"直流电压表3";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial11UP2
			// 
			this->textBoxTrial11UP2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11UP2->Location = System::Drawing::Point(1004, 256);
			this->textBoxTrial11UP2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11UP2->Name = L"textBoxTrial11UP2";
			this->textBoxTrial11UP2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11UP2->TabIndex = 275;
			// 
			// textBoxTrial11UP1
			// 
			this->textBoxTrial11UP1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11UP1->Location = System::Drawing::Point(35, 184);
			this->textBoxTrial11UP1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11UP1->Name = L"textBoxTrial11UP1";
			this->textBoxTrial11UP1->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11UP1->TabIndex = 273;
			// 
			// textBoxTrial12Load10
			// 
			this->textBoxTrial12Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load10->Location = System::Drawing::Point(1075, 878);
			this->textBoxTrial12Load10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load10->Name = L"textBoxTrial12Load10";
			this->textBoxTrial12Load10->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load10->TabIndex = 272;
			// 
			// textBoxTrial12Load9
			// 
			this->textBoxTrial12Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load9->Location = System::Drawing::Point(973, 878);
			this->textBoxTrial12Load9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load9->Name = L"textBoxTrial12Load9";
			this->textBoxTrial12Load9->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load9->TabIndex = 271;
			// 
			// textBoxTrial12Load8
			// 
			this->textBoxTrial12Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load8->Location = System::Drawing::Point(866, 878);
			this->textBoxTrial12Load8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load8->Name = L"textBoxTrial12Load8";
			this->textBoxTrial12Load8->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load8->TabIndex = 270;
			// 
			// textBoxTrial12Load7
			// 
			this->textBoxTrial12Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load7->Location = System::Drawing::Point(767, 878);
			this->textBoxTrial12Load7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load7->Name = L"textBoxTrial12Load7";
			this->textBoxTrial12Load7->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load7->TabIndex = 269;
			// 
			// textBoxTrial12Load6
			// 
			this->textBoxTrial12Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load6->Location = System::Drawing::Point(665, 878);
			this->textBoxTrial12Load6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load6->Name = L"textBoxTrial12Load6";
			this->textBoxTrial12Load6->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load6->TabIndex = 268;
			// 
			// textBoxTrial12Load5
			// 
			this->textBoxTrial12Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load5->Location = System::Drawing::Point(566, 878);
			this->textBoxTrial12Load5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load5->Name = L"textBoxTrial12Load5";
			this->textBoxTrial12Load5->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load5->TabIndex = 267;
			// 
			// textBoxTrial12Load4
			// 
			this->textBoxTrial12Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load4->Location = System::Drawing::Point(467, 878);
			this->textBoxTrial12Load4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load4->Name = L"textBoxTrial12Load4";
			this->textBoxTrial12Load4->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load4->TabIndex = 266;
			// 
			// textBoxTrial12Load3
			// 
			this->textBoxTrial12Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load3->Location = System::Drawing::Point(369, 878);
			this->textBoxTrial12Load3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load3->Name = L"textBoxTrial12Load3";
			this->textBoxTrial12Load3->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load3->TabIndex = 265;
			// 
			// textBoxTrial12Load2
			// 
			this->textBoxTrial12Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load2->Location = System::Drawing::Point(270, 878);
			this->textBoxTrial12Load2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load2->Name = L"textBoxTrial12Load2";
			this->textBoxTrial12Load2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load2->TabIndex = 264;
			// 
			// textBoxTrial12Load1
			// 
			this->textBoxTrial12Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load1->Location = System::Drawing::Point(169, 878);
			this->textBoxTrial12Load1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial12Load1->Name = L"textBoxTrial12Load1";
			this->textBoxTrial12Load1->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load1->TabIndex = 262;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(33, 1044);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 42);
			this->label8->TabIndex = 261;
			this->label8->Text = L"I(mA)";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(33, 939);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 32);
			this->label9->TabIndex = 260;
			this->label9->Text = L"U(v)";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(1075, 1092);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 42);
			this->button1->TabIndex = 259;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(973, 1092);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 42);
			this->button2->TabIndex = 258;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(869, 1092);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 42);
			this->button3->TabIndex = 257;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(767, 1092);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 42);
			this->button4->TabIndex = 256;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(665, 1092);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 42);
			this->button5->TabIndex = 255;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(566, 1092);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 42);
			this->button6->TabIndex = 254;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(471, 1092);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 42);
			this->button7->TabIndex = 253;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(369, 1092);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 42);
			this->button8->TabIndex = 252;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(270, 1092);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 42);
			this->button9->TabIndex = 251;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(166, 1092);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 42);
			this->button10->TabIndex = 250;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button10_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(1075, 974);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 42);
			this->button31->TabIndex = 249;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(973, 974);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 42);
			this->button32->TabIndex = 248;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(869, 974);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 42);
			this->button33->TabIndex = 247;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(767, 974);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 42);
			this->button34->TabIndex = 246;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(665, 974);
			this->button35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(93, 42);
			this->button35->TabIndex = 245;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(566, 974);
			this->button36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(93, 42);
			this->button36->TabIndex = 244;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(471, 974);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 42);
			this->button37->TabIndex = 243;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(369, 974);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 42);
			this->button38->TabIndex = 242;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(270, 974);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 42);
			this->button39->TabIndex = 241;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button39_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(166, 974);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 42);
			this->button40->TabIndex = 240;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button40_Click);
			// 
			// labelTrial12I8
			// 
			this->labelTrial12I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I8->Location = System::Drawing::Point(869, 1038);
			this->labelTrial12I8->Name = L"labelTrial12I8";
			this->labelTrial12I8->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I8->TabIndex = 239;
			this->labelTrial12I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I7
			// 
			this->labelTrial12I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I7->Location = System::Drawing::Point(767, 1038);
			this->labelTrial12I7->Name = L"labelTrial12I7";
			this->labelTrial12I7->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I7->TabIndex = 238;
			this->labelTrial12I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I6
			// 
			this->labelTrial12I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I6->Location = System::Drawing::Point(665, 1038);
			this->labelTrial12I6->Name = L"labelTrial12I6";
			this->labelTrial12I6->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I6->TabIndex = 237;
			this->labelTrial12I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I5
			// 
			this->labelTrial12I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I5->Location = System::Drawing::Point(566, 1038);
			this->labelTrial12I5->Name = L"labelTrial12I5";
			this->labelTrial12I5->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I5->TabIndex = 236;
			this->labelTrial12I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I4
			// 
			this->labelTrial12I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I4->Location = System::Drawing::Point(471, 1038);
			this->labelTrial12I4->Name = L"labelTrial12I4";
			this->labelTrial12I4->Size = System::Drawing::Size(89, 42);
			this->labelTrial12I4->TabIndex = 235;
			this->labelTrial12I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I3
			// 
			this->labelTrial12I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I3->Location = System::Drawing::Point(369, 1038);
			this->labelTrial12I3->Name = L"labelTrial12I3";
			this->labelTrial12I3->Size = System::Drawing::Size(92, 42);
			this->labelTrial12I3->TabIndex = 234;
			this->labelTrial12I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I2
			// 
			this->labelTrial12I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I2->Location = System::Drawing::Point(270, 1038);
			this->labelTrial12I2->Name = L"labelTrial12I2";
			this->labelTrial12I2->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I2->TabIndex = 233;
			this->labelTrial12I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I1
			// 
			this->labelTrial12I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I1->Location = System::Drawing::Point(169, 1038);
			this->labelTrial12I1->Name = L"labelTrial12I1";
			this->labelTrial12I1->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I1->TabIndex = 232;
			this->labelTrial12I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I10
			// 
			this->labelTrial12I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I10->Location = System::Drawing::Point(1075, 1038);
			this->labelTrial12I10->Name = L"labelTrial12I10";
			this->labelTrial12I10->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I10->TabIndex = 231;
			this->labelTrial12I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I9
			// 
			this->labelTrial12I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I9->Location = System::Drawing::Point(973, 1038);
			this->labelTrial12I9->Name = L"labelTrial12I9";
			this->labelTrial12I9->Size = System::Drawing::Size(93, 42);
			this->labelTrial12I9->TabIndex = 230;
			this->labelTrial12I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U8
			// 
			this->labelTrial12U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U8->Location = System::Drawing::Point(869, 928);
			this->labelTrial12U8->Name = L"labelTrial12U8";
			this->labelTrial12U8->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U8->TabIndex = 229;
			this->labelTrial12U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U7
			// 
			this->labelTrial12U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U7->Location = System::Drawing::Point(767, 928);
			this->labelTrial12U7->Name = L"labelTrial12U7";
			this->labelTrial12U7->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U7->TabIndex = 228;
			this->labelTrial12U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U6
			// 
			this->labelTrial12U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U6->Location = System::Drawing::Point(665, 928);
			this->labelTrial12U6->Name = L"labelTrial12U6";
			this->labelTrial12U6->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U6->TabIndex = 227;
			this->labelTrial12U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U5
			// 
			this->labelTrial12U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U5->Location = System::Drawing::Point(566, 928);
			this->labelTrial12U5->Name = L"labelTrial12U5";
			this->labelTrial12U5->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U5->TabIndex = 226;
			this->labelTrial12U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U4
			// 
			this->labelTrial12U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U4->Location = System::Drawing::Point(471, 928);
			this->labelTrial12U4->Name = L"labelTrial12U4";
			this->labelTrial12U4->Size = System::Drawing::Size(89, 42);
			this->labelTrial12U4->TabIndex = 225;
			this->labelTrial12U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U3
			// 
			this->labelTrial12U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U3->Location = System::Drawing::Point(369, 928);
			this->labelTrial12U3->Name = L"labelTrial12U3";
			this->labelTrial12U3->Size = System::Drawing::Size(92, 42);
			this->labelTrial12U3->TabIndex = 224;
			this->labelTrial12U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U2
			// 
			this->labelTrial12U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U2->Location = System::Drawing::Point(270, 928);
			this->labelTrial12U2->Name = L"labelTrial12U2";
			this->labelTrial12U2->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U2->TabIndex = 223;
			this->labelTrial12U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U1
			// 
			this->labelTrial12U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U1->Location = System::Drawing::Point(169, 928);
			this->labelTrial12U1->Name = L"labelTrial12U1";
			this->labelTrial12U1->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U1->TabIndex = 222;
			this->labelTrial12U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U10
			// 
			this->labelTrial12U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U10->Location = System::Drawing::Point(1075, 928);
			this->labelTrial12U10->Name = L"labelTrial12U10";
			this->labelTrial12U10->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U10->TabIndex = 221;
			this->labelTrial12U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U9
			// 
			this->labelTrial12U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U9->Location = System::Drawing::Point(973, 928);
			this->labelTrial12U9->Name = L"labelTrial12U9";
			this->labelTrial12U9->Size = System::Drawing::Size(93, 42);
			this->labelTrial12U9->TabIndex = 220;
			this->labelTrial12U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(39, 839);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1075, 22);
			this->label6->TabIndex = 219;
			this->label6->Text = L"（2）按图5-3接线，虚线框可模拟为一个实际的电压源，调节电位R2，令其阻值由大至小变化，读取两表的数据。";
			// 
			// textBoxTrial11Load10
			// 
			this->textBoxTrial11Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load10->Location = System::Drawing::Point(1075, 553);
			this->textBoxTrial11Load10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load10->Name = L"textBoxTrial11Load10";
			this->textBoxTrial11Load10->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load10->TabIndex = 218;
			// 
			// textBoxTrial11Load9
			// 
			this->textBoxTrial11Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load9->Location = System::Drawing::Point(973, 553);
			this->textBoxTrial11Load9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load9->Name = L"textBoxTrial11Load9";
			this->textBoxTrial11Load9->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load9->TabIndex = 217;
			// 
			// textBoxTrial11Load8
			// 
			this->textBoxTrial11Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load8->Location = System::Drawing::Point(866, 553);
			this->textBoxTrial11Load8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load8->Name = L"textBoxTrial11Load8";
			this->textBoxTrial11Load8->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load8->TabIndex = 216;
			// 
			// textBoxTrial11Load7
			// 
			this->textBoxTrial11Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load7->Location = System::Drawing::Point(767, 553);
			this->textBoxTrial11Load7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load7->Name = L"textBoxTrial11Load7";
			this->textBoxTrial11Load7->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load7->TabIndex = 215;
			// 
			// textBoxTrial11Load6
			// 
			this->textBoxTrial11Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load6->Location = System::Drawing::Point(665, 553);
			this->textBoxTrial11Load6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load6->Name = L"textBoxTrial11Load6";
			this->textBoxTrial11Load6->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load6->TabIndex = 214;
			// 
			// textBoxTrial11Load5
			// 
			this->textBoxTrial11Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load5->Location = System::Drawing::Point(566, 553);
			this->textBoxTrial11Load5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load5->Name = L"textBoxTrial11Load5";
			this->textBoxTrial11Load5->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load5->TabIndex = 213;
			// 
			// textBoxTrial11Load4
			// 
			this->textBoxTrial11Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load4->Location = System::Drawing::Point(467, 553);
			this->textBoxTrial11Load4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load4->Name = L"textBoxTrial11Load4";
			this->textBoxTrial11Load4->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load4->TabIndex = 212;
			// 
			// textBoxTrial11Load3
			// 
			this->textBoxTrial11Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load3->Location = System::Drawing::Point(369, 553);
			this->textBoxTrial11Load3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load3->Name = L"textBoxTrial11Load3";
			this->textBoxTrial11Load3->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load3->TabIndex = 211;
			// 
			// textBoxTrial11Load2
			// 
			this->textBoxTrial11Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load2->Location = System::Drawing::Point(270, 553);
			this->textBoxTrial11Load2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load2->Name = L"textBoxTrial11Load2";
			this->textBoxTrial11Load2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load2->TabIndex = 210;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(14, 556);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 32);
			this->label5->TabIndex = 209;
			this->label5->Text = L"负载(欧姆)";
			// 
			// textBoxTrial11Load1
			// 
			this->textBoxTrial11Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load1->Location = System::Drawing::Point(169, 553);
			this->textBoxTrial11Load1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial11Load1->Name = L"textBoxTrial11Load1";
			this->textBoxTrial11Load1->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load1->TabIndex = 208;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 718);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 42);
			this->label4->TabIndex = 207;
			this->label4->Text = L"I(mA)";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(33, 612);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 32);
			this->label3->TabIndex = 206;
			this->label3->Text = L"U(v)";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(733, 490);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 22);
			this->label2->TabIndex = 205;
			this->label2->Text = L"图5-3";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(293, 490);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 204;
			this->label1->Text = L"图5-2";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(135, 65);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(863, 412);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 203;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::pictureBox1_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(1075, 767);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 42);
			this->button21->TabIndex = 202;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(973, 767);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 42);
			this->button22->TabIndex = 201;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(869, 767);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 42);
			this->button23->TabIndex = 200;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(767, 767);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 42);
			this->button24->TabIndex = 199;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(665, 767);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 42);
			this->button25->TabIndex = 198;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(566, 767);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 42);
			this->button26->TabIndex = 197;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(471, 767);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 42);
			this->button27->TabIndex = 196;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(369, 767);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 42);
			this->button28->TabIndex = 195;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(270, 767);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 42);
			this->button29->TabIndex = 194;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(166, 767);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(93, 42);
			this->button30->TabIndex = 193;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button30_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(1075, 649);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 42);
			this->button11->TabIndex = 192;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(973, 649);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 42);
			this->button12->TabIndex = 191;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(869, 649);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 42);
			this->button13->TabIndex = 190;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(767, 649);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 42);
			this->button14->TabIndex = 189;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(665, 649);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 42);
			this->button15->TabIndex = 188;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(566, 649);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 42);
			this->button16->TabIndex = 187;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(471, 649);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 42);
			this->button17->TabIndex = 186;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(369, 649);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 42);
			this->button18->TabIndex = 185;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(270, 649);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 42);
			this->button19->TabIndex = 184;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(166, 649);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 42);
			this->button20->TabIndex = 183;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button20_Click);
			// 
			// labelTrial11I8
			// 
			this->labelTrial11I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I8->Location = System::Drawing::Point(869, 712);
			this->labelTrial11I8->Name = L"labelTrial11I8";
			this->labelTrial11I8->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I8->TabIndex = 172;
			this->labelTrial11I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I7
			// 
			this->labelTrial11I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I7->Location = System::Drawing::Point(767, 712);
			this->labelTrial11I7->Name = L"labelTrial11I7";
			this->labelTrial11I7->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I7->TabIndex = 171;
			this->labelTrial11I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I6
			// 
			this->labelTrial11I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I6->Location = System::Drawing::Point(665, 712);
			this->labelTrial11I6->Name = L"labelTrial11I6";
			this->labelTrial11I6->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I6->TabIndex = 170;
			this->labelTrial11I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I5
			// 
			this->labelTrial11I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I5->Location = System::Drawing::Point(566, 712);
			this->labelTrial11I5->Name = L"labelTrial11I5";
			this->labelTrial11I5->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I5->TabIndex = 169;
			this->labelTrial11I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I4
			// 
			this->labelTrial11I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I4->Location = System::Drawing::Point(471, 712);
			this->labelTrial11I4->Name = L"labelTrial11I4";
			this->labelTrial11I4->Size = System::Drawing::Size(89, 42);
			this->labelTrial11I4->TabIndex = 168;
			this->labelTrial11I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I3
			// 
			this->labelTrial11I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I3->Location = System::Drawing::Point(369, 712);
			this->labelTrial11I3->Name = L"labelTrial11I3";
			this->labelTrial11I3->Size = System::Drawing::Size(92, 42);
			this->labelTrial11I3->TabIndex = 167;
			this->labelTrial11I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I2
			// 
			this->labelTrial11I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I2->Location = System::Drawing::Point(270, 712);
			this->labelTrial11I2->Name = L"labelTrial11I2";
			this->labelTrial11I2->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I2->TabIndex = 166;
			this->labelTrial11I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I1
			// 
			this->labelTrial11I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I1->Location = System::Drawing::Point(169, 712);
			this->labelTrial11I1->Name = L"labelTrial11I1";
			this->labelTrial11I1->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I1->TabIndex = 165;
			this->labelTrial11I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I10
			// 
			this->labelTrial11I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I10->Location = System::Drawing::Point(1075, 712);
			this->labelTrial11I10->Name = L"labelTrial11I10";
			this->labelTrial11I10->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I10->TabIndex = 154;
			this->labelTrial11I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I9
			// 
			this->labelTrial11I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I9->Location = System::Drawing::Point(973, 712);
			this->labelTrial11I9->Name = L"labelTrial11I9";
			this->labelTrial11I9->Size = System::Drawing::Size(93, 42);
			this->labelTrial11I9->TabIndex = 153;
			this->labelTrial11I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U8
			// 
			this->labelTrial11U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U8->Location = System::Drawing::Point(869, 603);
			this->labelTrial11U8->Name = L"labelTrial11U8";
			this->labelTrial11U8->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U8->TabIndex = 151;
			this->labelTrial11U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U7
			// 
			this->labelTrial11U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U7->Location = System::Drawing::Point(767, 603);
			this->labelTrial11U7->Name = L"labelTrial11U7";
			this->labelTrial11U7->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U7->TabIndex = 150;
			this->labelTrial11U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U6
			// 
			this->labelTrial11U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U6->Location = System::Drawing::Point(665, 603);
			this->labelTrial11U6->Name = L"labelTrial11U6";
			this->labelTrial11U6->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U6->TabIndex = 149;
			this->labelTrial11U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U5
			// 
			this->labelTrial11U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U5->Location = System::Drawing::Point(566, 603);
			this->labelTrial11U5->Name = L"labelTrial11U5";
			this->labelTrial11U5->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U5->TabIndex = 148;
			this->labelTrial11U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U4
			// 
			this->labelTrial11U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U4->Location = System::Drawing::Point(471, 603);
			this->labelTrial11U4->Name = L"labelTrial11U4";
			this->labelTrial11U4->Size = System::Drawing::Size(89, 42);
			this->labelTrial11U4->TabIndex = 147;
			this->labelTrial11U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U3
			// 
			this->labelTrial11U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U3->Location = System::Drawing::Point(369, 603);
			this->labelTrial11U3->Name = L"labelTrial11U3";
			this->labelTrial11U3->Size = System::Drawing::Size(92, 42);
			this->labelTrial11U3->TabIndex = 146;
			this->labelTrial11U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U2
			// 
			this->labelTrial11U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U2->Location = System::Drawing::Point(270, 603);
			this->labelTrial11U2->Name = L"labelTrial11U2";
			this->labelTrial11U2->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U2->TabIndex = 145;
			this->labelTrial11U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U1
			// 
			this->labelTrial11U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U1->Location = System::Drawing::Point(169, 603);
			this->labelTrial11U1->Name = L"labelTrial11U1";
			this->labelTrial11U1->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U1->TabIndex = 144;
			this->labelTrial11U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U10
			// 
			this->labelTrial11U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U10->Location = System::Drawing::Point(1075, 603);
			this->labelTrial11U10->Name = L"labelTrial11U10";
			this->labelTrial11U10->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U10->TabIndex = 133;
			this->labelTrial11U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U9
			// 
			this->labelTrial11U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U9->Location = System::Drawing::Point(973, 603);
			this->labelTrial11U9->Name = L"labelTrial11U9";
			this->labelTrial11U9->Size = System::Drawing::Size(93, 42);
			this->labelTrial11U9->TabIndex = 132;
			this->labelTrial11U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1075, 22);
			this->label19->TabIndex = 87;
			this->label19->Text = L"（1）按图5－2接线，US为直流稳压电源，调节R2，令其阻值由大至小变化，记录两表的读数。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBoxTrial2Is);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load10);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load9);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load8);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load7);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load6);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load5);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load4);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load3);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load2);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->textBoxTrial2Load1);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->button41);
			this->groupBox3->Controls->Add(this->button42);
			this->groupBox3->Controls->Add(this->button43);
			this->groupBox3->Controls->Add(this->button44);
			this->groupBox3->Controls->Add(this->button45);
			this->groupBox3->Controls->Add(this->button46);
			this->groupBox3->Controls->Add(this->button47);
			this->groupBox3->Controls->Add(this->button48);
			this->groupBox3->Controls->Add(this->button49);
			this->groupBox3->Controls->Add(this->button50);
			this->groupBox3->Controls->Add(this->labelTrial2I8);
			this->groupBox3->Controls->Add(this->labelTrial2I7);
			this->groupBox3->Controls->Add(this->labelTrial2I6);
			this->groupBox3->Controls->Add(this->labelTrial2I5);
			this->groupBox3->Controls->Add(this->labelTrial2I4);
			this->groupBox3->Controls->Add(this->labelTrial2I3);
			this->groupBox3->Controls->Add(this->labelTrial2I2);
			this->groupBox3->Controls->Add(this->labelTrial2I1);
			this->groupBox3->Controls->Add(this->labelTrial2I10);
			this->groupBox3->Controls->Add(this->labelTrial2I9);
			this->groupBox3->Controls->Add(this->label104);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(12, 1190);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1285, 698);
			this->groupBox3->TabIndex = 176;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"2．测定电流源的外特性";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->ForeColor = System::Drawing::Color::Lime;
			this->label15->Location = System::Drawing::Point(18, 647);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 26);
			this->label15->TabIndex = 311;
			this->label15->Text = L"直流电流表2";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(421, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 42);
			this->label10->TabIndex = 277;
			this->label10->Text = L"Is=";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2Is
			// 
			this->textBoxTrial2Is->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Is->Location = System::Drawing::Point(421, 250);
			this->textBoxTrial2Is->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Is->Name = L"textBoxTrial2Is";
			this->textBoxTrial2Is->Size = System::Drawing::Size(116, 30);
			this->textBoxTrial2Is->TabIndex = 307;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(696, 504);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(65, 22);
			this->label43->TabIndex = 306;
			this->label43->Text = L"图5-4";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(297, 94);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(839, 393);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 305;
			this->pictureBox2->TabStop = false;
			// 
			// textBoxTrial2Load10
			// 
			this->textBoxTrial2Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load10->Location = System::Drawing::Point(1110, 544);
			this->textBoxTrial2Load10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load10->Name = L"textBoxTrial2Load10";
			this->textBoxTrial2Load10->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load10->TabIndex = 304;
			// 
			// textBoxTrial2Load9
			// 
			this->textBoxTrial2Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load9->Location = System::Drawing::Point(1008, 544);
			this->textBoxTrial2Load9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load9->Name = L"textBoxTrial2Load9";
			this->textBoxTrial2Load9->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load9->TabIndex = 303;
			// 
			// textBoxTrial2Load8
			// 
			this->textBoxTrial2Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load8->Location = System::Drawing::Point(901, 544);
			this->textBoxTrial2Load8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load8->Name = L"textBoxTrial2Load8";
			this->textBoxTrial2Load8->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load8->TabIndex = 302;
			// 
			// textBoxTrial2Load7
			// 
			this->textBoxTrial2Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load7->Location = System::Drawing::Point(802, 544);
			this->textBoxTrial2Load7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load7->Name = L"textBoxTrial2Load7";
			this->textBoxTrial2Load7->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load7->TabIndex = 301;
			// 
			// textBoxTrial2Load6
			// 
			this->textBoxTrial2Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load6->Location = System::Drawing::Point(700, 544);
			this->textBoxTrial2Load6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load6->Name = L"textBoxTrial2Load6";
			this->textBoxTrial2Load6->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load6->TabIndex = 300;
			// 
			// textBoxTrial2Load5
			// 
			this->textBoxTrial2Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load5->Location = System::Drawing::Point(601, 544);
			this->textBoxTrial2Load5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load5->Name = L"textBoxTrial2Load5";
			this->textBoxTrial2Load5->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load5->TabIndex = 299;
			// 
			// textBoxTrial2Load4
			// 
			this->textBoxTrial2Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load4->Location = System::Drawing::Point(502, 544);
			this->textBoxTrial2Load4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load4->Name = L"textBoxTrial2Load4";
			this->textBoxTrial2Load4->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load4->TabIndex = 298;
			// 
			// textBoxTrial2Load3
			// 
			this->textBoxTrial2Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load3->Location = System::Drawing::Point(404, 544);
			this->textBoxTrial2Load3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load3->Name = L"textBoxTrial2Load3";
			this->textBoxTrial2Load3->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load3->TabIndex = 297;
			// 
			// textBoxTrial2Load2
			// 
			this->textBoxTrial2Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load2->Location = System::Drawing::Point(305, 544);
			this->textBoxTrial2Load2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load2->Name = L"textBoxTrial2Load2";
			this->textBoxTrial2Load2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load2->TabIndex = 296;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(37, 548);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 32);
			this->label31->TabIndex = 295;
			this->label31->Text = L"负载";
			// 
			// textBoxTrial2Load1
			// 
			this->textBoxTrial2Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load1->Location = System::Drawing::Point(202, 544);
			this->textBoxTrial2Load1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial2Load1->Name = L"textBoxTrial2Load1";
			this->textBoxTrial2Load1->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load1->TabIndex = 294;
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(37, 605);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 42);
			this->label32->TabIndex = 293;
			this->label32->Text = L"I(mA)";
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(1110, 640);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 42);
			this->button41->TabIndex = 292;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button41_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(1008, 640);
			this->button42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 42);
			this->button42->TabIndex = 291;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(904, 640);
			this->button43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(93, 42);
			this->button43->TabIndex = 290;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(802, 640);
			this->button44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(93, 42);
			this->button44->TabIndex = 289;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button44_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(700, 640);
			this->button45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(93, 42);
			this->button45->TabIndex = 288;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button45_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(601, 640);
			this->button46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(93, 42);
			this->button46->TabIndex = 287;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button46_Click);
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(506, 640);
			this->button47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(93, 42);
			this->button47->TabIndex = 286;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button47_Click);
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(404, 640);
			this->button48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(93, 42);
			this->button48->TabIndex = 285;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button48_Click);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(305, 640);
			this->button49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(93, 42);
			this->button49->TabIndex = 284;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button49_Click);
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(201, 640);
			this->button50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(93, 42);
			this->button50->TabIndex = 283;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button50_Click);
			// 
			// labelTrial2I8
			// 
			this->labelTrial2I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I8->Location = System::Drawing::Point(904, 594);
			this->labelTrial2I8->Name = L"labelTrial2I8";
			this->labelTrial2I8->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I8->TabIndex = 282;
			this->labelTrial2I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I7
			// 
			this->labelTrial2I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I7->Location = System::Drawing::Point(802, 594);
			this->labelTrial2I7->Name = L"labelTrial2I7";
			this->labelTrial2I7->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I7->TabIndex = 281;
			this->labelTrial2I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I6
			// 
			this->labelTrial2I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I6->Location = System::Drawing::Point(700, 594);
			this->labelTrial2I6->Name = L"labelTrial2I6";
			this->labelTrial2I6->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I6->TabIndex = 280;
			this->labelTrial2I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I5
			// 
			this->labelTrial2I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I5->Location = System::Drawing::Point(601, 594);
			this->labelTrial2I5->Name = L"labelTrial2I5";
			this->labelTrial2I5->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I5->TabIndex = 279;
			this->labelTrial2I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I4
			// 
			this->labelTrial2I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I4->Location = System::Drawing::Point(506, 594);
			this->labelTrial2I4->Name = L"labelTrial2I4";
			this->labelTrial2I4->Size = System::Drawing::Size(89, 42);
			this->labelTrial2I4->TabIndex = 278;
			this->labelTrial2I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I3
			// 
			this->labelTrial2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I3->Location = System::Drawing::Point(404, 594);
			this->labelTrial2I3->Name = L"labelTrial2I3";
			this->labelTrial2I3->Size = System::Drawing::Size(92, 42);
			this->labelTrial2I3->TabIndex = 277;
			this->labelTrial2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I2
			// 
			this->labelTrial2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I2->Location = System::Drawing::Point(305, 594);
			this->labelTrial2I2->Name = L"labelTrial2I2";
			this->labelTrial2I2->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I2->TabIndex = 276;
			this->labelTrial2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I1
			// 
			this->labelTrial2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I1->Location = System::Drawing::Point(202, 594);
			this->labelTrial2I1->Name = L"labelTrial2I1";
			this->labelTrial2I1->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I1->TabIndex = 275;
			this->labelTrial2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I10
			// 
			this->labelTrial2I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I10->Location = System::Drawing::Point(1110, 594);
			this->labelTrial2I10->Name = L"labelTrial2I10";
			this->labelTrial2I10->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I10->TabIndex = 274;
			this->labelTrial2I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I9
			// 
			this->labelTrial2I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I9->Location = System::Drawing::Point(1008, 594);
			this->labelTrial2I9->Name = L"labelTrial2I9";
			this->labelTrial2I9->Size = System::Drawing::Size(93, 42);
			this->labelTrial2I9->TabIndex = 273;
			this->labelTrial2I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label104
			// 
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(31, 42);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(845, 48);
			this->label104->TabIndex = 174;
			this->label104->Text = L"按图5-4接线，IS为直流恒流源，令R0=120，测出这两种情况下的电压表和电流表的读数，记录实验数据。";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(189, 1905);
			this->textBox结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1112, 28);
			this->textBox结论->TabIndex = 179;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(11, 1908);
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
			this->label106->Location = System::Drawing::Point(5, 1992);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1315, 52);
			this->label106->TabIndex = 181;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(560, 1950);
			this->button81->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 180;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button81_Click);
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(48, 160);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 22);
			this->label16->TabIndex = 313;
			this->label16->Text = L"US=";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(1023, 232);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 22);
			this->label17->TabIndex = 314;
			this->label17->Text = L"US=";
			// 
			// 电压源与电流源的等效变换实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1324, 1100);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"电压源与电流源的等效变换实验内容";
			this->Text = L"电压源与电流源的等效变换实验内容";
			this->Load += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::电压源与电流源的等效变换实验内容_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void 电压源与电流源的等效变换实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	lcc.SendComputerInfo(Grades[5] + "正在实验中");
	NowTrial::NowTrailCode = 5;
	NowTrial::NowTrailForm = this;
}
		public:void SendData();
		public: ST_电压源与电流源的等效变换 Load_Grade_data();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {

	SendData();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U1->Text = global::GetU30_U400VData();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U2->Text = global::GetU30_U400VData();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U3->Text = global::GetU30_U400VData();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U4->Text = global::GetU30_U400VData();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U5->Text = global::GetU30_U400VData();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U6->Text = global::GetU30_U400VData();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U7->Text = global::GetU30_U400VData();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U8->Text = global::GetU30_U400VData();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U9->Text = global::GetU30_U400VData();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11U10->Text = global::GetU30_U400VData();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I1->Text = global::GetI500Data();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I2->Text = global::GetI500Data();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I3->Text = global::GetI500Data();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I4->Text = global::GetI500Data();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I5->Text = global::GetI500Data();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I6->Text = global::GetI500Data();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I7->Text = global::GetI500Data();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I8->Text = global::GetI500Data();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I9->Text = global::GetI500Data();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial11I10->Text = global::GetI500Data();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U1->Text = global::GetU30_U400VData();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U2->Text = global::GetU30_U400VData();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U4->Text = global::GetU30_U400VData();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U5->Text = global::GetU30_U400VData();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U6->Text = global::GetU30_U400VData();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U3->Text = global::GetU30_U400VData();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U7->Text = global::GetU30_U400VData();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U8->Text = global::GetU30_U400VData();
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U9->Text = global::GetU30_U400VData();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12U10->Text = global::GetU30_U400VData();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I1->Text = global::GetI500Data();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I2->Text = global::GetI500Data();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I3->Text = global::GetI500Data();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I4->Text = global::GetI500Data();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I5->Text = global::GetI500Data();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I6->Text = global::GetI500Data();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I7->Text = global::GetI500Data();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I8->Text = global::GetI500Data();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I9->Text = global::GetI500Data();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial12I10->Text = global::GetI500Data();
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I1->Text = global::GetI500Data();
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I2->Text = global::GetI500Data();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I3->Text = global::GetI500Data();
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I4->Text = global::GetI500Data();
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I5->Text = global::GetI500Data();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I6->Text = global::GetI500Data();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I7->Text = global::GetI500Data();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I8->Text = global::GetI500Data();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I9->Text = global::GetI500Data();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2I10->Text = global::GetI500Data();
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxTrial11UP1->Text,0,30);
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxTrial11UP2->Text, 0, 30);
}
};
}
