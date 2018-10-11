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
	/// 三相电路功率的测量实验内容 摘要
	/// </summary>
	public ref class 三相电路功率的测量实验内容 : public System::Windows::Forms::Form
	{
	public:
		三相电路功率的测量实验内容(void)
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
		~三相电路功率的测量实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_WW;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_calW;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_meaW;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_N;



	private: System::Windows::Forms::Label^  label19;


	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;










	private: System::Windows::Forms::Label^  label10;








	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_P_2;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_P_1;


	private: System::Windows::Forms::Label^  label21;


	private: System::Windows::Forms::Label^  label20;


	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_P_2;

	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_P_1;





	private: System::Windows::Forms::Label^  label25;


	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;

	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;


private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;




















private: System::Windows::Forms::Label^  label82;















private: System::Windows::Forms::TextBox^  textBoxTrial2_P_4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_P_3;







private: System::Windows::Forms::GroupBox^  groupBox2;









private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Label^  labelTrial3_I_3;

private: System::Windows::Forms::Label^  labelTrial3_U_3;
private: System::Windows::Forms::TextBox^  textBoxTrial3_QQ_3;


private: System::Windows::Forms::Label^  labelTrial3_I_2;

private: System::Windows::Forms::Label^  labelTrial3_U_2;
private: System::Windows::Forms::Label^  labelTrial3_I_1;


private: System::Windows::Forms::Label^  labelTrial3_U_1;

private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::TextBox^  textBoxTrial3_QQ_2;

private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::TextBox^  textBoxTrial3_QQ_1;

private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label115;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Label^  label116;
private: System::Windows::Forms::Label^  label117;
private: System::Windows::Forms::Label^  label118;
private: System::Windows::Forms::Label^  label119;
private: System::Windows::Forms::Label^  label120;
private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Label^  label122;
private: System::Windows::Forms::Label^  label123;
private: System::Windows::Forms::Label^  label124;
private: System::Windows::Forms::Label^  label126;
private: System::Windows::Forms::Label^  label127;
private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::Button^  button246;
private: System::Windows::Forms::Label^  label166;














private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  labelTrial1_PC_2;
private: System::Windows::Forms::Label^  labelTrial1_PC_1;
private: System::Windows::Forms::Label^  labelTrial1_PB_2;
private: System::Windows::Forms::Label^  labelTrial1_PB_1;
private: System::Windows::Forms::Label^  labelTrial1_PA_2;
private: System::Windows::Forms::Label^  labelTrial1_PA_1;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Label^  labelTrial2_P2_2;

private: System::Windows::Forms::Label^  labelTrial2_P2_1;

private: System::Windows::Forms::Label^  labelTrial2_P1_2;

private: System::Windows::Forms::Label^  labelTrial2_P1_1;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Label^  labelTrial2_P2_4;

private: System::Windows::Forms::Label^  labelTrial2_P2_3;

private: System::Windows::Forms::Label^  labelTrial2_P1_4;

private: System::Windows::Forms::Label^  labelTrial2_P1_3;
private: System::Windows::Forms::TextBox^  labelTrial3_Q_3;
private: System::Windows::Forms::TextBox^  labelTrial3_Q_2;
private: System::Windows::Forms::TextBox^  labelTrial3_Q_1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(三相电路功率的测量实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_PC_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PC_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PB_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PB_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PA_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PA_1 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTrial1_P_2 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_P_1 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_cal_WW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_calW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_meaW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_N = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_P2_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P2_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_P2_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P2_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_1 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_P_3 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_2 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_1 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_I_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_QQ_3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_I_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U_1 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_QQ_2 = (gcnew System::Windows::Forms::TextBox());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_QQ_1 = (gcnew System::Windows::Forms::TextBox());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->button246 = (gcnew System::Windows::Forms::Button());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Q_3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_Q_2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_Q_1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->labelTrial1_PC_2);
			this->groupBox8->Controls->Add(this->labelTrial1_PC_1);
			this->groupBox8->Controls->Add(this->labelTrial1_PB_2);
			this->groupBox8->Controls->Add(this->labelTrial1_PB_1);
			this->groupBox8->Controls->Add(this->labelTrial1_PA_2);
			this->groupBox8->Controls->Add(this->labelTrial1_PA_1);
			this->groupBox8->Controls->Add(this->label59);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_P_2);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->textBoxTrial1_P_1);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_WW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_calW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_meaW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_N);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(55, 74);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1247, 860);
			this->groupBox8->TabIndex = 86;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"三相电路功率的测量  实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::groupBox8_Enter);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(644, 820);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 36);
			this->button4->TabIndex = 119;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(544, 820);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 36);
			this->button5->TabIndex = 118;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(443, 820);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 36);
			this->button6->TabIndex = 117;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button6_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(644, 726);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 36);
			this->button3->TabIndex = 116;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button3_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(544, 726);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 36);
			this->button1->TabIndex = 115;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(443, 726);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 36);
			this->button2->TabIndex = 114;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button2_Click_1);
			// 
			// labelTrial1_PC_2
			// 
			this->labelTrial1_PC_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PC_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PC_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PC_2->Location = System::Drawing::Point(644, 781);
			this->labelTrial1_PC_2->Name = L"labelTrial1_PC_2";
			this->labelTrial1_PC_2->Size = System::Drawing::Size(83, 27);
			this->labelTrial1_PC_2->TabIndex = 104;
			// 
			// labelTrial1_PC_1
			// 
			this->labelTrial1_PC_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PC_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PC_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PC_1->Location = System::Drawing::Point(644, 694);
			this->labelTrial1_PC_1->Name = L"labelTrial1_PC_1";
			this->labelTrial1_PC_1->Size = System::Drawing::Size(83, 27);
			this->labelTrial1_PC_1->TabIndex = 103;
			// 
			// labelTrial1_PB_2
			// 
			this->labelTrial1_PB_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PB_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PB_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PB_2->Location = System::Drawing::Point(544, 782);
			this->labelTrial1_PB_2->Name = L"labelTrial1_PB_2";
			this->labelTrial1_PB_2->Size = System::Drawing::Size(83, 27);
			this->labelTrial1_PB_2->TabIndex = 102;
			// 
			// labelTrial1_PB_1
			// 
			this->labelTrial1_PB_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PB_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PB_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PB_1->Location = System::Drawing::Point(544, 695);
			this->labelTrial1_PB_1->Name = L"labelTrial1_PB_1";
			this->labelTrial1_PB_1->Size = System::Drawing::Size(83, 27);
			this->labelTrial1_PB_1->TabIndex = 101;
			// 
			// labelTrial1_PA_2
			// 
			this->labelTrial1_PA_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PA_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PA_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PA_2->Location = System::Drawing::Point(443, 783);
			this->labelTrial1_PA_2->Name = L"labelTrial1_PA_2";
			this->labelTrial1_PA_2->Size = System::Drawing::Size(83, 27);
			this->labelTrial1_PA_2->TabIndex = 100;
			// 
			// labelTrial1_PA_1
			// 
			this->labelTrial1_PA_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PA_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PA_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PA_1->Location = System::Drawing::Point(443, 696);
			this->labelTrial1_PA_1->Name = L"labelTrial1_PA_1";
			this->labelTrial1_PA_1->Size = System::Drawing::Size(83, 27);
			this->labelTrial1_PA_1->TabIndex = 99;
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(477, 513);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(85, 28);
			this->label59->TabIndex = 75;
			this->label59->Text = L"图19-4";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(297, 243);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(455, 251);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 74;
			this->pictureBox1->TabStop = false;
			// 
			// textBoxTrial1_P_2
			// 
			this->textBoxTrial1_P_2->Location = System::Drawing::Point(770, 779);
			this->textBoxTrial1_P_2->Name = L"textBoxTrial1_P_2";
			this->textBoxTrial1_P_2->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial1_P_2->TabIndex = 73;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(770, 639);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(110, 27);
			this->label22->TabIndex = 72;
			this->label22->Text = L"∑P（W）";
			// 
			// textBoxTrial1_P_1
			// 
			this->textBoxTrial1_P_1->Location = System::Drawing::Point(770, 693);
			this->textBoxTrial1_P_1->Name = L"textBoxTrial1_P_1";
			this->textBoxTrial1_P_1->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial1_P_1->TabIndex = 71;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(644, 639);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(83, 27);
			this->label21->TabIndex = 69;
			this->label21->Text = L"PC（W）";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(544, 639);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 27);
			this->label20->TabIndex = 66;
			this->label20->Text = L"PB（W）";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(443, 639);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 27);
			this->label18->TabIndex = 63;
			this->label18->Text = L"PA（W）";
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(446, 588);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(284, 27);
			this->label17->TabIndex = 62;
			this->label17->Text = L"开 灯 盏 数";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(360, 782);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 27);
			this->label12->TabIndex = 61;
			this->label12->Text = L"3";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(303, 782);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 27);
			this->label13->TabIndex = 60;
			this->label13->Text = L"2";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(246, 782);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 27);
			this->label16->TabIndex = 59;
			this->label16->Text = L"1";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(360, 695);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 27);
			this->label8->TabIndex = 58;
			this->label8->Text = L"3";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(303, 695);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 27);
			this->label9->TabIndex = 57;
			this->label9->Text = L"3";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(246, 695);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 27);
			this->label11->TabIndex = 56;
			this->label11->Text = L"3";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(360, 639);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 27);
			this->label7->TabIndex = 55;
			this->label7->Text = L"C相";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(303, 639);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 27);
			this->label6->TabIndex = 54;
			this->label6->Text = L"B相";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(246, 639);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 27);
			this->label15->TabIndex = 53;
			this->label15->Text = L"A相";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(24, 40);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1070, 200);
			this->label14->TabIndex = 52;
			this->label14->Text = resources->GetString(L"label14.Text");
			// 
			// textBoxTrial1_cal_WW
			// 
			this->textBoxTrial1_cal_WW->Location = System::Drawing::Point(438, 1592);
			this->textBoxTrial1_cal_WW->Name = L"textBoxTrial1_cal_WW";
			this->textBoxTrial1_cal_WW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_WW->TabIndex = 51;
			this->textBoxTrial1_cal_WW->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::textBoxTrial1_cal_WW_TextChanged);
			// 
			// textBoxTrial1_cal_calW
			// 
			this->textBoxTrial1_cal_calW->Location = System::Drawing::Point(324, 1593);
			this->textBoxTrial1_cal_calW->Name = L"textBoxTrial1_cal_calW";
			this->textBoxTrial1_cal_calW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_calW->TabIndex = 50;
			this->textBoxTrial1_cal_calW->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::textBoxTrial1_cal_calW_TextChanged);
			// 
			// textBoxTrial1_cal_meaW
			// 
			this->textBoxTrial1_cal_meaW->Location = System::Drawing::Point(208, 1593);
			this->textBoxTrial1_cal_meaW->Name = L"textBoxTrial1_cal_meaW";
			this->textBoxTrial1_cal_meaW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_meaW->TabIndex = 49;
			this->textBoxTrial1_cal_meaW->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::textBoxTrial1_cal_meaW_TextChanged);
			// 
			// textBoxTrial1_cal_N
			// 
			this->textBoxTrial1_cal_N->Location = System::Drawing::Point(553, 1592);
			this->textBoxTrial1_cal_N->Name = L"textBoxTrial1_cal_N";
			this->textBoxTrial1_cal_N->Size = System::Drawing::Size(135, 30);
			this->textBoxTrial1_cal_N->TabIndex = 45;
			this->textBoxTrial1_cal_N->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::textBoxTrial1_cal_N_TextChanged);
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(43, 1445);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(148, 27);
			this->label19->TabIndex = 41;
			this->label19->Text = L"负 载  情 况";
			this->label19->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label19_Click);
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(549, 1502);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(132, 49);
			this->label26->TabIndex = 35;
			this->label26->Text = L"电度表常数N";
			this->label26->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label26_Click);
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(437, 1503);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(96, 48);
			this->label28->TabIndex = 33;
			this->label28->Text = L"△W/W";
			this->label28->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label28_Click);
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(325, 1502);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(96, 50);
			this->label30->TabIndex = 31;
			this->label30->Text = L"计算电能W（KWh）";
			this->label30->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label30_Click);
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(211, 1502);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 48);
			this->label32->TabIndex = 29;
			this->label32->Text = L"实测电能W（KWh）";
			this->label32->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label32_Click);
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(43, 1593);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(148, 27);
			this->label33->TabIndex = 28;
			this->label33->Text = L"9×15W";
			this->label33->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label33_Click);
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(43, 1503);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(148, 50);
			this->label34->TabIndex = 27;
			this->label34->Text = L"9×15W";
			this->label34->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label34_Click);
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(210, 1443);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(622, 28);
			this->label10->TabIndex = 14;
			this->label10->Text = L"计   算   值";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label10_Click);
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(773, 587);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 27);
			this->label5->TabIndex = 5;
			this->label5->Text = L"计 算 值";
			this->label5->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label5_Click);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(249, 587);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 36);
			this->label4->TabIndex = 4;
			this->label4->Text = L"开 灯 盏 数";
			this->label4->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label4_Click);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(19, 782);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Y接不对称负载";
			this->label3->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label3_Click);
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(19, 695);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Y接对称负载";
			this->label2->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label2_Click);
			// 
			// label37
			// 
			this->label37->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(19, 588);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(211, 78);
			this->label37->TabIndex = 0;
			this->label37->Text = L"负 载 情 况";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label37->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label37_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(391, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 25);
			this->label1->TabIndex = 85;
			this->label1->Text = L"三相电路功率的测量 实验内容";
			this->label1->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_4);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_3);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_4);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_3);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_2);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_1);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_2);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_1);
			this->groupBox1->Controls->Add(this->label82);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_3);
			this->groupBox1->Controls->Add(this->label63);
			this->groupBox1->Controls->Add(this->label64);
			this->groupBox1->Controls->Add(this->label65);
			this->groupBox1->Controls->Add(this->label66);
			this->groupBox1->Controls->Add(this->label67);
			this->groupBox1->Controls->Add(this->label68);
			this->groupBox1->Controls->Add(this->label61);
			this->groupBox1->Controls->Add(this->label62);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_2);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_1);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Controls->Add(this->label38);
			this->groupBox1->Controls->Add(this->label39);
			this->groupBox1->Controls->Add(this->label40);
			this->groupBox1->Controls->Add(this->label41);
			this->groupBox1->Controls->Add(this->label42);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label48);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label53);
			this->groupBox1->Controls->Add(this->label54);
			this->groupBox1->Controls->Add(this->label55);
			this->groupBox1->Controls->Add(this->label56);
			this->groupBox1->Controls->Add(this->label57);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(55, 969);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1247, 957);
			this->groupBox1->TabIndex = 87;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"三相电路功率的测量  实验内容2";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::groupBox1_Enter);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(568, 908);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(115, 36);
			this->button11->TabIndex = 134;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(452, 908);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(110, 36);
			this->button12->TabIndex = 133;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(568, 821);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(115, 36);
			this->button13->TabIndex = 132;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(452, 821);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(110, 36);
			this->button14->TabIndex = 131;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button14_Click);
			// 
			// labelTrial2_P2_4
			// 
			this->labelTrial2_P2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_4->Location = System::Drawing::Point(568, 870);
			this->labelTrial2_P2_4->Name = L"labelTrial2_P2_4";
			this->labelTrial2_P2_4->Size = System::Drawing::Size(118, 27);
			this->labelTrial2_P2_4->TabIndex = 130;
			// 
			// labelTrial2_P2_3
			// 
			this->labelTrial2_P2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_3->Location = System::Drawing::Point(568, 790);
			this->labelTrial2_P2_3->Name = L"labelTrial2_P2_3";
			this->labelTrial2_P2_3->Size = System::Drawing::Size(118, 27);
			this->labelTrial2_P2_3->TabIndex = 129;
			// 
			// labelTrial2_P1_4
			// 
			this->labelTrial2_P1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_4->Location = System::Drawing::Point(452, 871);
			this->labelTrial2_P1_4->Name = L"labelTrial2_P1_4";
			this->labelTrial2_P1_4->Size = System::Drawing::Size(113, 27);
			this->labelTrial2_P1_4->TabIndex = 128;
			// 
			// labelTrial2_P1_3
			// 
			this->labelTrial2_P1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_3->Location = System::Drawing::Point(452, 791);
			this->labelTrial2_P1_3->Name = L"labelTrial2_P1_3";
			this->labelTrial2_P1_3->Size = System::Drawing::Size(113, 27);
			this->labelTrial2_P1_3->TabIndex = 127;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(568, 747);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 36);
			this->button7->TabIndex = 126;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(452, 747);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(110, 36);
			this->button8->TabIndex = 125;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(568, 660);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(115, 36);
			this->button9->TabIndex = 124;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(452, 660);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(110, 36);
			this->button10->TabIndex = 123;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button10_Click);
			// 
			// labelTrial2_P2_2
			// 
			this->labelTrial2_P2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_2->Location = System::Drawing::Point(568, 709);
			this->labelTrial2_P2_2->Name = L"labelTrial2_P2_2";
			this->labelTrial2_P2_2->Size = System::Drawing::Size(118, 27);
			this->labelTrial2_P2_2->TabIndex = 122;
			// 
			// labelTrial2_P2_1
			// 
			this->labelTrial2_P2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_1->Location = System::Drawing::Point(568, 629);
			this->labelTrial2_P2_1->Name = L"labelTrial2_P2_1";
			this->labelTrial2_P2_1->Size = System::Drawing::Size(118, 27);
			this->labelTrial2_P2_1->TabIndex = 121;
			// 
			// labelTrial2_P1_2
			// 
			this->labelTrial2_P1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_2->Location = System::Drawing::Point(452, 710);
			this->labelTrial2_P1_2->Name = L"labelTrial2_P1_2";
			this->labelTrial2_P1_2->Size = System::Drawing::Size(113, 27);
			this->labelTrial2_P1_2->TabIndex = 120;
			// 
			// labelTrial2_P1_1
			// 
			this->labelTrial2_P1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_1->Location = System::Drawing::Point(452, 630);
			this->labelTrial2_P1_1->Name = L"labelTrial2_P1_1";
			this->labelTrial2_P1_1->Size = System::Drawing::Size(113, 27);
			this->labelTrial2_P1_1->TabIndex = 119;
			// 
			// label82
			// 
			this->label82->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label82->ForeColor = System::Drawing::Color::Black;
			this->label82->Location = System::Drawing::Point(24, 401);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(978, 97);
			this->label82->TabIndex = 107;
			this->label82->Text = L"    经指导教师检查后，将实验台上A组三相交流可调电源调节到220V，使其输出线电压为220V，接通总电源，按表19－2的内容进行测量。\r\n   （2）参考实验"
				L"十六将三相灯组负载改按成△形接法，重复（1）的测量步骤，数据记入表19—2中。";
			// 
			// textBoxTrial2_P_4
			// 
			this->textBoxTrial2_P_4->Location = System::Drawing::Point(689, 868);
			this->textBoxTrial2_P_4->Name = L"textBoxTrial2_P_4";
			this->textBoxTrial2_P_4->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_4->TabIndex = 90;
			// 
			// textBoxTrial2_P_3
			// 
			this->textBoxTrial2_P_3->Location = System::Drawing::Point(689, 787);
			this->textBoxTrial2_P_3->Name = L"textBoxTrial2_P_3";
			this->textBoxTrial2_P_3->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_3->TabIndex = 89;
			// 
			// label63
			// 
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Black;
			this->label63->Location = System::Drawing::Point(369, 789);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(51, 27);
			this->label63->TabIndex = 84;
			this->label63->Text = L"3";
			// 
			// label64
			// 
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(312, 789);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(51, 27);
			this->label64->TabIndex = 83;
			this->label64->Text = L"2";
			// 
			// label65
			// 
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label65->ForeColor = System::Drawing::Color::Black;
			this->label65->Location = System::Drawing::Point(255, 789);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(51, 27);
			this->label65->TabIndex = 82;
			this->label65->Text = L"1";
			// 
			// label66
			// 
			this->label66->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label66->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label66->ForeColor = System::Drawing::Color::Black;
			this->label66->Location = System::Drawing::Point(369, 871);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(51, 27);
			this->label66->TabIndex = 81;
			this->label66->Text = L"3";
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(312, 871);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(51, 27);
			this->label67->TabIndex = 80;
			this->label67->Text = L"3";
			// 
			// label68
			// 
			this->label68->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label68->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label68->ForeColor = System::Drawing::Color::Black;
			this->label68->Location = System::Drawing::Point(255, 871);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(51, 27);
			this->label68->TabIndex = 79;
			this->label68->Text = L"3";
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(25, 871);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(211, 27);
			this->label61->TabIndex = 78;
			this->label61->Text = L"△接平衡负载";
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(25, 789);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(211, 27);
			this->label62->TabIndex = 77;
			this->label62->Text = L"△接不平衡负载";
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(461, 351);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(85, 28);
			this->label60->TabIndex = 76;
			this->label60->Text = L"图19-5";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(263, 147);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(489, 182);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 75;
			this->pictureBox2->TabStop = false;
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(24, 83);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(728, 39);
			this->label58->TabIndex = 74;
			this->label58->Text = L"   （1）按图 19－5接线，将三相灯组负载接成Y形接法（步骤1中将N线去除）。";
			// 
			// textBoxTrial2_P_2
			// 
			this->textBoxTrial2_P_2->Location = System::Drawing::Point(689, 705);
			this->textBoxTrial2_P_2->Name = L"textBoxTrial2_P_2";
			this->textBoxTrial2_P_2->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_2->TabIndex = 73;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(689, 572);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(110, 27);
			this->label23->TabIndex = 72;
			this->label23->Text = L"∑P（W）";
			// 
			// textBoxTrial2_P_1
			// 
			this->textBoxTrial2_P_1->Location = System::Drawing::Point(689, 626);
			this->textBoxTrial2_P_1->Name = L"textBoxTrial2_P_1";
			this->textBoxTrial2_P_1->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_1->TabIndex = 71;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(568, 572);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(115, 27);
			this->label25->TabIndex = 66;
			this->label25->Text = L"P2(W)";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(452, 574);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(110, 27);
			this->label27->TabIndex = 63;
			this->label27->Text = L"P1(W)";
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(452, 523);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(231, 27);
			this->label29->TabIndex = 62;
			this->label29->Text = L"测量数据";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(369, 710);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(51, 27);
			this->label31->TabIndex = 61;
			this->label31->Text = L"3";
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(312, 710);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(51, 27);
			this->label35->TabIndex = 60;
			this->label35->Text = L"2";
			// 
			// label36
			// 
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(255, 710);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(51, 27);
			this->label36->TabIndex = 59;
			this->label36->Text = L"1";
			// 
			// label38
			// 
			this->label38->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(369, 630);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(51, 27);
			this->label38->TabIndex = 58;
			this->label38->Text = L"3";
			// 
			// label39
			// 
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(312, 630);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(51, 27);
			this->label39->TabIndex = 57;
			this->label39->Text = L"3";
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(255, 630);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 27);
			this->label40->TabIndex = 56;
			this->label40->Text = L"3";
			// 
			// label41
			// 
			this->label41->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(369, 574);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(51, 27);
			this->label41->TabIndex = 55;
			this->label41->Text = L"C相";
			// 
			// label42
			// 
			this->label42->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(312, 574);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(51, 27);
			this->label42->TabIndex = 54;
			this->label42->Text = L"B相";
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(255, 574);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(51, 27);
			this->label43->TabIndex = 53;
			this->label43->Text = L"A相";
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(24, 40);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(399, 30);
			this->label44->TabIndex = 52;
			this->label44->Text = L"    2．二瓦特表法测定三相负载的总功率";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(438, 1592);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(94, 30);
			this->textBox15->TabIndex = 51;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(324, 1593);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(94, 30);
			this->textBox16->TabIndex = 50;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(208, 1593);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(94, 30);
			this->textBox17->TabIndex = 49;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(553, 1592);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(135, 30);
			this->textBox18->TabIndex = 45;
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(43, 1445);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(148, 27);
			this->label45->TabIndex = 41;
			this->label45->Text = L"负 载  情 况";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(549, 1502);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(132, 49);
			this->label46->TabIndex = 35;
			this->label46->Text = L"电度表常数N";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(437, 1503);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(96, 48);
			this->label47->TabIndex = 33;
			this->label47->Text = L"△W/W";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(325, 1502);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(96, 50);
			this->label48->TabIndex = 31;
			this->label48->Text = L"计算电能W（KWh）";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(211, 1502);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(96, 48);
			this->label49->TabIndex = 29;
			this->label49->Text = L"实测电能W（KWh）";
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(43, 1593);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(148, 27);
			this->label50->TabIndex = 28;
			this->label50->Text = L"9×15W";
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(43, 1503);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(148, 50);
			this->label51->TabIndex = 27;
			this->label51->Text = L"9×15W";
			// 
			// label52
			// 
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(210, 1443);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(622, 28);
			this->label52->TabIndex = 14;
			this->label52->Text = L"计   算   值";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Black;
			this->label53->Location = System::Drawing::Point(689, 520);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(110, 27);
			this->label53->TabIndex = 5;
			this->label53->Text = L"计 算 值";
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(255, 522);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(165, 36);
			this->label54->TabIndex = 4;
			this->label54->Text = L"开 灯 盏 数";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(28, 710);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(211, 27);
			this->label55->TabIndex = 3;
			this->label55->Text = L"Y接不平衡负载";
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(28, 630);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(211, 27);
			this->label56->TabIndex = 2;
			this->label56->Text = L"Y接平衡负载";
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(28, 523);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(211, 78);
			this->label57->TabIndex = 0;
			this->label57->Text = L"负 载 情 况";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelTrial3_Q_3);
			this->groupBox2->Controls->Add(this->labelTrial3_Q_2);
			this->groupBox2->Controls->Add(this->labelTrial3_Q_1);
			this->groupBox2->Controls->Add(this->label95);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->labelTrial3_I_3);
			this->groupBox2->Controls->Add(this->labelTrial3_U_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_QQ_3);
			this->groupBox2->Controls->Add(this->labelTrial3_I_2);
			this->groupBox2->Controls->Add(this->labelTrial3_U_2);
			this->groupBox2->Controls->Add(this->labelTrial3_I_1);
			this->groupBox2->Controls->Add(this->labelTrial3_U_1);
			this->groupBox2->Controls->Add(this->label99);
			this->groupBox2->Controls->Add(this->label100);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->label101);
			this->groupBox2->Controls->Add(this->textBoxTrial3_QQ_2);
			this->groupBox2->Controls->Add(this->label102);
			this->groupBox2->Controls->Add(this->textBoxTrial3_QQ_1);
			this->groupBox2->Controls->Add(this->label103);
			this->groupBox2->Controls->Add(this->label104);
			this->groupBox2->Controls->Add(this->label105);
			this->groupBox2->Controls->Add(this->label115);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->label116);
			this->groupBox2->Controls->Add(this->label117);
			this->groupBox2->Controls->Add(this->label118);
			this->groupBox2->Controls->Add(this->label119);
			this->groupBox2->Controls->Add(this->label120);
			this->groupBox2->Controls->Add(this->label121);
			this->groupBox2->Controls->Add(this->label122);
			this->groupBox2->Controls->Add(this->label123);
			this->groupBox2->Controls->Add(this->label124);
			this->groupBox2->Controls->Add(this->label126);
			this->groupBox2->Controls->Add(this->label127);
			this->groupBox2->Controls->Add(this->label128);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(55, 1963);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1247, 873);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"三相电路功率的测量  实验内容3";
			// 
			// label95
			// 
			this->label95->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label95->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label95->ForeColor = System::Drawing::Color::Black;
			this->label95->Location = System::Drawing::Point(609, 572);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(83, 27);
			this->label95->TabIndex = 108;
			this->label95->Text = L"Q(VAR)";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(773, 569);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(43, 32);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 107;
			this->pictureBox4->TabStop = false;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(510, 819);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 36);
			this->button17->TabIndex = 104;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(406, 819);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 36);
			this->button18->TabIndex = 103;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(510, 740);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 36);
			this->button19->TabIndex = 102;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(406, 740);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 36);
			this->button20->TabIndex = 101;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(510, 659);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 36);
			this->button21->TabIndex = 100;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(406, 659);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 36);
			this->button22->TabIndex = 99;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button22_Click);
			// 
			// labelTrial3_I_3
			// 
			this->labelTrial3_I_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_I_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I_3->Location = System::Drawing::Point(510, 786);
			this->labelTrial3_I_3->Name = L"labelTrial3_I_3";
			this->labelTrial3_I_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_I_3->TabIndex = 92;
			// 
			// labelTrial3_U_3
			// 
			this->labelTrial3_U_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U_3->Location = System::Drawing::Point(406, 787);
			this->labelTrial3_U_3->Name = L"labelTrial3_U_3";
			this->labelTrial3_U_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_U_3->TabIndex = 91;
			// 
			// textBoxTrial3_QQ_3
			// 
			this->textBoxTrial3_QQ_3->Location = System::Drawing::Point(720, 790);
			this->textBoxTrial3_QQ_3->Name = L"textBoxTrial3_QQ_3";
			this->textBoxTrial3_QQ_3->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial3_QQ_3->TabIndex = 89;
			// 
			// labelTrial3_I_2
			// 
			this->labelTrial3_I_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_I_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I_2->Location = System::Drawing::Point(510, 705);
			this->labelTrial3_I_2->Name = L"labelTrial3_I_2";
			this->labelTrial3_I_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_I_2->TabIndex = 88;
			// 
			// labelTrial3_U_2
			// 
			this->labelTrial3_U_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U_2->Location = System::Drawing::Point(406, 706);
			this->labelTrial3_U_2->Name = L"labelTrial3_U_2";
			this->labelTrial3_U_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_U_2->TabIndex = 87;
			// 
			// labelTrial3_I_1
			// 
			this->labelTrial3_I_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_I_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I_1->Location = System::Drawing::Point(510, 625);
			this->labelTrial3_I_1->Name = L"labelTrial3_I_1";
			this->labelTrial3_I_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_I_1->TabIndex = 86;
			// 
			// labelTrial3_U_1
			// 
			this->labelTrial3_U_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U_1->Location = System::Drawing::Point(406, 626);
			this->labelTrial3_U_1->Name = L"labelTrial3_U_1";
			this->labelTrial3_U_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_U_1->TabIndex = 85;
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label99->ForeColor = System::Drawing::Color::Black;
			this->label99->Location = System::Drawing::Point(25, 789);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(307, 27);
			this->label99->TabIndex = 77;
			this->label99->Text = L"（1）、（2）的并联负载";
			// 
			// label100
			// 
			this->label100->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label100->ForeColor = System::Drawing::Color::Black;
			this->label100->Location = System::Drawing::Point(477, 348);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(85, 28);
			this->label100->TabIndex = 76;
			this->label100->Text = L"图19-6";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(263, 147);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(488, 183);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 75;
			this->pictureBox3->TabStop = false;
			// 
			// label101
			// 
			this->label101->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label101->ForeColor = System::Drawing::Color::Black;
			this->label101->Location = System::Drawing::Point(24, 83);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(1122, 46);
			this->label101->TabIndex = 74;
			this->label101->Text = L"    每相负载由白炽灯和电容器并联而成，并由开关控制其接入。检查接线无误后，接通三相电源，将调压器的输出线电压调到220V，读取三表的读数，并计算无功功率∑Q，"
				L"记入表19－3。";
			// 
			// textBoxTrial3_QQ_2
			// 
			this->textBoxTrial3_QQ_2->Location = System::Drawing::Point(720, 708);
			this->textBoxTrial3_QQ_2->Name = L"textBoxTrial3_QQ_2";
			this->textBoxTrial3_QQ_2->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial3_QQ_2->TabIndex = 73;
			// 
			// label102
			// 
			this->label102->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label102->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label102->ForeColor = System::Drawing::Color::Black;
			this->label102->Location = System::Drawing::Point(720, 575);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(110, 27);
			this->label102->TabIndex = 72;
			this->label102->Text = L"∑Q=";
			// 
			// textBoxTrial3_QQ_1
			// 
			this->textBoxTrial3_QQ_1->Location = System::Drawing::Point(720, 629);
			this->textBoxTrial3_QQ_1->Name = L"textBoxTrial3_QQ_1";
			this->textBoxTrial3_QQ_1->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial3_QQ_1->TabIndex = 71;
			// 
			// label103
			// 
			this->label103->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label103->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(510, 572);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(83, 27);
			this->label103->TabIndex = 66;
			this->label103->Text = L"I(v)";
			// 
			// label104
			// 
			this->label104->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(409, 572);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(83, 27);
			this->label104->TabIndex = 63;
			this->label104->Text = L"U(v)";
			// 
			// label105
			// 
			this->label105->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(409, 521);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(280, 27);
			this->label105->TabIndex = 62;
			this->label105->Text = L"测  量  值";
			this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label115
			// 
			this->label115->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label115->ForeColor = System::Drawing::Color::Black;
			this->label115->Location = System::Drawing::Point(24, 37);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(866, 30);
			this->label115->TabIndex = 52;
			this->label115->Text = L"    3．用一瓦特表法测定三相对称星形负载的无功功率，按图19－6所示的电路接线。";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(438, 1592);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(94, 30);
			this->textBox5->TabIndex = 51;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(324, 1593);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(94, 30);
			this->textBox12->TabIndex = 50;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(208, 1593);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(94, 30);
			this->textBox13->TabIndex = 49;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(553, 1592);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(135, 30);
			this->textBox14->TabIndex = 45;
			// 
			// label116
			// 
			this->label116->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label116->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label116->ForeColor = System::Drawing::Color::Black;
			this->label116->Location = System::Drawing::Point(43, 1445);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(148, 27);
			this->label116->TabIndex = 41;
			this->label116->Text = L"负 载  情 况";
			// 
			// label117
			// 
			this->label117->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label117->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label117->ForeColor = System::Drawing::Color::Black;
			this->label117->Location = System::Drawing::Point(549, 1502);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(132, 49);
			this->label117->TabIndex = 35;
			this->label117->Text = L"电度表常数N";
			// 
			// label118
			// 
			this->label118->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label118->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label118->ForeColor = System::Drawing::Color::Black;
			this->label118->Location = System::Drawing::Point(437, 1503);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(96, 48);
			this->label118->TabIndex = 33;
			this->label118->Text = L"△W/W";
			// 
			// label119
			// 
			this->label119->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label119->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label119->ForeColor = System::Drawing::Color::Black;
			this->label119->Location = System::Drawing::Point(325, 1502);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(96, 50);
			this->label119->TabIndex = 31;
			this->label119->Text = L"计算电能W（KWh）";
			// 
			// label120
			// 
			this->label120->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label120->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label120->ForeColor = System::Drawing::Color::Black;
			this->label120->Location = System::Drawing::Point(211, 1502);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(96, 48);
			this->label120->TabIndex = 29;
			this->label120->Text = L"实测电能W（KWh）";
			// 
			// label121
			// 
			this->label121->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label121->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label121->ForeColor = System::Drawing::Color::Black;
			this->label121->Location = System::Drawing::Point(43, 1593);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(148, 27);
			this->label121->TabIndex = 28;
			this->label121->Text = L"9×15W";
			// 
			// label122
			// 
			this->label122->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label122->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label122->ForeColor = System::Drawing::Color::Black;
			this->label122->Location = System::Drawing::Point(43, 1503);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(148, 50);
			this->label122->TabIndex = 27;
			this->label122->Text = L"9×15W";
			// 
			// label123
			// 
			this->label123->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label123->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label123->ForeColor = System::Drawing::Color::Black;
			this->label123->Location = System::Drawing::Point(210, 1443);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(622, 28);
			this->label123->TabIndex = 14;
			this->label123->Text = L"计   算   值";
			this->label123->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label124->ForeColor = System::Drawing::Color::Black;
			this->label124->Location = System::Drawing::Point(720, 523);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(110, 27);
			this->label124->TabIndex = 5;
			this->label124->Text = L"计 算 值";
			// 
			// label126
			// 
			this->label126->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label126->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label126->ForeColor = System::Drawing::Color::Black;
			this->label126->Location = System::Drawing::Point(28, 710);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(307, 27);
			this->label126->TabIndex = 3;
			this->label126->Text = L"三相对称电容器（每相4.7μF）";
			// 
			// label127
			// 
			this->label127->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label127->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label127->ForeColor = System::Drawing::Color::Black;
			this->label127->Location = System::Drawing::Point(28, 630);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(307, 27);
			this->label127->TabIndex = 2;
			this->label127->Text = L"三相对称灯组（每相开3盏）";
			// 
			// label128
			// 
			this->label128->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label128->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label128->ForeColor = System::Drawing::Color::Black;
			this->label128->Location = System::Drawing::Point(28, 523);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(307, 78);
			this->label128->TabIndex = 0;
			this->label128->Text = L"负 载 情 况";
			this->label128->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button246
			// 
			this->button246->Location = System::Drawing::Point(619, 2862);
			this->button246->Name = L"button246";
			this->button246->Size = System::Drawing::Size(189, 37);
			this->button246->TabIndex = 119;
			this->button246->Text = L"成绩完成并上传";
			this->button246->UseVisualStyleBackColor = true;
			this->button246->Click += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::button246_Click);
			// 
			// label166
			// 
			this->label166->BackColor = System::Drawing::Color::SkyBlue;
			this->label166->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label166->Location = System::Drawing::Point(12, 2902);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(1412, 52);
			this->label166->TabIndex = 120;
			this->label166->Text = L"答题结束";
			this->label166->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial3_Q_3
			// 
			this->labelTrial3_Q_3->Location = System::Drawing::Point(604, 791);
			this->labelTrial3_Q_3->Name = L"labelTrial3_Q_3";
			this->labelTrial3_Q_3->Size = System::Drawing::Size(110, 30);
			this->labelTrial3_Q_3->TabIndex = 114;
			// 
			// labelTrial3_Q_2
			// 
			this->labelTrial3_Q_2->Location = System::Drawing::Point(604, 709);
			this->labelTrial3_Q_2->Name = L"labelTrial3_Q_2";
			this->labelTrial3_Q_2->Size = System::Drawing::Size(110, 30);
			this->labelTrial3_Q_2->TabIndex = 113;
			// 
			// labelTrial3_Q_1
			// 
			this->labelTrial3_Q_1->Location = System::Drawing::Point(604, 630);
			this->labelTrial3_Q_1->Name = L"labelTrial3_Q_1";
			this->labelTrial3_Q_1->Size = System::Drawing::Size(110, 30);
			this->labelTrial3_Q_1->TabIndex = 112;
			// 
			// 三相电路功率的测量实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1763, 735);
			this->Controls->Add(this->button246);
			this->Controls->Add(this->label166);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"三相电路功率的测量实验内容";
			this->Text = L"三相电路功率的测量实验内容";
			this->Load += gcnew System::EventHandler(this, &三相电路功率的测量实验内容::三相电路功率的测量实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_cal_WW_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_cal_calW_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_cal_meaW_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_cal_N_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_mea_n_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_mea_time_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label26_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label32_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label33_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label34_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void labelTrial1_mea_P_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void labelTrial1_mea_I_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void labelTrial1_mea_V_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_accuracy_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_N_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_UN_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxTrial1_IN_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label37_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 三相电路功率的测量实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
}
			public:ST_三相电路功率的测量 Load_Grade_data();
				   void SendData();
private: System::Void button246_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}

private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U_1->Text = global::GetGongPingU();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U_2->Text = global::GetGongPingU();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_U_3->Text = global::GetGongPingU();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I_1->Text = global::GetGongPingI();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I_2->Text = global::GetGongPingI();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_I_3->Text = global::GetGongPingI();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Q_1->Text = global::GetGongPingU();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Q_2->Text = global::GetGongPingU();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_Q_3->Text = global::GetGongPingU();
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_PC_1->Text = global::GetGongPingP();
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_PA_1->Text = global::GetGongPingP();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_PA_2->Text = global::GetGongPingP();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_PB_1->Text = global::GetGongPingP();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_PB_2->Text = global::GetGongPingP();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_PC_2->Text = global::GetGongPingP();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P1_1->Text = global::GetGongPingP();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P1_2->Text = global::GetGongPingP();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P1_3->Text = global::GetGongPingP();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P1_4->Text = global::GetGongPingP();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P2_1->Text = global::GetGongPingP();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P2_2->Text = global::GetGongPingP();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P2_3->Text = global::GetGongPingP();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P2_4->Text = global::GetGongPingP();
}
};
}
