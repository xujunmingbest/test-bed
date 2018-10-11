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
	/// RLC元件阻抗特性的测定实验内容 摘要
	/// </summary>
	public ref class RLC元件阻抗特性的测定实验内容 : public System::Windows::Forms::Form
	{
	public:
		RLC元件阻抗特性的测定实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			File::Delete(Trial2_1PT_name);
			File::Delete(Trial2_2PT_name);
			File::Delete(Trial3_1PT_name);
			File::Delete(Trial3_2PT_name);
			File::Delete(Trial3_3PT_name);
			File::Delete(Trial3_4PT_name);
			File::Delete(Trial3_5PT_name);
			File::Delete(Trial3_6PT_name);
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void chartTrial3oad();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RLC元件阻抗特性的测定实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC1;



	private: System::Windows::Forms::Label^  labelTrial1_C_Ur1;





	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;



	private: System::Windows::Forms::Label^  labelTrial1_L_Ur1;





	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R1;


	private: System::Windows::Forms::Label^  labelTrial1_R_Ur1;






	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_2;

	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_1;

	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_n1;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_m1;





	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_φ1;





	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label22;






	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  labelTrial1_R_IR6;
	private: System::Windows::Forms::TextBox^  labelTrial1_R_IR5;
	private: System::Windows::Forms::TextBox^  labelTrial1_R_IR4;
	private: System::Windows::Forms::TextBox^  labelTrial1_R_IR3;
	private: System::Windows::Forms::TextBox^  labelTrial1_R_IR2;







	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;






	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F_6;
private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC6;


private: System::Windows::Forms::Label^  labelTrial1_C_Ur6;


private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL6;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur6;


private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R6;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur6;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F_5;
private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC5;



private: System::Windows::Forms::Label^  labelTrial1_C_Ur5;


private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL5;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur5;


private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R5;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur5;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F_4;
private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC4;



private: System::Windows::Forms::Label^  labelTrial1_C_Ur4;


private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL4;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur4;


private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R4;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur4;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F_3;
private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC3;



private: System::Windows::Forms::Label^  labelTrial1_C_Ur3;


private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL3;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur3;


private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R3;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur3;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F_2;
private: System::Windows::Forms::TextBox^  textBoxTrial1_C_XC2;



private: System::Windows::Forms::Label^  labelTrial1_C_Ur2;


private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL2;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur2;


private: System::Windows::Forms::TextBox^  textBoxTrial1_R_R2;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur2;
private: System::Windows::Forms::TextBox^  textBoxTrial1_F_1;



private: System::Windows::Forms::TextBox^  labelTrial1_C_IC6;

private: System::Windows::Forms::TextBox^  labelTrial1_C_IC5;

private: System::Windows::Forms::TextBox^  labelTrial1_C_IC4;

private: System::Windows::Forms::TextBox^  labelTrial1_C_IC3;

private: System::Windows::Forms::TextBox^  labelTrial1_C_IC2;

private: System::Windows::Forms::TextBox^  labelTrial1_C_IC1;
private: System::Windows::Forms::TextBox^  labelTrial1_L_IL6;


private: System::Windows::Forms::TextBox^  labelTrial1_L_IL5;

private: System::Windows::Forms::TextBox^  labelTrial1_L_IL4;

private: System::Windows::Forms::TextBox^  labelTrial1_L_IL3;

private: System::Windows::Forms::TextBox^  labelTrial1_L_IL2;

private: System::Windows::Forms::TextBox^  labelTrial1_L_IL1;

private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F_6;

private: System::Windows::Forms::TextBox^  textBoxTrial3_n6;
private: System::Windows::Forms::TextBox^  textBoxTrial3_m6;



private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::TextBox^  textBoxTrial3_φ6;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F_5;


private: System::Windows::Forms::TextBox^  textBoxTrial3_n5;
private: System::Windows::Forms::TextBox^  textBoxTrial3_m5;



private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::TextBox^  textBoxTrial3_φ5;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F_4;


private: System::Windows::Forms::TextBox^  textBoxTrial3_n4;
private: System::Windows::Forms::TextBox^  textBoxTrial3_m4;



private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::TextBox^  textBoxTrial3_φ4;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F_3;


private: System::Windows::Forms::TextBox^  textBoxTrial3_n3;
private: System::Windows::Forms::TextBox^  textBoxTrial3_m3;



private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::TextBox^  textBoxTrial3_φ3;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F_2;


private: System::Windows::Forms::TextBox^  textBoxTrial3_n2;
private: System::Windows::Forms::TextBox^  textBoxTrial3_m2;



private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::TextBox^  textBoxTrial3_φ2;
private: System::Windows::Forms::TextBox^  textBoxTrial3_F_1;



private: System::Windows::Forms::TextBox^  textBoxTrial1_L_XL1;
private: System::Windows::Forms::TextBox^  labelTrial1_R_IR1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial3;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_6;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_5;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_4;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_3;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_2;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_1;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RLC元件阻抗特性的测定实验内容::typeid));
			this->chartTrial3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial1_C_IC6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_IC5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_IC4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_IC3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_IC2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_IC1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_IL1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_IR1 = (gcnew System::Windows::Forms::TextBox());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_F_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_C_XC6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_Ur6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_Ur6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_C_XC5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_Ur5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_Ur5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_C_XC4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_Ur4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_Ur4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_C_XC3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_Ur3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_Ur3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_C_XC2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_Ur2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_Ur2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_C_XC1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_C_Ur1 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_L_Ur1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_R_R1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_6 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_5 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_F_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_n6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m6 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_φ6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_F_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_n5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m5 = (gcnew System::Windows::Forms::TextBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_φ5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_F_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_n4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m4 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_φ4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_F_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_n3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m3 = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_φ3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_F_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_n2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m2 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_φ2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_F_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_n1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_m1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial3_φ1 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// chartTrial3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartTrial3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartTrial3->Legends->Add(legend3);
			this->chartTrial3->Location = System::Drawing::Point(314, 340);
			this->chartTrial3->Name = L"chartTrial3";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chartTrial3->Series->Add(series3);
			this->chartTrial3->Size = System::Drawing::Size(590, 406);
			this->chartTrial3->TabIndex = 26;
			this->chartTrial3->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::chart1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(460, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"RLC元件阻抗特性的测定 实验内容";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label35);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC6);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC5);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC4);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC3);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC2);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC1);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL6);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL5);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL4);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL3);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL2);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL1);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR6);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR5);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR4);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR3);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR2);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR1);
			this->groupBox8->Controls->Add(this->button34);
			this->groupBox8->Controls->Add(this->button35);
			this->groupBox8->Controls->Add(this->button36);
			this->groupBox8->Controls->Add(this->button37);
			this->groupBox8->Controls->Add(this->button38);
			this->groupBox8->Controls->Add(this->button39);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->button27);
			this->groupBox8->Controls->Add(this->button20);
			this->groupBox8->Controls->Add(this->button19);
			this->groupBox8->Controls->Add(this->button18);
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->button13);
			this->groupBox8->Controls->Add(this->button12);
			this->groupBox8->Controls->Add(this->button11);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC6);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL6);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R6);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC5);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL5);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R5);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC4);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL4);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R4);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC3);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL3);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R3);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC2);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL2);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R2);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC1);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur1);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL1);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur1);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R1);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur1);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(47, 106);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 1301);
			this->groupBox8->TabIndex = 81;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RLC元件阻抗特性的测定 实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::groupBox8_Enter);
			// 
			// labelTrial1_C_IC6
			// 
			this->labelTrial1_C_IC6->Location = System::Drawing::Point(946, 733);
			this->labelTrial1_C_IC6->Name = L"labelTrial1_C_IC6";
			this->labelTrial1_C_IC6->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_C_IC6->TabIndex = 144;
			// 
			// labelTrial1_C_IC5
			// 
			this->labelTrial1_C_IC5->Location = System::Drawing::Point(818, 733);
			this->labelTrial1_C_IC5->Name = L"labelTrial1_C_IC5";
			this->labelTrial1_C_IC5->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_C_IC5->TabIndex = 143;
			// 
			// labelTrial1_C_IC4
			// 
			this->labelTrial1_C_IC4->Location = System::Drawing::Point(683, 733);
			this->labelTrial1_C_IC4->Name = L"labelTrial1_C_IC4";
			this->labelTrial1_C_IC4->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_C_IC4->TabIndex = 142;
			// 
			// labelTrial1_C_IC3
			// 
			this->labelTrial1_C_IC3->Location = System::Drawing::Point(555, 733);
			this->labelTrial1_C_IC3->Name = L"labelTrial1_C_IC3";
			this->labelTrial1_C_IC3->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_C_IC3->TabIndex = 141;
			// 
			// labelTrial1_C_IC2
			// 
			this->labelTrial1_C_IC2->Location = System::Drawing::Point(420, 733);
			this->labelTrial1_C_IC2->Name = L"labelTrial1_C_IC2";
			this->labelTrial1_C_IC2->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_C_IC2->TabIndex = 140;
			// 
			// labelTrial1_C_IC1
			// 
			this->labelTrial1_C_IC1->Location = System::Drawing::Point(292, 733);
			this->labelTrial1_C_IC1->Name = L"labelTrial1_C_IC1";
			this->labelTrial1_C_IC1->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_C_IC1->TabIndex = 139;
			// 
			// labelTrial1_L_IL6
			// 
			this->labelTrial1_L_IL6->Location = System::Drawing::Point(944, 509);
			this->labelTrial1_L_IL6->Name = L"labelTrial1_L_IL6";
			this->labelTrial1_L_IL6->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_L_IL6->TabIndex = 138;
			// 
			// labelTrial1_L_IL5
			// 
			this->labelTrial1_L_IL5->Location = System::Drawing::Point(816, 509);
			this->labelTrial1_L_IL5->Name = L"labelTrial1_L_IL5";
			this->labelTrial1_L_IL5->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_L_IL5->TabIndex = 137;
			// 
			// labelTrial1_L_IL4
			// 
			this->labelTrial1_L_IL4->Location = System::Drawing::Point(681, 509);
			this->labelTrial1_L_IL4->Name = L"labelTrial1_L_IL4";
			this->labelTrial1_L_IL4->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_L_IL4->TabIndex = 136;
			// 
			// labelTrial1_L_IL3
			// 
			this->labelTrial1_L_IL3->Location = System::Drawing::Point(553, 509);
			this->labelTrial1_L_IL3->Name = L"labelTrial1_L_IL3";
			this->labelTrial1_L_IL3->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_L_IL3->TabIndex = 135;
			// 
			// labelTrial1_L_IL2
			// 
			this->labelTrial1_L_IL2->Location = System::Drawing::Point(418, 509);
			this->labelTrial1_L_IL2->Name = L"labelTrial1_L_IL2";
			this->labelTrial1_L_IL2->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_L_IL2->TabIndex = 134;
			// 
			// labelTrial1_L_IL1
			// 
			this->labelTrial1_L_IL1->Location = System::Drawing::Point(290, 509);
			this->labelTrial1_L_IL1->Name = L"labelTrial1_L_IL1";
			this->labelTrial1_L_IL1->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_L_IL1->TabIndex = 133;
			// 
			// labelTrial1_R_IR6
			// 
			this->labelTrial1_R_IR6->Location = System::Drawing::Point(944, 296);
			this->labelTrial1_R_IR6->Name = L"labelTrial1_R_IR6";
			this->labelTrial1_R_IR6->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_R_IR6->TabIndex = 132;
			// 
			// labelTrial1_R_IR5
			// 
			this->labelTrial1_R_IR5->Location = System::Drawing::Point(816, 296);
			this->labelTrial1_R_IR5->Name = L"labelTrial1_R_IR5";
			this->labelTrial1_R_IR5->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_R_IR5->TabIndex = 131;
			// 
			// labelTrial1_R_IR4
			// 
			this->labelTrial1_R_IR4->Location = System::Drawing::Point(681, 296);
			this->labelTrial1_R_IR4->Name = L"labelTrial1_R_IR4";
			this->labelTrial1_R_IR4->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_R_IR4->TabIndex = 130;
			// 
			// labelTrial1_R_IR3
			// 
			this->labelTrial1_R_IR3->Location = System::Drawing::Point(553, 296);
			this->labelTrial1_R_IR3->Name = L"labelTrial1_R_IR3";
			this->labelTrial1_R_IR3->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_R_IR3->TabIndex = 129;
			// 
			// labelTrial1_R_IR2
			// 
			this->labelTrial1_R_IR2->Location = System::Drawing::Point(418, 296);
			this->labelTrial1_R_IR2->Name = L"labelTrial1_R_IR2";
			this->labelTrial1_R_IR2->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_R_IR2->TabIndex = 128;
			// 
			// labelTrial1_R_IR1
			// 
			this->labelTrial1_R_IR1->Location = System::Drawing::Point(290, 296);
			this->labelTrial1_R_IR1->Name = L"labelTrial1_R_IR1";
			this->labelTrial1_R_IR1->Size = System::Drawing::Size(122, 30);
			this->labelTrial1_R_IR1->TabIndex = 127;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(944, 672);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(122, 31);
			this->button34->TabIndex = 120;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(816, 672);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(122, 31);
			this->button35->TabIndex = 119;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(681, 672);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(122, 31);
			this->button36->TabIndex = 118;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(553, 672);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(122, 31);
			this->button37->TabIndex = 117;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(418, 672);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(122, 31);
			this->button38->TabIndex = 116;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(290, 670);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(122, 31);
			this->button39->TabIndex = 115;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button39_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(944, 465);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 31);
			this->button2->TabIndex = 108;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(816, 465);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 31);
			this->button4->TabIndex = 107;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(681, 465);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 31);
			this->button5->TabIndex = 106;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(553, 465);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(122, 31);
			this->button6->TabIndex = 105;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(418, 465);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(122, 31);
			this->button7->TabIndex = 104;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button7_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(290, 463);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(122, 31);
			this->button27->TabIndex = 103;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button27_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(944, 247);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(122, 31);
			this->button20->TabIndex = 96;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(816, 247);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(122, 31);
			this->button19->TabIndex = 95;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(681, 247);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(122, 31);
			this->button18->TabIndex = 94;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button18_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(553, 247);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(122, 31);
			this->button17->TabIndex = 93;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(418, 247);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(122, 31);
			this->button16->TabIndex = 92;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button16_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(944, 143);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(122, 31);
			this->button15->TabIndex = 91;
			this->button15->Text = L"设置";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(816, 143);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(122, 31);
			this->button14->TabIndex = 90;
			this->button14->Text = L"设置";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(683, 143);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(122, 31);
			this->button13->TabIndex = 89;
			this->button13->Text = L"设置";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(553, 143);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(122, 31);
			this->button12->TabIndex = 88;
			this->button12->Text = L"设置";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(418, 143);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(122, 31);
			this->button11->TabIndex = 87;
			this->button11->Text = L"设置";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button11_Click);
			// 
			// textBoxTrial1_F_6
			// 
			this->textBoxTrial1_F_6->Location = System::Drawing::Point(944, 107);
			this->textBoxTrial1_F_6->Name = L"textBoxTrial1_F_6";
			this->textBoxTrial1_F_6->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_F_6->TabIndex = 86;
			// 
			// textBoxTrial1_C_XC6
			// 
			this->textBoxTrial1_C_XC6->Location = System::Drawing::Point(944, 817);
			this->textBoxTrial1_C_XC6->Name = L"textBoxTrial1_C_XC6";
			this->textBoxTrial1_C_XC6->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_C_XC6->TabIndex = 85;
			// 
			// labelTrial1_C_Ur6
			// 
			this->labelTrial1_C_Ur6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur6->Location = System::Drawing::Point(944, 644);
			this->labelTrial1_C_Ur6->Name = L"labelTrial1_C_Ur6";
			this->labelTrial1_C_Ur6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur6->TabIndex = 83;
			// 
			// textBoxTrial1_L_XL6
			// 
			this->textBoxTrial1_L_XL6->Location = System::Drawing::Point(944, 589);
			this->textBoxTrial1_L_XL6->Name = L"textBoxTrial1_L_XL6";
			this->textBoxTrial1_L_XL6->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_L_XL6->TabIndex = 82;
			// 
			// labelTrial1_L_Ur6
			// 
			this->labelTrial1_L_Ur6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur6->Location = System::Drawing::Point(944, 428);
			this->labelTrial1_L_Ur6->Name = L"labelTrial1_L_Ur6";
			this->labelTrial1_L_Ur6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur6->TabIndex = 80;
			// 
			// textBoxTrial1_R_R6
			// 
			this->textBoxTrial1_R_R6->Location = System::Drawing::Point(944, 372);
			this->textBoxTrial1_R_R6->Name = L"textBoxTrial1_R_R6";
			this->textBoxTrial1_R_R6->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_R_R6->TabIndex = 79;
			// 
			// labelTrial1_R_Ur6
			// 
			this->labelTrial1_R_Ur6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur6->Location = System::Drawing::Point(944, 219);
			this->labelTrial1_R_Ur6->Name = L"labelTrial1_R_Ur6";
			this->labelTrial1_R_Ur6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur6->TabIndex = 77;
			// 
			// textBoxTrial1_F_5
			// 
			this->textBoxTrial1_F_5->Location = System::Drawing::Point(816, 107);
			this->textBoxTrial1_F_5->Name = L"textBoxTrial1_F_5";
			this->textBoxTrial1_F_5->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_F_5->TabIndex = 76;
			// 
			// textBoxTrial1_C_XC5
			// 
			this->textBoxTrial1_C_XC5->Location = System::Drawing::Point(816, 817);
			this->textBoxTrial1_C_XC5->Name = L"textBoxTrial1_C_XC5";
			this->textBoxTrial1_C_XC5->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_C_XC5->TabIndex = 75;
			// 
			// labelTrial1_C_Ur5
			// 
			this->labelTrial1_C_Ur5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur5->Location = System::Drawing::Point(816, 644);
			this->labelTrial1_C_Ur5->Name = L"labelTrial1_C_Ur5";
			this->labelTrial1_C_Ur5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur5->TabIndex = 73;
			// 
			// textBoxTrial1_L_XL5
			// 
			this->textBoxTrial1_L_XL5->Location = System::Drawing::Point(816, 589);
			this->textBoxTrial1_L_XL5->Name = L"textBoxTrial1_L_XL5";
			this->textBoxTrial1_L_XL5->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_L_XL5->TabIndex = 72;
			// 
			// labelTrial1_L_Ur5
			// 
			this->labelTrial1_L_Ur5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur5->Location = System::Drawing::Point(816, 428);
			this->labelTrial1_L_Ur5->Name = L"labelTrial1_L_Ur5";
			this->labelTrial1_L_Ur5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur5->TabIndex = 70;
			// 
			// textBoxTrial1_R_R5
			// 
			this->textBoxTrial1_R_R5->Location = System::Drawing::Point(816, 372);
			this->textBoxTrial1_R_R5->Name = L"textBoxTrial1_R_R5";
			this->textBoxTrial1_R_R5->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_R_R5->TabIndex = 69;
			// 
			// labelTrial1_R_Ur5
			// 
			this->labelTrial1_R_Ur5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur5->Location = System::Drawing::Point(816, 219);
			this->labelTrial1_R_Ur5->Name = L"labelTrial1_R_Ur5";
			this->labelTrial1_R_Ur5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur5->TabIndex = 67;
			// 
			// textBoxTrial1_F_4
			// 
			this->textBoxTrial1_F_4->Location = System::Drawing::Point(683, 107);
			this->textBoxTrial1_F_4->Name = L"textBoxTrial1_F_4";
			this->textBoxTrial1_F_4->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_F_4->TabIndex = 66;
			// 
			// textBoxTrial1_C_XC4
			// 
			this->textBoxTrial1_C_XC4->Location = System::Drawing::Point(683, 817);
			this->textBoxTrial1_C_XC4->Name = L"textBoxTrial1_C_XC4";
			this->textBoxTrial1_C_XC4->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_C_XC4->TabIndex = 65;
			// 
			// labelTrial1_C_Ur4
			// 
			this->labelTrial1_C_Ur4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur4->Location = System::Drawing::Point(683, 644);
			this->labelTrial1_C_Ur4->Name = L"labelTrial1_C_Ur4";
			this->labelTrial1_C_Ur4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur4->TabIndex = 63;
			// 
			// textBoxTrial1_L_XL4
			// 
			this->textBoxTrial1_L_XL4->Location = System::Drawing::Point(683, 589);
			this->textBoxTrial1_L_XL4->Name = L"textBoxTrial1_L_XL4";
			this->textBoxTrial1_L_XL4->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_L_XL4->TabIndex = 62;
			// 
			// labelTrial1_L_Ur4
			// 
			this->labelTrial1_L_Ur4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur4->Location = System::Drawing::Point(683, 428);
			this->labelTrial1_L_Ur4->Name = L"labelTrial1_L_Ur4";
			this->labelTrial1_L_Ur4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur4->TabIndex = 60;
			// 
			// textBoxTrial1_R_R4
			// 
			this->textBoxTrial1_R_R4->Location = System::Drawing::Point(683, 372);
			this->textBoxTrial1_R_R4->Name = L"textBoxTrial1_R_R4";
			this->textBoxTrial1_R_R4->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_R_R4->TabIndex = 59;
			// 
			// labelTrial1_R_Ur4
			// 
			this->labelTrial1_R_Ur4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur4->Location = System::Drawing::Point(683, 219);
			this->labelTrial1_R_Ur4->Name = L"labelTrial1_R_Ur4";
			this->labelTrial1_R_Ur4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur4->TabIndex = 57;
			// 
			// textBoxTrial1_F_3
			// 
			this->textBoxTrial1_F_3->Location = System::Drawing::Point(553, 107);
			this->textBoxTrial1_F_3->Name = L"textBoxTrial1_F_3";
			this->textBoxTrial1_F_3->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_F_3->TabIndex = 56;
			// 
			// textBoxTrial1_C_XC3
			// 
			this->textBoxTrial1_C_XC3->Location = System::Drawing::Point(553, 817);
			this->textBoxTrial1_C_XC3->Name = L"textBoxTrial1_C_XC3";
			this->textBoxTrial1_C_XC3->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_C_XC3->TabIndex = 55;
			// 
			// labelTrial1_C_Ur3
			// 
			this->labelTrial1_C_Ur3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur3->Location = System::Drawing::Point(553, 644);
			this->labelTrial1_C_Ur3->Name = L"labelTrial1_C_Ur3";
			this->labelTrial1_C_Ur3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur3->TabIndex = 53;
			// 
			// textBoxTrial1_L_XL3
			// 
			this->textBoxTrial1_L_XL3->Location = System::Drawing::Point(553, 589);
			this->textBoxTrial1_L_XL3->Name = L"textBoxTrial1_L_XL3";
			this->textBoxTrial1_L_XL3->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_L_XL3->TabIndex = 52;
			// 
			// labelTrial1_L_Ur3
			// 
			this->labelTrial1_L_Ur3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur3->Location = System::Drawing::Point(553, 428);
			this->labelTrial1_L_Ur3->Name = L"labelTrial1_L_Ur3";
			this->labelTrial1_L_Ur3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur3->TabIndex = 50;
			// 
			// textBoxTrial1_R_R3
			// 
			this->textBoxTrial1_R_R3->Location = System::Drawing::Point(553, 372);
			this->textBoxTrial1_R_R3->Name = L"textBoxTrial1_R_R3";
			this->textBoxTrial1_R_R3->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_R_R3->TabIndex = 49;
			// 
			// labelTrial1_R_Ur3
			// 
			this->labelTrial1_R_Ur3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur3->Location = System::Drawing::Point(553, 219);
			this->labelTrial1_R_Ur3->Name = L"labelTrial1_R_Ur3";
			this->labelTrial1_R_Ur3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur3->TabIndex = 47;
			// 
			// textBoxTrial1_F_2
			// 
			this->textBoxTrial1_F_2->Location = System::Drawing::Point(418, 107);
			this->textBoxTrial1_F_2->Name = L"textBoxTrial1_F_2";
			this->textBoxTrial1_F_2->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_F_2->TabIndex = 46;
			// 
			// textBoxTrial1_C_XC2
			// 
			this->textBoxTrial1_C_XC2->Location = System::Drawing::Point(418, 817);
			this->textBoxTrial1_C_XC2->Name = L"textBoxTrial1_C_XC2";
			this->textBoxTrial1_C_XC2->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_C_XC2->TabIndex = 45;
			// 
			// labelTrial1_C_Ur2
			// 
			this->labelTrial1_C_Ur2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur2->Location = System::Drawing::Point(418, 644);
			this->labelTrial1_C_Ur2->Name = L"labelTrial1_C_Ur2";
			this->labelTrial1_C_Ur2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur2->TabIndex = 43;
			// 
			// textBoxTrial1_L_XL2
			// 
			this->textBoxTrial1_L_XL2->Location = System::Drawing::Point(418, 589);
			this->textBoxTrial1_L_XL2->Name = L"textBoxTrial1_L_XL2";
			this->textBoxTrial1_L_XL2->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_L_XL2->TabIndex = 42;
			// 
			// labelTrial1_L_Ur2
			// 
			this->labelTrial1_L_Ur2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur2->Location = System::Drawing::Point(418, 428);
			this->labelTrial1_L_Ur2->Name = L"labelTrial1_L_Ur2";
			this->labelTrial1_L_Ur2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur2->TabIndex = 40;
			// 
			// textBoxTrial1_R_R2
			// 
			this->textBoxTrial1_R_R2->Location = System::Drawing::Point(418, 372);
			this->textBoxTrial1_R_R2->Name = L"textBoxTrial1_R_R2";
			this->textBoxTrial1_R_R2->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_R_R2->TabIndex = 39;
			// 
			// labelTrial1_R_Ur2
			// 
			this->labelTrial1_R_Ur2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur2->Location = System::Drawing::Point(418, 219);
			this->labelTrial1_R_Ur2->Name = L"labelTrial1_R_Ur2";
			this->labelTrial1_R_Ur2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur2->TabIndex = 37;
			// 
			// textBoxTrial1_F_1
			// 
			this->textBoxTrial1_F_1->Location = System::Drawing::Point(290, 107);
			this->textBoxTrial1_F_1->Name = L"textBoxTrial1_F_1";
			this->textBoxTrial1_F_1->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_F_1->TabIndex = 36;
			// 
			// textBoxTrial1_C_XC1
			// 
			this->textBoxTrial1_C_XC1->Location = System::Drawing::Point(290, 815);
			this->textBoxTrial1_C_XC1->Name = L"textBoxTrial1_C_XC1";
			this->textBoxTrial1_C_XC1->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_C_XC1->TabIndex = 32;
			// 
			// labelTrial1_C_Ur1
			// 
			this->labelTrial1_C_Ur1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur1->Location = System::Drawing::Point(290, 642);
			this->labelTrial1_C_Ur1->Name = L"labelTrial1_C_Ur1";
			this->labelTrial1_C_Ur1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur1->TabIndex = 30;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(80, 815);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(179, 25);
			this->label18->TabIndex = 29;
			this->label18->Text = L"XC=U/ IC（KΩ）";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(80, 733);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(179, 25);
			this->label19->TabIndex = 28;
			this->label19->Text = L"IC=Ur / r（mA）";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(80, 642);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(179, 25);
			this->label20->TabIndex = 27;
			this->label20->Text = L"Ur（mV）";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(29, 642);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(31, 205);
			this->label21->TabIndex = 26;
			this->label21->Text = L"C";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_L_XL1
			// 
			this->textBoxTrial1_L_XL1->Location = System::Drawing::Point(290, 587);
			this->textBoxTrial1_L_XL1->Name = L"textBoxTrial1_L_XL1";
			this->textBoxTrial1_L_XL1->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_L_XL1->TabIndex = 21;
			// 
			// labelTrial1_L_Ur1
			// 
			this->labelTrial1_L_Ur1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur1->Location = System::Drawing::Point(290, 426);
			this->labelTrial1_L_Ur1->Name = L"labelTrial1_L_Ur1";
			this->labelTrial1_L_Ur1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur1->TabIndex = 19;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(80, 587);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(179, 25);
			this->label13->TabIndex = 18;
			this->label13->Text = L"XL=U / IL（KΩ）";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(80, 509);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(179, 25);
			this->label14->TabIndex = 17;
			this->label14->Text = L"IL=Ur / r（mA）";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(80, 426);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(179, 25);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Ur（mV）";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(29, 426);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 193);
			this->label16->TabIndex = 15;
			this->label16->Text = L"L";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(290, 245);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 31);
			this->button3->TabIndex = 13;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(290, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"设置";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button1_Click);
			// 
			// textBoxTrial1_R_R1
			// 
			this->textBoxTrial1_R_R1->Location = System::Drawing::Point(290, 370);
			this->textBoxTrial1_R_R1->Name = L"textBoxTrial1_R_R1";
			this->textBoxTrial1_R_R1->Size = System::Drawing::Size(122, 30);
			this->textBoxTrial1_R_R1->TabIndex = 9;
			// 
			// labelTrial1_R_Ur1
			// 
			this->labelTrial1_R_Ur1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur1->Location = System::Drawing::Point(290, 217);
			this->labelTrial1_R_Ur1->Name = L"labelTrial1_R_Ur1";
			this->labelTrial1_R_Ur1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur1->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(80, 370);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"R=U/ IR（KΩ）";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(80, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"IR=Ur / r（mA）";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(80, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ur（mv）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(29, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 184);
			this->label2->TabIndex = 3;
			this->label2->Text = L"R";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(29, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"频率F（KHz）";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 26);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1143, 65);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1．测量R、L、C元件的阻抗频率特性。\r\n    利用电阻电容电感搭接如图12-2所示实验电路， 函数信号发生器作为激励源U，并用示波器测量，使激励源电压"
				L"有有效值为U＝3V，并保持不变。\r\n使信号源的输出频率从200Hz逐渐增至5KHz，并使开关S分别接通R、L、C三个元件，用示波器测量Ur，并通过计算得到各频率"
				L"点时的R、XL与Xc之值，记入表中。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(47, 1424);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 1128);
			this->groupBox1->TabIndex = 82;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RLC元件阻抗特性的测定 实验内容2";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::groupBox1_Enter);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(28, 602);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 34);
			this->button9->TabIndex = 4;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(28, 87);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 34);
			this->button8->TabIndex = 3;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button8_Click);
			// 
			// pictureBoxTrial2_2
			// 
			this->pictureBoxTrial2_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_2.Image")));
			this->pictureBoxTrial2_2->Location = System::Drawing::Point(149, 602);
			this->pictureBoxTrial2_2->Name = L"pictureBoxTrial2_2";
			this->pictureBoxTrial2_2->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_2->TabIndex = 2;
			this->pictureBoxTrial2_2->TabStop = false;
			// 
			// pictureBoxTrial2_1
			// 
			this->pictureBoxTrial2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_1.Image")));
			this->pictureBoxTrial2_1->Location = System::Drawing::Point(149, 87);
			this->pictureBoxTrial2_1->Name = L"pictureBoxTrial2_1";
			this->pictureBoxTrial2_1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_1->TabIndex = 1;
			this->pictureBoxTrial2_1->TabStop = false;
			this->pictureBoxTrial2_1->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::pictureBoxTrial2_1_Click);
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(24, 45);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(913, 29);
			this->label43->TabIndex = 0;
			this->label43->Text = L"    用双踪示波器观察在不同频率下各元件阻抗角的变化情况，并作记录。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->pictureBoxTrial3_6);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->pictureBoxTrial3_5);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->pictureBoxTrial3_4);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->pictureBoxTrial3_3);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->pictureBoxTrial3_2);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->pictureBoxTrial3_1);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m6);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m5);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m4);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m3);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m2);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_1);
			this->groupBox2->Controls->Add(this->chartTrial3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m1);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ1);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(47, 2587);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1315, 4004);
			this->groupBox2->TabIndex = 83;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"RLC元件阻抗特性的测定 实验内容3";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::groupBox2_Enter);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(73, 2937);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(115, 34);
			this->button33->TabIndex = 171;
			this->button33->Text = L"获取波形";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button33_Click);
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(525, 3947);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(78, 25);
			this->label31->TabIndex = 170;
			this->label31->Text = L"波形6";
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(73, 3459);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(115, 34);
			this->button32->TabIndex = 169;
			this->button32->Text = L"获取波形";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button32_Click);
			// 
			// pictureBoxTrial3_6
			// 
			this->pictureBoxTrial3_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_6.Image")));
			this->pictureBoxTrial3_6->Location = System::Drawing::Point(201, 3461);
			this->pictureBoxTrial3_6->Name = L"pictureBoxTrial3_6";
			this->pictureBoxTrial3_6->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_6->TabIndex = 168;
			this->pictureBoxTrial3_6->TabStop = false;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(525, 3409);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(78, 25);
			this->label32->TabIndex = 167;
			this->label32->Text = L"波形5";
			// 
			// pictureBoxTrial3_5
			// 
			this->pictureBoxTrial3_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_5.Image")));
			this->pictureBoxTrial3_5->Location = System::Drawing::Point(200, 2934);
			this->pictureBoxTrial3_5->Name = L"pictureBoxTrial3_5";
			this->pictureBoxTrial3_5->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_5->TabIndex = 166;
			this->pictureBoxTrial3_5->TabStop = false;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(523, 2887);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(78, 25);
			this->label29->TabIndex = 165;
			this->label29->Text = L"波形4";
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(73, 2409);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(115, 34);
			this->button31->TabIndex = 164;
			this->button31->Text = L"获取波形";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button31_Click);
			// 
			// pictureBoxTrial3_4
			// 
			this->pictureBoxTrial3_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_4.Image")));
			this->pictureBoxTrial3_4->Location = System::Drawing::Point(201, 2404);
			this->pictureBoxTrial3_4->Name = L"pictureBoxTrial3_4";
			this->pictureBoxTrial3_4->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_4->TabIndex = 163;
			this->pictureBoxTrial3_4->TabStop = false;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(523, 2348);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(78, 25);
			this->label25->TabIndex = 162;
			this->label25->Text = L"波形3";
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(73, 1870);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(115, 34);
			this->button30->TabIndex = 161;
			this->button30->Text = L"获取波形";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button30_Click);
			// 
			// pictureBoxTrial3_3
			// 
			this->pictureBoxTrial3_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_3.Image")));
			this->pictureBoxTrial3_3->Location = System::Drawing::Point(201, 1865);
			this->pictureBoxTrial3_3->Name = L"pictureBoxTrial3_3";
			this->pictureBoxTrial3_3->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_3->TabIndex = 160;
			this->pictureBoxTrial3_3->TabStop = false;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(521, 1813);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(78, 25);
			this->label24->TabIndex = 159;
			this->label24->Text = L"波形2";
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(71, 1335);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(115, 34);
			this->button29->TabIndex = 158;
			this->button29->Text = L"获取波形";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button29_Click);
			// 
			// pictureBoxTrial3_2
			// 
			this->pictureBoxTrial3_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_2.Image")));
			this->pictureBoxTrial3_2->Location = System::Drawing::Point(199, 1330);
			this->pictureBoxTrial3_2->Name = L"pictureBoxTrial3_2";
			this->pictureBoxTrial3_2->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_2->TabIndex = 157;
			this->pictureBoxTrial3_2->TabStop = false;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(523, 1292);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(78, 25);
			this->label23->TabIndex = 156;
			this->label23->Text = L"波形1";
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(73, 814);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(115, 34);
			this->button26->TabIndex = 155;
			this->button26->Text = L"获取波形";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button26_Click);
			// 
			// pictureBoxTrial3_1
			// 
			this->pictureBoxTrial3_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_1.Image")));
			this->pictureBoxTrial3_1->Location = System::Drawing::Point(201, 809);
			this->pictureBoxTrial3_1->Name = L"pictureBoxTrial3_1";
			this->pictureBoxTrial3_1->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_1->TabIndex = 154;
			this->pictureBoxTrial3_1->TabStop = false;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(874, 288);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 25);
			this->label17->TabIndex = 153;
			this->label17->Text = L"波形6";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(766, 288);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(102, 25);
			this->label12->TabIndex = 152;
			this->label12->Text = L"波形5";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(658, 288);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 25);
			this->label11->TabIndex = 151;
			this->label11->Text = L"波形4";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(550, 288);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 25);
			this->label10->TabIndex = 150;
			this->label10->Text = L"波形3";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(442, 288);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 25);
			this->label9->TabIndex = 149;
			this->label9->Text = L"波形2";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(334, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 25);
			this->label8->TabIndex = 148;
			this->label8->Text = L"波形1";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(73, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 25);
			this->label7->TabIndex = 147;
			this->label7->Text = L"对应波形";
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(160, 340);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(122, 31);
			this->button28->TabIndex = 146;
			this->button28->Text = L"曲线生成";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button28_Click);
			// 
			// textBoxTrial3_F_6
			// 
			this->textBoxTrial3_F_6->Location = System::Drawing::Point(874, 95);
			this->textBoxTrial3_F_6->Name = L"textBoxTrial3_F_6";
			this->textBoxTrial3_F_6->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_F_6->TabIndex = 52;
			// 
			// textBoxTrial3_n6
			// 
			this->textBoxTrial3_n6->Location = System::Drawing::Point(874, 168);
			this->textBoxTrial3_n6->Name = L"textBoxTrial3_n6";
			this->textBoxTrial3_n6->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_n6->TabIndex = 51;
			// 
			// textBoxTrial3_m6
			// 
			this->textBoxTrial3_m6->Location = System::Drawing::Point(874, 210);
			this->textBoxTrial3_m6->Name = L"textBoxTrial3_m6";
			this->textBoxTrial3_m6->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_m6->TabIndex = 50;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(874, 131);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(102, 31);
			this->button25->TabIndex = 49;
			this->button25->Text = L"设置";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button25_Click);
			// 
			// textBoxTrial3_φ6
			// 
			this->textBoxTrial3_φ6->Location = System::Drawing::Point(874, 249);
			this->textBoxTrial3_φ6->Name = L"textBoxTrial3_φ6";
			this->textBoxTrial3_φ6->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_φ6->TabIndex = 48;
			// 
			// textBoxTrial3_F_5
			// 
			this->textBoxTrial3_F_5->Location = System::Drawing::Point(766, 95);
			this->textBoxTrial3_F_5->Name = L"textBoxTrial3_F_5";
			this->textBoxTrial3_F_5->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_F_5->TabIndex = 47;
			// 
			// textBoxTrial3_n5
			// 
			this->textBoxTrial3_n5->Location = System::Drawing::Point(766, 168);
			this->textBoxTrial3_n5->Name = L"textBoxTrial3_n5";
			this->textBoxTrial3_n5->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_n5->TabIndex = 46;
			// 
			// textBoxTrial3_m5
			// 
			this->textBoxTrial3_m5->Location = System::Drawing::Point(766, 210);
			this->textBoxTrial3_m5->Name = L"textBoxTrial3_m5";
			this->textBoxTrial3_m5->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_m5->TabIndex = 45;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(766, 131);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(102, 31);
			this->button24->TabIndex = 44;
			this->button24->Text = L"设置";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button24_Click);
			// 
			// textBoxTrial3_φ5
			// 
			this->textBoxTrial3_φ5->Location = System::Drawing::Point(766, 249);
			this->textBoxTrial3_φ5->Name = L"textBoxTrial3_φ5";
			this->textBoxTrial3_φ5->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_φ5->TabIndex = 43;
			// 
			// textBoxTrial3_F_4
			// 
			this->textBoxTrial3_F_4->Location = System::Drawing::Point(658, 95);
			this->textBoxTrial3_F_4->Name = L"textBoxTrial3_F_4";
			this->textBoxTrial3_F_4->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_F_4->TabIndex = 42;
			// 
			// textBoxTrial3_n4
			// 
			this->textBoxTrial3_n4->Location = System::Drawing::Point(658, 168);
			this->textBoxTrial3_n4->Name = L"textBoxTrial3_n4";
			this->textBoxTrial3_n4->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_n4->TabIndex = 41;
			// 
			// textBoxTrial3_m4
			// 
			this->textBoxTrial3_m4->Location = System::Drawing::Point(658, 210);
			this->textBoxTrial3_m4->Name = L"textBoxTrial3_m4";
			this->textBoxTrial3_m4->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_m4->TabIndex = 40;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(658, 131);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(102, 31);
			this->button23->TabIndex = 39;
			this->button23->Text = L"设置";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button23_Click);
			// 
			// textBoxTrial3_φ4
			// 
			this->textBoxTrial3_φ4->Location = System::Drawing::Point(658, 249);
			this->textBoxTrial3_φ4->Name = L"textBoxTrial3_φ4";
			this->textBoxTrial3_φ4->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_φ4->TabIndex = 38;
			// 
			// textBoxTrial3_F_3
			// 
			this->textBoxTrial3_F_3->Location = System::Drawing::Point(550, 95);
			this->textBoxTrial3_F_3->Name = L"textBoxTrial3_F_3";
			this->textBoxTrial3_F_3->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_F_3->TabIndex = 37;
			// 
			// textBoxTrial3_n3
			// 
			this->textBoxTrial3_n3->Location = System::Drawing::Point(550, 168);
			this->textBoxTrial3_n3->Name = L"textBoxTrial3_n3";
			this->textBoxTrial3_n3->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_n3->TabIndex = 36;
			// 
			// textBoxTrial3_m3
			// 
			this->textBoxTrial3_m3->Location = System::Drawing::Point(550, 210);
			this->textBoxTrial3_m3->Name = L"textBoxTrial3_m3";
			this->textBoxTrial3_m3->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_m3->TabIndex = 35;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(550, 131);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(102, 31);
			this->button22->TabIndex = 34;
			this->button22->Text = L"设置";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button22_Click);
			// 
			// textBoxTrial3_φ3
			// 
			this->textBoxTrial3_φ3->Location = System::Drawing::Point(550, 249);
			this->textBoxTrial3_φ3->Name = L"textBoxTrial3_φ3";
			this->textBoxTrial3_φ3->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_φ3->TabIndex = 33;
			// 
			// textBoxTrial3_F_2
			// 
			this->textBoxTrial3_F_2->Location = System::Drawing::Point(442, 96);
			this->textBoxTrial3_F_2->Name = L"textBoxTrial3_F_2";
			this->textBoxTrial3_F_2->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_F_2->TabIndex = 32;
			// 
			// textBoxTrial3_n2
			// 
			this->textBoxTrial3_n2->Location = System::Drawing::Point(442, 169);
			this->textBoxTrial3_n2->Name = L"textBoxTrial3_n2";
			this->textBoxTrial3_n2->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_n2->TabIndex = 31;
			// 
			// textBoxTrial3_m2
			// 
			this->textBoxTrial3_m2->Location = System::Drawing::Point(442, 211);
			this->textBoxTrial3_m2->Name = L"textBoxTrial3_m2";
			this->textBoxTrial3_m2->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_m2->TabIndex = 30;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(442, 132);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(102, 31);
			this->button21->TabIndex = 29;
			this->button21->Text = L"设置";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button21_Click);
			// 
			// textBoxTrial3_φ2
			// 
			this->textBoxTrial3_φ2->Location = System::Drawing::Point(442, 250);
			this->textBoxTrial3_φ2->Name = L"textBoxTrial3_φ2";
			this->textBoxTrial3_φ2->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_φ2->TabIndex = 28;
			// 
			// textBoxTrial3_F_1
			// 
			this->textBoxTrial3_F_1->Location = System::Drawing::Point(334, 97);
			this->textBoxTrial3_F_1->Name = L"textBoxTrial3_F_1";
			this->textBoxTrial3_F_1->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_F_1->TabIndex = 27;
			// 
			// textBoxTrial3_n1
			// 
			this->textBoxTrial3_n1->Location = System::Drawing::Point(334, 170);
			this->textBoxTrial3_n1->Name = L"textBoxTrial3_n1";
			this->textBoxTrial3_n1->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_n1->TabIndex = 25;
			// 
			// textBoxTrial3_m1
			// 
			this->textBoxTrial3_m1->Location = System::Drawing::Point(334, 212);
			this->textBoxTrial3_m1->Name = L"textBoxTrial3_m1";
			this->textBoxTrial3_m1->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_m1->TabIndex = 24;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(334, 133);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(102, 31);
			this->button10->TabIndex = 23;
			this->button10->Text = L"设置";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button10_Click);
			// 
			// textBoxTrial3_φ1
			// 
			this->textBoxTrial3_φ1->Location = System::Drawing::Point(334, 251);
			this->textBoxTrial3_φ1->Name = L"textBoxTrial3_φ1";
			this->textBoxTrial3_φ1->Size = System::Drawing::Size(102, 30);
			this->textBoxTrial3_φ1->TabIndex = 21;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(73, 251);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(230, 25);
			this->label26->TabIndex = 18;
			this->label26->Text = L"φ（度）";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(73, 214);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(230, 25);
			this->label27->TabIndex = 17;
			this->label27->Text = L"m（格）";
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(73, 175);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(230, 25);
			this->label28->TabIndex = 16;
			this->label28->Text = L"n（格）";
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(73, 101);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(230, 25);
			this->label30->TabIndex = 14;
			this->label30->Text = L"频率F（KHz）";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(24, 45);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(913, 29);
			this->label22->TabIndex = 0;
			this->label22->Text = L"    测量R、L、C元件串联的阻抗角频率特性。";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(27, 6692);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 189;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(581, 6650);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 188;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::button81_Click_1);
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(204, 6603);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1137, 28);
			this->textBox结论->TabIndex = 187;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(55, 6606);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 186;
			this->label105->Text = L"实验结论";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(253, 884);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(704, 365);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 145;
			this->pictureBox1->TabStop = false;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->ForeColor = System::Drawing::Color::Lime;
			this->label33->Location = System::Drawing::Point(66, 250);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(204, 28);
			this->label33->TabIndex = 377;
			this->label33->Text = L"宽屏测试交流RMS1表";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->ForeColor = System::Drawing::Color::Lime;
			this->label34->Location = System::Drawing::Point(66, 465);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(204, 28);
			this->label34->TabIndex = 378;
			this->label34->Text = L"宽屏测试交流RMS1表";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->ForeColor = System::Drawing::Color::Lime;
			this->label35->Location = System::Drawing::Point(73, 684);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(204, 28);
			this->label35->TabIndex = 379;
			this->label35->Text = L"宽屏测试交流RMS1表";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RLC元件阻抗特性的测定实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1668, 741);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RLC元件阻抗特性的测定实验内容";
			this->Text = L"RLC元件阻抗特性的测定实验内容";
			this->Load += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定实验内容::RLC元件阻抗特性的测定实验内容_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {


	}
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
}
		 public: ST_RLC元件阻抗特性的测定 Load_Grade_data();
		 void SendData();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void RLC元件阻抗特性的测定实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	chartTrial3->Titles->Add("R、L、C元件串联的阻抗角频率特性");
}
private: System::Void pictureBoxTrial2_1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
		 
		 String ^picdir = gcnew String(BMPSAVEPATH);
