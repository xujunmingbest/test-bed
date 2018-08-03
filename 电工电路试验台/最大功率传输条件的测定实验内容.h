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
	/// 最大功率传输条件的测定实验内容 摘要
	/// </summary>
	public ref class 最大功率传输条件的测定实验内容 : public System::Windows::Forms::Form
	{
	public:
		最大功率传输条件的测定实验内容(void)
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
		~最大功率传输条件的测定实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po9;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po8;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po7;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po6;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po5;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po4;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po3;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po2;

	private: System::Windows::Forms::TextBox^  textBoxtrial1_Po1;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL9;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL8;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL7;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL6;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL5;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL4;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL3;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL2;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_PL1;


	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL8;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL7;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL6;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL5;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL4;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL3;

	private: System::Windows::Forms::TextBox^  textBoxTrial1_RL2;


	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  labelTrial1_Uo9;

	private: System::Windows::Forms::Label^  labelTrial1_Uo8;

	private: System::Windows::Forms::Label^  labelTrial1_Uo7;

	private: System::Windows::Forms::Label^  labelTrial1_Uo6;


	private: System::Windows::Forms::Label^  labelTrial1_Uo4;

	private: System::Windows::Forms::Label^  labelTrial1_Uo3;

	private: System::Windows::Forms::Label^  labelTrial1_Uo2;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1;




	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  labelTrial1_IUL9;


	private: System::Windows::Forms::Label^  labelTrial1_IUL8;

	private: System::Windows::Forms::Label^  labelTrial1_IUL7;

	private: System::Windows::Forms::Label^  labelTrial1_IUL6;



	private: System::Windows::Forms::Label^  labelTrial1_IUL4;

	private: System::Windows::Forms::Label^  labelTrial1_IUL3;

	private: System::Windows::Forms::Label^  labelTrial1_IUL2;

	private: System::Windows::Forms::Label^  labelTrial1_IUL1;

	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  labelTrial1_I9;

	private: System::Windows::Forms::Label^  labelTrial1_I8;

	private: System::Windows::Forms::Label^  labelTrial1_I7;

private: System::Windows::Forms::Label^  labelTrial1_I6;

private: System::Windows::Forms::Label^  labelTrial1_I5;

private: System::Windows::Forms::Label^  labelTrial1_I4;

private: System::Windows::Forms::Label^  labelTrial1_I3;

private: System::Windows::Forms::Label^  labelTrial1_I2;

private: System::Windows::Forms::Label^  labelTrial1_I1;


	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  labelMethod2URL2;
	private: System::Windows::Forms::Label^  labelMethod2URL1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Po9;

private: System::Windows::Forms::TextBox^  textBoxTrial2_Po8;

private: System::Windows::Forms::TextBox^  textBoxTrial2_Po7;


private: System::Windows::Forms::TextBox^  textBoxTrial2_Po6;



private: System::Windows::Forms::TextBox^  textBoxTrial2_Po5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_Po4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_Po2;

private: System::Windows::Forms::TextBox^  textBoxTrial2_Po1;
private: System::Windows::Forms::TextBox^  textBoxTrial2_PL9;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL8;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL7;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL6;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL5;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL3;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL2;


private: System::Windows::Forms::TextBox^  textBoxTrial2_PL1;



	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
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
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::TextBox^  textBoxtrial2_RL8;

private: System::Windows::Forms::TextBox^  textBoxtrial2_RL7;

private: System::Windows::Forms::TextBox^  textBoxtrial2_RL6;

private: System::Windows::Forms::TextBox^  textBoxtrial2_RL5;

private: System::Windows::Forms::TextBox^  textBoxtrial2_RL4;

private: System::Windows::Forms::TextBox^  textBoxtrial2_RL2;



	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  labelTrial2_Uo9;

private: System::Windows::Forms::Label^  labelTrial2_Uo8;

private: System::Windows::Forms::Label^  labelTrial2_Uo7;

private: System::Windows::Forms::Label^  labelTrial2_Uo6;

private: System::Windows::Forms::Label^  labelTrial2_Uo5;

private: System::Windows::Forms::Label^  labelTrial2_Uo4;

private: System::Windows::Forms::Label^  labelTrial2_Uo3;

private: System::Windows::Forms::Label^  labelTrial2_Uo2;

private: System::Windows::Forms::Label^  labelTrial2_Uo1;

	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  labeltrial2_UL9;

private: System::Windows::Forms::Label^  labeltrial2_UL8;

private: System::Windows::Forms::Label^  labeltrial2_UL7;

private: System::Windows::Forms::Label^  labeltrial2_UL6;

private: System::Windows::Forms::Label^  labeltrial2_UL5;

private: System::Windows::Forms::Label^  labeltrial2_UL4;

private: System::Windows::Forms::Label^  labeltrial2_UL3;

private: System::Windows::Forms::Label^  labeltrial2_UL2;

private: System::Windows::Forms::Label^  labeltrial2_UL1;

	private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  labeltrial2_I9;

private: System::Windows::Forms::Label^  labeltrial2_I8;

private: System::Windows::Forms::Label^  labeltrial2_I7;

private: System::Windows::Forms::Label^  labeltrial2_I6;

private: System::Windows::Forms::Label^  labeltrial2_I5;

private: System::Windows::Forms::Label^  labeltrial2_I4;

private: System::Windows::Forms::Label^  labeltrial2_I3;

private: System::Windows::Forms::Label^  labeltrial2_I2;

private: System::Windows::Forms::Label^  labeltrial2_I1;

	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Label^  labelTrial1_IUL5;
private: System::Windows::Forms::Label^  labelTrial1_Uo5;
private: System::Windows::Forms::TextBox^  textBoxtrial2_RL3;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Po3;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;


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
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial1_Po9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_Po1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_PL1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_RL8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RL7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RL6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RL5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RL4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RL3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_RL2 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL1 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Po9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_Po1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_PL1 = (gcnew System::Windows::Forms::TextBox());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
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
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial2_RL8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_RL7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_RL6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_RL5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_RL4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_RL3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_RL2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo1 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL1 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I1 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button19);
			this->groupBox1->Controls->Add(this->button20);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->button25);
			this->groupBox1->Controls->Add(this->button26);
			this->groupBox1->Controls->Add(this->button27);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po9);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po8);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po7);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po6);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po5);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po4);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po3);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po2);
			this->groupBox1->Controls->Add(this->textBoxtrial1_Po1);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL9);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL8);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL7);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL6);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL5);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL4);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL3);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL2);
			this->groupBox1->Controls->Add(this->textBoxTrial1_PL1);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL8);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL7);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL6);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL5);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL4);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL3);
			this->groupBox1->Controls->Add(this->textBoxTrial1_RL2);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo9);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo8);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo7);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo6);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo5);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo4);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo3);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo2);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo1);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label40);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL9);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL8);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL7);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL6);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL5);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL4);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL3);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL2);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL1);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->labelTrial1_I9);
			this->groupBox1->Controls->Add(this->labelTrial1_I8);
			this->groupBox1->Controls->Add(this->labelTrial1_I7);
			this->groupBox1->Controls->Add(this->labelTrial1_I6);
			this->groupBox1->Controls->Add(this->labelTrial1_I5);
			this->groupBox1->Controls->Add(this->labelTrial1_I4);
			this->groupBox1->Controls->Add(this->labelTrial1_I3);
			this->groupBox1->Controls->Add(this->labelTrial1_I2);
			this->groupBox1->Controls->Add(this->labelTrial1_I1);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->labelMethod2URL2);
			this->groupBox1->Controls->Add(this->labelMethod2URL1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(34, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 680);
			this->groupBox1->TabIndex = 83;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容一";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &最大功率传输条件的测定实验内容::groupBox1_Enter);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(984, 586);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(86, 30);
			this->button19->TabIndex = 312;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(878, 586);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(86, 30);
			this->button20->TabIndex = 311;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(774, 586);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(86, 30);
			this->button21->TabIndex = 310;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(668, 586);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(86, 30);
			this->button22->TabIndex = 309;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(564, 586);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(86, 30);
			this->button23->TabIndex = 308;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(458, 586);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(86, 30);
			this->button24->TabIndex = 307;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(354, 586);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(86, 30);
			this->button25->TabIndex = 306;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(248, 586);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(86, 30);
			this->button26->TabIndex = 305;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(144, 586);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(86, 30);
			this->button27->TabIndex = 304;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// textBoxtrial1_Po9
			// 
			this->textBoxtrial1_Po9->Location = System::Drawing::Point(982, 631);
			this->textBoxtrial1_Po9->Name = L"textBoxtrial1_Po9";
			this->textBoxtrial1_Po9->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po9->TabIndex = 303;
			// 
			// textBoxtrial1_Po8
			// 
			this->textBoxtrial1_Po8->Location = System::Drawing::Point(878, 632);
			this->textBoxtrial1_Po8->Name = L"textBoxtrial1_Po8";
			this->textBoxtrial1_Po8->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po8->TabIndex = 302;
			// 
			// textBoxtrial1_Po7
			// 
			this->textBoxtrial1_Po7->Location = System::Drawing::Point(774, 631);
			this->textBoxtrial1_Po7->Name = L"textBoxtrial1_Po7";
			this->textBoxtrial1_Po7->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po7->TabIndex = 301;
			// 
			// textBoxtrial1_Po6
			// 
			this->textBoxtrial1_Po6->Location = System::Drawing::Point(670, 632);
			this->textBoxtrial1_Po6->Name = L"textBoxtrial1_Po6";
			this->textBoxtrial1_Po6->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po6->TabIndex = 300;
			// 
			// textBoxtrial1_Po5
			// 
			this->textBoxtrial1_Po5->Location = System::Drawing::Point(564, 632);
			this->textBoxtrial1_Po5->Name = L"textBoxtrial1_Po5";
			this->textBoxtrial1_Po5->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po5->TabIndex = 299;
			// 
			// textBoxtrial1_Po4
			// 
			this->textBoxtrial1_Po4->Location = System::Drawing::Point(460, 632);
			this->textBoxtrial1_Po4->Name = L"textBoxtrial1_Po4";
			this->textBoxtrial1_Po4->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po4->TabIndex = 298;
			// 
			// textBoxtrial1_Po3
			// 
			this->textBoxtrial1_Po3->Location = System::Drawing::Point(356, 632);
			this->textBoxtrial1_Po3->Name = L"textBoxtrial1_Po3";
			this->textBoxtrial1_Po3->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po3->TabIndex = 297;
			// 
			// textBoxtrial1_Po2
			// 
			this->textBoxtrial1_Po2->Location = System::Drawing::Point(250, 631);
			this->textBoxtrial1_Po2->Name = L"textBoxtrial1_Po2";
			this->textBoxtrial1_Po2->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po2->TabIndex = 296;
			// 
			// textBoxtrial1_Po1
			// 
			this->textBoxtrial1_Po1->Location = System::Drawing::Point(144, 632);
			this->textBoxtrial1_Po1->Name = L"textBoxtrial1_Po1";
			this->textBoxtrial1_Po1->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_Po1->TabIndex = 295;
			// 
			// textBoxTrial1_PL9
			// 
			this->textBoxTrial1_PL9->Location = System::Drawing::Point(982, 481);
			this->textBoxTrial1_PL9->Name = L"textBoxTrial1_PL9";
			this->textBoxTrial1_PL9->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL9->TabIndex = 294;
			// 
			// textBoxTrial1_PL8
			// 
			this->textBoxTrial1_PL8->Location = System::Drawing::Point(878, 482);
			this->textBoxTrial1_PL8->Name = L"textBoxTrial1_PL8";
			this->textBoxTrial1_PL8->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL8->TabIndex = 293;
			// 
			// textBoxTrial1_PL7
			// 
			this->textBoxTrial1_PL7->Location = System::Drawing::Point(774, 481);
			this->textBoxTrial1_PL7->Name = L"textBoxTrial1_PL7";
			this->textBoxTrial1_PL7->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL7->TabIndex = 292;
			// 
			// textBoxTrial1_PL6
			// 
			this->textBoxTrial1_PL6->Location = System::Drawing::Point(670, 482);
			this->textBoxTrial1_PL6->Name = L"textBoxTrial1_PL6";
			this->textBoxTrial1_PL6->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL6->TabIndex = 291;
			// 
			// textBoxTrial1_PL5
			// 
			this->textBoxTrial1_PL5->Location = System::Drawing::Point(564, 482);
			this->textBoxTrial1_PL5->Name = L"textBoxTrial1_PL5";
			this->textBoxTrial1_PL5->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL5->TabIndex = 290;
			// 
			// textBoxTrial1_PL4
			// 
			this->textBoxTrial1_PL4->Location = System::Drawing::Point(460, 482);
			this->textBoxTrial1_PL4->Name = L"textBoxTrial1_PL4";
			this->textBoxTrial1_PL4->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL4->TabIndex = 289;
			// 
			// textBoxTrial1_PL3
			// 
			this->textBoxTrial1_PL3->Location = System::Drawing::Point(356, 482);
			this->textBoxTrial1_PL3->Name = L"textBoxTrial1_PL3";
			this->textBoxTrial1_PL3->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL3->TabIndex = 288;
			// 
			// textBoxTrial1_PL2
			// 
			this->textBoxTrial1_PL2->Location = System::Drawing::Point(250, 481);
			this->textBoxTrial1_PL2->Name = L"textBoxTrial1_PL2";
			this->textBoxTrial1_PL2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL2->TabIndex = 287;
			// 
			// textBoxTrial1_PL1
			// 
			this->textBoxTrial1_PL1->Location = System::Drawing::Point(144, 482);
			this->textBoxTrial1_PL1->Name = L"textBoxTrial1_PL1";
			this->textBoxTrial1_PL1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_PL1->TabIndex = 286;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(984, 416);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(86, 30);
			this->button10->TabIndex = 285;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(878, 416);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(86, 30);
			this->button11->TabIndex = 284;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(774, 416);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(86, 30);
			this->button12->TabIndex = 283;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &最大功率传输条件的测定实验内容::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(668, 416);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(86, 30);
			this->button13->TabIndex = 282;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(564, 416);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(86, 30);
			this->button14->TabIndex = 281;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(458, 416);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(86, 30);
			this->button15->TabIndex = 280;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(354, 416);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(86, 30);
			this->button16->TabIndex = 279;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(248, 416);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(86, 30);
			this->button17->TabIndex = 278;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(144, 416);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(86, 30);
			this->button18->TabIndex = 277;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(984, 313);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 30);
			this->button9->TabIndex = 276;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(878, 313);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 30);
			this->button8->TabIndex = 275;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(774, 313);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 30);
			this->button7->TabIndex = 274;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(668, 313);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 30);
			this->button6->TabIndex = 273;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(564, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 30);
			this->button5->TabIndex = 272;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(458, 313);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 30);
			this->button4->TabIndex = 271;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(354, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 30);
			this->button3->TabIndex = 270;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(248, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 30);
			this->button2->TabIndex = 269;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(144, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 30);
			this->button1->TabIndex = 268;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial1_RL8
			// 
			this->textBoxTrial1_RL8->Location = System::Drawing::Point(878, 212);
			this->textBoxTrial1_RL8->Name = L"textBoxTrial1_RL8";
			this->textBoxTrial1_RL8->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL8->TabIndex = 267;
			// 
			// textBoxTrial1_RL7
			// 
			this->textBoxTrial1_RL7->Location = System::Drawing::Point(774, 213);
			this->textBoxTrial1_RL7->Name = L"textBoxTrial1_RL7";
			this->textBoxTrial1_RL7->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL7->TabIndex = 266;
			// 
			// textBoxTrial1_RL6
			// 
			this->textBoxTrial1_RL6->Location = System::Drawing::Point(668, 213);
			this->textBoxTrial1_RL6->Name = L"textBoxTrial1_RL6";
			this->textBoxTrial1_RL6->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL6->TabIndex = 265;
			// 
			// textBoxTrial1_RL5
			// 
			this->textBoxTrial1_RL5->Location = System::Drawing::Point(564, 213);
			this->textBoxTrial1_RL5->Name = L"textBoxTrial1_RL5";
			this->textBoxTrial1_RL5->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL5->TabIndex = 264;
			// 
			// textBoxTrial1_RL4
			// 
			this->textBoxTrial1_RL4->Location = System::Drawing::Point(460, 213);
			this->textBoxTrial1_RL4->Name = L"textBoxTrial1_RL4";
			this->textBoxTrial1_RL4->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL4->TabIndex = 263;
			// 
			// textBoxTrial1_RL3
			// 
			this->textBoxTrial1_RL3->Location = System::Drawing::Point(354, 212);
			this->textBoxTrial1_RL3->Name = L"textBoxTrial1_RL3";
			this->textBoxTrial1_RL3->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL3->TabIndex = 262;
			// 
			// textBoxTrial1_RL2
			// 
			this->textBoxTrial1_RL2->Location = System::Drawing::Point(248, 213);
			this->textBoxTrial1_RL2->Name = L"textBoxTrial1_RL2";
			this->textBoxTrial1_RL2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial1_RL2->TabIndex = 261;
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(38, 627);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(100, 36);
			this->label60->TabIndex = 251;
			this->label60->Text = L"Po";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo9
			// 
			this->labelTrial1_Uo9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo9->Location = System::Drawing::Point(984, 538);
			this->labelTrial1_Uo9->Name = L"labelTrial1_Uo9";
			this->labelTrial1_Uo9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo9->TabIndex = 250;
			this->labelTrial1_Uo9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo8
			// 
			this->labelTrial1_Uo8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo8->Location = System::Drawing::Point(878, 538);
			this->labelTrial1_Uo8->Name = L"labelTrial1_Uo8";
			this->labelTrial1_Uo8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo8->TabIndex = 249;
			this->labelTrial1_Uo8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo7
			// 
			this->labelTrial1_Uo7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo7->Location = System::Drawing::Point(774, 538);
			this->labelTrial1_Uo7->Name = L"labelTrial1_Uo7";
			this->labelTrial1_Uo7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo7->TabIndex = 248;
			this->labelTrial1_Uo7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo6
			// 
			this->labelTrial1_Uo6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo6->Location = System::Drawing::Point(668, 538);
			this->labelTrial1_Uo6->Name = L"labelTrial1_Uo6";
			this->labelTrial1_Uo6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo6->TabIndex = 247;
			this->labelTrial1_Uo6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo5
			// 
			this->labelTrial1_Uo5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo5->Location = System::Drawing::Point(564, 538);
			this->labelTrial1_Uo5->Name = L"labelTrial1_Uo5";
			this->labelTrial1_Uo5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo5->TabIndex = 246;
			this->labelTrial1_Uo5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo4
			// 
			this->labelTrial1_Uo4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo4->Location = System::Drawing::Point(458, 538);
			this->labelTrial1_Uo4->Name = L"labelTrial1_Uo4";
			this->labelTrial1_Uo4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo4->TabIndex = 245;
			this->labelTrial1_Uo4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo3
			// 
			this->labelTrial1_Uo3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo3->Location = System::Drawing::Point(354, 538);
			this->labelTrial1_Uo3->Name = L"labelTrial1_Uo3";
			this->labelTrial1_Uo3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo3->TabIndex = 244;
			this->labelTrial1_Uo3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2
			// 
			this->labelTrial1_Uo2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo2->Location = System::Drawing::Point(248, 538);
			this->labelTrial1_Uo2->Name = L"labelTrial1_Uo2";
			this->labelTrial1_Uo2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo2->TabIndex = 243;
			this->labelTrial1_Uo2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1
			// 
			this->labelTrial1_Uo1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo1->Location = System::Drawing::Point(144, 538);
			this->labelTrial1_Uo1->Name = L"labelTrial1_Uo1";
			this->labelTrial1_Uo1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo1->TabIndex = 242;
			this->labelTrial1_Uo1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(38, 538);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(100, 36);
			this->label50->TabIndex = 241;
			this->label50->Text = L"Uo";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(38, 477);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(100, 36);
			this->label40->TabIndex = 231;
			this->label40->Text = L"PL";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL9
			// 
			this->labelTrial1_IUL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL9->Location = System::Drawing::Point(984, 367);
			this->labelTrial1_IUL9->Name = L"labelTrial1_IUL9";
			this->labelTrial1_IUL9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL9->TabIndex = 230;
			this->labelTrial1_IUL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL8
			// 
			this->labelTrial1_IUL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL8->Location = System::Drawing::Point(878, 367);
			this->labelTrial1_IUL8->Name = L"labelTrial1_IUL8";
			this->labelTrial1_IUL8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL8->TabIndex = 229;
			this->labelTrial1_IUL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL7
			// 
			this->labelTrial1_IUL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL7->Location = System::Drawing::Point(774, 367);
			this->labelTrial1_IUL7->Name = L"labelTrial1_IUL7";
			this->labelTrial1_IUL7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL7->TabIndex = 228;
			this->labelTrial1_IUL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL6
			// 
			this->labelTrial1_IUL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL6->Location = System::Drawing::Point(668, 367);
			this->labelTrial1_IUL6->Name = L"labelTrial1_IUL6";
			this->labelTrial1_IUL6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL6->TabIndex = 227;
			this->labelTrial1_IUL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL5
			// 
			this->labelTrial1_IUL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL5->Location = System::Drawing::Point(564, 367);
			this->labelTrial1_IUL5->Name = L"labelTrial1_IUL5";
			this->labelTrial1_IUL5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL5->TabIndex = 226;
			this->labelTrial1_IUL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL4
			// 
			this->labelTrial1_IUL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL4->Location = System::Drawing::Point(458, 367);
			this->labelTrial1_IUL4->Name = L"labelTrial1_IUL4";
			this->labelTrial1_IUL4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL4->TabIndex = 225;
			this->labelTrial1_IUL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL3
			// 
			this->labelTrial1_IUL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL3->Location = System::Drawing::Point(354, 367);
			this->labelTrial1_IUL3->Name = L"labelTrial1_IUL3";
			this->labelTrial1_IUL3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL3->TabIndex = 224;
			this->labelTrial1_IUL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL2
			// 
			this->labelTrial1_IUL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL2->Location = System::Drawing::Point(248, 367);
			this->labelTrial1_IUL2->Name = L"labelTrial1_IUL2";
			this->labelTrial1_IUL2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL2->TabIndex = 223;
			this->labelTrial1_IUL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL1
			// 
			this->labelTrial1_IUL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL1->Location = System::Drawing::Point(144, 367);
			this->labelTrial1_IUL1->Name = L"labelTrial1_IUL1";
			this->labelTrial1_IUL1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL1->TabIndex = 222;
			this->labelTrial1_IUL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(38, 367);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(100, 36);
			this->label30->TabIndex = 221;
			this->label30->Text = L"UL";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I9
			// 
			this->labelTrial1_I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I9->Location = System::Drawing::Point(984, 263);
			this->labelTrial1_I9->Name = L"labelTrial1_I9";
			this->labelTrial1_I9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I9->TabIndex = 220;
			this->labelTrial1_I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I8
			// 
			this->labelTrial1_I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I8->Location = System::Drawing::Point(878, 263);
			this->labelTrial1_I8->Name = L"labelTrial1_I8";
			this->labelTrial1_I8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I8->TabIndex = 219;
			this->labelTrial1_I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I7
			// 
			this->labelTrial1_I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I7->Location = System::Drawing::Point(774, 263);
			this->labelTrial1_I7->Name = L"labelTrial1_I7";
			this->labelTrial1_I7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I7->TabIndex = 218;
			this->labelTrial1_I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I6
			// 
			this->labelTrial1_I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I6->Location = System::Drawing::Point(668, 263);
			this->labelTrial1_I6->Name = L"labelTrial1_I6";
			this->labelTrial1_I6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I6->TabIndex = 217;
			this->labelTrial1_I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I5
			// 
			this->labelTrial1_I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I5->Location = System::Drawing::Point(564, 263);
			this->labelTrial1_I5->Name = L"labelTrial1_I5";
			this->labelTrial1_I5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I5->TabIndex = 216;
			this->labelTrial1_I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I4
			// 
			this->labelTrial1_I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I4->Location = System::Drawing::Point(458, 263);
			this->labelTrial1_I4->Name = L"labelTrial1_I4";
			this->labelTrial1_I4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I4->TabIndex = 215;
			this->labelTrial1_I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I3
			// 
			this->labelTrial1_I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I3->Location = System::Drawing::Point(354, 263);
			this->labelTrial1_I3->Name = L"labelTrial1_I3";
			this->labelTrial1_I3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I3->TabIndex = 214;
			this->labelTrial1_I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I2
			// 
			this->labelTrial1_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2->Location = System::Drawing::Point(248, 263);
			this->labelTrial1_I2->Name = L"labelTrial1_I2";
			this->labelTrial1_I2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I2->TabIndex = 213;
			this->labelTrial1_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I1
			// 
			this->labelTrial1_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1->Location = System::Drawing::Point(144, 263);
			this->labelTrial1_I1->Name = L"labelTrial1_I1";
			this->labelTrial1_I1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I1->TabIndex = 212;
			this->labelTrial1_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(38, 263);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 36);
			this->label20->TabIndex = 211;
			this->label20->Text = L"I";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(984, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 36);
			this->label9->TabIndex = 210;
			this->label9->Text = L"∞";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL2
			// 
			this->labelMethod2URL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL2->ForeColor = System::Drawing::Color::Black;
			this->labelMethod2URL2->Location = System::Drawing::Point(144, 207);
			this->labelMethod2URL2->Name = L"labelMethod2URL2";
			this->labelMethod2URL2->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL2->TabIndex = 202;
			this->labelMethod2URL2->Text = L"0";
			this->labelMethod2URL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL1
			// 
			this->labelMethod2URL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL1->ForeColor = System::Drawing::Color::Black;
			this->labelMethod2URL1->Location = System::Drawing::Point(38, 207);
			this->labelMethod2URL1->Name = L"labelMethod2URL1";
			this->labelMethod2URL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL1->TabIndex = 201;
			this->labelMethod2URL1->Text = L"RL";
			this->labelMethod2URL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(397, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(291, 36);
			this->label7->TabIndex = 200;
			this->label7->Text = L"Us=12V,Ro=100";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(6, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1174, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"    1、设置Us=12V,Ro=100,RL在0~1K范围内变化时,分别测量UL及I的值，并填入表1中。表中UO、PO(=UO×I)分别为稳压电源的输出电压和"
				L"功率，UL、PL(=UL×I)分别为RL二端的电压和功率，I为电路的电流。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->button35);
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po9);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po8);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po7);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po6);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po5);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po4);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po3);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po2);
			this->groupBox2->Controls->Add(this->textBoxTrial2_Po1);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL9);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL8);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL7);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL6);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL5);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL4);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL3);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL2);
			this->groupBox2->Controls->Add(this->textBoxTrial2_PL1);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Controls->Add(this->button39);
			this->groupBox2->Controls->Add(this->button40);
			this->groupBox2->Controls->Add(this->button41);
			this->groupBox2->Controls->Add(this->button42);
			this->groupBox2->Controls->Add(this->button43);
			this->groupBox2->Controls->Add(this->button44);
			this->groupBox2->Controls->Add(this->button45);
			this->groupBox2->Controls->Add(this->button46);
			this->groupBox2->Controls->Add(this->button47);
			this->groupBox2->Controls->Add(this->button48);
			this->groupBox2->Controls->Add(this->button49);
			this->groupBox2->Controls->Add(this->button50);
			this->groupBox2->Controls->Add(this->button51);
			this->groupBox2->Controls->Add(this->button52);
			this->groupBox2->Controls->Add(this->button53);
			this->groupBox2->Controls->Add(this->button54);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL8);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL7);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL6);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL5);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL4);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL3);
			this->groupBox2->Controls->Add(this->textBoxtrial2_RL2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo9);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo8);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo7);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo6);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo5);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo4);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo3);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo2);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo1);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->labeltrial2_UL9);
			this->groupBox2->Controls->Add(this->labeltrial2_UL8);
			this->groupBox2->Controls->Add(this->labeltrial2_UL7);
			this->groupBox2->Controls->Add(this->labeltrial2_UL6);
			this->groupBox2->Controls->Add(this->labeltrial2_UL5);
			this->groupBox2->Controls->Add(this->labeltrial2_UL4);
			this->groupBox2->Controls->Add(this->labeltrial2_UL3);
			this->groupBox2->Controls->Add(this->labeltrial2_UL2);
			this->groupBox2->Controls->Add(this->labeltrial2_UL1);
			this->groupBox2->Controls->Add(this->label56);
			this->groupBox2->Controls->Add(this->labeltrial2_I9);
			this->groupBox2->Controls->Add(this->labeltrial2_I8);
			this->groupBox2->Controls->Add(this->labeltrial2_I7);
			this->groupBox2->Controls->Add(this->labeltrial2_I6);
			this->groupBox2->Controls->Add(this->labeltrial2_I5);
			this->groupBox2->Controls->Add(this->labeltrial2_I4);
			this->groupBox2->Controls->Add(this->labeltrial2_I3);
			this->groupBox2->Controls->Add(this->labeltrial2_I2);
			this->groupBox2->Controls->Add(this->labeltrial2_I1);
			this->groupBox2->Controls->Add(this->label67);
			this->groupBox2->Controls->Add(this->label68);
			this->groupBox2->Controls->Add(this->label69);
			this->groupBox2->Controls->Add(this->label70);
			this->groupBox2->Controls->Add(this->label71);
			this->groupBox2->Controls->Add(this->label72);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(34, 743);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1121, 680);
			this->groupBox2->TabIndex = 313;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容二";
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(984, 586);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(86, 30);
			this->button28->TabIndex = 312;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(878, 586);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(86, 30);
			this->button29->TabIndex = 311;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(774, 586);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(86, 30);
			this->button30->TabIndex = 310;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(668, 586);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(86, 30);
			this->button31->TabIndex = 309;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(564, 586);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(86, 30);
			this->button32->TabIndex = 308;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(458, 586);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(86, 30);
			this->button33->TabIndex = 307;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(354, 586);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(86, 30);
			this->button34->TabIndex = 306;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(248, 586);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(86, 30);
			this->button35->TabIndex = 305;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(144, 586);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(86, 30);
			this->button36->TabIndex = 304;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial2_Po9
			// 
			this->textBoxTrial2_Po9->Location = System::Drawing::Point(982, 631);
			this->textBoxTrial2_Po9->Name = L"textBoxTrial2_Po9";
			this->textBoxTrial2_Po9->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po9->TabIndex = 303;
			// 
			// textBoxTrial2_Po8
			// 
			this->textBoxTrial2_Po8->Location = System::Drawing::Point(878, 632);
			this->textBoxTrial2_Po8->Name = L"textBoxTrial2_Po8";
			this->textBoxTrial2_Po8->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po8->TabIndex = 302;
			// 
			// textBoxTrial2_Po7
			// 
			this->textBoxTrial2_Po7->Location = System::Drawing::Point(774, 631);
			this->textBoxTrial2_Po7->Name = L"textBoxTrial2_Po7";
			this->textBoxTrial2_Po7->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po7->TabIndex = 301;
			// 
			// textBoxTrial2_Po6
			// 
			this->textBoxTrial2_Po6->Location = System::Drawing::Point(670, 632);
			this->textBoxTrial2_Po6->Name = L"textBoxTrial2_Po6";
			this->textBoxTrial2_Po6->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po6->TabIndex = 300;
			// 
			// textBoxTrial2_Po5
			// 
			this->textBoxTrial2_Po5->Location = System::Drawing::Point(564, 632);
			this->textBoxTrial2_Po5->Name = L"textBoxTrial2_Po5";
			this->textBoxTrial2_Po5->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po5->TabIndex = 299;
			// 
			// textBoxTrial2_Po4
			// 
			this->textBoxTrial2_Po4->Location = System::Drawing::Point(460, 632);
			this->textBoxTrial2_Po4->Name = L"textBoxTrial2_Po4";
			this->textBoxTrial2_Po4->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po4->TabIndex = 298;
			// 
			// textBoxTrial2_Po3
			// 
			this->textBoxTrial2_Po3->Location = System::Drawing::Point(356, 632);
			this->textBoxTrial2_Po3->Name = L"textBoxTrial2_Po3";
			this->textBoxTrial2_Po3->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po3->TabIndex = 297;
			// 
			// textBoxTrial2_Po2
			// 
			this->textBoxTrial2_Po2->Location = System::Drawing::Point(250, 631);
			this->textBoxTrial2_Po2->Name = L"textBoxTrial2_Po2";
			this->textBoxTrial2_Po2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po2->TabIndex = 296;
			// 
			// textBoxTrial2_Po1
			// 
			this->textBoxTrial2_Po1->Location = System::Drawing::Point(144, 632);
			this->textBoxTrial2_Po1->Name = L"textBoxTrial2_Po1";
			this->textBoxTrial2_Po1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_Po1->TabIndex = 295;
			// 
			// textBoxTrial2_PL9
			// 
			this->textBoxTrial2_PL9->Location = System::Drawing::Point(982, 481);
			this->textBoxTrial2_PL9->Name = L"textBoxTrial2_PL9";
			this->textBoxTrial2_PL9->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL9->TabIndex = 294;
			// 
			// textBoxTrial2_PL8
			// 
			this->textBoxTrial2_PL8->Location = System::Drawing::Point(878, 482);
			this->textBoxTrial2_PL8->Name = L"textBoxTrial2_PL8";
			this->textBoxTrial2_PL8->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL8->TabIndex = 293;
			// 
			// textBoxTrial2_PL7
			// 
			this->textBoxTrial2_PL7->Location = System::Drawing::Point(774, 481);
			this->textBoxTrial2_PL7->Name = L"textBoxTrial2_PL7";
			this->textBoxTrial2_PL7->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL7->TabIndex = 292;
			// 
			// textBoxTrial2_PL6
			// 
			this->textBoxTrial2_PL6->Location = System::Drawing::Point(670, 482);
			this->textBoxTrial2_PL6->Name = L"textBoxTrial2_PL6";
			this->textBoxTrial2_PL6->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL6->TabIndex = 291;
			// 
			// textBoxTrial2_PL5
			// 
			this->textBoxTrial2_PL5->Location = System::Drawing::Point(564, 482);
			this->textBoxTrial2_PL5->Name = L"textBoxTrial2_PL5";
			this->textBoxTrial2_PL5->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL5->TabIndex = 290;
			// 
			// textBoxTrial2_PL4
			// 
			this->textBoxTrial2_PL4->Location = System::Drawing::Point(460, 482);
			this->textBoxTrial2_PL4->Name = L"textBoxTrial2_PL4";
			this->textBoxTrial2_PL4->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL4->TabIndex = 289;
			// 
			// textBoxTrial2_PL3
			// 
			this->textBoxTrial2_PL3->Location = System::Drawing::Point(356, 482);
			this->textBoxTrial2_PL3->Name = L"textBoxTrial2_PL3";
			this->textBoxTrial2_PL3->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL3->TabIndex = 288;
			// 
			// textBoxTrial2_PL2
			// 
			this->textBoxTrial2_PL2->Location = System::Drawing::Point(250, 481);
			this->textBoxTrial2_PL2->Name = L"textBoxTrial2_PL2";
			this->textBoxTrial2_PL2->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL2->TabIndex = 287;
			// 
			// textBoxTrial2_PL1
			// 
			this->textBoxTrial2_PL1->Location = System::Drawing::Point(144, 482);
			this->textBoxTrial2_PL1->Name = L"textBoxTrial2_PL1";
			this->textBoxTrial2_PL1->Size = System::Drawing::Size(100, 30);
			this->textBoxTrial2_PL1->TabIndex = 286;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(984, 416);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(86, 30);
			this->button37->TabIndex = 285;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(878, 416);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(86, 30);
			this->button38->TabIndex = 284;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(774, 416);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(86, 30);
			this->button39->TabIndex = 283;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(668, 416);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(86, 30);
			this->button40->TabIndex = 282;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(564, 416);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(86, 30);
			this->button41->TabIndex = 281;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(458, 416);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(86, 30);
			this->button42->TabIndex = 280;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(354, 416);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(86, 30);
			this->button43->TabIndex = 279;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(248, 416);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(86, 30);
			this->button44->TabIndex = 278;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(144, 416);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(86, 30);
			this->button45->TabIndex = 277;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(984, 313);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(86, 30);
			this->button46->TabIndex = 276;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(878, 313);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(86, 30);
			this->button47->TabIndex = 275;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(774, 313);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(86, 30);
			this->button48->TabIndex = 274;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(668, 313);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(86, 30);
			this->button49->TabIndex = 273;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(564, 313);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(86, 30);
			this->button50->TabIndex = 272;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(458, 313);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(86, 30);
			this->button51->TabIndex = 271;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(354, 313);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(86, 30);
			this->button52->TabIndex = 270;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(248, 313);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(86, 30);
			this->button53->TabIndex = 269;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(144, 313);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(86, 30);
			this->button54->TabIndex = 268;
			this->button54->Text = L"获取";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// textBoxtrial2_RL8
			// 
			this->textBoxtrial2_RL8->Location = System::Drawing::Point(878, 212);
			this->textBoxtrial2_RL8->Name = L"textBoxtrial2_RL8";
			this->textBoxtrial2_RL8->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL8->TabIndex = 267;
			// 
			// textBoxtrial2_RL7
			// 
			this->textBoxtrial2_RL7->Location = System::Drawing::Point(774, 213);
			this->textBoxtrial2_RL7->Name = L"textBoxtrial2_RL7";
			this->textBoxtrial2_RL7->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL7->TabIndex = 266;
			// 
			// textBoxtrial2_RL6
			// 
			this->textBoxtrial2_RL6->Location = System::Drawing::Point(668, 213);
			this->textBoxtrial2_RL6->Name = L"textBoxtrial2_RL6";
			this->textBoxtrial2_RL6->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL6->TabIndex = 265;
			// 
			// textBoxtrial2_RL5
			// 
			this->textBoxtrial2_RL5->Location = System::Drawing::Point(564, 213);
			this->textBoxtrial2_RL5->Name = L"textBoxtrial2_RL5";
			this->textBoxtrial2_RL5->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL5->TabIndex = 264;
			// 
			// textBoxtrial2_RL4
			// 
			this->textBoxtrial2_RL4->Location = System::Drawing::Point(460, 213);
			this->textBoxtrial2_RL4->Name = L"textBoxtrial2_RL4";
			this->textBoxtrial2_RL4->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL4->TabIndex = 263;
			// 
			// textBoxtrial2_RL3
			// 
			this->textBoxtrial2_RL3->Location = System::Drawing::Point(354, 212);
			this->textBoxtrial2_RL3->Name = L"textBoxtrial2_RL3";
			this->textBoxtrial2_RL3->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL3->TabIndex = 262;
			// 
			// textBoxtrial2_RL2
			// 
			this->textBoxtrial2_RL2->Location = System::Drawing::Point(248, 213);
			this->textBoxtrial2_RL2->Name = L"textBoxtrial2_RL2";
			this->textBoxtrial2_RL2->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_RL2->TabIndex = 261;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(38, 627);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 36);
			this->label2->TabIndex = 251;
			this->label2->Text = L"Po";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo9
			// 
			this->labelTrial2_Uo9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo9->Location = System::Drawing::Point(984, 538);
			this->labelTrial2_Uo9->Name = L"labelTrial2_Uo9";
			this->labelTrial2_Uo9->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo9->TabIndex = 250;
			this->labelTrial2_Uo9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo8
			// 
			this->labelTrial2_Uo8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo8->Location = System::Drawing::Point(878, 538);
			this->labelTrial2_Uo8->Name = L"labelTrial2_Uo8";
			this->labelTrial2_Uo8->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo8->TabIndex = 249;
			this->labelTrial2_Uo8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo7
			// 
			this->labelTrial2_Uo7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo7->Location = System::Drawing::Point(774, 538);
			this->labelTrial2_Uo7->Name = L"labelTrial2_Uo7";
			this->labelTrial2_Uo7->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo7->TabIndex = 248;
			this->labelTrial2_Uo7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo6
			// 
			this->labelTrial2_Uo6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo6->Location = System::Drawing::Point(668, 538);
			this->labelTrial2_Uo6->Name = L"labelTrial2_Uo6";
			this->labelTrial2_Uo6->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo6->TabIndex = 247;
			this->labelTrial2_Uo6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo5
			// 
			this->labelTrial2_Uo5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo5->Location = System::Drawing::Point(564, 538);
			this->labelTrial2_Uo5->Name = L"labelTrial2_Uo5";
			this->labelTrial2_Uo5->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo5->TabIndex = 246;
			this->labelTrial2_Uo5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo4
			// 
			this->labelTrial2_Uo4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo4->Location = System::Drawing::Point(458, 538);
			this->labelTrial2_Uo4->Name = L"labelTrial2_Uo4";
			this->labelTrial2_Uo4->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo4->TabIndex = 245;
			this->labelTrial2_Uo4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo3
			// 
			this->labelTrial2_Uo3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo3->Location = System::Drawing::Point(354, 538);
			this->labelTrial2_Uo3->Name = L"labelTrial2_Uo3";
			this->labelTrial2_Uo3->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo3->TabIndex = 244;
			this->labelTrial2_Uo3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo2
			// 
			this->labelTrial2_Uo2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo2->Location = System::Drawing::Point(248, 538);
			this->labelTrial2_Uo2->Name = L"labelTrial2_Uo2";
			this->labelTrial2_Uo2->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo2->TabIndex = 243;
			this->labelTrial2_Uo2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo1
			// 
			this->labelTrial2_Uo1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo1->Location = System::Drawing::Point(144, 538);
			this->labelTrial2_Uo1->Name = L"labelTrial2_Uo1";
			this->labelTrial2_Uo1->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo1->TabIndex = 242;
			this->labelTrial2_Uo1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(38, 538);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(100, 36);
			this->label34->TabIndex = 241;
			this->label34->Text = L"Uo";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(38, 477);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(100, 36);
			this->label35->TabIndex = 231;
			this->label35->Text = L"PL";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL9
			// 
			this->labeltrial2_UL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL9->Location = System::Drawing::Point(984, 367);
			this->labeltrial2_UL9->Name = L"labeltrial2_UL9";
			this->labeltrial2_UL9->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL9->TabIndex = 230;
			this->labeltrial2_UL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL8
			// 
			this->labeltrial2_UL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL8->Location = System::Drawing::Point(878, 367);
			this->labeltrial2_UL8->Name = L"labeltrial2_UL8";
			this->labeltrial2_UL8->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL8->TabIndex = 229;
			this->labeltrial2_UL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL7
			// 
			this->labeltrial2_UL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL7->Location = System::Drawing::Point(774, 367);
			this->labeltrial2_UL7->Name = L"labeltrial2_UL7";
			this->labeltrial2_UL7->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL7->TabIndex = 228;
			this->labeltrial2_UL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL6
			// 
			this->labeltrial2_UL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL6->Location = System::Drawing::Point(668, 367);
			this->labeltrial2_UL6->Name = L"labeltrial2_UL6";
			this->labeltrial2_UL6->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL6->TabIndex = 227;
			this->labeltrial2_UL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL5
			// 
			this->labeltrial2_UL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL5->Location = System::Drawing::Point(564, 367);
			this->labeltrial2_UL5->Name = L"labeltrial2_UL5";
			this->labeltrial2_UL5->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL5->TabIndex = 226;
			this->labeltrial2_UL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL4
			// 
			this->labeltrial2_UL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL4->Location = System::Drawing::Point(458, 367);
			this->labeltrial2_UL4->Name = L"labeltrial2_UL4";
			this->labeltrial2_UL4->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL4->TabIndex = 225;
			this->labeltrial2_UL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL3
			// 
			this->labeltrial2_UL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL3->Location = System::Drawing::Point(354, 367);
			this->labeltrial2_UL3->Name = L"labeltrial2_UL3";
			this->labeltrial2_UL3->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL3->TabIndex = 224;
			this->labeltrial2_UL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL2
			// 
			this->labeltrial2_UL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL2->Location = System::Drawing::Point(248, 367);
			this->labeltrial2_UL2->Name = L"labeltrial2_UL2";
			this->labeltrial2_UL2->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL2->TabIndex = 223;
			this->labeltrial2_UL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL1
			// 
			this->labeltrial2_UL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL1->Location = System::Drawing::Point(144, 367);
			this->labeltrial2_UL1->Name = L"labeltrial2_UL1";
			this->labeltrial2_UL1->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL1->TabIndex = 222;
			this->labeltrial2_UL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(38, 367);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(100, 36);
			this->label56->TabIndex = 221;
			this->label56->Text = L"UL";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I9
			// 
			this->labeltrial2_I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I9->Location = System::Drawing::Point(984, 263);
			this->labeltrial2_I9->Name = L"labeltrial2_I9";
			this->labeltrial2_I9->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I9->TabIndex = 220;
			this->labeltrial2_I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I8
			// 
			this->labeltrial2_I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I8->Location = System::Drawing::Point(878, 263);
			this->labeltrial2_I8->Name = L"labeltrial2_I8";
			this->labeltrial2_I8->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I8->TabIndex = 219;
			this->labeltrial2_I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I7
			// 
			this->labeltrial2_I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I7->Location = System::Drawing::Point(774, 263);
			this->labeltrial2_I7->Name = L"labeltrial2_I7";
			this->labeltrial2_I7->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I7->TabIndex = 218;
			this->labeltrial2_I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I6
			// 
			this->labeltrial2_I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I6->Location = System::Drawing::Point(668, 263);
			this->labeltrial2_I6->Name = L"labeltrial2_I6";
			this->labeltrial2_I6->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I6->TabIndex = 217;
			this->labeltrial2_I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I5
			// 
			this->labeltrial2_I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I5->Location = System::Drawing::Point(564, 263);
			this->labeltrial2_I5->Name = L"labeltrial2_I5";
			this->labeltrial2_I5->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I5->TabIndex = 216;
			this->labeltrial2_I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I4
			// 
			this->labeltrial2_I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I4->Location = System::Drawing::Point(458, 263);
			this->labeltrial2_I4->Name = L"labeltrial2_I4";
			this->labeltrial2_I4->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I4->TabIndex = 215;
			this->labeltrial2_I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I3
			// 
			this->labeltrial2_I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I3->Location = System::Drawing::Point(354, 263);
			this->labeltrial2_I3->Name = L"labeltrial2_I3";
			this->labeltrial2_I3->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I3->TabIndex = 214;
			this->labeltrial2_I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I2
			// 
			this->labeltrial2_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I2->Location = System::Drawing::Point(248, 263);
			this->labeltrial2_I2->Name = L"labeltrial2_I2";
			this->labeltrial2_I2->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I2->TabIndex = 213;
			this->labeltrial2_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I1
			// 
			this->labeltrial2_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I1->Location = System::Drawing::Point(144, 263);
			this->labeltrial2_I1->Name = L"labeltrial2_I1";
			this->labeltrial2_I1->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I1->TabIndex = 212;
			this->labeltrial2_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(38, 263);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(100, 36);
			this->label67->TabIndex = 211;
			this->label67->Text = L"I";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label68
			// 
			this->label68->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label68->ForeColor = System::Drawing::Color::Black;
			this->label68->Location = System::Drawing::Point(984, 207);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(98, 36);
			this->label68->TabIndex = 210;
			this->label68->Text = L"∞";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->ForeColor = System::Drawing::Color::Black;
			this->label69->Location = System::Drawing::Point(144, 207);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(98, 36);
			this->label69->TabIndex = 202;
			this->label69->Text = L"0";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(38, 207);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(100, 36);
			this->label70->TabIndex = 201;
			this->label70->Text = L"RL";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label71
			// 
			this->label71->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label71->ForeColor = System::Drawing::Color::Black;
			this->label71->Location = System::Drawing::Point(397, 148);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(291, 36);
			this->label71->TabIndex = 200;
			this->label71->Text = L"Us=15V,Ro=300";
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label72
			// 
			this->label72->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label72->ForeColor = System::Drawing::Color::Black;
			this->label72->Location = System::Drawing::Point(6, 50);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(1174, 53);
			this->label72->TabIndex = 0;
			this->label72->Text = L"2、改变内阻值为R0=300Ω，输出电压US=15V，重复测量。";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(23, 1556);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 314;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(577, 1505);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 313;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &最大功率传输条件的测定实验内容::button81_Click);
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(178, 1457);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(984, 28);
			this->textBox结论->TabIndex = 316;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(35, 1460);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 315;
			this->label105->Text = L"实验结论";
			// 
			// 最大功率传输条件的测定实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1342, 741);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button81);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"最大功率传输条件的测定实验内容";
			this->Text = L"最大功率传输条件的测定实验内容";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			  public:ST_最大功率传输条件的测定 Load_Grade_data();
					 void SendData();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
};
}
