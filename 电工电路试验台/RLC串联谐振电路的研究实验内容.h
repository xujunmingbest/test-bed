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
	/// RLC串联谐振电路的研究实验内容 摘要
	/// </summary>
	public ref class RLC串联谐振电路的研究实验内容 : public System::Windows::Forms::Form
	{
	public:
		RLC串联谐振电路的研究实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			File::Delete(Trial1PT_name);
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RLC串联谐振电路的研究实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelTrial2_UL;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelTrial2_Uc;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_F1;
	private: System::Windows::Forms::Label^  labelTrial3_U0_1;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBoxTrial3F2_F1;

	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_Q;


	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_Fo;

	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label62;
























































































	private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Label^  labelTrial3_Uc_8;

	private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Label^  labelTrial3_UL_8;

	private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F8;
private: System::Windows::Forms::Label^  labelTrial3_U0_8;


	private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Label^  labelTrial3_Uc_7;

	private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Label^  labelTrial3_UL_7;

	private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F7;
private: System::Windows::Forms::Label^  labelTrial3_U0_7;


	private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Label^  labelTrial3_Uc_6;

	private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Label^  labelTrial3_UL_6;

	private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F6;
private: System::Windows::Forms::Label^  labelTrial3_U0_6;


	private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Label^  labelTrial3_Uc_5;

	private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Label^  labelTrial3_UL_5;

	private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F5;
private: System::Windows::Forms::Label^  labelTrial3_U0_5;


	private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Label^  labelTrial3_Uc_4;

	private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Label^  labelTrial3_UL_4;

	private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F4;
private: System::Windows::Forms::Label^  labelTrial3_U0_4;


	private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  labelTrial3_Uc_3;

	private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Label^  labelTrial3_UL_3;

	private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F3;
private: System::Windows::Forms::Label^  labelTrial3_U0_3;


	private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  labelTrial3_Uc_2;


	private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Label^  labelTrial3_UL_2;


	private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F2;
private: System::Windows::Forms::Label^  labelTrial3_U0_2;


	private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  labelTrial3_Uc_1;

	private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  labelTrial3_UL_1;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Label^  labelTrial4_UL;

	private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::TextBox^  textBoxTrial4_F;
private: System::Windows::Forms::Label^  labelTrial4_Uc;


	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::TextBox^  textBoxTrial5F2_F1;


	private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::TextBox^  textBoxTrial5_Q;

	private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::TextBox^  textBoxTrial5_Fo;

	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;





























































































	private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Label^  labelTrial5_Uc_8;

	private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Label^  labelTrial5_UL_8;

	private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F8;
private: System::Windows::Forms::Label^  labelTrial5_U0_8;


	private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Label^  labelTrial5_Uc_7;

	private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::Label^  labelTrial5_UL_7;

	private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F7;
private: System::Windows::Forms::Label^  labelTrial5_U0_7;


	private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Label^  labelTrial5_Uc_6;

	private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::Label^  labelTrial5_UL_6;

	private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F6;
private: System::Windows::Forms::Label^  labelTrial5_U0_6;


	private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::Label^  labelTrial5_Uc_5;

	private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::Label^  labelTrial5_UL_5;

	private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F5;
private: System::Windows::Forms::Label^  labelTrial5_U0_5;



	private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::Label^  labelTrial5_Uc_4;

	private: System::Windows::Forms::Button^  button91;
private: System::Windows::Forms::Label^  labelTrial5_UL_4;

	private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F4;
private: System::Windows::Forms::Label^  labelTrial5_U0_4;



	private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Label^  labelTrial5_Uc_3;

	private: System::Windows::Forms::Button^  button94;
private: System::Windows::Forms::Label^  labelTrial5_UL_3;

	private: System::Windows::Forms::Button^  button95;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F3;
private: System::Windows::Forms::Label^  labelTrial5_U0_3;


	private: System::Windows::Forms::Button^  button96;
private: System::Windows::Forms::Label^  labelTrial5_Uc_2;

	private: System::Windows::Forms::Button^  button97;
private: System::Windows::Forms::Label^  labelTrial5_UL_2;

	private: System::Windows::Forms::Button^  button98;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F2;
private: System::Windows::Forms::Label^  labelTrial5_U0_2;


	private: System::Windows::Forms::Button^  button99;
private: System::Windows::Forms::Label^  labelTrial5_Uc_1;

	private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::Label^  labelTrial5_UL_1;

	private: System::Windows::Forms::Label^  label123;
	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Label^  label124;
private: System::Windows::Forms::TextBox^  textBoxTrial5_F1;
private: System::Windows::Forms::Label^  labelTrial5_U0_1;


	private: System::Windows::Forms::Label^  label126;
	private: System::Windows::Forms::Label^  label127;
	private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label130;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F;
































private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label19;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RLC串联谐振电路的研究实验内容::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_Uc = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3F2_F1 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Q = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Fo = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_8 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_8 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F8 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_8 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_7 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_7 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_7 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_6 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_6 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_6 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_5 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_5 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_5 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_4 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_4 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_4 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_3 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_3 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_Uc_1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_UL_1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_U0_1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->labelTrial4_UL = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_F = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial4_Uc = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5F2_F1 = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_Q = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_Fo = (gcnew System::Windows::Forms::TextBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_8 = (gcnew System::Windows::Forms::Label());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_8 = (gcnew System::Windows::Forms::Label());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F8 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_8 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_7 = (gcnew System::Windows::Forms::Label());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_7 = (gcnew System::Windows::Forms::Label());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_7 = (gcnew System::Windows::Forms::Label());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_6 = (gcnew System::Windows::Forms::Label());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_6 = (gcnew System::Windows::Forms::Label());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_6 = (gcnew System::Windows::Forms::Label());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_5 = (gcnew System::Windows::Forms::Label());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_5 = (gcnew System::Windows::Forms::Label());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_5 = (gcnew System::Windows::Forms::Label());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_4 = (gcnew System::Windows::Forms::Label());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_4 = (gcnew System::Windows::Forms::Label());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_4 = (gcnew System::Windows::Forms::Label());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_3 = (gcnew System::Windows::Forms::Label());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_3 = (gcnew System::Windows::Forms::Label());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_3 = (gcnew System::Windows::Forms::Label());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_2 = (gcnew System::Windows::Forms::Label());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_2 = (gcnew System::Windows::Forms::Label());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial5_F2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_2 = (gcnew System::Windows::Forms::Label());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_Uc_1 = (gcnew System::Windows::Forms::Label());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->labelTrial5_UL_1 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial5_U0_1 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(352, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"RLC元件阻抗特性的测定 实验内容";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->pictureBoxTrial1);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(16, 85);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 965);
			this->groupBox8->TabIndex = 82;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RLC元件阻抗特性的测定 实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::groupBox8_Enter);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(17, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"获取图片";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button1_Click);
			// 
			// pictureBoxTrial1
			// 
			this->pictureBoxTrial1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1.Image")));
			this->pictureBoxTrial1->Location = System::Drawing::Point(17, 454);
			this->pictureBoxTrial1->Name = L"pictureBoxTrial1";
			this->pictureBoxTrial1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1->TabIndex = 2;
			this->pictureBoxTrial1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(277, 122);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(566, 287);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1161, 53);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    按图13－3组成监视、测量电路，用示波器测电压，用示波器监视信号源输出，令其输出电压Ui≤3V，并保持不变。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->labelTrial2_UL);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F);
			this->groupBox1->Controls->Add(this->labelTrial2_Uc);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(16, 1081);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 282);
			this->groupBox1->TabIndex = 83;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RLC元件阻抗特性的测定 实验内容2";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(718, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(204, 28);
			this->label4->TabIndex = 379;
			this->label4->Text = L"宽屏测试交流RMS1表";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->ForeColor = System::Drawing::Color::Lime;
			this->label33->Location = System::Drawing::Point(718, 195);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(204, 28);
			this->label33->TabIndex = 378;
			this->label33->Text = L"宽屏测试交流RMS1表";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(637, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 19;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(637, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 18;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button2_Click);
			// 
			// labelTrial2_UL
			// 
			this->labelTrial2_UL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UL->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UL->Location = System::Drawing::Point(420, 248);
			this->labelTrial2_UL->Name = L"labelTrial2_UL";
			this->labelTrial2_UL->Size = System::Drawing::Size(179, 25);
			this->labelTrial2_UL->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(159, 248);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"UL";
			// 
			// textBoxTrial2_F
			// 
			this->textBoxTrial2_F->Location = System::Drawing::Point(420, 149);
			this->textBoxTrial2_F->Name = L"textBoxTrial2_F";
			this->textBoxTrial2_F->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial2_F->TabIndex = 15;
			// 
			// labelTrial2_Uc
			// 
			this->labelTrial2_Uc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uc->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Uc->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uc->Location = System::Drawing::Point(420, 200);
			this->labelTrial2_Uc->Name = L"labelTrial2_Uc";
			this->labelTrial2_Uc->Size = System::Drawing::Size(179, 25);
			this->labelTrial2_Uc->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(159, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Uc";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(159, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"频率F( Hz）";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(24, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1161, 74);
			this->label2->TabIndex = 0;
			this->label2->Text = L"    找出电路的谐振频率F0 ，其方法是，将万用表接在R（510Ω）两端，令信号源的频率由小逐渐变大（注意要维持信号源的输出幅度不变），当U0的读数为最大时，"
				L"读得频率计上的频率值即为电路的谐振频率Fo，并测量Uc与UL之值。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBoxTrial3F2_F1);
			this->groupBox2->Controls->Add(this->label65);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Q);
			this->groupBox2->Controls->Add(this->label64);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Fo);
			this->groupBox2->Controls->Add(this->label63);
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_8);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_8);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F8);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_8);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_7);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_7);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F7);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_7);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_6);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_6);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F6);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_6);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_5);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_5);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F5);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_5);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_4);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_4);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F4);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_4);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_3);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_3);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F3);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_3);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_2);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_2);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F2);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_2);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_1);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_1);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F1);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(16, 1383);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 501);
			this->groupBox2->TabIndex = 84;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"RLC元件阻抗特性的测定 实验内容3";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->ForeColor = System::Drawing::Color::Lime;
			this->label19->Location = System::Drawing::Point(28, 385);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(204, 28);
			this->label19->TabIndex = 383;
			this->label19->Text = L"宽屏测试交流RMS1表";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(28, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 28);
			this->label6->TabIndex = 381;
			this->label6->Text = L"宽屏测试交流RMS1表";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(28, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 28);
			this->label8->TabIndex = 380;
			this->label8->Text = L"宽屏测试交流RMS1表";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial3F2_F1
			// 
			this->textBoxTrial3F2_F1->Location = System::Drawing::Point(681, 459);
			this->textBoxTrial3F2_F1->Name = L"textBoxTrial3F2_F1";
			this->textBoxTrial3F2_F1->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3F2_F1->TabIndex = 136;
			// 
			// label65
			// 
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label65->ForeColor = System::Drawing::Color::Black;
			this->label65->Location = System::Drawing::Point(599, 461);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(76, 25);
			this->label65->TabIndex = 135;
			this->label65->Text = L"F2-F1=";
			// 
			// textBoxTrial3_Q
			// 
			this->textBoxTrial3_Q->Location = System::Drawing::Point(477, 459);
			this->textBoxTrial3_Q->Name = L"textBoxTrial3_Q";
			this->textBoxTrial3_Q->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_Q->TabIndex = 134;
			// 
			// label64
			// 
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(420, 461);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(54, 25);
			this->label64->TabIndex = 133;
			this->label64->Text = L"Q=";
			// 
			// textBoxTrial3_Fo
			// 
			this->textBoxTrial3_Fo->Location = System::Drawing::Point(285, 459);
			this->textBoxTrial3_Fo->Name = L"textBoxTrial3_Fo";
			this->textBoxTrial3_Fo->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_Fo->TabIndex = 132;
			// 
			// label63
			// 
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Black;
			this->label63->Location = System::Drawing::Point(225, 461);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(54, 25);
			this->label63->TabIndex = 131;
			this->label63->Text = L"Fo=";
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(28, 461);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(173, 25);
			this->label62->TabIndex = 130;
			this->label62->Text = L"Ui=3V，R=510Ω";
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(942, 378);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 35);
			this->button16->TabIndex = 73;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button16_Click);
			// 
			// labelTrial3_Uc_8
			// 
			this->labelTrial3_Uc_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_8->Location = System::Drawing::Point(942, 350);
			this->labelTrial3_Uc_8->Name = L"labelTrial3_Uc_8";
			this->labelTrial3_Uc_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_8->TabIndex = 72;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(942, 288);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(90, 35);
			this->button17->TabIndex = 71;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button17_Click);
			// 
			// labelTrial3_UL_8
			// 
			this->labelTrial3_UL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_8->Location = System::Drawing::Point(942, 260);
			this->labelTrial3_UL_8->Name = L"labelTrial3_UL_8";
			this->labelTrial3_UL_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_8->TabIndex = 70;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(942, 209);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(90, 35);
			this->button18->TabIndex = 69;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button18_Click);
			// 
			// textBoxTrial3_F8
			// 
			this->textBoxTrial3_F8->Location = System::Drawing::Point(942, 94);
			this->textBoxTrial3_F8->Name = L"textBoxTrial3_F8";
			this->textBoxTrial3_F8->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F8->TabIndex = 68;
			// 
			// labelTrial3_U0_8
			// 
			this->labelTrial3_U0_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_8->Location = System::Drawing::Point(942, 181);
			this->labelTrial3_U0_8->Name = L"labelTrial3_U0_8";
			this->labelTrial3_U0_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_8->TabIndex = 67;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(846, 378);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(90, 35);
			this->button19->TabIndex = 66;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button19_Click);
			// 
			// labelTrial3_Uc_7
			// 
			this->labelTrial3_Uc_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_7->Location = System::Drawing::Point(846, 350);
			this->labelTrial3_Uc_7->Name = L"labelTrial3_Uc_7";
			this->labelTrial3_Uc_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_7->TabIndex = 65;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(846, 288);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 35);
			this->button20->TabIndex = 64;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button20_Click);
			// 
			// labelTrial3_UL_7
			// 
			this->labelTrial3_UL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_7->Location = System::Drawing::Point(846, 260);
			this->labelTrial3_UL_7->Name = L"labelTrial3_UL_7";
			this->labelTrial3_UL_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_7->TabIndex = 63;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(846, 209);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(90, 35);
			this->button21->TabIndex = 62;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button21_Click);
			// 
			// textBoxTrial3_F7
			// 
			this->textBoxTrial3_F7->Location = System::Drawing::Point(846, 94);
			this->textBoxTrial3_F7->Name = L"textBoxTrial3_F7";
			this->textBoxTrial3_F7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F7->TabIndex = 61;
			// 
			// labelTrial3_U0_7
			// 
			this->labelTrial3_U0_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_7->Location = System::Drawing::Point(846, 181);
			this->labelTrial3_U0_7->Name = L"labelTrial3_U0_7";
			this->labelTrial3_U0_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_7->TabIndex = 60;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(750, 378);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(90, 35);
			this->button22->TabIndex = 59;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button22_Click);
			// 
			// labelTrial3_Uc_6
			// 
			this->labelTrial3_Uc_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_6->Location = System::Drawing::Point(750, 350);
			this->labelTrial3_Uc_6->Name = L"labelTrial3_Uc_6";
			this->labelTrial3_Uc_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_6->TabIndex = 58;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(750, 288);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(90, 35);
			this->button23->TabIndex = 57;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button23_Click);
			// 
			// labelTrial3_UL_6
			// 
			this->labelTrial3_UL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_6->Location = System::Drawing::Point(750, 260);
			this->labelTrial3_UL_6->Name = L"labelTrial3_UL_6";
			this->labelTrial3_UL_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_6->TabIndex = 56;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(750, 209);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(90, 35);
			this->button24->TabIndex = 55;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button24_Click);
			// 
			// textBoxTrial3_F6
			// 
			this->textBoxTrial3_F6->Location = System::Drawing::Point(750, 94);
			this->textBoxTrial3_F6->Name = L"textBoxTrial3_F6";
			this->textBoxTrial3_F6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F6->TabIndex = 54;
			// 
			// labelTrial3_U0_6
			// 
			this->labelTrial3_U0_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_6->Location = System::Drawing::Point(750, 181);
			this->labelTrial3_U0_6->Name = L"labelTrial3_U0_6";
			this->labelTrial3_U0_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_6->TabIndex = 53;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(654, 378);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(90, 35);
			this->button25->TabIndex = 52;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button25_Click);
			// 
			// labelTrial3_Uc_5
			// 
			this->labelTrial3_Uc_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_5->Location = System::Drawing::Point(654, 350);
			this->labelTrial3_Uc_5->Name = L"labelTrial3_Uc_5";
			this->labelTrial3_Uc_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_5->TabIndex = 51;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(654, 288);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(90, 35);
			this->button26->TabIndex = 50;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button26_Click);
			// 
			// labelTrial3_UL_5
			// 
			this->labelTrial3_UL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_5->Location = System::Drawing::Point(654, 260);
			this->labelTrial3_UL_5->Name = L"labelTrial3_UL_5";
			this->labelTrial3_UL_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_5->TabIndex = 49;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(654, 209);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(90, 35);
			this->button27->TabIndex = 48;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button27_Click);
			// 
			// textBoxTrial3_F5
			// 
			this->textBoxTrial3_F5->Location = System::Drawing::Point(654, 94);
			this->textBoxTrial3_F5->Name = L"textBoxTrial3_F5";
			this->textBoxTrial3_F5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F5->TabIndex = 47;
			// 
			// labelTrial3_U0_5
			// 
			this->labelTrial3_U0_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_5->Location = System::Drawing::Point(654, 181);
			this->labelTrial3_U0_5->Name = L"labelTrial3_U0_5";
			this->labelTrial3_U0_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_5->TabIndex = 46;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(558, 378);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 35);
			this->button10->TabIndex = 45;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button10_Click);
			// 
			// labelTrial3_Uc_4
			// 
			this->labelTrial3_Uc_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_4->Location = System::Drawing::Point(558, 350);
			this->labelTrial3_Uc_4->Name = L"labelTrial3_Uc_4";
			this->labelTrial3_Uc_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_4->TabIndex = 44;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(558, 288);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 35);
			this->button11->TabIndex = 43;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button11_Click);
			// 
			// labelTrial3_UL_4
			// 
			this->labelTrial3_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_4->Location = System::Drawing::Point(558, 260);
			this->labelTrial3_UL_4->Name = L"labelTrial3_UL_4";
			this->labelTrial3_UL_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_4->TabIndex = 42;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(558, 209);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 35);
			this->button12->TabIndex = 41;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button12_Click);
			// 
			// textBoxTrial3_F4
			// 
			this->textBoxTrial3_F4->Location = System::Drawing::Point(558, 94);
			this->textBoxTrial3_F4->Name = L"textBoxTrial3_F4";
			this->textBoxTrial3_F4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F4->TabIndex = 40;
			// 
			// labelTrial3_U0_4
			// 
			this->labelTrial3_U0_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_4->Location = System::Drawing::Point(558, 181);
			this->labelTrial3_U0_4->Name = L"labelTrial3_U0_4";
			this->labelTrial3_U0_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_4->TabIndex = 39;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(462, 378);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(90, 35);
			this->button13->TabIndex = 38;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button13_Click);
			// 
			// labelTrial3_Uc_3
			// 
			this->labelTrial3_Uc_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_3->Location = System::Drawing::Point(462, 350);
			this->labelTrial3_Uc_3->Name = L"labelTrial3_Uc_3";
			this->labelTrial3_Uc_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_3->TabIndex = 37;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(462, 288);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(90, 35);
			this->button14->TabIndex = 36;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button14_Click);
			// 
			// labelTrial3_UL_3
			// 
			this->labelTrial3_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_3->Location = System::Drawing::Point(462, 260);
			this->labelTrial3_UL_3->Name = L"labelTrial3_UL_3";
			this->labelTrial3_UL_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_3->TabIndex = 35;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(462, 209);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(90, 35);
			this->button15->TabIndex = 34;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button15_Click);
			// 
			// textBoxTrial3_F3
			// 
			this->textBoxTrial3_F3->Location = System::Drawing::Point(462, 94);
			this->textBoxTrial3_F3->Name = L"textBoxTrial3_F3";
			this->textBoxTrial3_F3->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F3->TabIndex = 33;
			// 
			// labelTrial3_U0_3
			// 
			this->labelTrial3_U0_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_3->Location = System::Drawing::Point(462, 181);
			this->labelTrial3_U0_3->Name = L"labelTrial3_U0_3";
			this->labelTrial3_U0_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_3->TabIndex = 32;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(366, 378);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 35);
			this->button7->TabIndex = 31;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button7_Click);
			// 
			// labelTrial3_Uc_2
			// 
			this->labelTrial3_Uc_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_2->Location = System::Drawing::Point(366, 350);
			this->labelTrial3_Uc_2->Name = L"labelTrial3_Uc_2";
			this->labelTrial3_Uc_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_2->TabIndex = 30;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(366, 288);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 35);
			this->button8->TabIndex = 29;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button8_Click);
			// 
			// labelTrial3_UL_2
			// 
			this->labelTrial3_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_2->Location = System::Drawing::Point(366, 260);
			this->labelTrial3_UL_2->Name = L"labelTrial3_UL_2";
			this->labelTrial3_UL_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_2->TabIndex = 28;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(366, 209);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 35);
			this->button9->TabIndex = 27;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button9_Click);
			// 
			// textBoxTrial3_F2
			// 
			this->textBoxTrial3_F2->Location = System::Drawing::Point(366, 94);
			this->textBoxTrial3_F2->Name = L"textBoxTrial3_F2";
			this->textBoxTrial3_F2->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F2->TabIndex = 26;
			// 
			// labelTrial3_U0_2
			// 
			this->labelTrial3_U0_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_2->Location = System::Drawing::Point(366, 181);
			this->labelTrial3_U0_2->Name = L"labelTrial3_U0_2";
			this->labelTrial3_U0_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_2->TabIndex = 25;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(270, 378);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 35);
			this->button6->TabIndex = 24;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button6_Click);
			// 
			// labelTrial3_Uc_1
			// 
			this->labelTrial3_Uc_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_1->Location = System::Drawing::Point(270, 350);
			this->labelTrial3_Uc_1->Name = L"labelTrial3_Uc_1";
			this->labelTrial3_Uc_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_1->TabIndex = 23;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(270, 288);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 35);
			this->button4->TabIndex = 22;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button4_Click);
			// 
			// labelTrial3_UL_1
			// 
			this->labelTrial3_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_1->Location = System::Drawing::Point(270, 260);
			this->labelTrial3_UL_1->Name = L"labelTrial3_UL_1";
			this->labelTrial3_UL_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_1->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(28, 349);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(140, 25);
			this->label14->TabIndex = 20;
			this->label14->Text = L"UC（v）";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(270, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 35);
			this->button5->TabIndex = 18;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button5_Click);
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(28, 259);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(140, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"UL（v）";
			// 
			// textBoxTrial3_F1
			// 
			this->textBoxTrial3_F1->Location = System::Drawing::Point(270, 94);
			this->textBoxTrial3_F1->Name = L"textBoxTrial3_F1";
			this->textBoxTrial3_F1->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial3_F1->TabIndex = 15;
			// 
			// labelTrial3_U0_1
			// 
			this->labelTrial3_U0_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_1->Location = System::Drawing::Point(270, 181);
			this->labelTrial3_U0_1->Name = L"labelTrial3_U0_1";
			this->labelTrial3_U0_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_1->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(28, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 25);
			this->label11->TabIndex = 13;
			this->label11->Text = L"UO（v）";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(28, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"频率F（KHz）";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(24, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1161, 44);
			this->label13->TabIndex = 0;
			this->label13->Text = L"    在谐振点两侧，按频率递增或递减500Hz或1KHz，依次各取8个测量点，逐点测出U0，UL，Uc之值，记入数据表格。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->button52);
			this->groupBox3->Controls->Add(this->button53);
			this->groupBox3->Controls->Add(this->labelTrial4_UL);
			this->groupBox3->Controls->Add(this->label67);
			this->groupBox3->Controls->Add(this->textBoxTrial4_F);
			this->groupBox3->Controls->Add(this->labelTrial4_Uc);
			this->groupBox3->Controls->Add(this->label69);
			this->groupBox3->Controls->Add(this->label70);
			this->groupBox3->Controls->Add(this->label71);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(16, 1901);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1296, 282);
			this->groupBox3->TabIndex = 85;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"RLC元件阻抗特性的测定 实验内容4";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(718, 252);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(204, 28);
			this->label10->TabIndex = 381;
			this->label10->Text = L"宽屏测试交流RMS1表";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->ForeColor = System::Drawing::Color::Lime;
			this->label15->Location = System::Drawing::Point(718, 202);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(204, 28);
			this->label15->TabIndex = 380;
			this->label15->Text = L"宽屏测试交流RMS1表";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(637, 247);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(75, 35);
			this->button52->TabIndex = 19;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button52_Click);
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(637, 195);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(75, 35);
			this->button53->TabIndex = 18;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button53_Click);
			// 
			// labelTrial4_UL
			// 
			this->labelTrial4_UL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial4_UL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial4_UL->ForeColor = System::Drawing::Color::Black;
			this->labelTrial4_UL->Location = System::Drawing::Point(420, 248);
			this->labelTrial4_UL->Name = L"labelTrial4_UL";
			this->labelTrial4_UL->Size = System::Drawing::Size(179, 25);
			this->labelTrial4_UL->TabIndex = 17;
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(159, 248);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(230, 25);
			this->label67->TabIndex = 16;
			this->label67->Text = L"UL";
			// 
			// textBoxTrial4_F
			// 
			this->textBoxTrial4_F->Location = System::Drawing::Point(420, 149);
			this->textBoxTrial4_F->Name = L"textBoxTrial4_F";
			this->textBoxTrial4_F->Size = System::Drawing::Size(179, 30);
			this->textBoxTrial4_F->TabIndex = 15;
			// 
			// labelTrial4_Uc
			// 
			this->labelTrial4_Uc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial4_Uc->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial4_Uc->ForeColor = System::Drawing::Color::Black;
			this->labelTrial4_Uc->Location = System::Drawing::Point(420, 200);
			this->labelTrial4_Uc->Name = L"labelTrial4_Uc";
			this->labelTrial4_Uc->Size = System::Drawing::Size(179, 25);
			this->labelTrial4_Uc->TabIndex = 14;
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label69->ForeColor = System::Drawing::Color::Black;
			this->label69->Location = System::Drawing::Point(159, 200);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(230, 25);
			this->label69->TabIndex = 13;
			this->label69->Text = L"Uc";
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(159, 151);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(230, 25);
			this->label70->TabIndex = 11;
			this->label70->Text = L"频率F（KHz）";
			// 
			// label71
			// 
			this->label71->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label71->ForeColor = System::Drawing::Color::Black;
			this->label71->Location = System::Drawing::Point(24, 45);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(1161, 74);
			this->label71->TabIndex = 0;
			this->label71->Text = L"    找出电路的谐振频率F0 ，其方法是，将万用表接在R（1KΩ）两端，令信号源的频率由小逐渐变大（注意要维持信号源的输出幅度不变），当U0的读数为最大时，读"
				L"得频率计上的频率值即为电路的谐振频率Fo，并测量Uc与UL之值（注意及时更换万用表的档位）。";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->textBoxTrial5F2_F1);
			this->groupBox4->Controls->Add(this->label72);
			this->groupBox4->Controls->Add(this->textBoxTrial5_Q);
			this->groupBox4->Controls->Add(this->label73);
			this->groupBox4->Controls->Add(this->textBoxTrial5_Fo);
			this->groupBox4->Controls->Add(this->label74);
			this->groupBox4->Controls->Add(this->label75);
			this->groupBox4->Controls->Add(this->button78);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_8);
			this->groupBox4->Controls->Add(this->button79);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_8);
			this->groupBox4->Controls->Add(this->button80);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F8);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_8);
			this->groupBox4->Controls->Add(this->button81);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_7);
			this->groupBox4->Controls->Add(this->button82);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_7);
			this->groupBox4->Controls->Add(this->button83);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F7);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_7);
			this->groupBox4->Controls->Add(this->button84);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_6);
			this->groupBox4->Controls->Add(this->button85);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_6);
			this->groupBox4->Controls->Add(this->button86);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F6);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_6);
			this->groupBox4->Controls->Add(this->button87);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_5);
			this->groupBox4->Controls->Add(this->button88);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_5);
			this->groupBox4->Controls->Add(this->button89);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F5);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_5);
			this->groupBox4->Controls->Add(this->button90);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_4);
			this->groupBox4->Controls->Add(this->button91);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_4);
			this->groupBox4->Controls->Add(this->button92);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F4);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_4);
			this->groupBox4->Controls->Add(this->button93);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_3);
			this->groupBox4->Controls->Add(this->button94);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_3);
			this->groupBox4->Controls->Add(this->button95);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F3);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_3);
			this->groupBox4->Controls->Add(this->button96);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_2);
			this->groupBox4->Controls->Add(this->button97);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_2);
			this->groupBox4->Controls->Add(this->button98);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F2);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_2);
			this->groupBox4->Controls->Add(this->button99);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_1);
			this->groupBox4->Controls->Add(this->button100);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_1);
			this->groupBox4->Controls->Add(this->label123);
			this->groupBox4->Controls->Add(this->button101);
			this->groupBox4->Controls->Add(this->label124);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F1);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_1);
			this->groupBox4->Controls->Add(this->label126);
			this->groupBox4->Controls->Add(this->label127);
			this->groupBox4->Controls->Add(this->label128);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->ForeColor = System::Drawing::Color::Red;
			this->groupBox4->Location = System::Drawing::Point(16, 2204);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1167, 526);
			this->groupBox4->TabIndex = 137;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"RLC元件阻抗特性的测定 实验内容5";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::groupBox4_Enter);
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->ForeColor = System::Drawing::Color::Lime;
			this->label18->Location = System::Drawing::Point(17, 398);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(204, 28);
			this->label18->TabIndex = 382;
			this->label18->Text = L"宽屏测试交流RMS1表";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->ForeColor = System::Drawing::Color::Lime;
			this->label16->Location = System::Drawing::Point(17, 308);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(204, 28);
			this->label16->TabIndex = 381;
			this->label16->Text = L"宽屏测试交流RMS1表";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->ForeColor = System::Drawing::Color::Lime;
			this->label17->Location = System::Drawing::Point(17, 229);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(204, 28);
			this->label17->TabIndex = 380;
			this->label17->Text = L"宽屏测试交流RMS1表";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial5F2_F1
			// 
			this->textBoxTrial5F2_F1->Location = System::Drawing::Point(681, 474);
			this->textBoxTrial5F2_F1->Name = L"textBoxTrial5F2_F1";
			this->textBoxTrial5F2_F1->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5F2_F1->TabIndex = 136;
			// 
			// label72
			// 
			this->label72->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label72->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label72->ForeColor = System::Drawing::Color::Black;
			this->label72->Location = System::Drawing::Point(599, 476);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(76, 25);
			this->label72->TabIndex = 135;
			this->label72->Text = L"F2-F1=";
			// 
			// textBoxTrial5_Q
			// 
			this->textBoxTrial5_Q->Location = System::Drawing::Point(477, 474);
			this->textBoxTrial5_Q->Name = L"textBoxTrial5_Q";
			this->textBoxTrial5_Q->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_Q->TabIndex = 134;
			// 
			// label73
			// 
			this->label73->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label73->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label73->ForeColor = System::Drawing::Color::Black;
			this->label73->Location = System::Drawing::Point(420, 476);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(54, 25);
			this->label73->TabIndex = 133;
			this->label73->Text = L"Q=";
			// 
			// textBoxTrial5_Fo
			// 
			this->textBoxTrial5_Fo->Location = System::Drawing::Point(285, 474);
			this->textBoxTrial5_Fo->Name = L"textBoxTrial5_Fo";
			this->textBoxTrial5_Fo->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_Fo->TabIndex = 132;
			// 
			// label74
			// 
			this->label74->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label74->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label74->ForeColor = System::Drawing::Color::Black;
			this->label74->Location = System::Drawing::Point(225, 476);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(54, 25);
			this->label74->TabIndex = 131;
			this->label74->Text = L"Fo=";
			// 
			// label75
			// 
			this->label75->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label75->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label75->ForeColor = System::Drawing::Color::Black;
			this->label75->Location = System::Drawing::Point(28, 476);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(173, 25);
			this->label75->TabIndex = 130;
			this->label75->Text = L"Ui=3V，R=1KΩ";
			// 
			// button78
			// 
			this->button78->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button78->ForeColor = System::Drawing::Color::Black;
			this->button78->Location = System::Drawing::Point(920, 391);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(90, 35);
			this->button78->TabIndex = 73;
			this->button78->Text = L"获取";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button78_Click);
			// 
			// labelTrial5_Uc_8
			// 
			this->labelTrial5_Uc_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_8->Location = System::Drawing::Point(920, 363);
			this->labelTrial5_Uc_8->Name = L"labelTrial5_Uc_8";
			this->labelTrial5_Uc_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_8->TabIndex = 72;
			// 
			// button79
			// 
			this->button79->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button79->ForeColor = System::Drawing::Color::Black;
			this->button79->Location = System::Drawing::Point(920, 301);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(90, 35);
			this->button79->TabIndex = 71;
			this->button79->Text = L"获取";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button79_Click);
			// 
			// labelTrial5_UL_8
			// 
			this->labelTrial5_UL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_8->Location = System::Drawing::Point(920, 273);
			this->labelTrial5_UL_8->Name = L"labelTrial5_UL_8";
			this->labelTrial5_UL_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_8->TabIndex = 70;
			// 
			// button80
			// 
			this->button80->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button80->ForeColor = System::Drawing::Color::Black;
			this->button80->Location = System::Drawing::Point(920, 222);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(90, 35);
			this->button80->TabIndex = 69;
			this->button80->Text = L"获取";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button80_Click);
			// 
			// textBoxTrial5_F8
			// 
			this->textBoxTrial5_F8->Location = System::Drawing::Point(920, 92);
			this->textBoxTrial5_F8->Name = L"textBoxTrial5_F8";
			this->textBoxTrial5_F8->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F8->TabIndex = 68;
			// 
			// labelTrial5_U0_8
			// 
			this->labelTrial5_U0_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_8->Location = System::Drawing::Point(920, 194);
			this->labelTrial5_U0_8->Name = L"labelTrial5_U0_8";
			this->labelTrial5_U0_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_8->TabIndex = 67;
			// 
			// button81
			// 
			this->button81->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button81->ForeColor = System::Drawing::Color::Black;
			this->button81->Location = System::Drawing::Point(824, 391);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(90, 35);
			this->button81->TabIndex = 66;
			this->button81->Text = L"获取";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button81_Click);
			// 
			// labelTrial5_Uc_7
			// 
			this->labelTrial5_Uc_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_7->Location = System::Drawing::Point(824, 363);
			this->labelTrial5_Uc_7->Name = L"labelTrial5_Uc_7";
			this->labelTrial5_Uc_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_7->TabIndex = 65;
			// 
			// button82
			// 
			this->button82->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button82->ForeColor = System::Drawing::Color::Black;
			this->button82->Location = System::Drawing::Point(824, 301);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(90, 35);
			this->button82->TabIndex = 64;
			this->button82->Text = L"获取";
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button82_Click);
			// 
			// labelTrial5_UL_7
			// 
			this->labelTrial5_UL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_7->Location = System::Drawing::Point(824, 273);
			this->labelTrial5_UL_7->Name = L"labelTrial5_UL_7";
			this->labelTrial5_UL_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_7->TabIndex = 63;
			// 
			// button83
			// 
			this->button83->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button83->ForeColor = System::Drawing::Color::Black;
			this->button83->Location = System::Drawing::Point(824, 222);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(90, 35);
			this->button83->TabIndex = 62;
			this->button83->Text = L"获取";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button83_Click);
			// 
			// textBoxTrial5_F7
			// 
			this->textBoxTrial5_F7->Location = System::Drawing::Point(824, 92);
			this->textBoxTrial5_F7->Name = L"textBoxTrial5_F7";
			this->textBoxTrial5_F7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F7->TabIndex = 61;
			// 
			// labelTrial5_U0_7
			// 
			this->labelTrial5_U0_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_7->Location = System::Drawing::Point(824, 194);
			this->labelTrial5_U0_7->Name = L"labelTrial5_U0_7";
			this->labelTrial5_U0_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_7->TabIndex = 60;
			// 
			// button84
			// 
			this->button84->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button84->ForeColor = System::Drawing::Color::Black;
			this->button84->Location = System::Drawing::Point(728, 391);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(90, 35);
			this->button84->TabIndex = 59;
			this->button84->Text = L"获取";
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button84_Click);
			// 
			// labelTrial5_Uc_6
			// 
			this->labelTrial5_Uc_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_6->Location = System::Drawing::Point(728, 363);
			this->labelTrial5_Uc_6->Name = L"labelTrial5_Uc_6";
			this->labelTrial5_Uc_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_6->TabIndex = 58;
			// 
			// button85
			// 
			this->button85->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button85->ForeColor = System::Drawing::Color::Black;
			this->button85->Location = System::Drawing::Point(728, 301);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(90, 35);
			this->button85->TabIndex = 57;
			this->button85->Text = L"获取";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button85_Click);
			// 
			// labelTrial5_UL_6
			// 
			this->labelTrial5_UL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_6->Location = System::Drawing::Point(728, 273);
			this->labelTrial5_UL_6->Name = L"labelTrial5_UL_6";
			this->labelTrial5_UL_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_6->TabIndex = 56;
			// 
			// button86
			// 
			this->button86->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button86->ForeColor = System::Drawing::Color::Black;
			this->button86->Location = System::Drawing::Point(728, 222);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(90, 35);
			this->button86->TabIndex = 55;
			this->button86->Text = L"获取";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button86_Click);
			// 
			// textBoxTrial5_F6
			// 
			this->textBoxTrial5_F6->Location = System::Drawing::Point(728, 92);
			this->textBoxTrial5_F6->Name = L"textBoxTrial5_F6";
			this->textBoxTrial5_F6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F6->TabIndex = 54;
			// 
			// labelTrial5_U0_6
			// 
			this->labelTrial5_U0_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_6->Location = System::Drawing::Point(728, 194);
			this->labelTrial5_U0_6->Name = L"labelTrial5_U0_6";
			this->labelTrial5_U0_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_6->TabIndex = 53;
			// 
			// button87
			// 
			this->button87->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button87->ForeColor = System::Drawing::Color::Black;
			this->button87->Location = System::Drawing::Point(632, 391);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(90, 35);
			this->button87->TabIndex = 52;
			this->button87->Text = L"获取";
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button87_Click);
			// 
			// labelTrial5_Uc_5
			// 
			this->labelTrial5_Uc_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_5->Location = System::Drawing::Point(632, 363);
			this->labelTrial5_Uc_5->Name = L"labelTrial5_Uc_5";
			this->labelTrial5_Uc_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_5->TabIndex = 51;
			// 
			// button88
			// 
			this->button88->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button88->ForeColor = System::Drawing::Color::Black;
			this->button88->Location = System::Drawing::Point(632, 301);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(90, 35);
			this->button88->TabIndex = 50;
			this->button88->Text = L"获取";
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button88_Click);
			// 
			// labelTrial5_UL_5
			// 
			this->labelTrial5_UL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_5->Location = System::Drawing::Point(632, 273);
			this->labelTrial5_UL_5->Name = L"labelTrial5_UL_5";
			this->labelTrial5_UL_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_5->TabIndex = 49;
			// 
			// button89
			// 
			this->button89->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button89->ForeColor = System::Drawing::Color::Black;
			this->button89->Location = System::Drawing::Point(632, 222);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(90, 35);
			this->button89->TabIndex = 48;
			this->button89->Text = L"获取";
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button89_Click);
			// 
			// textBoxTrial5_F5
			// 
			this->textBoxTrial5_F5->Location = System::Drawing::Point(632, 92);
			this->textBoxTrial5_F5->Name = L"textBoxTrial5_F5";
			this->textBoxTrial5_F5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F5->TabIndex = 47;
			// 
			// labelTrial5_U0_5
			// 
			this->labelTrial5_U0_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_5->Location = System::Drawing::Point(632, 194);
			this->labelTrial5_U0_5->Name = L"labelTrial5_U0_5";
			this->labelTrial5_U0_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_5->TabIndex = 46;
			// 
			// button90
			// 
			this->button90->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button90->ForeColor = System::Drawing::Color::Black;
			this->button90->Location = System::Drawing::Point(536, 391);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(90, 35);
			this->button90->TabIndex = 45;
			this->button90->Text = L"获取";
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button90_Click);
			// 
			// labelTrial5_Uc_4
			// 
			this->labelTrial5_Uc_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_4->Location = System::Drawing::Point(536, 363);
			this->labelTrial5_Uc_4->Name = L"labelTrial5_Uc_4";
			this->labelTrial5_Uc_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_4->TabIndex = 44;
			// 
			// button91
			// 
			this->button91->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button91->ForeColor = System::Drawing::Color::Black;
			this->button91->Location = System::Drawing::Point(536, 301);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(90, 35);
			this->button91->TabIndex = 43;
			this->button91->Text = L"获取";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button91_Click);
			// 
			// labelTrial5_UL_4
			// 
			this->labelTrial5_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_4->Location = System::Drawing::Point(536, 273);
			this->labelTrial5_UL_4->Name = L"labelTrial5_UL_4";
			this->labelTrial5_UL_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_4->TabIndex = 42;
			// 
			// button92
			// 
			this->button92->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button92->ForeColor = System::Drawing::Color::Black;
			this->button92->Location = System::Drawing::Point(536, 222);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(90, 35);
			this->button92->TabIndex = 41;
			this->button92->Text = L"获取";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button92_Click);
			// 
			// textBoxTrial5_F4
			// 
			this->textBoxTrial5_F4->Location = System::Drawing::Point(536, 92);
			this->textBoxTrial5_F4->Name = L"textBoxTrial5_F4";
			this->textBoxTrial5_F4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F4->TabIndex = 40;
			// 
			// labelTrial5_U0_4
			// 
			this->labelTrial5_U0_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_4->Location = System::Drawing::Point(536, 194);
			this->labelTrial5_U0_4->Name = L"labelTrial5_U0_4";
			this->labelTrial5_U0_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_4->TabIndex = 39;
			// 
			// button93
			// 
			this->button93->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button93->ForeColor = System::Drawing::Color::Black;
			this->button93->Location = System::Drawing::Point(440, 391);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(90, 35);
			this->button93->TabIndex = 38;
			this->button93->Text = L"获取";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button93_Click);
			// 
			// labelTrial5_Uc_3
			// 
			this->labelTrial5_Uc_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_3->Location = System::Drawing::Point(440, 363);
			this->labelTrial5_Uc_3->Name = L"labelTrial5_Uc_3";
			this->labelTrial5_Uc_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_3->TabIndex = 37;
			// 
			// button94
			// 
			this->button94->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button94->ForeColor = System::Drawing::Color::Black;
			this->button94->Location = System::Drawing::Point(440, 301);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(90, 35);
			this->button94->TabIndex = 36;
			this->button94->Text = L"获取";
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button94_Click);
			// 
			// labelTrial5_UL_3
			// 
			this->labelTrial5_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_3->Location = System::Drawing::Point(440, 273);
			this->labelTrial5_UL_3->Name = L"labelTrial5_UL_3";
			this->labelTrial5_UL_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_3->TabIndex = 35;
			// 
			// button95
			// 
			this->button95->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button95->ForeColor = System::Drawing::Color::Black;
			this->button95->Location = System::Drawing::Point(440, 222);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(90, 35);
			this->button95->TabIndex = 34;
			this->button95->Text = L"获取";
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button95_Click);
			// 
			// textBoxTrial5_F3
			// 
			this->textBoxTrial5_F3->Location = System::Drawing::Point(440, 92);
			this->textBoxTrial5_F3->Name = L"textBoxTrial5_F3";
			this->textBoxTrial5_F3->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F3->TabIndex = 33;
			// 
			// labelTrial5_U0_3
			// 
			this->labelTrial5_U0_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_3->Location = System::Drawing::Point(440, 194);
			this->labelTrial5_U0_3->Name = L"labelTrial5_U0_3";
			this->labelTrial5_U0_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_3->TabIndex = 32;
			// 
			// button96
			// 
			this->button96->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button96->ForeColor = System::Drawing::Color::Black;
			this->button96->Location = System::Drawing::Point(344, 391);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(90, 35);
			this->button96->TabIndex = 31;
			this->button96->Text = L"获取";
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button96_Click);
			// 
			// labelTrial5_Uc_2
			// 
			this->labelTrial5_Uc_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_2->Location = System::Drawing::Point(344, 363);
			this->labelTrial5_Uc_2->Name = L"labelTrial5_Uc_2";
			this->labelTrial5_Uc_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_2->TabIndex = 30;
			// 
			// button97
			// 
			this->button97->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button97->ForeColor = System::Drawing::Color::Black;
			this->button97->Location = System::Drawing::Point(344, 301);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(90, 35);
			this->button97->TabIndex = 29;
			this->button97->Text = L"获取";
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button97_Click);
			// 
			// labelTrial5_UL_2
			// 
			this->labelTrial5_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_2->Location = System::Drawing::Point(344, 273);
			this->labelTrial5_UL_2->Name = L"labelTrial5_UL_2";
			this->labelTrial5_UL_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_2->TabIndex = 28;
			// 
			// button98
			// 
			this->button98->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button98->ForeColor = System::Drawing::Color::Black;
			this->button98->Location = System::Drawing::Point(344, 222);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(90, 35);
			this->button98->TabIndex = 27;
			this->button98->Text = L"获取";
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button98_Click);
			// 
			// textBoxTrial5_F2
			// 
			this->textBoxTrial5_F2->Location = System::Drawing::Point(344, 92);
			this->textBoxTrial5_F2->Name = L"textBoxTrial5_F2";
			this->textBoxTrial5_F2->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F2->TabIndex = 26;
			// 
			// labelTrial5_U0_2
			// 
			this->labelTrial5_U0_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_2->Location = System::Drawing::Point(344, 194);
			this->labelTrial5_U0_2->Name = L"labelTrial5_U0_2";
			this->labelTrial5_U0_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_2->TabIndex = 25;
			// 
			// button99
			// 
			this->button99->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button99->ForeColor = System::Drawing::Color::Black;
			this->button99->Location = System::Drawing::Point(248, 391);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(90, 35);
			this->button99->TabIndex = 24;
			this->button99->Text = L"获取";
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button99_Click);
			// 
			// labelTrial5_Uc_1
			// 
			this->labelTrial5_Uc_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_1->Location = System::Drawing::Point(248, 363);
			this->labelTrial5_Uc_1->Name = L"labelTrial5_Uc_1";
			this->labelTrial5_Uc_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_1->TabIndex = 23;
			// 
			// button100
			// 
			this->button100->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button100->ForeColor = System::Drawing::Color::Black;
			this->button100->Location = System::Drawing::Point(248, 301);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(90, 35);
			this->button100->TabIndex = 22;
			this->button100->Text = L"获取";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button100_Click);
			// 
			// labelTrial5_UL_1
			// 
			this->labelTrial5_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_1->Location = System::Drawing::Point(248, 273);
			this->labelTrial5_UL_1->Name = L"labelTrial5_UL_1";
			this->labelTrial5_UL_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_1->TabIndex = 21;
			// 
			// label123
			// 
			this->label123->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label123->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label123->ForeColor = System::Drawing::Color::Black;
			this->label123->Location = System::Drawing::Point(28, 364);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(140, 25);
			this->label123->TabIndex = 20;
			this->label123->Text = L"UC（v）";
			// 
			// button101
			// 
			this->button101->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button101->ForeColor = System::Drawing::Color::Black;
			this->button101->Location = System::Drawing::Point(248, 222);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(90, 35);
			this->button101->TabIndex = 18;
			this->button101->Text = L"获取";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button101_Click);
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label124->ForeColor = System::Drawing::Color::Black;
			this->label124->Location = System::Drawing::Point(28, 274);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(140, 25);
			this->label124->TabIndex = 16;
			this->label124->Text = L"UL（v）";
			// 
			// textBoxTrial5_F1
			// 
			this->textBoxTrial5_F1->Location = System::Drawing::Point(248, 92);
			this->textBoxTrial5_F1->Name = L"textBoxTrial5_F1";
			this->textBoxTrial5_F1->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial5_F1->TabIndex = 15;
			// 
			// labelTrial5_U0_1
			// 
			this->labelTrial5_U0_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_1->Location = System::Drawing::Point(248, 194);
			this->labelTrial5_U0_1->Name = L"labelTrial5_U0_1";
			this->labelTrial5_U0_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_1->TabIndex = 14;
			// 
			// label126
			// 
			this->label126->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label126->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label126->ForeColor = System::Drawing::Color::Black;
			this->label126->Location = System::Drawing::Point(28, 195);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(140, 25);
			this->label126->TabIndex = 13;
			this->label126->Text = L"UO（v）";
			// 
			// label127
			// 
			this->label127->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label127->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label127->ForeColor = System::Drawing::Color::Black;
			this->label127->Location = System::Drawing::Point(28, 95);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(140, 25);
			this->label127->TabIndex = 11;
			this->label127->Text = L"频率F（KHz）";
			// 
			// label128
			// 
			this->label128->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label128->ForeColor = System::Drawing::Color::Black;
			this->label128->Location = System::Drawing::Point(24, 45);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(1161, 32);
			this->label128->TabIndex = 0;
			this->label128->Text = L"    在谐振点两侧，按频率递增或递减500Hz或1KHz，依次各取8个测量点，逐点测出U0，UL，Uc之值，记入数据表格。";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(11, 2842);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 189;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(565, 2800);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 188;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::button102_Click);
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(188, 2753);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1137, 28);
			this->textBox结论->TabIndex = 187;
			// 
			// label130
			// 
			this->label130->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label130->ForeColor = System::Drawing::Color::Black;
			this->label130->Location = System::Drawing::Point(12, 2756);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(95, 25);
			this->label130->TabIndex = 186;
			this->label130->Text = L"实验结论";
			// 
			// RLC串联谐振电路的研究实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1439, 1102);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label130);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RLC串联谐振电路的研究实验内容";
			this->Text = L"RLC串联谐振电路的研究实验内容";
			this->Load += gcnew System::EventHandler(this, &RLC串联谐振电路的研究实验内容::RLC串联谐振电路的研究实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^picdir = gcnew String(BMPSAVEPATH);
		String ^Trial1PT_name = picdir + "RLC串联谐振电路的研究Trial1_1.bmp";
	private: System::Void RLC串联谐振电路的研究实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
		 void SendData();
		 public :ST_RLC串联谐振电路的研究 Load_Grade_data();
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial1PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial1PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1->ImageLocation = Trial1PT_name;


}
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F1->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F2->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F3->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button106_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F4->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button107_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F5->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button112_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F6->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button111_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F7->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button110_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial3_F8->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U0_8->Text = global::GetKuangPingURMS1();
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_UL_8->Text = global::GetKuangPingURMS1();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Uc_8->Text = global::GetKuangPingURMS1();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_Uc->Text = global::GetKuangPingURMS1();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UL->Text = global::GetKuangPingURMS1();
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial4_Uc->Text = global::GetKuangPingURMS1();
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial4_UL->Text = global::GetKuangPingURMS1();
}
private: System::Void button133_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F1->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button132_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F2->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button131_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F3->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button130_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F4->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button129_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F5->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button128_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F6->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button127_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F7->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button126_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		float valuef = Convert::ToSingle(textBoxTrial5_F8->Text);
		int value = valuef * 100 * 1000;
		global::scs->SetFrequency(value);
	}
	catch (System::Exception^e) {

	}
}


private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_U0_8->Text = global::GetKuangPingURMS1();
}

private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_UL_8->Text = global::GetKuangPingURMS1();
}
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_1->Text = global::GetKuangPingURMS1();
}
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_2->Text = global::GetKuangPingURMS1();
}
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_3->Text = global::GetKuangPingURMS1();
}
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_4->Text = global::GetKuangPingURMS1();
}
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_5->Text = global::GetKuangPingURMS1();
}
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_6->Text = global::GetKuangPingURMS1();
}
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_7->Text = global::GetKuangPingURMS1();
}
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial5_Uc_8->Text = global::GetKuangPingURMS1();
}

};
}