String ^Trial2_1PT_name = picdir + "RLC元件阻抗特性的测定Trial2_1.bmp";
String ^Trial2_2PT_name = picdir + "RLC元件阻抗特性的测定Trial2_2.bmp";
String ^Trial3_1PT_name = picdir + "RLC元件阻抗特性的测定Trial3_1.bmp";
String ^Trial3_2PT_name = picdir + "RLC元件阻抗特性的测定Trial3_2.bmp";
String ^Trial3_3PT_name = picdir + "RLC元件阻抗特性的测定Trial3_3.bmp";
String ^Trial3_4PT_name = picdir + "RLC元件阻抗特性的测定Trial3_4.bmp";
String ^Trial3_5PT_name = picdir + "RLC元件阻抗特性的测定Trial3_5.bmp";
String ^Trial3_6PT_name = picdir + "RLC元件阻抗特性的测定Trial3_6.bmp";



private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial2_1PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial2_1PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial2_1->ImageLocation = Trial2_1PT_name;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial2_2PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial2_2PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial2_2->ImageLocation = Trial2_2PT_name;
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial1_F_1->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial1_F_2->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial1_F_3->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial1_F_4->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial1_F_5->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial1_F_6->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial3_F_1->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {

	try {
		int value = Convert::ToInt32(textBoxTrial3_F_2->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial3_F_3->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial3_F_4->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial3_F_5->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int value = Convert::ToInt32(textBoxTrial3_F_6->Text);
		global::scs->SetFrequency(value * 100);
	}
	catch (System::Exception^e) {

	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_R_Ur1->Text = global::GetKuangPingURMS1();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_R_Ur2->Text = global::GetKuangPingURMS1();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_R_Ur3->Text = global::GetKuangPingURMS1();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_R_Ur4->Text = global::GetKuangPingURMS1();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_R_Ur5->Text = global::GetKuangPingURMS1();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_R_Ur6->Text = global::GetKuangPingURMS1();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_L_Ur1->Text = global::GetKuangPingURMS1();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_L_Ur2->Text = global::GetKuangPingURMS1();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_L_Ur3->Text = global::GetKuangPingURMS1();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_L_Ur4->Text = global::GetKuangPingURMS1();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_L_Ur5->Text = global::GetKuangPingURMS1();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_L_Ur6->Text = global::GetKuangPingURMS1();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_C_Ur1->Text = global::GetKuangPingURMS1();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_C_Ur2->Text = global::GetKuangPingURMS1();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_C_Ur3->Text = global::GetKuangPingURMS1();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_C_Ur4->Text = global::GetKuangPingURMS1();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_C_Ur5->Text = global::GetKuangPingURMS1();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_C_Ur6->Text = global::GetKuangPingURMS1();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	chartTrial3oad();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_1PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_1PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_1->ImageLocation = Trial3_1PT_name;
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_2PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_2PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_2->ImageLocation = Trial3_2PT_name;
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_3PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_3PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_3->ImageLocation = Trial3_3PT_name;
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_4PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_4PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_4->ImageLocation = Trial3_4PT_name;
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_6PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_6PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_6->ImageLocation = Trial3_6PT_name;
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_5PT_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_5PT_name))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial3_5->ImageLocation = Trial3_5PT_name;
}
private: System::Void button81_Click_1(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
};
}
