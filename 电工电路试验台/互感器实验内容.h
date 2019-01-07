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
	/// 互感器实验内容 摘要
	/// </summary>
	public ref class 互感器实验内容 : public System::Windows::Forms::Form
	{
	public:
		互感器实验内容(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		ST_互感器 Load_Grade_data();
		void SendData();

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~互感器实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line7;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line7;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line7;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line7;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line7;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line6;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line6;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line6;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line6;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line6;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::GroupBox^  groupBox2;
























	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::GroupBox^  groupBox3;


























	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Button^  button102;



private: System::Windows::Forms::TextBox^  textBoxTrial1_2结论;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  textBoxTrial1_1结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_6;

private: System::Windows::Forms::Label^  textBoxTrial3_Line2_5;

private: System::Windows::Forms::Label^  textBoxTrial3_Line2_4;

private: System::Windows::Forms::Label^  textBoxTrial3_Line2_3;

private: System::Windows::Forms::Label^  textBoxTrial3_Line2_2;

private: System::Windows::Forms::Label^  textBoxTrial3_Line2_1;

private: System::Windows::Forms::Label^  textBoxTrial3_Line1_6;

private: System::Windows::Forms::Label^  textBoxTrial3_Line1_5;

private: System::Windows::Forms::Label^  textBoxTrial3_Line1_4;

private: System::Windows::Forms::Label^  textBoxTrial3_Line1_3;

private: System::Windows::Forms::Label^  textBoxTrial3_Line1_2;

private: System::Windows::Forms::Label^  textBoxTrial3_Line1_1;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_6;

private: System::Windows::Forms::Label^  textBoxTrial4_Line2_5;

private: System::Windows::Forms::Label^  textBoxTrial4_Line2_4;

private: System::Windows::Forms::Label^  textBoxTrial4_Line2_3;

private: System::Windows::Forms::Label^  textBoxTrial4_Line2_2;

private: System::Windows::Forms::Label^  textBoxTrial4_Line2_1;

private: System::Windows::Forms::Label^  textBoxTrial4_Line1_6;

private: System::Windows::Forms::Label^  textBoxTrial4_Line1_5;

private: System::Windows::Forms::Label^  textBoxTrial4_Line1_1;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_4;

private: System::Windows::Forms::Label^  textBoxTrial4_Line1_2;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_3;


private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(互感器实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial1_2结论 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_1结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line7 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_I1_line7 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U1_line7 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line7 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line6 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_I1_line6 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U1_line6 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_Line2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_1 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial4_Line2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_3 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_2结论);
			this->groupBox8->Controls->Add(this->label46);
			this->groupBox8->Controls->Add(this->textBoxTrial1_1结论);
			this->groupBox8->Controls->Add(this->label105);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->button25);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line7);
			this->groupBox8->Controls->Add(this->button26);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line7);
			this->groupBox8->Controls->Add(this->button27);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line7);
			this->groupBox8->Controls->Add(this->button28);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line7);
			this->groupBox8->Controls->Add(this->button21);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line6);
			this->groupBox8->Controls->Add(this->button22);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line6);
			this->groupBox8->Controls->Add(this->button23);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line6);
			this->groupBox8->Controls->Add(this->button24);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line6);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 85);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 946);
			this->groupBox8->TabIndex = 86;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"互感器 实验内容1";
			// 
			// textBoxTrial1_2结论
			// 
			this->textBoxTrial1_2结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_2结论->Location = System::Drawing::Point(205, 888);
			this->textBoxTrial1_2结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial1_2结论->Name = L"textBoxTrial1_2结论";
			this->textBoxTrial1_2结论->Size = System::Drawing::Size(1070, 28);
			this->textBoxTrial1_2结论->TabIndex = 183;
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(29, 892);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(95, 25);
			this->label46->TabIndex = 182;
			this->label46->Text = L"实验结论";
			// 
			// textBoxTrial1_1结论
			// 
			this->textBoxTrial1_1结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_1结论->Location = System::Drawing::Point(190, 433);
			this->textBoxTrial1_1结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTrial1_1结论->Name = L"textBoxTrial1_1结论";
			this->textBoxTrial1_1结论->Size = System::Drawing::Size(1085, 28);
			this->textBoxTrial1_1结论->TabIndex = 181;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(14, 437);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 180;
			this->label105->Text = L"实验结论";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(6, 829);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1161, 54);
			this->label5->TabIndex = 147;
			this->label5->Text = L"    接通交流电源后，然后用 交流毫伏表测量U13，U12，U34，判定同名端。\r\n    拆去2、4联线，并将2、3相接，重复上述步骤，判定同名端。";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(508, 806);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 21);
			this->label3->TabIndex = 146;
			this->label3->Text = L"图23-2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(205, 590);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(658, 213);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 145;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(6, 499);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1161, 76);
			this->label4->TabIndex = 144;
			this->label4->Text = L"（2）交流法\r\n    按图23－2接线，将N1、N2同心式套在一起。N1串接交流电流表后接至交流电源3V的输出，N2侧开路（发光二极管用导线直接短接，并插入话筒"
				L"线则电路开路），并在两线圈中插入铁芯。";
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(238, 1322);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(82, 31);
			this->button25->TabIndex = 143;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_U2_line7
			// 
			this->labelTrial1_U2_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line7->Location = System::Drawing::Point(238, 1294);
			this->labelTrial1_U2_line7->Name = L"labelTrial1_U2_line7";
			this->labelTrial1_U2_line7->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line7->TabIndex = 142;
			// 
			// textBoxTrial1_GAver_line7
			// 
			this->textBoxTrial1_GAver_line7->Location = System::Drawing::Point(805, 1294);
			this->textBoxTrial1_GAver_line7->Name = L"textBoxTrial1_GAver_line7";
			this->textBoxTrial1_GAver_line7->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line7->TabIndex = 141;
			// 
			// textBoxTrial1_G2_line7
			// 
			this->textBoxTrial1_G2_line7->Location = System::Drawing::Point(687, 1294);
			this->textBoxTrial1_G2_line7->Name = L"textBoxTrial1_G2_line7";
			this->textBoxTrial1_G2_line7->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line7->TabIndex = 140;
			// 
			// labelTrial1_I2_line7
			// 
			this->labelTrial1_I2_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line7->Location = System::Drawing::Point(466, 1294);
			this->labelTrial1_I2_line7->Name = L"labelTrial1_I2_line7";
			this->labelTrial1_I2_line7->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line7->TabIndex = 139;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(466, 1322);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(97, 31);
			this->button26->TabIndex = 138;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_I1_line7
			// 
			this->labelTrial1_I1_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line7->Location = System::Drawing::Point(338, 1294);
			this->labelTrial1_I1_line7->Name = L"labelTrial1_I1_line7";
			this->labelTrial1_I1_line7->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line7->TabIndex = 137;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(338, 1322);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(106, 31);
			this->button27->TabIndex = 136;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_U1_line7
			// 
			this->labelTrial1_U1_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line7->Location = System::Drawing::Point(129, 1294);
			this->labelTrial1_U1_line7->Name = L"labelTrial1_U1_line7";
			this->labelTrial1_U1_line7->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line7->TabIndex = 135;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(129, 1322);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(90, 31);
			this->button28->TabIndex = 134;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial1_G1_line7
			// 
			this->textBoxTrial1_G1_line7->Location = System::Drawing::Point(569, 1292);
			this->textBoxTrial1_G1_line7->Name = L"textBoxTrial1_G1_line7";
			this->textBoxTrial1_G1_line7->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line7->TabIndex = 133;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(238, 1248);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(82, 31);
			this->button21->TabIndex = 132;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_U2_line6
			// 
			this->labelTrial1_U2_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line6->Location = System::Drawing::Point(238, 1220);
			this->labelTrial1_U2_line6->Name = L"labelTrial1_U2_line6";
			this->labelTrial1_U2_line6->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line6->TabIndex = 131;
			// 
			// textBoxTrial1_GAver_line6
			// 
			this->textBoxTrial1_GAver_line6->Location = System::Drawing::Point(805, 1220);
			this->textBoxTrial1_GAver_line6->Name = L"textBoxTrial1_GAver_line6";
			this->textBoxTrial1_GAver_line6->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line6->TabIndex = 130;
			// 
			// textBoxTrial1_G2_line6
			// 
			this->textBoxTrial1_G2_line6->Location = System::Drawing::Point(687, 1220);
			this->textBoxTrial1_G2_line6->Name = L"textBoxTrial1_G2_line6";
			this->textBoxTrial1_G2_line6->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line6->TabIndex = 129;
			// 
			// labelTrial1_I2_line6
			// 
			this->labelTrial1_I2_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line6->Location = System::Drawing::Point(466, 1220);
			this->labelTrial1_I2_line6->Name = L"labelTrial1_I2_line6";
			this->labelTrial1_I2_line6->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line6->TabIndex = 128;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(466, 1248);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(97, 31);
			this->button22->TabIndex = 127;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_I1_line6
			// 
			this->labelTrial1_I1_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line6->Location = System::Drawing::Point(338, 1220);
			this->labelTrial1_I1_line6->Name = L"labelTrial1_I1_line6";
			this->labelTrial1_I1_line6->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line6->TabIndex = 126;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(338, 1248);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(106, 31);
			this->button23->TabIndex = 125;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_U1_line6
			// 
			this->labelTrial1_U1_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line6->Location = System::Drawing::Point(129, 1220);
			this->labelTrial1_U1_line6->Name = L"labelTrial1_U1_line6";
			this->labelTrial1_U1_line6->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line6->TabIndex = 124;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(129, 1248);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(90, 31);
			this->button24->TabIndex = 123;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// textBoxTrial1_G1_line6
			// 
			this->textBoxTrial1_G1_line6->Location = System::Drawing::Point(569, 1218);
			this->textBoxTrial1_G1_line6->Name = L"textBoxTrial1_G1_line6";
			this->textBoxTrial1_G1_line6->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line6->TabIndex = 122;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(6, 1295);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(101, 25);
			this->label17->TabIndex = 70;
			this->label17->Text = L"5K";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(6, 1220);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 25);
			this->label14->TabIndex = 69;
			this->label14->Text = L"4K";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(508, 402);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"图23-1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(205, 178);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(722, 209);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(6, 40);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1161, 117);
			this->label37->TabIndex = 0;
			this->label37->Text = L"1．分别用直流法和交流法测定互感线圈的同名湍。\r\n    （1）直流法\r\n    实验线路如图23－1所示，电位器R可不接。将N1，N2同心式套在一起，并放入铁芯"
				L"。U1为可调直流稳压电源，调至3V，N2侧用电流话筒检测线接入50uA检流计(发光二极管用导线直接短接)。将铁芯迅速地拨出和插入，观察微安表指针正偏反偏的变化，"
				L"来判定N1和N2两个线圈的同名端。";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(486, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 25);
			this->label1->TabIndex = 85;
			this->label1->Text = L"互感器 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(12, 1047);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 172);
			this->groupBox1->TabIndex = 148;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"互感器 实验内容2";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(238, 1322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 31);
			this->button1->TabIndex = 143;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(238, 1294);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 25);
			this->label9->TabIndex = 142;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(805, 1294);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 30);
			this->textBox1->TabIndex = 141;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(687, 1294);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 30);
			this->textBox2->TabIndex = 140;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(466, 1294);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 25);
			this->label10->TabIndex = 139;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(466, 1322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 31);
			this->button2->TabIndex = 138;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(338, 1294);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 25);
			this->label11->TabIndex = 137;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(338, 1322);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 31);
			this->button3->TabIndex = 136;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(129, 1294);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 25);
			this->label12->TabIndex = 135;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(129, 1322);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 31);
			this->button4->TabIndex = 134;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(569, 1292);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 30);
			this->textBox3->TabIndex = 133;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(238, 1248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 31);
			this->button5->TabIndex = 132;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(238, 1220);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 25);
			this->label13->TabIndex = 131;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(805, 1220);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(193, 30);
			this->textBox4->TabIndex = 130;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(687, 1220);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(112, 30);
			this->textBox5->TabIndex = 129;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(466, 1220);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(97, 25);
			this->label15->TabIndex = 128;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(466, 1248);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 31);
			this->button6->TabIndex = 127;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(338, 1220);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(106, 25);
			this->label16->TabIndex = 126;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(338, 1248);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 31);
			this->button7->TabIndex = 125;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(129, 1220);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(90, 25);
			this->label18->TabIndex = 124;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(129, 1248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 31);
			this->button8->TabIndex = 123;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(569, 1218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(112, 30);
			this->textBox6->TabIndex = 122;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(6, 1295);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(101, 25);
			this->label19->TabIndex = 70;
			this->label19->Text = L"5K";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(6, 1220);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(101, 25);
			this->label20->TabIndex = 69;
			this->label20->Text = L"4K";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(14, 48);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(1161, 85);
			this->label22->TabIndex = 0;
			this->label22->Text = L"2．观察互感现象\r\n    在图23－2的N2侧接人LED发光二级管与510Ω串联的支路。\r\n   （1）将铁芯慢慢地从两线圈中抽出和插入，观察各电表读数的变化，"
				L"记录现象。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label48);
			this->groupBox2->Controls->Add(this->label47);
			this->groupBox2->Controls->Add(this->button39);
			this->groupBox2->Controls->Add(this->button40);
			this->groupBox2->Controls->Add(this->button41);
			this->groupBox2->Controls->Add(this->button42);
			this->groupBox2->Controls->Add(this->button43);
			this->groupBox2->Controls->Add(this->button44);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->button35);
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_1);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(12, 1225);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 338);
			this->groupBox2->TabIndex = 149;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"互感器 实验内容3";
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(937, 303);
			this->button39->Name = L"button39";
			this->button39->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button39->Size = System::Drawing::Size(112, 29);
			this->button39->TabIndex = 181;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &互感器实验内容::button39_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(797, 303);
			this->button40->Name = L"button40";
			this->button40->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button40->Size = System::Drawing::Size(112, 29);
			this->button40->TabIndex = 180;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &互感器实验内容::button40_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(650, 303);
			this->button41->Name = L"button41";
			this->button41->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button41->Size = System::Drawing::Size(112, 29);
			this->button41->TabIndex = 179;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &互感器实验内容::button41_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(512, 303);
			this->button42->Name = L"button42";
			this->button42->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button42->Size = System::Drawing::Size(112, 29);
			this->button42->TabIndex = 178;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &互感器实验内容::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(372, 303);
			this->button43->Name = L"button43";
			this->button43->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button43->Size = System::Drawing::Size(112, 29);
			this->button43->TabIndex = 177;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &互感器实验内容::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(222, 303);
			this->button44->Name = L"button44";
			this->button44->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button44->Size = System::Drawing::Size(115, 29);
			this->button44->TabIndex = 176;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &互感器实验内容::button44_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(937, 210);
			this->button33->Name = L"button33";
			this->button33->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button33->Size = System::Drawing::Size(112, 29);
			this->button33->TabIndex = 175;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &互感器实验内容::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(797, 210);
			this->button34->Name = L"button34";
			this->button34->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button34->Size = System::Drawing::Size(112, 29);
			this->button34->TabIndex = 174;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &互感器实验内容::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(650, 210);
			this->button35->Name = L"button35";
			this->button35->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button35->Size = System::Drawing::Size(112, 29);
			this->button35->TabIndex = 173;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &互感器实验内容::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(512, 210);
			this->button36->Name = L"button36";
			this->button36->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button36->Size = System::Drawing::Size(112, 29);
			this->button36->TabIndex = 172;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &互感器实验内容::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(372, 210);
			this->button37->Name = L"button37";
			this->button37->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button37->Size = System::Drawing::Size(112, 29);
			this->button37->TabIndex = 171;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &互感器实验内容::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(222, 210);
			this->button38->Name = L"button38";
			this->button38->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button38->Size = System::Drawing::Size(115, 29);
			this->button38->TabIndex = 170;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &互感器实验内容::button38_Click);
			// 
			// textBoxTrial3_Line2_6
			// 
			this->textBoxTrial3_Line2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line2_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line2_6->Location = System::Drawing::Point(937, 261);
			this->textBoxTrial3_Line2_6->Name = L"textBoxTrial3_Line2_6";
			this->textBoxTrial3_Line2_6->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line2_6->TabIndex = 169;
			// 
			// textBoxTrial3_Line2_5
			// 
			this->textBoxTrial3_Line2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line2_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line2_5->Location = System::Drawing::Point(797, 261);
			this->textBoxTrial3_Line2_5->Name = L"textBoxTrial3_Line2_5";
			this->textBoxTrial3_Line2_5->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line2_5->TabIndex = 168;
			// 
			// textBoxTrial3_Line2_4
			// 
			this->textBoxTrial3_Line2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line2_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line2_4->Location = System::Drawing::Point(650, 261);
			this->textBoxTrial3_Line2_4->Name = L"textBoxTrial3_Line2_4";
			this->textBoxTrial3_Line2_4->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line2_4->TabIndex = 167;
			// 
			// textBoxTrial3_Line2_3
			// 
			this->textBoxTrial3_Line2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line2_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line2_3->Location = System::Drawing::Point(512, 261);
			this->textBoxTrial3_Line2_3->Name = L"textBoxTrial3_Line2_3";
			this->textBoxTrial3_Line2_3->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line2_3->TabIndex = 166;
			// 
			// textBoxTrial3_Line2_2
			// 
			this->textBoxTrial3_Line2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line2_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line2_2->Location = System::Drawing::Point(372, 261);
			this->textBoxTrial3_Line2_2->Name = L"textBoxTrial3_Line2_2";
			this->textBoxTrial3_Line2_2->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line2_2->TabIndex = 165;
			// 
			// textBoxTrial3_Line2_1
			// 
			this->textBoxTrial3_Line2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line2_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line2_1->Location = System::Drawing::Point(225, 261);
			this->textBoxTrial3_Line2_1->Name = L"textBoxTrial3_Line2_1";
			this->textBoxTrial3_Line2_1->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line2_1->TabIndex = 164;
			// 
			// textBoxTrial3_Line1_6
			// 
			this->textBoxTrial3_Line1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line1_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line1_6->Location = System::Drawing::Point(937, 169);
			this->textBoxTrial3_Line1_6->Name = L"textBoxTrial3_Line1_6";
			this->textBoxTrial3_Line1_6->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line1_6->TabIndex = 163;
			// 
			// textBoxTrial3_Line1_5
			// 
			this->textBoxTrial3_Line1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line1_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line1_5->Location = System::Drawing::Point(797, 169);
			this->textBoxTrial3_Line1_5->Name = L"textBoxTrial3_Line1_5";
			this->textBoxTrial3_Line1_5->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line1_5->TabIndex = 162;
			// 
			// textBoxTrial3_Line1_4
			// 
			this->textBoxTrial3_Line1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line1_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line1_4->Location = System::Drawing::Point(650, 169);
			this->textBoxTrial3_Line1_4->Name = L"textBoxTrial3_Line1_4";
			this->textBoxTrial3_Line1_4->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line1_4->TabIndex = 161;
			// 
			// textBoxTrial3_Line1_3
			// 
			this->textBoxTrial3_Line1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line1_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line1_3->Location = System::Drawing::Point(512, 169);
			this->textBoxTrial3_Line1_3->Name = L"textBoxTrial3_Line1_3";
			this->textBoxTrial3_Line1_3->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line1_3->TabIndex = 160;
			// 
			// textBoxTrial3_Line1_2
			// 
			this->textBoxTrial3_Line1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line1_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line1_2->Location = System::Drawing::Point(372, 169);
			this->textBoxTrial3_Line1_2->Name = L"textBoxTrial3_Line1_2";
			this->textBoxTrial3_Line1_2->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line1_2->TabIndex = 159;
			// 
			// textBoxTrial3_Line1_1
			// 
			this->textBoxTrial3_Line1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Line1_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Line1_1->Location = System::Drawing::Point(225, 169);
			this->textBoxTrial3_Line1_1->Name = L"textBoxTrial3_Line1_1";
			this->textBoxTrial3_Line1_1->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial3_Line1_1->TabIndex = 158;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(6, 261);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(156, 27);
			this->label31->TabIndex = 145;
			this->label31->Text = L"互感电流输出";
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(6, 171);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(156, 27);
			this->label30->TabIndex = 144;
			this->label30->Text = L"互感电流输入";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(238, 1322);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(82, 31);
			this->button9->TabIndex = 143;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(238, 1294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 25);
			this->label6->TabIndex = 142;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(805, 1294);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(193, 30);
			this->textBox7->TabIndex = 141;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(687, 1294);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 30);
			this->textBox8->TabIndex = 140;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(466, 1294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 25);
			this->label7->TabIndex = 139;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(466, 1322);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(97, 31);
			this->button10->TabIndex = 138;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(338, 1294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 25);
			this->label8->TabIndex = 137;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(338, 1322);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 31);
			this->button11->TabIndex = 136;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(129, 1294);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 25);
			this->label21->TabIndex = 135;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(129, 1322);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 31);
			this->button12->TabIndex = 134;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(569, 1292);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(112, 30);
			this->textBox9->TabIndex = 133;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(238, 1248);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 31);
			this->button13->TabIndex = 132;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(238, 1220);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(82, 25);
			this->label23->TabIndex = 131;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(805, 1220);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(193, 30);
			this->textBox10->TabIndex = 130;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(687, 1220);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(112, 30);
			this->textBox11->TabIndex = 129;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(466, 1220);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(97, 25);
			this->label24->TabIndex = 128;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(466, 1248);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 31);
			this->button14->TabIndex = 127;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(338, 1220);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(106, 25);
			this->label25->TabIndex = 126;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(338, 1248);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(106, 31);
			this->button15->TabIndex = 125;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(129, 1220);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(90, 25);
			this->label26->TabIndex = 124;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(129, 1248);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 31);
			this->button16->TabIndex = 123;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(569, 1218);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(112, 30);
			this->textBox12->TabIndex = 122;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(6, 1295);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(101, 25);
			this->label27->TabIndex = 70;
			this->label27->Text = L"5K";
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(6, 1220);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(101, 25);
			this->label28->TabIndex = 69;
			this->label28->Text = L"4K";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(6, 40);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(1161, 107);
			this->label29->TabIndex = 0;
			this->label29->Text = L"3.电流互感器\r\n    电流互感器OUT侧用电流话筒检测线接入交流电流表。IN接入交流电流（例如三相调压输出30V，串30/5W电阻），测量OUT侧电流大小。\r"
				L"\n    改变调压器输出电压和负载获得不同数值的交流电流，并测量OUT侧电流大小。实验时应注意负载的功率是否可以承受，否则容易损坏器件。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label49);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Controls->Add(this->button51);
			this->groupBox3->Controls->Add(this->button52);
			this->groupBox3->Controls->Add(this->button53);
			this->groupBox3->Controls->Add(this->button54);
			this->groupBox3->Controls->Add(this->button55);
			this->groupBox3->Controls->Add(this->button56);
			this->groupBox3->Controls->Add(this->button45);
			this->groupBox3->Controls->Add(this->button46);
			this->groupBox3->Controls->Add(this->button47);
			this->groupBox3->Controls->Add(this->button48);
			this->groupBox3->Controls->Add(this->button49);
			this->groupBox3->Controls->Add(this->button50);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_6);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_5);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_4);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_3);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_2);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_1);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_6);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_5);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_1);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_4);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_2);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_3);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->textBox37);
			this->groupBox3->Controls->Add(this->textBox38);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->textBox39);
			this->groupBox3->Controls->Add(this->button29);
			this->groupBox3->Controls->Add(this->label39);
			this->groupBox3->Controls->Add(this->textBox40);
			this->groupBox3->Controls->Add(this->textBox41);
			this->groupBox3->Controls->Add(this->label40);
			this->groupBox3->Controls->Add(this->button30);
			this->groupBox3->Controls->Add(this->label41);
			this->groupBox3->Controls->Add(this->button31);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->button32);
			this->groupBox3->Controls->Add(this->textBox42);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(12, 1579);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1296, 377);
			this->groupBox3->TabIndex = 158;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"互感器 实验内容4";
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(909, 317);
			this->button51->Name = L"button51";
			this->button51->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button51->Size = System::Drawing::Size(112, 29);
			this->button51->TabIndex = 205;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &互感器实验内容::button51_Click);
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(769, 317);
			this->button52->Name = L"button52";
			this->button52->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button52->Size = System::Drawing::Size(112, 29);
			this->button52->TabIndex = 204;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &互感器实验内容::button52_Click);
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(622, 317);
			this->button53->Name = L"button53";
			this->button53->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button53->Size = System::Drawing::Size(112, 29);
			this->button53->TabIndex = 203;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &互感器实验内容::button53_Click);
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(484, 317);
			this->button54->Name = L"button54";
			this->button54->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button54->Size = System::Drawing::Size(112, 29);
			this->button54->TabIndex = 202;
			this->button54->Text = L"获取";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &互感器实验内容::button54_Click);
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button55->ForeColor = System::Drawing::Color::Black;
			this->button55->Location = System::Drawing::Point(344, 317);
			this->button55->Name = L"button55";
			this->button55->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button55->Size = System::Drawing::Size(112, 29);
			this->button55->TabIndex = 201;
			this->button55->Text = L"获取";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &互感器实验内容::button55_Click);
			// 
			// button56
			// 
			this->button56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button56->ForeColor = System::Drawing::Color::Black;
			this->button56->Location = System::Drawing::Point(194, 317);
			this->button56->Name = L"button56";
			this->button56->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button56->Size = System::Drawing::Size(115, 29);
			this->button56->TabIndex = 200;
			this->button56->Text = L"获取";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &互感器实验内容::button56_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(909, 232);
			this->button45->Name = L"button45";
			this->button45->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button45->Size = System::Drawing::Size(112, 29);
			this->button45->TabIndex = 199;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &互感器实验内容::button45_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(769, 232);
			this->button46->Name = L"button46";
			this->button46->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button46->Size = System::Drawing::Size(112, 29);
			this->button46->TabIndex = 198;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &互感器实验内容::button46_Click);
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(622, 232);
			this->button47->Name = L"button47";
			this->button47->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button47->Size = System::Drawing::Size(112, 29);
			this->button47->TabIndex = 197;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &互感器实验内容::button47_Click);
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(484, 232);
			this->button48->Name = L"button48";
			this->button48->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button48->Size = System::Drawing::Size(112, 29);
			this->button48->TabIndex = 196;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &互感器实验内容::button48_Click);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(344, 232);
			this->button49->Name = L"button49";
			this->button49->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button49->Size = System::Drawing::Size(112, 29);
			this->button49->TabIndex = 195;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &互感器实验内容::button49_Click);
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(194, 232);
			this->button50->Name = L"button50";
			this->button50->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button50->Size = System::Drawing::Size(115, 29);
			this->button50->TabIndex = 194;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &互感器实验内容::button50_Click);
			// 
			// textBoxTrial4_Line2_6
			// 
			this->textBoxTrial4_Line2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line2_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line2_6->Location = System::Drawing::Point(909, 287);
			this->textBoxTrial4_Line2_6->Name = L"textBoxTrial4_Line2_6";
			this->textBoxTrial4_Line2_6->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line2_6->TabIndex = 193;
			// 
			// textBoxTrial4_Line2_5
			// 
			this->textBoxTrial4_Line2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line2_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line2_5->Location = System::Drawing::Point(769, 287);
			this->textBoxTrial4_Line2_5->Name = L"textBoxTrial4_Line2_5";
			this->textBoxTrial4_Line2_5->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line2_5->TabIndex = 192;
			// 
			// textBoxTrial4_Line2_4
			// 
			this->textBoxTrial4_Line2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line2_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line2_4->Location = System::Drawing::Point(622, 287);
			this->textBoxTrial4_Line2_4->Name = L"textBoxTrial4_Line2_4";
			this->textBoxTrial4_Line2_4->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line2_4->TabIndex = 191;
			// 
			// textBoxTrial4_Line2_3
			// 
			this->textBoxTrial4_Line2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line2_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line2_3->Location = System::Drawing::Point(484, 287);
			this->textBoxTrial4_Line2_3->Name = L"textBoxTrial4_Line2_3";
			this->textBoxTrial4_Line2_3->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line2_3->TabIndex = 190;
			// 
			// textBoxTrial4_Line2_2
			// 
			this->textBoxTrial4_Line2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line2_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line2_2->Location = System::Drawing::Point(344, 287);
			this->textBoxTrial4_Line2_2->Name = L"textBoxTrial4_Line2_2";
			this->textBoxTrial4_Line2_2->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line2_2->TabIndex = 189;
			// 
			// textBoxTrial4_Line2_1
			// 
			this->textBoxTrial4_Line2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line2_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line2_1->Location = System::Drawing::Point(197, 287);
			this->textBoxTrial4_Line2_1->Name = L"textBoxTrial4_Line2_1";
			this->textBoxTrial4_Line2_1->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line2_1->TabIndex = 188;
			// 
			// textBoxTrial4_Line1_6
			// 
			this->textBoxTrial4_Line1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line1_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line1_6->Location = System::Drawing::Point(909, 202);
			this->textBoxTrial4_Line1_6->Name = L"textBoxTrial4_Line1_6";
			this->textBoxTrial4_Line1_6->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line1_6->TabIndex = 187;
			// 
			// textBoxTrial4_Line1_5
			// 
			this->textBoxTrial4_Line1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line1_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line1_5->Location = System::Drawing::Point(769, 202);
			this->textBoxTrial4_Line1_5->Name = L"textBoxTrial4_Line1_5";
			this->textBoxTrial4_Line1_5->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line1_5->TabIndex = 186;
			// 
			// textBoxTrial4_Line1_1
			// 
			this->textBoxTrial4_Line1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line1_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line1_1->Location = System::Drawing::Point(197, 202);
			this->textBoxTrial4_Line1_1->Name = L"textBoxTrial4_Line1_1";
			this->textBoxTrial4_Line1_1->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line1_1->TabIndex = 182;
			// 
			// textBoxTrial4_Line1_4
			// 
			this->textBoxTrial4_Line1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line1_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line1_4->Location = System::Drawing::Point(622, 202);
			this->textBoxTrial4_Line1_4->Name = L"textBoxTrial4_Line1_4";
			this->textBoxTrial4_Line1_4->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line1_4->TabIndex = 185;
			// 
			// textBoxTrial4_Line1_2
			// 
			this->textBoxTrial4_Line1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line1_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line1_2->Location = System::Drawing::Point(344, 202);
			this->textBoxTrial4_Line1_2->Name = L"textBoxTrial4_Line1_2";
			this->textBoxTrial4_Line1_2->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line1_2->TabIndex = 183;
			// 
			// textBoxTrial4_Line1_3
			// 
			this->textBoxTrial4_Line1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_Line1_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_Line1_3->Location = System::Drawing::Point(484, 202);
			this->textBoxTrial4_Line1_3->Name = L"textBoxTrial4_Line1_3";
			this->textBoxTrial4_Line1_3->Size = System::Drawing::Size(112, 27);
			this->textBoxTrial4_Line1_3->TabIndex = 184;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(6, 285);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(169, 27);
			this->label32->TabIndex = 145;
			this->label32->Text = L"互感电压输出";
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(6, 202);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(169, 27);
			this->label33->TabIndex = 144;
			this->label33->Text = L"互感电压输入";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(238, 1322);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 31);
			this->button17->TabIndex = 143;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(238, 1294);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(82, 25);
			this->label34->TabIndex = 142;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(805, 1294);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(193, 30);
			this->textBox37->TabIndex = 141;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(687, 1294);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(112, 30);
			this->textBox38->TabIndex = 140;
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(466, 1294);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(97, 25);
			this->label35->TabIndex = 139;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(466, 1322);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(97, 31);
			this->button18->TabIndex = 138;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// label36
			// 
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(338, 1294);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(106, 25);
			this->label36->TabIndex = 137;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(338, 1322);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(106, 31);
			this->button19->TabIndex = 136;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// label38
			// 
			this->label38->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(129, 1294);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(90, 25);
			this->label38->TabIndex = 135;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(129, 1322);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 31);
			this->button20->TabIndex = 134;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(569, 1292);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(112, 30);
			this->textBox39->TabIndex = 133;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(238, 1248);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(82, 31);
			this->button29->TabIndex = 132;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(238, 1220);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(82, 25);
			this->label39->TabIndex = 131;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(805, 1220);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(193, 30);
			this->textBox40->TabIndex = 130;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(687, 1220);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(112, 30);
			this->textBox41->TabIndex = 129;
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(466, 1220);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(97, 25);
			this->label40->TabIndex = 128;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(466, 1248);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(97, 31);
			this->button30->TabIndex = 127;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// label41
			// 
			this->label41->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(338, 1220);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(106, 25);
			this->label41->TabIndex = 126;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(338, 1248);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(106, 31);
			this->button31->TabIndex = 125;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// label42
			// 
			this->label42->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(129, 1220);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(90, 25);
			this->label42->TabIndex = 124;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(129, 1248);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(90, 31);
			this->button32->TabIndex = 123;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(569, 1218);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(112, 30);
			this->textBox42->TabIndex = 122;
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(6, 1295);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(101, 25);
			this->label43->TabIndex = 70;
			this->label43->Text = L"5K";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(6, 1220);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(101, 25);
			this->label44->TabIndex = 69;
			this->label44->Text = L"4K";
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(6, 40);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(1161, 147);
			this->label45->TabIndex = 0;
			this->label45->Text = resources->GetString(L"label45.Text");
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(17, 2004);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 195;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(571, 1962);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 194;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &互感器实验内容::button102_Click);
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->ForeColor = System::Drawing::Color::Lime;
			this->label47->Location = System::Drawing::Point(10, 210);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(152, 28);
			this->label47->TabIndex = 389;
			this->label47->Text = L"交流电流表1";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->ForeColor = System::Drawing::Color::Lime;
			this->label48->Location = System::Drawing::Point(10, 303);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(152, 28);
			this->label48->TabIndex = 390;
			this->label48->Text = L"交流电流表1";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->ForeColor = System::Drawing::Color::Lime;
			this->label49->Location = System::Drawing::Point(6, 318);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(169, 28);
			this->label49->TabIndex = 392;
			this->label49->Text = L"交流电流表1";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->ForeColor = System::Drawing::Color::Lime;
			this->label50->Location = System::Drawing::Point(6, 233);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(169, 28);
			this->label50->TabIndex = 391;
			this->label50->Text = L"交流电流表1";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// 互感器实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1704, 763);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"互感器实验内容";
			this->Text = L"互感器实验内容";
			this->Load += gcnew System::EventHandler(this, &互感器实验内容::互感器实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 互感器实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
		lcc.SendComputerInfo(Grades[23] + "正在实验中");
		NowTrial::NowTrailCode = 23;
		NowTrial::NowTrailForm = this;
	}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line1_1->Text = global::GetGongPingI();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line1_2->Text = global::GetGongPingI();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line1_3->Text = global::GetGongPingI();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line1_4->Text = global::GetGongPingI();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line1_5->Text = global::GetGongPingI();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line1_6->Text = global::GetGongPingI();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line2_1->Text = global::GetGongPingI();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line2_2->Text = global::GetGongPingI();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line2_3->Text = global::GetGongPingI();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line2_4->Text = global::GetGongPingI();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line2_5->Text = global::GetGongPingI();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial3_Line2_6->Text = global::GetGongPingI();
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line1_1->Text = global::GetGongPingI();
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line1_2->Text = global::GetGongPingI();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line1_3->Text = global::GetGongPingI();
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line1_4->Text = global::GetGongPingI();
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line1_5->Text = global::GetGongPingI();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line1_6->Text = global::GetGongPingI();
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line2_1->Text = global::GetGongPingI();
}
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line2_2->Text = global::GetGongPingI();
}
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line2_3->Text = global::GetGongPingI();
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line2_4->Text = global::GetGongPingI();
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line2_5->Text = global::GetGongPingI();
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial4_Line2_6->Text = global::GetGongPingI();
}
};
}
