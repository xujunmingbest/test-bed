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

	private: System::Windows::Forms::Label^  label7;
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
			this->textBoxTrial12Load10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial12Load2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial12Load10);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load9);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load8);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load7);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load6);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load5);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load4);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load3);
			this->groupBox2->Controls->Add(this->textBoxTrial12Load2);
			this->groupBox2->Controls->Add(this->label7);
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
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1289, 1162);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"1．测定直流稳压电源与电压源的外特性";
			// 
			// textBoxTrial12Load10
			// 
			this->textBoxTrial12Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load10->Location = System::Drawing::Point(1021, 878);
			this->textBoxTrial12Load10->Name = L"textBoxTrial12Load10";
			this->textBoxTrial12Load10->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load10->TabIndex = 272;
			// 
			// textBoxTrial12Load9
			// 
			this->textBoxTrial12Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load9->Location = System::Drawing::Point(919, 878);
			this->textBoxTrial12Load9->Name = L"textBoxTrial12Load9";
			this->textBoxTrial12Load9->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load9->TabIndex = 271;
			// 
			// textBoxTrial12Load8
			// 
			this->textBoxTrial12Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load8->Location = System::Drawing::Point(812, 878);
			this->textBoxTrial12Load8->Name = L"textBoxTrial12Load8";
			this->textBoxTrial12Load8->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load8->TabIndex = 270;
			// 
			// textBoxTrial12Load7
			// 
			this->textBoxTrial12Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load7->Location = System::Drawing::Point(713, 878);
			this->textBoxTrial12Load7->Name = L"textBoxTrial12Load7";
			this->textBoxTrial12Load7->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load7->TabIndex = 269;
			// 
			// textBoxTrial12Load6
			// 
			this->textBoxTrial12Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load6->Location = System::Drawing::Point(611, 878);
			this->textBoxTrial12Load6->Name = L"textBoxTrial12Load6";
			this->textBoxTrial12Load6->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load6->TabIndex = 268;
			// 
			// textBoxTrial12Load5
			// 
			this->textBoxTrial12Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load5->Location = System::Drawing::Point(512, 878);
			this->textBoxTrial12Load5->Name = L"textBoxTrial12Load5";
			this->textBoxTrial12Load5->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load5->TabIndex = 267;
			// 
			// textBoxTrial12Load4
			// 
			this->textBoxTrial12Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load4->Location = System::Drawing::Point(413, 878);
			this->textBoxTrial12Load4->Name = L"textBoxTrial12Load4";
			this->textBoxTrial12Load4->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load4->TabIndex = 266;
			// 
			// textBoxTrial12Load3
			// 
			this->textBoxTrial12Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load3->Location = System::Drawing::Point(315, 878);
			this->textBoxTrial12Load3->Name = L"textBoxTrial12Load3";
			this->textBoxTrial12Load3->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load3->TabIndex = 265;
			// 
			// textBoxTrial12Load2
			// 
			this->textBoxTrial12Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load2->Location = System::Drawing::Point(216, 878);
			this->textBoxTrial12Load2->Name = L"textBoxTrial12Load2";
			this->textBoxTrial12Load2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial12Load2->TabIndex = 264;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(33, 881);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 32);
			this->label7->TabIndex = 263;
			this->label7->Text = L"负载";
			// 
			// textBoxTrial12Load1
			// 
			this->textBoxTrial12Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial12Load1->Location = System::Drawing::Point(114, 878);
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
			this->label8->Size = System::Drawing::Size(60, 43);
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
			this->button1->Location = System::Drawing::Point(1021, 1092);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 43);
			this->button1->TabIndex = 259;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(919, 1092);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 43);
			this->button2->TabIndex = 258;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(815, 1092);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 43);
			this->button3->TabIndex = 257;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(713, 1092);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 43);
			this->button4->TabIndex = 256;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(611, 1092);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 43);
			this->button5->TabIndex = 255;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(512, 1092);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 43);
			this->button6->TabIndex = 254;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(417, 1092);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 43);
			this->button7->TabIndex = 253;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(315, 1092);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 43);
			this->button8->TabIndex = 252;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(216, 1092);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 43);
			this->button9->TabIndex = 251;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(112, 1092);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 43);
			this->button10->TabIndex = 250;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(1021, 974);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 43);
			this->button31->TabIndex = 249;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(919, 974);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 43);
			this->button32->TabIndex = 248;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(815, 974);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 43);
			this->button33->TabIndex = 247;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(713, 974);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 43);
			this->button34->TabIndex = 246;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(611, 974);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(93, 43);
			this->button35->TabIndex = 245;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(512, 974);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(93, 43);
			this->button36->TabIndex = 244;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(417, 974);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 43);
			this->button37->TabIndex = 243;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(315, 974);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 43);
			this->button38->TabIndex = 242;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(216, 974);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 43);
			this->button39->TabIndex = 241;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(112, 974);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 43);
			this->button40->TabIndex = 240;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// labelTrial12I8
			// 
			this->labelTrial12I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I8->Location = System::Drawing::Point(815, 1037);
			this->labelTrial12I8->Name = L"labelTrial12I8";
			this->labelTrial12I8->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I8->TabIndex = 239;
			this->labelTrial12I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I7
			// 
			this->labelTrial12I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I7->Location = System::Drawing::Point(713, 1037);
			this->labelTrial12I7->Name = L"labelTrial12I7";
			this->labelTrial12I7->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I7->TabIndex = 238;
			this->labelTrial12I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I6
			// 
			this->labelTrial12I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I6->Location = System::Drawing::Point(611, 1037);
			this->labelTrial12I6->Name = L"labelTrial12I6";
			this->labelTrial12I6->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I6->TabIndex = 237;
			this->labelTrial12I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I5
			// 
			this->labelTrial12I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I5->Location = System::Drawing::Point(512, 1037);
			this->labelTrial12I5->Name = L"labelTrial12I5";
			this->labelTrial12I5->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I5->TabIndex = 236;
			this->labelTrial12I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I4
			// 
			this->labelTrial12I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I4->Location = System::Drawing::Point(417, 1037);
			this->labelTrial12I4->Name = L"labelTrial12I4";
			this->labelTrial12I4->Size = System::Drawing::Size(89, 43);
			this->labelTrial12I4->TabIndex = 235;
			this->labelTrial12I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I3
			// 
			this->labelTrial12I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I3->Location = System::Drawing::Point(315, 1037);
			this->labelTrial12I3->Name = L"labelTrial12I3";
			this->labelTrial12I3->Size = System::Drawing::Size(92, 43);
			this->labelTrial12I3->TabIndex = 234;
			this->labelTrial12I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I2
			// 
			this->labelTrial12I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I2->Location = System::Drawing::Point(216, 1037);
			this->labelTrial12I2->Name = L"labelTrial12I2";
			this->labelTrial12I2->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I2->TabIndex = 233;
			this->labelTrial12I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I1
			// 
			this->labelTrial12I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I1->Location = System::Drawing::Point(114, 1037);
			this->labelTrial12I1->Name = L"labelTrial12I1";
			this->labelTrial12I1->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I1->TabIndex = 232;
			this->labelTrial12I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I10
			// 
			this->labelTrial12I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I10->Location = System::Drawing::Point(1021, 1037);
			this->labelTrial12I10->Name = L"labelTrial12I10";
			this->labelTrial12I10->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I10->TabIndex = 231;
			this->labelTrial12I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I9
			// 
			this->labelTrial12I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I9->Location = System::Drawing::Point(919, 1037);
			this->labelTrial12I9->Name = L"labelTrial12I9";
			this->labelTrial12I9->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I9->TabIndex = 230;
			this->labelTrial12I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U8
			// 
			this->labelTrial12U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U8->Location = System::Drawing::Point(815, 928);
			this->labelTrial12U8->Name = L"labelTrial12U8";
			this->labelTrial12U8->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U8->TabIndex = 229;
			this->labelTrial12U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U7
			// 
			this->labelTrial12U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U7->Location = System::Drawing::Point(713, 928);
			this->labelTrial12U7->Name = L"labelTrial12U7";
			this->labelTrial12U7->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U7->TabIndex = 228;
			this->labelTrial12U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U6
			// 
			this->labelTrial12U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U6->Location = System::Drawing::Point(611, 928);
			this->labelTrial12U6->Name = L"labelTrial12U6";
			this->labelTrial12U6->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U6->TabIndex = 227;
			this->labelTrial12U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U5
			// 
			this->labelTrial12U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U5->Location = System::Drawing::Point(512, 928);
			this->labelTrial12U5->Name = L"labelTrial12U5";
			this->labelTrial12U5->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U5->TabIndex = 226;
			this->labelTrial12U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U4
			// 
			this->labelTrial12U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U4->Location = System::Drawing::Point(417, 928);
			this->labelTrial12U4->Name = L"labelTrial12U4";
			this->labelTrial12U4->Size = System::Drawing::Size(89, 43);
			this->labelTrial12U4->TabIndex = 225;
			this->labelTrial12U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U3
			// 
			this->labelTrial12U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U3->Location = System::Drawing::Point(315, 928);
			this->labelTrial12U3->Name = L"labelTrial12U3";
			this->labelTrial12U3->Size = System::Drawing::Size(92, 43);
			this->labelTrial12U3->TabIndex = 224;
			this->labelTrial12U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U2
			// 
			this->labelTrial12U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U2->Location = System::Drawing::Point(216, 928);
			this->labelTrial12U2->Name = L"labelTrial12U2";
			this->labelTrial12U2->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U2->TabIndex = 223;
			this->labelTrial12U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U1
			// 
			this->labelTrial12U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U1->Location = System::Drawing::Point(114, 928);
			this->labelTrial12U1->Name = L"labelTrial12U1";
			this->labelTrial12U1->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U1->TabIndex = 222;
			this->labelTrial12U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U10
			// 
			this->labelTrial12U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U10->Location = System::Drawing::Point(1021, 928);
			this->labelTrial12U10->Name = L"labelTrial12U10";
			this->labelTrial12U10->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U10->TabIndex = 221;
			this->labelTrial12U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U9
			// 
			this->labelTrial12U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U9->Location = System::Drawing::Point(919, 928);
			this->labelTrial12U9->Name = L"labelTrial12U9";
			this->labelTrial12U9->Size = System::Drawing::Size(93, 43);
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
			this->label6->Size = System::Drawing::Size(1075, 23);
			this->label6->TabIndex = 219;
			this->label6->Text = L"（2）按图5-3接线，虚线框可模拟为一个实际的电压源，调节电位R2，令其阻值由大至小变化，读取两表的数据。";
			// 
			// textBoxTrial11Load10
			// 
			this->textBoxTrial11Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load10->Location = System::Drawing::Point(1021, 552);
			this->textBoxTrial11Load10->Name = L"textBoxTrial11Load10";
			this->textBoxTrial11Load10->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load10->TabIndex = 218;
			// 
			// textBoxTrial11Load9
			// 
			this->textBoxTrial11Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load9->Location = System::Drawing::Point(919, 552);
			this->textBoxTrial11Load9->Name = L"textBoxTrial11Load9";
			this->textBoxTrial11Load9->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load9->TabIndex = 217;
			// 
			// textBoxTrial11Load8
			// 
			this->textBoxTrial11Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load8->Location = System::Drawing::Point(812, 552);
			this->textBoxTrial11Load8->Name = L"textBoxTrial11Load8";
			this->textBoxTrial11Load8->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load8->TabIndex = 216;
			// 
			// textBoxTrial11Load7
			// 
			this->textBoxTrial11Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load7->Location = System::Drawing::Point(713, 552);
			this->textBoxTrial11Load7->Name = L"textBoxTrial11Load7";
			this->textBoxTrial11Load7->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load7->TabIndex = 215;
			// 
			// textBoxTrial11Load6
			// 
			this->textBoxTrial11Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load6->Location = System::Drawing::Point(611, 552);
			this->textBoxTrial11Load6->Name = L"textBoxTrial11Load6";
			this->textBoxTrial11Load6->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load6->TabIndex = 214;
			// 
			// textBoxTrial11Load5
			// 
			this->textBoxTrial11Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load5->Location = System::Drawing::Point(512, 552);
			this->textBoxTrial11Load5->Name = L"textBoxTrial11Load5";
			this->textBoxTrial11Load5->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load5->TabIndex = 213;
			// 
			// textBoxTrial11Load4
			// 
			this->textBoxTrial11Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load4->Location = System::Drawing::Point(413, 552);
			this->textBoxTrial11Load4->Name = L"textBoxTrial11Load4";
			this->textBoxTrial11Load4->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load4->TabIndex = 212;
			// 
			// textBoxTrial11Load3
			// 
			this->textBoxTrial11Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load3->Location = System::Drawing::Point(315, 552);
			this->textBoxTrial11Load3->Name = L"textBoxTrial11Load3";
			this->textBoxTrial11Load3->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load3->TabIndex = 211;
			// 
			// textBoxTrial11Load2
			// 
			this->textBoxTrial11Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load2->Location = System::Drawing::Point(216, 552);
			this->textBoxTrial11Load2->Name = L"textBoxTrial11Load2";
			this->textBoxTrial11Load2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial11Load2->TabIndex = 210;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(33, 555);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 32);
			this->label5->TabIndex = 209;
			this->label5->Text = L"负载";
			// 
			// textBoxTrial11Load1
			// 
			this->textBoxTrial11Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial11Load1->Location = System::Drawing::Point(114, 552);
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
			this->label4->Size = System::Drawing::Size(60, 43);
			this->label4->TabIndex = 207;
			this->label4->Text = L"I(mA)";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(33, 613);
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
			this->label2->Location = System::Drawing::Point(734, 490);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 23);
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
			this->label1->Size = System::Drawing::Size(65, 23);
			this->label1->TabIndex = 204;
			this->label1->Text = L"图5-2";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(135, 65);
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
			this->button21->Location = System::Drawing::Point(1021, 766);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 43);
			this->button21->TabIndex = 202;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(919, 766);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 43);
			this->button22->TabIndex = 201;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(815, 766);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 43);
			this->button23->TabIndex = 200;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(713, 766);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 43);
			this->button24->TabIndex = 199;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(611, 766);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 43);
			this->button25->TabIndex = 198;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(512, 766);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 43);
			this->button26->TabIndex = 197;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(417, 766);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 43);
			this->button27->TabIndex = 196;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(315, 766);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 43);
			this->button28->TabIndex = 195;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(216, 766);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 43);
			this->button29->TabIndex = 194;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(112, 766);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(93, 43);
			this->button30->TabIndex = 193;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(1021, 648);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 43);
			this->button11->TabIndex = 192;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(919, 648);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 43);
			this->button12->TabIndex = 191;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(815, 648);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 43);
			this->button13->TabIndex = 190;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(713, 648);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 43);
			this->button14->TabIndex = 189;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(611, 648);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 43);
			this->button15->TabIndex = 188;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(512, 648);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 43);
			this->button16->TabIndex = 187;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(417, 648);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 43);
			this->button17->TabIndex = 186;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(315, 648);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 43);
			this->button18->TabIndex = 185;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(216, 648);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 43);
			this->button19->TabIndex = 184;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(112, 648);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 43);
			this->button20->TabIndex = 183;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// labelTrial11I8
			// 
			this->labelTrial11I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I8->Location = System::Drawing::Point(815, 711);
			this->labelTrial11I8->Name = L"labelTrial11I8";
			this->labelTrial11I8->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I8->TabIndex = 172;
			this->labelTrial11I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I7
			// 
			this->labelTrial11I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I7->Location = System::Drawing::Point(713, 711);
			this->labelTrial11I7->Name = L"labelTrial11I7";
			this->labelTrial11I7->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I7->TabIndex = 171;
			this->labelTrial11I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I6
			// 
			this->labelTrial11I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I6->Location = System::Drawing::Point(611, 711);
			this->labelTrial11I6->Name = L"labelTrial11I6";
			this->labelTrial11I6->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I6->TabIndex = 170;
			this->labelTrial11I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I5
			// 
			this->labelTrial11I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I5->Location = System::Drawing::Point(512, 711);
			this->labelTrial11I5->Name = L"labelTrial11I5";
			this->labelTrial11I5->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I5->TabIndex = 169;
			this->labelTrial11I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I4
			// 
			this->labelTrial11I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I4->Location = System::Drawing::Point(417, 711);
			this->labelTrial11I4->Name = L"labelTrial11I4";
			this->labelTrial11I4->Size = System::Drawing::Size(89, 43);
			this->labelTrial11I4->TabIndex = 168;
			this->labelTrial11I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I3
			// 
			this->labelTrial11I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I3->Location = System::Drawing::Point(315, 711);
			this->labelTrial11I3->Name = L"labelTrial11I3";
			this->labelTrial11I3->Size = System::Drawing::Size(92, 43);
			this->labelTrial11I3->TabIndex = 167;
			this->labelTrial11I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I2
			// 
			this->labelTrial11I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I2->Location = System::Drawing::Point(216, 711);
			this->labelTrial11I2->Name = L"labelTrial11I2";
			this->labelTrial11I2->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I2->TabIndex = 166;
			this->labelTrial11I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I1
			// 
			this->labelTrial11I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I1->Location = System::Drawing::Point(114, 711);
			this->labelTrial11I1->Name = L"labelTrial11I1";
			this->labelTrial11I1->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I1->TabIndex = 165;
			this->labelTrial11I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I10
			// 
			this->labelTrial11I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I10->Location = System::Drawing::Point(1021, 711);
			this->labelTrial11I10->Name = L"labelTrial11I10";
			this->labelTrial11I10->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I10->TabIndex = 154;
			this->labelTrial11I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I9
			// 
			this->labelTrial11I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I9->Location = System::Drawing::Point(919, 711);
			this->labelTrial11I9->Name = L"labelTrial11I9";
			this->labelTrial11I9->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I9->TabIndex = 153;
			this->labelTrial11I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U8
			// 
			this->labelTrial11U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U8->Location = System::Drawing::Point(815, 602);
			this->labelTrial11U8->Name = L"labelTrial11U8";
			this->labelTrial11U8->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U8->TabIndex = 151;
			this->labelTrial11U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U7
			// 
			this->labelTrial11U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U7->Location = System::Drawing::Point(713, 602);
			this->labelTrial11U7->Name = L"labelTrial11U7";
			this->labelTrial11U7->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U7->TabIndex = 150;
			this->labelTrial11U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U6
			// 
			this->labelTrial11U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U6->Location = System::Drawing::Point(611, 602);
			this->labelTrial11U6->Name = L"labelTrial11U6";
			this->labelTrial11U6->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U6->TabIndex = 149;
			this->labelTrial11U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U5
			// 
			this->labelTrial11U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U5->Location = System::Drawing::Point(512, 602);
			this->labelTrial11U5->Name = L"labelTrial11U5";
			this->labelTrial11U5->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U5->TabIndex = 148;
			this->labelTrial11U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U4
			// 
			this->labelTrial11U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U4->Location = System::Drawing::Point(417, 602);
			this->labelTrial11U4->Name = L"labelTrial11U4";
			this->labelTrial11U4->Size = System::Drawing::Size(89, 43);
			this->labelTrial11U4->TabIndex = 147;
			this->labelTrial11U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U3
			// 
			this->labelTrial11U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U3->Location = System::Drawing::Point(315, 602);
			this->labelTrial11U3->Name = L"labelTrial11U3";
			this->labelTrial11U3->Size = System::Drawing::Size(92, 43);
			this->labelTrial11U3->TabIndex = 146;
			this->labelTrial11U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U2
			// 
			this->labelTrial11U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U2->Location = System::Drawing::Point(216, 602);
			this->labelTrial11U2->Name = L"labelTrial11U2";
			this->labelTrial11U2->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U2->TabIndex = 145;
			this->labelTrial11U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U1
			// 
			this->labelTrial11U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U1->Location = System::Drawing::Point(114, 602);
			this->labelTrial11U1->Name = L"labelTrial11U1";
			this->labelTrial11U1->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U1->TabIndex = 144;
			this->labelTrial11U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U10
			// 
			this->labelTrial11U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U10->Location = System::Drawing::Point(1021, 602);
			this->labelTrial11U10->Name = L"labelTrial11U10";
			this->labelTrial11U10->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U10->TabIndex = 133;
			this->labelTrial11U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U9
			// 
			this->labelTrial11U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U9->Location = System::Drawing::Point(919, 602);
			this->labelTrial11U9->Name = L"labelTrial11U9";
			this->labelTrial11U9->Size = System::Drawing::Size(93, 43);
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
			this->label19->Size = System::Drawing::Size(1075, 23);
			this->label19->TabIndex = 87;
			this->label19->Text = L"（1）按图5－2接线，US为+6V直流稳压电源，调节R2，令其阻值由大至小变化，记录两表的读数。";
			// 
			// groupBox3
			// 
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
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1286, 698);
			this->groupBox3->TabIndex = 176;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"2．测定电流源的外特性";
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(669, 504);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(65, 23);
			this->label43->TabIndex = 306;
			this->label43->Text = L"图5-4";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(297, 94);
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
			this->textBoxTrial2Load10->Location = System::Drawing::Point(1025, 544);
			this->textBoxTrial2Load10->Name = L"textBoxTrial2Load10";
			this->textBoxTrial2Load10->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load10->TabIndex = 304;
			// 
			// textBoxTrial2Load9
			// 
			this->textBoxTrial2Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load9->Location = System::Drawing::Point(923, 544);
			this->textBoxTrial2Load9->Name = L"textBoxTrial2Load9";
			this->textBoxTrial2Load9->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load9->TabIndex = 303;
			// 
			// textBoxTrial2Load8
			// 
			this->textBoxTrial2Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load8->Location = System::Drawing::Point(816, 544);
			this->textBoxTrial2Load8->Name = L"textBoxTrial2Load8";
			this->textBoxTrial2Load8->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load8->TabIndex = 302;
			// 
			// textBoxTrial2Load7
			// 
			this->textBoxTrial2Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load7->Location = System::Drawing::Point(717, 544);
			this->textBoxTrial2Load7->Name = L"textBoxTrial2Load7";
			this->textBoxTrial2Load7->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load7->TabIndex = 301;
			// 
			// textBoxTrial2Load6
			// 
			this->textBoxTrial2Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load6->Location = System::Drawing::Point(615, 544);
			this->textBoxTrial2Load6->Name = L"textBoxTrial2Load6";
			this->textBoxTrial2Load6->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load6->TabIndex = 300;
			// 
			// textBoxTrial2Load5
			// 
			this->textBoxTrial2Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load5->Location = System::Drawing::Point(516, 544);
			this->textBoxTrial2Load5->Name = L"textBoxTrial2Load5";
			this->textBoxTrial2Load5->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load5->TabIndex = 299;
			// 
			// textBoxTrial2Load4
			// 
			this->textBoxTrial2Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load4->Location = System::Drawing::Point(417, 544);
			this->textBoxTrial2Load4->Name = L"textBoxTrial2Load4";
			this->textBoxTrial2Load4->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load4->TabIndex = 298;
			// 
			// textBoxTrial2Load3
			// 
			this->textBoxTrial2Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load3->Location = System::Drawing::Point(319, 544);
			this->textBoxTrial2Load3->Name = L"textBoxTrial2Load3";
			this->textBoxTrial2Load3->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load3->TabIndex = 297;
			// 
			// textBoxTrial2Load2
			// 
			this->textBoxTrial2Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load2->Location = System::Drawing::Point(220, 544);
			this->textBoxTrial2Load2->Name = L"textBoxTrial2Load2";
			this->textBoxTrial2Load2->Size = System::Drawing::Size(93, 30);
			this->textBoxTrial2Load2->TabIndex = 296;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(37, 547);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 32);
			this->label31->TabIndex = 295;
			this->label31->Text = L"负载";
			// 
			// textBoxTrial2Load1
			// 
			this->textBoxTrial2Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2Load1->Location = System::Drawing::Point(118, 544);
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
			this->label32->Size = System::Drawing::Size(60, 43);
			this->label32->TabIndex = 293;
			this->label32->Text = L"I(mA)";
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(1025, 640);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 43);
			this->button41->TabIndex = 292;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(923, 640);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 43);
			this->button42->TabIndex = 291;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(819, 640);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(93, 43);
			this->button43->TabIndex = 290;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(717, 640);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(93, 43);
			this->button44->TabIndex = 289;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(615, 640);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(93, 43);
			this->button45->TabIndex = 288;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(516, 640);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(93, 43);
			this->button46->TabIndex = 287;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(421, 640);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(93, 43);
			this->button47->TabIndex = 286;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(319, 640);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(93, 43);
			this->button48->TabIndex = 285;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(220, 640);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(93, 43);
			this->button49->TabIndex = 284;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(116, 640);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(93, 43);
			this->button50->TabIndex = 283;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// labelTrial2I8
			// 
			this->labelTrial2I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I8->Location = System::Drawing::Point(819, 594);
			this->labelTrial2I8->Name = L"labelTrial2I8";
			this->labelTrial2I8->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I8->TabIndex = 282;
			this->labelTrial2I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I7
			// 
			this->labelTrial2I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I7->Location = System::Drawing::Point(717, 594);
			this->labelTrial2I7->Name = L"labelTrial2I7";
			this->labelTrial2I7->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I7->TabIndex = 281;
			this->labelTrial2I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I6
			// 
			this->labelTrial2I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I6->Location = System::Drawing::Point(615, 594);
			this->labelTrial2I6->Name = L"labelTrial2I6";
			this->labelTrial2I6->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I6->TabIndex = 280;
			this->labelTrial2I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I5
			// 
			this->labelTrial2I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I5->Location = System::Drawing::Point(516, 594);
			this->labelTrial2I5->Name = L"labelTrial2I5";
			this->labelTrial2I5->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I5->TabIndex = 279;
			this->labelTrial2I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I4
			// 
			this->labelTrial2I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I4->Location = System::Drawing::Point(421, 594);
			this->labelTrial2I4->Name = L"labelTrial2I4";
			this->labelTrial2I4->Size = System::Drawing::Size(89, 43);
			this->labelTrial2I4->TabIndex = 278;
			this->labelTrial2I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I3
			// 
			this->labelTrial2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I3->Location = System::Drawing::Point(319, 594);
			this->labelTrial2I3->Name = L"labelTrial2I3";
			this->labelTrial2I3->Size = System::Drawing::Size(92, 43);
			this->labelTrial2I3->TabIndex = 277;
			this->labelTrial2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I2
			// 
			this->labelTrial2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I2->Location = System::Drawing::Point(220, 594);
			this->labelTrial2I2->Name = L"labelTrial2I2";
			this->labelTrial2I2->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I2->TabIndex = 276;
			this->labelTrial2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I1
			// 
			this->labelTrial2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I1->Location = System::Drawing::Point(118, 594);
			this->labelTrial2I1->Name = L"labelTrial2I1";
			this->labelTrial2I1->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I1->TabIndex = 275;
			this->labelTrial2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I10
			// 
			this->labelTrial2I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I10->Location = System::Drawing::Point(1025, 594);
			this->labelTrial2I10->Name = L"labelTrial2I10";
			this->labelTrial2I10->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I10->TabIndex = 274;
			this->labelTrial2I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I9
			// 
			this->labelTrial2I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I9->Location = System::Drawing::Point(923, 594);
			this->labelTrial2I9->Name = L"labelTrial2I9";
			this->labelTrial2I9->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I9->TabIndex = 273;
			this->labelTrial2I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label104
			// 
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(31, 43);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(846, 48);
			this->label104->TabIndex = 174;
			this->label104->Text = L"按图5-4接线，IS为直流恒流源，调节其输出为50mA，令R0=120，测出这两种情况下的电压表和电流表的读数，记录实验数据。";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(189, 1905);
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
			this->label106->Location = System::Drawing::Point(6, 1992);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 181;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(560, 1950);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 180;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换实验内容::button81_Click);
			// 
			// 电压源与电流源的等效变换实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1595, 1102);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
}
		 void SendData();
		public: ST_电压源与电流源的等效变换 Load_Grade_data();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {

	SendData();
}
};
}
