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
	/// 回转器实验内容 摘要
	/// </summary>
	public ref class 回转器实验内容 : public System::Windows::Forms::Form
	{
	public:
		回转器实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			File::Delete(trial1Path_U);
			File::Delete(trial1Path_I);
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~回转器实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line7;


	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line7;







	private: System::Windows::Forms::Label^  labelTrial1_U1_line7;

	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line7;

	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line6;


	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line6;







	private: System::Windows::Forms::Label^  labelTrial1_U1_line6;

	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line6;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line5;


	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line5;







	private: System::Windows::Forms::Label^  labelTrial1_U1_line5;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line5;

	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line4;


	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line4;







	private: System::Windows::Forms::Label^  labelTrial1_U1_line4;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line4;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line3;


	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line3;







	private: System::Windows::Forms::Label^  labelTrial1_U1_line3;

	private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line3;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line2;
private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line2;


private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line2;







	private: System::Windows::Forms::Label^  labelTrial1_U1_line2;

	private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line2;

	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  labelTrial1_U2_line1;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line1;

private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line1;







private: System::Windows::Forms::Label^  labelTrial1_U1_line1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelTrial1_F;
private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line1;

	private: System::Windows::Forms::Label^  labelTrial1_R_Ur;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox1;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line7;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line7;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line6;



private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line6;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line6;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line5;



private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line5;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line5;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line4;


private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line4;

private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line4;

	private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Label^  labelTrial2_F1300_line3;
private: System::Windows::Forms::Label^  labelTrial2_F2000_line3;


	private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Label^  labelTrial2_F1500_line3;

	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Label^  labelTrial2_F900_line3;
private: System::Windows::Forms::Label^  labelTrial2_F1200_line3;


	private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::Label^  labelTrial2_F1000_line3;

	private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::Label^  labelTrial2_F800_line3;

	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Label^  labelTrial2_F400_line3;
private: System::Windows::Forms::Label^  labelTrial2_F700_line3;


	private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Label^  labelTrial2_F500_line3;

	private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::Label^  labelTrial2_F200_line3;

	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Label^  labelTrial2_F1300_line2;
private: System::Windows::Forms::Label^  labelTrial2_F2000_line2;


	private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Label^  labelTrial2_F1500_line2;

	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Label^  labelTrial2_F1300_line1;
private: System::Windows::Forms::Label^  labelTrial2_F2000_line1;


	private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Label^  labelTrial2_F1500_line1;

	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Label^  labelTrial2_F900_line2;
private: System::Windows::Forms::Label^  labelTrial2_F1200_line2;


	private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::Label^  labelTrial2_F1000_line2;

	private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Label^  labelTrial2_F800_line2;

	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Label^  labelTrial2_F900_line1;
private: System::Windows::Forms::Label^  labelTrial2_F1200_line1;


	private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Label^  labelTrial2_F1000_line1;

	private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Label^  labelTrial2_F800_line1;

	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::Label^  labelTrial2_F400_line2;
private: System::Windows::Forms::Label^  labelTrial2_F700_line2;


	private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::Label^  labelTrial2_F500_line2;

	private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Label^  labelTrial2_F200_line2;

	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Button^  button57;
private: System::Windows::Forms::Label^  labelTrial2_F400_line1;

	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  labelTrial2_F700_line1;

	private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::Label^  labelTrial2_F500_line1;

	private: System::Windows::Forms::Button^  button59;
private: System::Windows::Forms::Label^  labelTrial2_F200_line1;

	private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line4;

	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Label^  labelTrial3_1300;
private: System::Windows::Forms::Label^  labelTrial3_2000;


	private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Label^  labelTrial3_1500;

	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::Label^  labelTrial3_900;
private: System::Windows::Forms::Label^  labelTrial3_1200;


	private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Label^  labelTrial3_1000;

	private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::Label^  labelTrial3_800;

	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Label^  label134;
	private: System::Windows::Forms::Label^  label135;
	private: System::Windows::Forms::Label^  label136;
	private: System::Windows::Forms::Label^  label137;
	private: System::Windows::Forms::Label^  label138;
	private: System::Windows::Forms::Label^  label139;
	private: System::Windows::Forms::Label^  label140;
	private: System::Windows::Forms::Label^  label141;
	private: System::Windows::Forms::Label^  label142;
	private: System::Windows::Forms::Label^  label143;
	private: System::Windows::Forms::Button^  button91;
private: System::Windows::Forms::Label^  labelTrial3_400;

	private: System::Windows::Forms::Label^  label146;
private: System::Windows::Forms::Label^  labelTrial3_700;

	private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::Label^  labelTrial3_500;

	private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Label^  labelTrial3_200;

	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Label^  label150;
	private: System::Windows::Forms::Label^  label151;
	private: System::Windows::Forms::Label^  label152;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line7;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line7;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line6;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line5;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line4;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line3;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line2;
private: System::Windows::Forms::TextBox^  labelTrial1_I2_line1;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line7;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line6;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line5;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line4;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line3;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line2;
private: System::Windows::Forms::TextBox^  labelTrial1_I1_line1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_I;


private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_U;


private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Label^  label5;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(回转器实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_I = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial1_U = (gcnew System::Windows::Forms::PictureBox());
			this->labelTrial1_I2_line7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I1_line1 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line7 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line7 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line6 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line6 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line5 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line5 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line4 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line4 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line3 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial1_G1_line2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U2_line1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_F = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_F2000_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F200_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F200_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F200_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line4 = (gcnew System::Windows::Forms::TextBox());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1300_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F2000_line3 = (gcnew System::Windows::Forms::Label());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1500_line3 = (gcnew System::Windows::Forms::Label());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F900_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1200_line3 = (gcnew System::Windows::Forms::Label());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1000_line3 = (gcnew System::Windows::Forms::Label());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F800_line3 = (gcnew System::Windows::Forms::Label());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F400_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F700_line3 = (gcnew System::Windows::Forms::Label());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F500_line3 = (gcnew System::Windows::Forms::Label());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F200_line3 = (gcnew System::Windows::Forms::Label());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1300_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F2000_line2 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1500_line2 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1300_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F2000_line1 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1500_line1 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F900_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1200_line2 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1000_line2 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F800_line2 = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F900_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1200_line1 = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F1000_line1 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F800_line1 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F400_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F700_line2 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F500_line2 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F200_line2 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F400_line1 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F700_line1 = (gcnew System::Windows::Forms::Label());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F500_line1 = (gcnew System::Windows::Forms::Label());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_F200_line1 = (gcnew System::Windows::Forms::Label());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_F200_line4 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_1300 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_2000 = (gcnew System::Windows::Forms::Label());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_1500 = (gcnew System::Windows::Forms::Label());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_900 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_1200 = (gcnew System::Windows::Forms::Label());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_1000 = (gcnew System::Windows::Forms::Label());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_800 = (gcnew System::Windows::Forms::Label());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_400 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_700 = (gcnew System::Windows::Forms::Label());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_500 = (gcnew System::Windows::Forms::Label());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_200 = (gcnew System::Windows::Forms::Label());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_I))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_U))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->pictureBoxTrial1_I);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->pictureBoxTrial1_U);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line1);
			this->groupBox8->Controls->Add(this->button25);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line7);
			this->groupBox8->Controls->Add(this->button28);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line7);
			this->groupBox8->Controls->Add(this->button21);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line6);
			this->groupBox8->Controls->Add(this->button24);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line6);
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line5);
			this->groupBox8->Controls->Add(this->button20);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line5);
			this->groupBox8->Controls->Add(this->button13);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line4);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line4);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line3);
			this->groupBox8->Controls->Add(this->button12);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line3);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line2);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line2);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line1);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->labelTrial1_F);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(96, 86);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 2345);
			this->groupBox8->TabIndex = 84;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"回转器 实验内容1";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(499, 2301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 25);
			this->label5->TabIndex = 291;
			this->label5->Text = L"输入电流波形图";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(108, 1825);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 31);
			this->button5->TabIndex = 290;
			this->button5->Text = L"获取波形";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &回转器实验内容::button5_Click_1);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(502, 1709);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 25);
			this->label4->TabIndex = 160;
			this->label4->Text = L"输入电压波形图";
			// 
			// pictureBoxTrial1_I
			// 
			this->pictureBoxTrial1_I->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_I.Image")));
			this->pictureBoxTrial1_I->Location = System::Drawing::Point(238, 1821);
			this->pictureBoxTrial1_I->Name = L"pictureBoxTrial1_I";
			this->pictureBoxTrial1_I->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_I->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_I->TabIndex = 289;
			this->pictureBoxTrial1_I->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(108, 1229);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 31);
			this->button4->TabIndex = 159;
			this->button4->Text = L"获取波形";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &回转器实验内容::button4_Click_1);
			// 
			// pictureBoxTrial1_U
			// 
			this->pictureBoxTrial1_U->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_U.Image")));
			this->pictureBoxTrial1_U->Location = System::Drawing::Point(238, 1229);
			this->pictureBoxTrial1_U->Name = L"pictureBoxTrial1_U";
			this->pictureBoxTrial1_U->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_U->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_U->TabIndex = 158;
			this->pictureBoxTrial1_U->TabStop = false;
			// 
			// labelTrial1_I2_line7
			// 
			this->labelTrial1_I2_line7->Location = System::Drawing::Point(466, 1126);
			this->labelTrial1_I2_line7->Name = L"labelTrial1_I2_line7";
			this->labelTrial1_I2_line7->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line7->TabIndex = 157;
			// 
			// labelTrial1_I2_line6
			// 
			this->labelTrial1_I2_line6->Location = System::Drawing::Point(466, 1052);
			this->labelTrial1_I2_line6->Name = L"labelTrial1_I2_line6";
			this->labelTrial1_I2_line6->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line6->TabIndex = 156;
			// 
			// labelTrial1_I2_line5
			// 
			this->labelTrial1_I2_line5->Location = System::Drawing::Point(466, 967);
			this->labelTrial1_I2_line5->Name = L"labelTrial1_I2_line5";
			this->labelTrial1_I2_line5->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line5->TabIndex = 155;
			// 
			// labelTrial1_I2_line4
			// 
			this->labelTrial1_I2_line4->Location = System::Drawing::Point(466, 889);
			this->labelTrial1_I2_line4->Name = L"labelTrial1_I2_line4";
			this->labelTrial1_I2_line4->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line4->TabIndex = 154;
			// 
			// labelTrial1_I2_line3
			// 
			this->labelTrial1_I2_line3->Location = System::Drawing::Point(466, 807);
			this->labelTrial1_I2_line3->Name = L"labelTrial1_I2_line3";
			this->labelTrial1_I2_line3->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line3->TabIndex = 153;
			// 
			// labelTrial1_I2_line2
			// 
			this->labelTrial1_I2_line2->Location = System::Drawing::Point(466, 725);
			this->labelTrial1_I2_line2->Name = L"labelTrial1_I2_line2";
			this->labelTrial1_I2_line2->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line2->TabIndex = 152;
			// 
			// labelTrial1_I2_line1
			// 
			this->labelTrial1_I2_line1->Location = System::Drawing::Point(466, 637);
			this->labelTrial1_I2_line1->Name = L"labelTrial1_I2_line1";
			this->labelTrial1_I2_line1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->labelTrial1_I2_line1->Size = System::Drawing::Size(98, 30);
			this->labelTrial1_I2_line1->TabIndex = 151;
			// 
			// labelTrial1_I1_line7
			// 
			this->labelTrial1_I1_line7->Location = System::Drawing::Point(338, 1126);
			this->labelTrial1_I1_line7->Name = L"labelTrial1_I1_line7";
			this->labelTrial1_I1_line7->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line7->TabIndex = 150;
			// 
			// labelTrial1_I1_line6
			// 
			this->labelTrial1_I1_line6->Location = System::Drawing::Point(338, 1052);
			this->labelTrial1_I1_line6->Name = L"labelTrial1_I1_line6";
			this->labelTrial1_I1_line6->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line6->TabIndex = 149;
			// 
			// labelTrial1_I1_line5
			// 
			this->labelTrial1_I1_line5->Location = System::Drawing::Point(338, 967);
			this->labelTrial1_I1_line5->Name = L"labelTrial1_I1_line5";
			this->labelTrial1_I1_line5->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line5->TabIndex = 148;
			// 
			// labelTrial1_I1_line4
			// 
			this->labelTrial1_I1_line4->Location = System::Drawing::Point(338, 889);
			this->labelTrial1_I1_line4->Name = L"labelTrial1_I1_line4";
			this->labelTrial1_I1_line4->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line4->TabIndex = 147;
			// 
			// labelTrial1_I1_line3
			// 
			this->labelTrial1_I1_line3->Location = System::Drawing::Point(338, 807);
			this->labelTrial1_I1_line3->Name = L"labelTrial1_I1_line3";
			this->labelTrial1_I1_line3->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line3->TabIndex = 146;
			// 
			// labelTrial1_I1_line2
			// 
			this->labelTrial1_I1_line2->Location = System::Drawing::Point(338, 725);
			this->labelTrial1_I1_line2->Name = L"labelTrial1_I1_line2";
			this->labelTrial1_I1_line2->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line2->TabIndex = 145;
			// 
			// labelTrial1_I1_line1
			// 
			this->labelTrial1_I1_line1->Location = System::Drawing::Point(338, 637);
			this->labelTrial1_I1_line1->Name = L"labelTrial1_I1_line1";
			this->labelTrial1_I1_line1->Size = System::Drawing::Size(106, 30);
			this->labelTrial1_I1_line1->TabIndex = 144;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(238, 1154);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(82, 31);
			this->button25->TabIndex = 143;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &回转器实验内容::button25_Click);
			// 
			// labelTrial1_U2_line7
			// 
			this->labelTrial1_U2_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line7->Location = System::Drawing::Point(238, 1126);
			this->labelTrial1_U2_line7->Name = L"labelTrial1_U2_line7";
			this->labelTrial1_U2_line7->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line7->TabIndex = 142;
			// 
			// textBoxTrial1_GAver_line7
			// 
			this->textBoxTrial1_GAver_line7->Location = System::Drawing::Point(805, 1126);
			this->textBoxTrial1_GAver_line7->Name = L"textBoxTrial1_GAver_line7";
			this->textBoxTrial1_GAver_line7->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line7->TabIndex = 141;
			// 
			// textBoxTrial1_G2_line7
			// 
			this->textBoxTrial1_G2_line7->Location = System::Drawing::Point(687, 1126);
			this->textBoxTrial1_G2_line7->Name = L"textBoxTrial1_G2_line7";
			this->textBoxTrial1_G2_line7->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line7->TabIndex = 140;
			// 
			// labelTrial1_U1_line7
			// 
			this->labelTrial1_U1_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line7->Location = System::Drawing::Point(129, 1126);
			this->labelTrial1_U1_line7->Name = L"labelTrial1_U1_line7";
			this->labelTrial1_U1_line7->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line7->TabIndex = 135;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(129, 1154);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(90, 31);
			this->button28->TabIndex = 134;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &回转器实验内容::button28_Click);
			// 
			// textBoxTrial1_G1_line7
			// 
			this->textBoxTrial1_G1_line7->Location = System::Drawing::Point(569, 1124);
			this->textBoxTrial1_G1_line7->Name = L"textBoxTrial1_G1_line7";
			this->textBoxTrial1_G1_line7->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line7->TabIndex = 133;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(238, 1080);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(82, 31);
			this->button21->TabIndex = 132;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &回转器实验内容::button21_Click);
			// 
			// labelTrial1_U2_line6
			// 
			this->labelTrial1_U2_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line6->Location = System::Drawing::Point(238, 1052);
			this->labelTrial1_U2_line6->Name = L"labelTrial1_U2_line6";
			this->labelTrial1_U2_line6->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line6->TabIndex = 131;
			// 
			// textBoxTrial1_GAver_line6
			// 
			this->textBoxTrial1_GAver_line6->Location = System::Drawing::Point(805, 1052);
			this->textBoxTrial1_GAver_line6->Name = L"textBoxTrial1_GAver_line6";
			this->textBoxTrial1_GAver_line6->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line6->TabIndex = 130;
			// 
			// textBoxTrial1_G2_line6
			// 
			this->textBoxTrial1_G2_line6->Location = System::Drawing::Point(687, 1052);
			this->textBoxTrial1_G2_line6->Name = L"textBoxTrial1_G2_line6";
			this->textBoxTrial1_G2_line6->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line6->TabIndex = 129;
			// 
			// labelTrial1_U1_line6
			// 
			this->labelTrial1_U1_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line6->Location = System::Drawing::Point(129, 1052);
			this->labelTrial1_U1_line6->Name = L"labelTrial1_U1_line6";
			this->labelTrial1_U1_line6->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line6->TabIndex = 124;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(129, 1080);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(90, 31);
			this->button24->TabIndex = 123;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &回转器实验内容::button24_Click);
			// 
			// textBoxTrial1_G1_line6
			// 
			this->textBoxTrial1_G1_line6->Location = System::Drawing::Point(569, 1050);
			this->textBoxTrial1_G1_line6->Name = L"textBoxTrial1_G1_line6";
			this->textBoxTrial1_G1_line6->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line6->TabIndex = 122;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(238, 995);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 31);
			this->button17->TabIndex = 121;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &回转器实验内容::button17_Click);
			// 
			// labelTrial1_U2_line5
			// 
			this->labelTrial1_U2_line5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line5->Location = System::Drawing::Point(238, 967);
			this->labelTrial1_U2_line5->Name = L"labelTrial1_U2_line5";
			this->labelTrial1_U2_line5->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line5->TabIndex = 120;
			// 
			// textBoxTrial1_GAver_line5
			// 
			this->textBoxTrial1_GAver_line5->Location = System::Drawing::Point(805, 967);
			this->textBoxTrial1_GAver_line5->Name = L"textBoxTrial1_GAver_line5";
			this->textBoxTrial1_GAver_line5->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line5->TabIndex = 119;
			// 
			// textBoxTrial1_G2_line5
			// 
			this->textBoxTrial1_G2_line5->Location = System::Drawing::Point(687, 967);
			this->textBoxTrial1_G2_line5->Name = L"textBoxTrial1_G2_line5";
			this->textBoxTrial1_G2_line5->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line5->TabIndex = 118;
			// 
			// labelTrial1_U1_line5
			// 
			this->labelTrial1_U1_line5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line5->Location = System::Drawing::Point(129, 967);
			this->labelTrial1_U1_line5->Name = L"labelTrial1_U1_line5";
			this->labelTrial1_U1_line5->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line5->TabIndex = 113;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(129, 995);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 31);
			this->button20->TabIndex = 112;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &回转器实验内容::button20_Click);
			// 
			// textBoxTrial1_G1_line5
			// 
			this->textBoxTrial1_G1_line5->Location = System::Drawing::Point(569, 965);
			this->textBoxTrial1_G1_line5->Name = L"textBoxTrial1_G1_line5";
			this->textBoxTrial1_G1_line5->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line5->TabIndex = 111;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(238, 917);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 31);
			this->button13->TabIndex = 110;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &回转器实验内容::button13_Click);
			// 
			// labelTrial1_U2_line4
			// 
			this->labelTrial1_U2_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line4->Location = System::Drawing::Point(238, 889);
			this->labelTrial1_U2_line4->Name = L"labelTrial1_U2_line4";
			this->labelTrial1_U2_line4->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line4->TabIndex = 109;
			// 
			// textBoxTrial1_GAver_line4
			// 
			this->textBoxTrial1_GAver_line4->Location = System::Drawing::Point(805, 889);
			this->textBoxTrial1_GAver_line4->Name = L"textBoxTrial1_GAver_line4";
			this->textBoxTrial1_GAver_line4->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line4->TabIndex = 108;
			// 
			// textBoxTrial1_G2_line4
			// 
			this->textBoxTrial1_G2_line4->Location = System::Drawing::Point(687, 889);
			this->textBoxTrial1_G2_line4->Name = L"textBoxTrial1_G2_line4";
			this->textBoxTrial1_G2_line4->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line4->TabIndex = 107;
			// 
			// labelTrial1_U1_line4
			// 
			this->labelTrial1_U1_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line4->Location = System::Drawing::Point(129, 889);
			this->labelTrial1_U1_line4->Name = L"labelTrial1_U1_line4";
			this->labelTrial1_U1_line4->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line4->TabIndex = 102;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(129, 917);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 31);
			this->button16->TabIndex = 101;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &回转器实验内容::button16_Click);
			// 
			// textBoxTrial1_G1_line4
			// 
			this->textBoxTrial1_G1_line4->Location = System::Drawing::Point(569, 887);
			this->textBoxTrial1_G1_line4->Name = L"textBoxTrial1_G1_line4";
			this->textBoxTrial1_G1_line4->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line4->TabIndex = 100;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(238, 835);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(82, 31);
			this->button7->TabIndex = 99;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &回转器实验内容::button7_Click);
			// 
			// labelTrial1_U2_line3
			// 
			this->labelTrial1_U2_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line3->Location = System::Drawing::Point(238, 807);
			this->labelTrial1_U2_line3->Name = L"labelTrial1_U2_line3";
			this->labelTrial1_U2_line3->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line3->TabIndex = 98;
			// 
			// textBoxTrial1_GAver_line3
			// 
			this->textBoxTrial1_GAver_line3->Location = System::Drawing::Point(805, 807);
			this->textBoxTrial1_GAver_line3->Name = L"textBoxTrial1_GAver_line3";
			this->textBoxTrial1_GAver_line3->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line3->TabIndex = 97;
			// 
			// textBoxTrial1_G2_line3
			// 
			this->textBoxTrial1_G2_line3->Location = System::Drawing::Point(687, 807);
			this->textBoxTrial1_G2_line3->Name = L"textBoxTrial1_G2_line3";
			this->textBoxTrial1_G2_line3->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line3->TabIndex = 96;
			// 
			// labelTrial1_U1_line3
			// 
			this->labelTrial1_U1_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line3->Location = System::Drawing::Point(129, 807);
			this->labelTrial1_U1_line3->Name = L"labelTrial1_U1_line3";
			this->labelTrial1_U1_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line3->TabIndex = 91;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(129, 835);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 31);
			this->button12->TabIndex = 90;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &回转器实验内容::button12_Click);
			// 
			// textBoxTrial1_G1_line3
			// 
			this->textBoxTrial1_G1_line3->Location = System::Drawing::Point(569, 805);
			this->textBoxTrial1_G1_line3->Name = L"textBoxTrial1_G1_line3";
			this->textBoxTrial1_G1_line3->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line3->TabIndex = 89;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(238, 753);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 31);
			this->button3->TabIndex = 88;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &回转器实验内容::button3_Click);
			// 
			// labelTrial1_U2_line2
			// 
			this->labelTrial1_U2_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line2->Location = System::Drawing::Point(238, 725);
			this->labelTrial1_U2_line2->Name = L"labelTrial1_U2_line2";
			this->labelTrial1_U2_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line2->TabIndex = 87;
			// 
			// textBoxTrial1_GAver_line2
			// 
			this->textBoxTrial1_GAver_line2->Location = System::Drawing::Point(805, 725);
			this->textBoxTrial1_GAver_line2->Name = L"textBoxTrial1_GAver_line2";
			this->textBoxTrial1_GAver_line2->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line2->TabIndex = 86;
			// 
			// textBoxTrial1_G2_line2
			// 
			this->textBoxTrial1_G2_line2->Location = System::Drawing::Point(687, 725);
			this->textBoxTrial1_G2_line2->Name = L"textBoxTrial1_G2_line2";
			this->textBoxTrial1_G2_line2->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line2->TabIndex = 85;
			// 
			// labelTrial1_U1_line2
			// 
			this->labelTrial1_U1_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line2->Location = System::Drawing::Point(129, 725);
			this->labelTrial1_U1_line2->Name = L"labelTrial1_U1_line2";
			this->labelTrial1_U1_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line2->TabIndex = 80;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(129, 753);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 31);
			this->button6->TabIndex = 79;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &回转器实验内容::button6_Click);
			// 
			// textBoxTrial1_G1_line2
			// 
			this->textBoxTrial1_G1_line2->Location = System::Drawing::Point(569, 725);
			this->textBoxTrial1_G1_line2->Name = L"textBoxTrial1_G1_line2";
			this->textBoxTrial1_G1_line2->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line2->TabIndex = 78;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(238, 665);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 31);
			this->button1->TabIndex = 77;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &回转器实验内容::button1_Click);
			// 
			// labelTrial1_U2_line1
			// 
			this->labelTrial1_U2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line1->Location = System::Drawing::Point(238, 637);
			this->labelTrial1_U2_line1->Name = L"labelTrial1_U2_line1";
			this->labelTrial1_U2_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line1->TabIndex = 76;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(805, 598);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(193, 25);
			this->label22->TabIndex = 75;
			this->label22->Text = L"G平均=( G\'+G\'\')/2";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(687, 598);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(112, 25);
			this->label21->TabIndex = 74;
			this->label21->Text = L"G\'\'=I2/U1";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(569, 598);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(112, 25);
			this->label20->TabIndex = 73;
			this->label20->Text = L"G＇=I1/U2";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(466, 598);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(97, 25);
			this->label19->TabIndex = 72;
			this->label19->Text = L"I2(mA)";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(238, 598);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(82, 25);
			this->label18->TabIndex = 71;
			this->label18->Text = L"U2(v)";
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(6, 1127);
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
			this->label14->Location = System::Drawing::Point(6, 1052);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 25);
			this->label14->TabIndex = 69;
			this->label14->Text = L"4K";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(6, 968);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(101, 25);
			this->label15->TabIndex = 68;
			this->label15->Text = L"3K";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(6, 888);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(101, 25);
			this->label16->TabIndex = 67;
			this->label16->Text = L"2K";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(6, 808);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(101, 25);
			this->label13->TabIndex = 66;
			this->label13->Text = L"1.5K";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(6, 726);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 25);
			this->label12->TabIndex = 65;
			this->label12->Text = L"1K";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(6, 637);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 25);
			this->label11->TabIndex = 64;
			this->label11->Text = L"500";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(6, 556);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 67);
			this->label10->TabIndex = 63;
			this->label10->Text = L"RL（Ω）";
			// 
			// textBoxTrial1_GAver_line1
			// 
			this->textBoxTrial1_GAver_line1->Location = System::Drawing::Point(805, 637);
			this->textBoxTrial1_GAver_line1->Name = L"textBoxTrial1_GAver_line1";
			this->textBoxTrial1_GAver_line1->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line1->TabIndex = 62;
			// 
			// textBoxTrial1_G2_line1
			// 
			this->textBoxTrial1_G2_line1->Location = System::Drawing::Point(687, 637);
			this->textBoxTrial1_G2_line1->Name = L"textBoxTrial1_G2_line1";
			this->textBoxTrial1_G2_line1->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line1->TabIndex = 61;
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(129, 637);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line1->TabIndex = 56;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(129, 665);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 31);
			this->button2->TabIndex = 51;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &回转器实验内容::button2_Click);
			// 
			// labelTrial1_F
			// 
			this->labelTrial1_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_F->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_F->Location = System::Drawing::Point(338, 556);
			this->labelTrial1_F->Name = L"labelTrial1_F";
			this->labelTrial1_F->Size = System::Drawing::Size(660, 25);
			this->labelTrial1_F->TabIndex = 50;
			this->labelTrial1_F->Text = L"计  算  值";
			this->labelTrial1_F->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_G1_line1
			// 
			this->textBoxTrial1_G1_line1->Location = System::Drawing::Point(569, 635);
			this->textBoxTrial1_G1_line1->Name = L"textBoxTrial1_G1_line1";
			this->textBoxTrial1_G1_line1->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line1->TabIndex = 49;
			// 
			// labelTrial1_R_Ur
			// 
			this->labelTrial1_R_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur->Location = System::Drawing::Point(338, 598);
			this->labelTrial1_R_Ur->Name = L"labelTrial1_R_Ur";
			this->labelTrial1_R_Ur->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_R_Ur->TabIndex = 48;
			this->labelTrial1_R_Ur->Text = L"I1(mA)";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(129, 598);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 25);
			this->label8->TabIndex = 47;
			this->label8->Text = L"U1(v)";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(129, 556);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 25);
			this->label9->TabIndex = 46;
			this->label9->Text = L"测 量 值";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(76, 506);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1078, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"    用示波器测量不同负载电阻RL时的U1、U2和URL、URS，并计算相应的电流I1、I2和回转常数G，一并记入表18—1";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(424, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"      图 18-3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(277, 122);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(532, 261);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1161, 49);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    实验线路如图18－3所示。\r\n    1．在图18－3的2－2＇端接纯电阻负载（电阻箱），信号源频率固定在1KHz，信号电压≤3V。";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(469, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 25);
			this->label1->TabIndex = 83;
			this->label1->Text = L"回转器 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line4);
			this->groupBox1->Controls->Add(this->button47);
			this->groupBox1->Controls->Add(this->labelTrial2_F1300_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F2000_line3);
			this->groupBox1->Controls->Add(this->button48);
			this->groupBox1->Controls->Add(this->labelTrial2_F1500_line3);
			this->groupBox1->Controls->Add(this->button49);
			this->groupBox1->Controls->Add(this->button50);
			this->groupBox1->Controls->Add(this->labelTrial2_F900_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F1200_line3);
			this->groupBox1->Controls->Add(this->button51);
			this->groupBox1->Controls->Add(this->labelTrial2_F1000_line3);
			this->groupBox1->Controls->Add(this->button52);
			this->groupBox1->Controls->Add(this->labelTrial2_F800_line3);
			this->groupBox1->Controls->Add(this->button53);
			this->groupBox1->Controls->Add(this->button54);
			this->groupBox1->Controls->Add(this->labelTrial2_F400_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F700_line3);
			this->groupBox1->Controls->Add(this->button55);
			this->groupBox1->Controls->Add(this->labelTrial2_F500_line3);
			this->groupBox1->Controls->Add(this->button56);
			this->groupBox1->Controls->Add(this->labelTrial2_F200_line3);
			this->groupBox1->Controls->Add(this->button61);
			this->groupBox1->Controls->Add(this->button41);
			this->groupBox1->Controls->Add(this->labelTrial2_F1300_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F2000_line2);
			this->groupBox1->Controls->Add(this->button42);
			this->groupBox1->Controls->Add(this->labelTrial2_F1500_line2);
			this->groupBox1->Controls->Add(this->button43);
			this->groupBox1->Controls->Add(this->button44);
			this->groupBox1->Controls->Add(this->labelTrial2_F1300_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F2000_line1);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->labelTrial2_F1500_line1);
			this->groupBox1->Controls->Add(this->button46);
			this->groupBox1->Controls->Add(this->button33);
			this->groupBox1->Controls->Add(this->labelTrial2_F900_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F1200_line2);
			this->groupBox1->Controls->Add(this->button34);
			this->groupBox1->Controls->Add(this->labelTrial2_F1000_line2);
			this->groupBox1->Controls->Add(this->button35);
			this->groupBox1->Controls->Add(this->labelTrial2_F800_line2);
			this->groupBox1->Controls->Add(this->button36);
			this->groupBox1->Controls->Add(this->button37);
			this->groupBox1->Controls->Add(this->labelTrial2_F900_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F1200_line1);
			this->groupBox1->Controls->Add(this->button38);
			this->groupBox1->Controls->Add(this->labelTrial2_F1000_line1);
			this->groupBox1->Controls->Add(this->button39);
			this->groupBox1->Controls->Add(this->labelTrial2_F800_line1);
			this->groupBox1->Controls->Add(this->button40);
			this->groupBox1->Controls->Add(this->button29);
			this->groupBox1->Controls->Add(this->labelTrial2_F400_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F700_line2);
			this->groupBox1->Controls->Add(this->button30);
			this->groupBox1->Controls->Add(this->labelTrial2_F500_line2);
			this->groupBox1->Controls->Add(this->button31);
			this->groupBox1->Controls->Add(this->labelTrial2_F200_line2);
			this->groupBox1->Controls->Add(this->button32);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->label57);
			this->groupBox1->Controls->Add(this->label56);
			this->groupBox1->Controls->Add(this->label55);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label53);
			this->groupBox1->Controls->Add(this->label54);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label48);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->button57);
			this->groupBox1->Controls->Add(this->labelTrial2_F400_line1);
			this->groupBox1->Controls->Add(this->label98);
			this->groupBox1->Controls->Add(this->label99);
			this->groupBox1->Controls->Add(this->labelTrial2_F700_line1);
			this->groupBox1->Controls->Add(this->button58);
			this->groupBox1->Controls->Add(this->labelTrial2_F500_line1);
			this->groupBox1->Controls->Add(this->button59);
			this->groupBox1->Controls->Add(this->labelTrial2_F200_line1);
			this->groupBox1->Controls->Add(this->button60);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line4);
			this->groupBox1->Controls->Add(this->label105);
			this->groupBox1->Controls->Add(this->label106);
			this->groupBox1->Controls->Add(this->label92);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(96, 2466);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 663);
			this->groupBox1->TabIndex = 85;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"回转器 实验内容3";
			// 
			// textBoxTrial2_F2000_line7
			// 
			this->textBoxTrial2_F2000_line7->Location = System::Drawing::Point(1147, 594);
			this->textBoxTrial2_F2000_line7->Name = L"textBoxTrial2_F2000_line7";
			this->textBoxTrial2_F2000_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line7->TabIndex = 285;
			// 
			// textBoxTrial2_F1500_line7
			// 
			this->textBoxTrial2_F1500_line7->Location = System::Drawing::Point(1051, 594);
			this->textBoxTrial2_F1500_line7->Name = L"textBoxTrial2_F1500_line7";
			this->textBoxTrial2_F1500_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line7->TabIndex = 284;
			// 
			// textBoxTrial2_F1300_line7
			// 
			this->textBoxTrial2_F1300_line7->Location = System::Drawing::Point(956, 594);
			this->textBoxTrial2_F1300_line7->Name = L"textBoxTrial2_F1300_line7";
			this->textBoxTrial2_F1300_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line7->TabIndex = 283;
			// 
			// textBoxTrial2_F1200_line7
			// 
			this->textBoxTrial2_F1200_line7->Location = System::Drawing::Point(860, 594);
			this->textBoxTrial2_F1200_line7->Name = L"textBoxTrial2_F1200_line7";
			this->textBoxTrial2_F1200_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line7->TabIndex = 282;
			// 
			// textBoxTrial2_F1000_line7
			// 
			this->textBoxTrial2_F1000_line7->Location = System::Drawing::Point(766, 594);
			this->textBoxTrial2_F1000_line7->Name = L"textBoxTrial2_F1000_line7";
			this->textBoxTrial2_F1000_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line7->TabIndex = 281;
			// 
			// textBoxTrial2_F900_line7
			// 
			this->textBoxTrial2_F900_line7->Location = System::Drawing::Point(670, 594);
			this->textBoxTrial2_F900_line7->Name = L"textBoxTrial2_F900_line7";
			this->textBoxTrial2_F900_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line7->TabIndex = 280;
			// 
			// textBoxTrial2_F800_line7
			// 
			this->textBoxTrial2_F800_line7->Location = System::Drawing::Point(574, 594);
			this->textBoxTrial2_F800_line7->Name = L"textBoxTrial2_F800_line7";
			this->textBoxTrial2_F800_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line7->TabIndex = 279;
			// 
			// textBoxTrial2_F700_line7
			// 
			this->textBoxTrial2_F700_line7->Location = System::Drawing::Point(474, 594);
			this->textBoxTrial2_F700_line7->Name = L"textBoxTrial2_F700_line7";
			this->textBoxTrial2_F700_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line7->TabIndex = 278;
			// 
			// textBoxTrial2_F500_line7
			// 
			this->textBoxTrial2_F500_line7->Location = System::Drawing::Point(378, 594);
			this->textBoxTrial2_F500_line7->Name = L"textBoxTrial2_F500_line7";
			this->textBoxTrial2_F500_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line7->TabIndex = 277;
			// 
			// textBoxTrial2_F400_line7
			// 
			this->textBoxTrial2_F400_line7->Location = System::Drawing::Point(282, 594);
			this->textBoxTrial2_F400_line7->Name = L"textBoxTrial2_F400_line7";
			this->textBoxTrial2_F400_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line7->TabIndex = 276;
			// 
			// textBoxTrial2_F200_line7
			// 
			this->textBoxTrial2_F200_line7->Location = System::Drawing::Point(182, 594);
			this->textBoxTrial2_F200_line7->Name = L"textBoxTrial2_F200_line7";
			this->textBoxTrial2_F200_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line7->TabIndex = 275;
			// 
			// textBoxTrial2_F2000_line6
			// 
			this->textBoxTrial2_F2000_line6->Location = System::Drawing::Point(1147, 548);
			this->textBoxTrial2_F2000_line6->Name = L"textBoxTrial2_F2000_line6";
			this->textBoxTrial2_F2000_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line6->TabIndex = 274;
			// 
			// textBoxTrial2_F1500_line6
			// 
			this->textBoxTrial2_F1500_line6->Location = System::Drawing::Point(1051, 548);
			this->textBoxTrial2_F1500_line6->Name = L"textBoxTrial2_F1500_line6";
			this->textBoxTrial2_F1500_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line6->TabIndex = 273;
			// 
			// textBoxTrial2_F1300_line6
			// 
			this->textBoxTrial2_F1300_line6->Location = System::Drawing::Point(956, 548);
			this->textBoxTrial2_F1300_line6->Name = L"textBoxTrial2_F1300_line6";
			this->textBoxTrial2_F1300_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line6->TabIndex = 272;
			// 
			// textBoxTrial2_F1200_line6
			// 
			this->textBoxTrial2_F1200_line6->Location = System::Drawing::Point(860, 548);
			this->textBoxTrial2_F1200_line6->Name = L"textBoxTrial2_F1200_line6";
			this->textBoxTrial2_F1200_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line6->TabIndex = 271;
			// 
			// textBoxTrial2_F1000_line6
			// 
			this->textBoxTrial2_F1000_line6->Location = System::Drawing::Point(766, 548);
			this->textBoxTrial2_F1000_line6->Name = L"textBoxTrial2_F1000_line6";
			this->textBoxTrial2_F1000_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line6->TabIndex = 270;
			// 
			// textBoxTrial2_F900_line6
			// 
			this->textBoxTrial2_F900_line6->Location = System::Drawing::Point(670, 548);
			this->textBoxTrial2_F900_line6->Name = L"textBoxTrial2_F900_line6";
			this->textBoxTrial2_F900_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line6->TabIndex = 269;
			// 
			// textBoxTrial2_F800_line6
			// 
			this->textBoxTrial2_F800_line6->Location = System::Drawing::Point(574, 548);
			this->textBoxTrial2_F800_line6->Name = L"textBoxTrial2_F800_line6";
			this->textBoxTrial2_F800_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line6->TabIndex = 268;
			// 
			// textBoxTrial2_F700_line6
			// 
			this->textBoxTrial2_F700_line6->Location = System::Drawing::Point(474, 548);
			this->textBoxTrial2_F700_line6->Name = L"textBoxTrial2_F700_line6";
			this->textBoxTrial2_F700_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line6->TabIndex = 267;
			// 
			// textBoxTrial2_F500_line6
			// 
			this->textBoxTrial2_F500_line6->Location = System::Drawing::Point(378, 548);
			this->textBoxTrial2_F500_line6->Name = L"textBoxTrial2_F500_line6";
			this->textBoxTrial2_F500_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line6->TabIndex = 266;
			// 
			// textBoxTrial2_F400_line6
			// 
			this->textBoxTrial2_F400_line6->Location = System::Drawing::Point(282, 548);
			this->textBoxTrial2_F400_line6->Name = L"textBoxTrial2_F400_line6";
			this->textBoxTrial2_F400_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line6->TabIndex = 265;
			// 
			// textBoxTrial2_F200_line6
			// 
			this->textBoxTrial2_F200_line6->Location = System::Drawing::Point(182, 548);
			this->textBoxTrial2_F200_line6->Name = L"textBoxTrial2_F200_line6";
			this->textBoxTrial2_F200_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line6->TabIndex = 264;
			// 
			// textBoxTrial2_F2000_line5
			// 
			this->textBoxTrial2_F2000_line5->Location = System::Drawing::Point(1147, 502);
			this->textBoxTrial2_F2000_line5->Name = L"textBoxTrial2_F2000_line5";
			this->textBoxTrial2_F2000_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line5->TabIndex = 263;
			// 
			// textBoxTrial2_F1500_line5
			// 
			this->textBoxTrial2_F1500_line5->Location = System::Drawing::Point(1051, 502);
			this->textBoxTrial2_F1500_line5->Name = L"textBoxTrial2_F1500_line5";
			this->textBoxTrial2_F1500_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line5->TabIndex = 262;
			// 
			// textBoxTrial2_F1300_line5
			// 
			this->textBoxTrial2_F1300_line5->Location = System::Drawing::Point(956, 502);
			this->textBoxTrial2_F1300_line5->Name = L"textBoxTrial2_F1300_line5";
			this->textBoxTrial2_F1300_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line5->TabIndex = 261;
			// 
			// textBoxTrial2_F1200_line5
			// 
			this->textBoxTrial2_F1200_line5->Location = System::Drawing::Point(860, 502);
			this->textBoxTrial2_F1200_line5->Name = L"textBoxTrial2_F1200_line5";
			this->textBoxTrial2_F1200_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line5->TabIndex = 260;
			// 
			// textBoxTrial2_F1000_line5
			// 
			this->textBoxTrial2_F1000_line5->Location = System::Drawing::Point(766, 502);
			this->textBoxTrial2_F1000_line5->Name = L"textBoxTrial2_F1000_line5";
			this->textBoxTrial2_F1000_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line5->TabIndex = 259;
			// 
			// textBoxTrial2_F900_line5
			// 
			this->textBoxTrial2_F900_line5->Location = System::Drawing::Point(670, 502);
			this->textBoxTrial2_F900_line5->Name = L"textBoxTrial2_F900_line5";
			this->textBoxTrial2_F900_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line5->TabIndex = 258;
			// 
			// textBoxTrial2_F800_line5
			// 
			this->textBoxTrial2_F800_line5->Location = System::Drawing::Point(574, 502);
			this->textBoxTrial2_F800_line5->Name = L"textBoxTrial2_F800_line5";
			this->textBoxTrial2_F800_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line5->TabIndex = 257;
			// 
			// textBoxTrial2_F700_line5
			// 
			this->textBoxTrial2_F700_line5->Location = System::Drawing::Point(474, 502);
			this->textBoxTrial2_F700_line5->Name = L"textBoxTrial2_F700_line5";
			this->textBoxTrial2_F700_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line5->TabIndex = 256;
			// 
			// textBoxTrial2_F500_line5
			// 
			this->textBoxTrial2_F500_line5->Location = System::Drawing::Point(378, 502);
			this->textBoxTrial2_F500_line5->Name = L"textBoxTrial2_F500_line5";
			this->textBoxTrial2_F500_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line5->TabIndex = 255;
			// 
			// textBoxTrial2_F400_line5
			// 
			this->textBoxTrial2_F400_line5->Location = System::Drawing::Point(282, 502);
			this->textBoxTrial2_F400_line5->Name = L"textBoxTrial2_F400_line5";
			this->textBoxTrial2_F400_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line5->TabIndex = 254;
			// 
			// textBoxTrial2_F200_line5
			// 
			this->textBoxTrial2_F200_line5->Location = System::Drawing::Point(182, 502);
			this->textBoxTrial2_F200_line5->Name = L"textBoxTrial2_F200_line5";
			this->textBoxTrial2_F200_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line5->TabIndex = 253;
			// 
			// textBoxTrial2_F2000_line4
			// 
			this->textBoxTrial2_F2000_line4->Location = System::Drawing::Point(1147, 453);
			this->textBoxTrial2_F2000_line4->Name = L"textBoxTrial2_F2000_line4";
			this->textBoxTrial2_F2000_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line4->TabIndex = 252;
			// 
			// textBoxTrial2_F1500_line4
			// 
			this->textBoxTrial2_F1500_line4->Location = System::Drawing::Point(1051, 453);
			this->textBoxTrial2_F1500_line4->Name = L"textBoxTrial2_F1500_line4";
			this->textBoxTrial2_F1500_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line4->TabIndex = 251;
			// 
			// textBoxTrial2_F1300_line4
			// 
			this->textBoxTrial2_F1300_line4->Location = System::Drawing::Point(956, 453);
			this->textBoxTrial2_F1300_line4->Name = L"textBoxTrial2_F1300_line4";
			this->textBoxTrial2_F1300_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line4->TabIndex = 250;
			// 
			// textBoxTrial2_F1200_line4
			// 
			this->textBoxTrial2_F1200_line4->Location = System::Drawing::Point(860, 453);
			this->textBoxTrial2_F1200_line4->Name = L"textBoxTrial2_F1200_line4";
			this->textBoxTrial2_F1200_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line4->TabIndex = 249;
			// 
			// textBoxTrial2_F1000_line4
			// 
			this->textBoxTrial2_F1000_line4->Location = System::Drawing::Point(766, 453);
			this->textBoxTrial2_F1000_line4->Name = L"textBoxTrial2_F1000_line4";
			this->textBoxTrial2_F1000_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line4->TabIndex = 248;
			// 
			// textBoxTrial2_F900_line4
			// 
			this->textBoxTrial2_F900_line4->Location = System::Drawing::Point(670, 453);
			this->textBoxTrial2_F900_line4->Name = L"textBoxTrial2_F900_line4";
			this->textBoxTrial2_F900_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line4->TabIndex = 247;
			// 
			// textBoxTrial2_F800_line4
			// 
			this->textBoxTrial2_F800_line4->Location = System::Drawing::Point(574, 453);
			this->textBoxTrial2_F800_line4->Name = L"textBoxTrial2_F800_line4";
			this->textBoxTrial2_F800_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line4->TabIndex = 246;
			// 
			// textBoxTrial2_F700_line4
			// 
			this->textBoxTrial2_F700_line4->Location = System::Drawing::Point(474, 453);
			this->textBoxTrial2_F700_line4->Name = L"textBoxTrial2_F700_line4";
			this->textBoxTrial2_F700_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line4->TabIndex = 245;
			// 
			// textBoxTrial2_F500_line4
			// 
			this->textBoxTrial2_F500_line4->Location = System::Drawing::Point(378, 453);
			this->textBoxTrial2_F500_line4->Name = L"textBoxTrial2_F500_line4";
			this->textBoxTrial2_F500_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line4->TabIndex = 244;
			// 
			// textBoxTrial2_F400_line4
			// 
			this->textBoxTrial2_F400_line4->Location = System::Drawing::Point(282, 453);
			this->textBoxTrial2_F400_line4->Name = L"textBoxTrial2_F400_line4";
			this->textBoxTrial2_F400_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line4->TabIndex = 243;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(954, 407);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(90, 31);
			this->button47->TabIndex = 242;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &回转器实验内容::button47_Click);
			// 
			// labelTrial2_F1300_line3
			// 
			this->labelTrial2_F1300_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1300_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1300_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1300_line3->Location = System::Drawing::Point(954, 379);
			this->labelTrial2_F1300_line3->Name = L"labelTrial2_F1300_line3";
			this->labelTrial2_F1300_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1300_line3->TabIndex = 241;
			// 
			// labelTrial2_F2000_line3
			// 
			this->labelTrial2_F2000_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F2000_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F2000_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F2000_line3->Location = System::Drawing::Point(1147, 379);
			this->labelTrial2_F2000_line3->Name = L"labelTrial2_F2000_line3";
			this->labelTrial2_F2000_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F2000_line3->TabIndex = 240;
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(1147, 407);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(90, 31);
			this->button48->TabIndex = 239;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &回转器实验内容::button48_Click);
			// 
			// labelTrial2_F1500_line3
			// 
			this->labelTrial2_F1500_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1500_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1500_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1500_line3->Location = System::Drawing::Point(1051, 379);
			this->labelTrial2_F1500_line3->Name = L"labelTrial2_F1500_line3";
			this->labelTrial2_F1500_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1500_line3->TabIndex = 238;
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(1051, 407);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(90, 31);
			this->button49->TabIndex = 237;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &回转器实验内容::button49_Click);
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(667, 407);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(90, 31);
			this->button50->TabIndex = 236;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &回转器实验内容::button50_Click);
			// 
			// labelTrial2_F900_line3
			// 
			this->labelTrial2_F900_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F900_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F900_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F900_line3->Location = System::Drawing::Point(667, 379);
			this->labelTrial2_F900_line3->Name = L"labelTrial2_F900_line3";
			this->labelTrial2_F900_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F900_line3->TabIndex = 235;
			// 
			// labelTrial2_F1200_line3
			// 
			this->labelTrial2_F1200_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1200_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1200_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1200_line3->Location = System::Drawing::Point(860, 379);
			this->labelTrial2_F1200_line3->Name = L"labelTrial2_F1200_line3";
			this->labelTrial2_F1200_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1200_line3->TabIndex = 234;
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(860, 407);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(90, 31);
			this->button51->TabIndex = 233;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &回转器实验内容::button51_Click);
			// 
			// labelTrial2_F1000_line3
			// 
			this->labelTrial2_F1000_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1000_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1000_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1000_line3->Location = System::Drawing::Point(764, 379);
			this->labelTrial2_F1000_line3->Name = L"labelTrial2_F1000_line3";
			this->labelTrial2_F1000_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1000_line3->TabIndex = 232;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(764, 407);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(90, 31);
			this->button52->TabIndex = 231;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &回转器实验内容::button52_Click);
			// 
			// labelTrial2_F800_line3
			// 
			this->labelTrial2_F800_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F800_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F800_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F800_line3->Location = System::Drawing::Point(569, 379);
			this->labelTrial2_F800_line3->Name = L"labelTrial2_F800_line3";
			this->labelTrial2_F800_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F800_line3->TabIndex = 230;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(569, 407);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(90, 31);
			this->button53->TabIndex = 229;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &回转器实验内容::button53_Click);
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(282, 407);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(90, 31);
			this->button54->TabIndex = 228;
			this->button54->Text = L"获取";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &回转器实验内容::button54_Click);
			// 
			// labelTrial2_F400_line3
			// 
			this->labelTrial2_F400_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F400_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F400_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F400_line3->Location = System::Drawing::Point(282, 379);
			this->labelTrial2_F400_line3->Name = L"labelTrial2_F400_line3";
			this->labelTrial2_F400_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F400_line3->TabIndex = 227;
			// 
			// labelTrial2_F700_line3
			// 
			this->labelTrial2_F700_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F700_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F700_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F700_line3->Location = System::Drawing::Point(474, 379);
			this->labelTrial2_F700_line3->Name = L"labelTrial2_F700_line3";
			this->labelTrial2_F700_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F700_line3->TabIndex = 226;
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button55->ForeColor = System::Drawing::Color::Black;
			this->button55->Location = System::Drawing::Point(474, 407);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(90, 31);
			this->button55->TabIndex = 225;
			this->button55->Text = L"获取";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &回转器实验内容::button55_Click);
			// 
			// labelTrial2_F500_line3
			// 
			this->labelTrial2_F500_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F500_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F500_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F500_line3->Location = System::Drawing::Point(378, 379);
			this->labelTrial2_F500_line3->Name = L"labelTrial2_F500_line3";
			this->labelTrial2_F500_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F500_line3->TabIndex = 224;
			// 
			// button56
			// 
			this->button56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button56->ForeColor = System::Drawing::Color::Black;
			this->button56->Location = System::Drawing::Point(378, 407);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(90, 31);
			this->button56->TabIndex = 223;
			this->button56->Text = L"获取";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &回转器实验内容::button56_Click);
			// 
			// labelTrial2_F200_line3
			// 
			this->labelTrial2_F200_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F200_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F200_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F200_line3->Location = System::Drawing::Point(182, 379);
			this->labelTrial2_F200_line3->Name = L"labelTrial2_F200_line3";
			this->labelTrial2_F200_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F200_line3->TabIndex = 222;
			// 
			// button61
			// 
			this->button61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button61->ForeColor = System::Drawing::Color::Black;
			this->button61->Location = System::Drawing::Point(182, 407);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(90, 31);
			this->button61->TabIndex = 221;
			this->button61->Text = L"获取";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &回转器实验内容::button61_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(954, 334);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(90, 31);
			this->button41->TabIndex = 220;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &回转器实验内容::button41_Click);
			// 
			// labelTrial2_F1300_line2
			// 
			this->labelTrial2_F1300_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1300_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1300_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1300_line2->Location = System::Drawing::Point(954, 306);
			this->labelTrial2_F1300_line2->Name = L"labelTrial2_F1300_line2";
			this->labelTrial2_F1300_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1300_line2->TabIndex = 219;
			// 
			// labelTrial2_F2000_line2
			// 
			this->labelTrial2_F2000_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F2000_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F2000_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F2000_line2->Location = System::Drawing::Point(1147, 306);
			this->labelTrial2_F2000_line2->Name = L"labelTrial2_F2000_line2";
			this->labelTrial2_F2000_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F2000_line2->TabIndex = 218;
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(1147, 334);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(90, 31);
			this->button42->TabIndex = 217;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &回转器实验内容::button42_Click);
			// 
			// labelTrial2_F1500_line2
			// 
			this->labelTrial2_F1500_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1500_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1500_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1500_line2->Location = System::Drawing::Point(1051, 306);
			this->labelTrial2_F1500_line2->Name = L"labelTrial2_F1500_line2";
			this->labelTrial2_F1500_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1500_line2->TabIndex = 216;
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(1051, 334);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(90, 31);
			this->button43->TabIndex = 215;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &回转器实验内容::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(954, 261);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(90, 31);
			this->button44->TabIndex = 214;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &回转器实验内容::button44_Click);
			// 
			// labelTrial2_F1300_line1
			// 
			this->labelTrial2_F1300_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1300_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1300_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1300_line1->Location = System::Drawing::Point(954, 233);
			this->labelTrial2_F1300_line1->Name = L"labelTrial2_F1300_line1";
			this->labelTrial2_F1300_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1300_line1->TabIndex = 213;
			// 
			// labelTrial2_F2000_line1
			// 
			this->labelTrial2_F2000_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F2000_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F2000_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F2000_line1->Location = System::Drawing::Point(1147, 233);
			this->labelTrial2_F2000_line1->Name = L"labelTrial2_F2000_line1";
			this->labelTrial2_F2000_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F2000_line1->TabIndex = 212;
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(1147, 261);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(90, 31);
			this->button45->TabIndex = 211;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &回转器实验内容::button45_Click);
			// 
			// labelTrial2_F1500_line1
			// 
			this->labelTrial2_F1500_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1500_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1500_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1500_line1->Location = System::Drawing::Point(1051, 233);
			this->labelTrial2_F1500_line1->Name = L"labelTrial2_F1500_line1";
			this->labelTrial2_F1500_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1500_line1->TabIndex = 210;
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(1051, 261);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(90, 31);
			this->button46->TabIndex = 209;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &回转器实验内容::button46_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(667, 334);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(90, 31);
			this->button33->TabIndex = 208;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &回转器实验内容::button33_Click);
			// 
			// labelTrial2_F900_line2
			// 
			this->labelTrial2_F900_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F900_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F900_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F900_line2->Location = System::Drawing::Point(667, 306);
			this->labelTrial2_F900_line2->Name = L"labelTrial2_F900_line2";
			this->labelTrial2_F900_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F900_line2->TabIndex = 207;
			// 
			// labelTrial2_F1200_line2
			// 
			this->labelTrial2_F1200_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1200_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1200_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1200_line2->Location = System::Drawing::Point(860, 306);
			this->labelTrial2_F1200_line2->Name = L"labelTrial2_F1200_line2";
			this->labelTrial2_F1200_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1200_line2->TabIndex = 206;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(860, 334);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(90, 31);
			this->button34->TabIndex = 205;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &回转器实验内容::button34_Click);
			// 
			// labelTrial2_F1000_line2
			// 
			this->labelTrial2_F1000_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1000_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1000_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1000_line2->Location = System::Drawing::Point(764, 306);
			this->labelTrial2_F1000_line2->Name = L"labelTrial2_F1000_line2";
			this->labelTrial2_F1000_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1000_line2->TabIndex = 204;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(764, 334);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(90, 31);
			this->button35->TabIndex = 203;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &回转器实验内容::button35_Click);
			// 
			// labelTrial2_F800_line2
			// 
			this->labelTrial2_F800_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F800_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F800_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F800_line2->Location = System::Drawing::Point(569, 306);
			this->labelTrial2_F800_line2->Name = L"labelTrial2_F800_line2";
			this->labelTrial2_F800_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F800_line2->TabIndex = 202;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(569, 334);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(90, 31);
			this->button36->TabIndex = 201;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &回转器实验内容::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(667, 261);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(90, 31);
			this->button37->TabIndex = 200;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &回转器实验内容::button37_Click);
			// 
			// labelTrial2_F900_line1
			// 
			this->labelTrial2_F900_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F900_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F900_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F900_line1->Location = System::Drawing::Point(667, 233);
			this->labelTrial2_F900_line1->Name = L"labelTrial2_F900_line1";
			this->labelTrial2_F900_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F900_line1->TabIndex = 199;
			// 
			// labelTrial2_F1200_line1
			// 
			this->labelTrial2_F1200_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1200_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1200_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1200_line1->Location = System::Drawing::Point(860, 233);
			this->labelTrial2_F1200_line1->Name = L"labelTrial2_F1200_line1";
			this->labelTrial2_F1200_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1200_line1->TabIndex = 198;
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(860, 261);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(90, 31);
			this->button38->TabIndex = 197;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &回转器实验内容::button38_Click);
			// 
			// labelTrial2_F1000_line1
			// 
			this->labelTrial2_F1000_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1000_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1000_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1000_line1->Location = System::Drawing::Point(764, 233);
			this->labelTrial2_F1000_line1->Name = L"labelTrial2_F1000_line1";
			this->labelTrial2_F1000_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1000_line1->TabIndex = 196;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(764, 261);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(90, 31);
			this->button39->TabIndex = 195;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &回转器实验内容::button39_Click);
			// 
			// labelTrial2_F800_line1
			// 
			this->labelTrial2_F800_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F800_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F800_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F800_line1->Location = System::Drawing::Point(569, 233);
			this->labelTrial2_F800_line1->Name = L"labelTrial2_F800_line1";
			this->labelTrial2_F800_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F800_line1->TabIndex = 194;
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(569, 261);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(90, 31);
			this->button40->TabIndex = 193;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &回转器实验内容::button40_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(282, 334);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(90, 31);
			this->button29->TabIndex = 192;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &回转器实验内容::button29_Click);
			// 
			// labelTrial2_F400_line2
			// 
			this->labelTrial2_F400_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F400_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F400_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F400_line2->Location = System::Drawing::Point(282, 306);
			this->labelTrial2_F400_line2->Name = L"labelTrial2_F400_line2";
			this->labelTrial2_F400_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F400_line2->TabIndex = 191;
			// 
			// labelTrial2_F700_line2
			// 
			this->labelTrial2_F700_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F700_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F700_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F700_line2->Location = System::Drawing::Point(474, 306);
			this->labelTrial2_F700_line2->Name = L"labelTrial2_F700_line2";
			this->labelTrial2_F700_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F700_line2->TabIndex = 188;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(474, 334);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(90, 31);
			this->button30->TabIndex = 187;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &回转器实验内容::button30_Click);
			// 
			// labelTrial2_F500_line2
			// 
			this->labelTrial2_F500_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F500_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F500_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F500_line2->Location = System::Drawing::Point(378, 306);
			this->labelTrial2_F500_line2->Name = L"labelTrial2_F500_line2";
			this->labelTrial2_F500_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F500_line2->TabIndex = 186;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(378, 334);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(90, 31);
			this->button31->TabIndex = 185;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &回转器实验内容::button31_Click);
			// 
			// labelTrial2_F200_line2
			// 
			this->labelTrial2_F200_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F200_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F200_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F200_line2->Location = System::Drawing::Point(182, 306);
			this->labelTrial2_F200_line2->Name = L"labelTrial2_F200_line2";
			this->labelTrial2_F200_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F200_line2->TabIndex = 184;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(182, 334);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(90, 31);
			this->button32->TabIndex = 183;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &回转器实验内容::button32_Click);
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(28, 596);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(143, 25);
			this->label60->TabIndex = 181;
			this->label60->Text = L"△L= L\'-L";
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(28, 548);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(143, 25);
			this->label59->TabIndex = 180;
			this->label59->Text = L"L=C/G2";
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(28, 506);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(143, 25);
			this->label58->TabIndex = 179;
			this->label58->Text = L"L\'=U1/2πfI1";
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(28, 455);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(143, 25);
			this->label57->TabIndex = 178;
			this->label57->Text = L"I1=UR/1K (mA)";
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(28, 379);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(147, 29);
			this->label56->TabIndex = 177;
			this->label56->Text = L"UR(v)";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(28, 306);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(143, 25);
			this->label55->TabIndex = 176;
			this->label55->Text = L"U1 (v)";
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(1147, 147);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(90, 25);
			this->label51->TabIndex = 175;
			this->label51->Text = L"2000";
			// 
			// label52
			// 
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(1051, 147);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(90, 25);
			this->label52->TabIndex = 174;
			this->label52->Text = L"1500";
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Black;
			this->label53->Location = System::Drawing::Point(955, 147);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(90, 25);
			this->label53->TabIndex = 173;
			this->label53->Text = L"1300";
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(859, 147);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(90, 25);
			this->label54->TabIndex = 172;
			this->label54->Text = L"1200";
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(762, 147);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(90, 25);
			this->label50->TabIndex = 171;
			this->label50->Text = L"1000";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(666, 147);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(90, 25);
			this->label49->TabIndex = 170;
			this->label49->Text = L"900";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(570, 147);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(90, 25);
			this->label48->TabIndex = 169;
			this->label48->Text = L"800";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(474, 147);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(90, 25);
			this->label47->TabIndex = 168;
			this->label47->Text = L"700";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(378, 147);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(90, 25);
			this->label46->TabIndex = 167;
			this->label46->Text = L"500";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(282, 147);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(90, 25);
			this->label45->TabIndex = 166;
			this->label45->Text = L"400";
			// 
			// button57
			// 
			this->button57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button57->ForeColor = System::Drawing::Color::Black;
			this->button57->Location = System::Drawing::Point(282, 261);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(90, 31);
			this->button57->TabIndex = 165;
			this->button57->Text = L"获取";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &回转器实验内容::button57_Click);
			// 
			// labelTrial2_F400_line1
			// 
			this->labelTrial2_F400_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F400_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F400_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F400_line1->Location = System::Drawing::Point(282, 233);
			this->labelTrial2_F400_line1->Name = L"labelTrial2_F400_line1";
			this->labelTrial2_F400_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F400_line1->TabIndex = 164;
			// 
			// label98
			// 
			this->label98->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label98->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label98->ForeColor = System::Drawing::Color::Black;
			this->label98->Location = System::Drawing::Point(28, 189);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(143, 25);
			this->label98->TabIndex = 158;
			this->label98->Text = L"参数";
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label99->ForeColor = System::Drawing::Color::Black;
			this->label99->Location = System::Drawing::Point(28, 147);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(147, 25);
			this->label99->TabIndex = 157;
			this->label99->Text = L"频率";
			// 
			// labelTrial2_F700_line1
			// 
			this->labelTrial2_F700_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F700_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F700_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F700_line1->Location = System::Drawing::Point(474, 233);
			this->labelTrial2_F700_line1->Name = L"labelTrial2_F700_line1";
			this->labelTrial2_F700_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F700_line1->TabIndex = 154;
			// 
			// button58
			// 
			this->button58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button58->ForeColor = System::Drawing::Color::Black;
			this->button58->Location = System::Drawing::Point(474, 261);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(90, 31);
			this->button58->TabIndex = 153;
			this->button58->Text = L"获取";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &回转器实验内容::button58_Click);
			// 
			// labelTrial2_F500_line1
			// 
			this->labelTrial2_F500_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F500_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F500_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F500_line1->Location = System::Drawing::Point(378, 233);
			this->labelTrial2_F500_line1->Name = L"labelTrial2_F500_line1";
			this->labelTrial2_F500_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F500_line1->TabIndex = 152;
			// 
			// button59
			// 
			this->button59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button59->ForeColor = System::Drawing::Color::Black;
			this->button59->Location = System::Drawing::Point(378, 261);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(90, 31);
			this->button59->TabIndex = 151;
			this->button59->Text = L"获取";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &回转器实验内容::button59_Click);
			// 
			// labelTrial2_F200_line1
			// 
			this->labelTrial2_F200_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F200_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F200_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F200_line1->Location = System::Drawing::Point(182, 233);
			this->labelTrial2_F200_line1->Name = L"labelTrial2_F200_line1";
			this->labelTrial2_F200_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F200_line1->TabIndex = 150;
			// 
			// button60
			// 
			this->button60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button60->ForeColor = System::Drawing::Color::Black;
			this->button60->Location = System::Drawing::Point(182, 261);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(90, 31);
			this->button60->TabIndex = 149;
			this->button60->Text = L"获取";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &回转器实验内容::button60_Click);
			// 
			// textBoxTrial2_F200_line4
			// 
			this->textBoxTrial2_F200_line4->Location = System::Drawing::Point(182, 453);
			this->textBoxTrial2_F200_line4->Name = L"textBoxTrial2_F200_line4";
			this->textBoxTrial2_F200_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line4->TabIndex = 147;
			// 
			// label105
			// 
			this->label105->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(186, 147);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(90, 25);
			this->label105->TabIndex = 145;
			this->label105->Text = L"200";
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->ForeColor = System::Drawing::Color::Black;
			this->label106->Location = System::Drawing::Point(28, 233);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(143, 25);
			this->label106->TabIndex = 144;
			this->label106->Text = L"U（v）";
			// 
			// label92
			// 
			this->label92->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label92->ForeColor = System::Drawing::Color::Black;
			this->label92->Location = System::Drawing::Point(24, 45);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(1161, 75);
			this->label92->TabIndex = 0;
			this->label92->Text = L"    3．测量等效电感\t\r\n在 2－2＇两端接负载电容 C＝0.1μF，取低频信号源输出电压U≤3V，并保持恒定。用万用表测量不同频率时的等效电感，并算出I1、"
				L"L＇、L及误差△L，分析U、U1、URS之间的相量关系。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label93);
			this->groupBox2->Controls->Add(this->label90);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->button76);
			this->groupBox2->Controls->Add(this->labelTrial3_1300);
			this->groupBox2->Controls->Add(this->labelTrial3_2000);
			this->groupBox2->Controls->Add(this->button77);
			this->groupBox2->Controls->Add(this->labelTrial3_1500);
			this->groupBox2->Controls->Add(this->button78);
			this->groupBox2->Controls->Add(this->button83);
			this->groupBox2->Controls->Add(this->labelTrial3_900);
			this->groupBox2->Controls->Add(this->labelTrial3_1200);
			this->groupBox2->Controls->Add(this->button84);
			this->groupBox2->Controls->Add(this->labelTrial3_1000);
			this->groupBox2->Controls->Add(this->button85);
			this->groupBox2->Controls->Add(this->labelTrial3_800);
			this->groupBox2->Controls->Add(this->button86);
			this->groupBox2->Controls->Add(this->label134);
			this->groupBox2->Controls->Add(this->label135);
			this->groupBox2->Controls->Add(this->label136);
			this->groupBox2->Controls->Add(this->label137);
			this->groupBox2->Controls->Add(this->label138);
			this->groupBox2->Controls->Add(this->label139);
			this->groupBox2->Controls->Add(this->label140);
			this->groupBox2->Controls->Add(this->label141);
			this->groupBox2->Controls->Add(this->label142);
			this->groupBox2->Controls->Add(this->label143);
			this->groupBox2->Controls->Add(this->button91);
			this->groupBox2->Controls->Add(this->labelTrial3_400);
			this->groupBox2->Controls->Add(this->label146);
			this->groupBox2->Controls->Add(this->labelTrial3_700);
			this->groupBox2->Controls->Add(this->button92);
			this->groupBox2->Controls->Add(this->labelTrial3_500);
			this->groupBox2->Controls->Add(this->button93);
			this->groupBox2->Controls->Add(this->labelTrial3_200);
			this->groupBox2->Controls->Add(this->button94);
			this->groupBox2->Controls->Add(this->label150);
			this->groupBox2->Controls->Add(this->label151);
			this->groupBox2->Controls->Add(this->label152);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(96, 3148);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 534);
			this->groupBox2->TabIndex = 286;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"回转器 实验内容4";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &回转器实验内容::groupBox2_Enter);
			// 
			// label93
			// 
			this->label93->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label93->ForeColor = System::Drawing::Color::Black;
			this->label93->Location = System::Drawing::Point(24, 347);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(1161, 28);
			this->label93->TabIndex = 217;
			this->label93->Text = L"    取U≤3V并保持恒定，在不同频率时用示波器测量1-1＇端的电压，并找出峰值。";
			// 
			// label90
			// 
			this->label90->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label90->ForeColor = System::Drawing::Color::Black;
			this->label90->Location = System::Drawing::Point(525, 307);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(114, 28);
			this->label90->TabIndex = 216;
			this->label90->Text = L"图   18-5";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(282, 109);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(593, 176);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 215;
			this->pictureBox2->TabStop = false;
			// 
			// button76
			// 
			this->button76->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button76->ForeColor = System::Drawing::Color::Black;
			this->button76->Location = System::Drawing::Point(954, 470);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(90, 31);
			this->button76->TabIndex = 214;
			this->button76->Text = L"获取";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &回转器实验内容::button76_Click);
			// 
			// labelTrial3_1300
			// 
			this->labelTrial3_1300->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1300->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1300->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1300->Location = System::Drawing::Point(954, 442);
			this->labelTrial3_1300->Name = L"labelTrial3_1300";
			this->labelTrial3_1300->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1300->TabIndex = 213;
			// 
			// labelTrial3_2000
			// 
			this->labelTrial3_2000->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_2000->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_2000->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_2000->Location = System::Drawing::Point(1147, 442);
			this->labelTrial3_2000->Name = L"labelTrial3_2000";
			this->labelTrial3_2000->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_2000->TabIndex = 212;
			// 
			// button77
			// 
			this->button77->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button77->ForeColor = System::Drawing::Color::Black;
			this->button77->Location = System::Drawing::Point(1147, 470);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(90, 31);
			this->button77->TabIndex = 211;
			this->button77->Text = L"获取";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &回转器实验内容::button77_Click);
			// 
			// labelTrial3_1500
			// 
			this->labelTrial3_1500->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1500->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1500->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1500->Location = System::Drawing::Point(1051, 442);
			this->labelTrial3_1500->Name = L"labelTrial3_1500";
			this->labelTrial3_1500->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1500->TabIndex = 210;
			// 
			// button78
			// 
			this->button78->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button78->ForeColor = System::Drawing::Color::Black;
			this->button78->Location = System::Drawing::Point(1051, 470);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(90, 31);
			this->button78->TabIndex = 209;
			this->button78->Text = L"获取";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &回转器实验内容::button78_Click);
			// 
			// button83
			// 
			this->button83->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button83->ForeColor = System::Drawing::Color::Black;
			this->button83->Location = System::Drawing::Point(667, 470);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(90, 31);
			this->button83->TabIndex = 200;
			this->button83->Text = L"获取";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &回转器实验内容::button83_Click);
			// 
			// labelTrial3_900
			// 
			this->labelTrial3_900->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_900->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_900->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_900->Location = System::Drawing::Point(667, 442);
			this->labelTrial3_900->Name = L"labelTrial3_900";
			this->labelTrial3_900->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_900->TabIndex = 199;
			// 
			// labelTrial3_1200
			// 
			this->labelTrial3_1200->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1200->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1200->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1200->Location = System::Drawing::Point(860, 442);
			this->labelTrial3_1200->Name = L"labelTrial3_1200";
			this->labelTrial3_1200->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1200->TabIndex = 198;
			// 
			// button84
			// 
			this->button84->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button84->ForeColor = System::Drawing::Color::Black;
			this->button84->Location = System::Drawing::Point(860, 470);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(90, 31);
			this->button84->TabIndex = 197;
			this->button84->Text = L"获取";
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &回转器实验内容::button84_Click);
			// 
			// labelTrial3_1000
			// 
			this->labelTrial3_1000->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1000->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1000->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1000->Location = System::Drawing::Point(764, 442);
			this->labelTrial3_1000->Name = L"labelTrial3_1000";
			this->labelTrial3_1000->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1000->TabIndex = 196;
			// 
			// button85
			// 
			this->button85->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button85->ForeColor = System::Drawing::Color::Black;
			this->button85->Location = System::Drawing::Point(764, 470);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(90, 31);
			this->button85->TabIndex = 195;
			this->button85->Text = L"获取";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &回转器实验内容::button85_Click);
			// 
			// labelTrial3_800
			// 
			this->labelTrial3_800->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_800->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_800->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_800->Location = System::Drawing::Point(569, 442);
			this->labelTrial3_800->Name = L"labelTrial3_800";
			this->labelTrial3_800->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_800->TabIndex = 194;
			// 
			// button86
			// 
			this->button86->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button86->ForeColor = System::Drawing::Color::Black;
			this->button86->Location = System::Drawing::Point(569, 470);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(90, 31);
			this->button86->TabIndex = 193;
			this->button86->Text = L"获取";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &回转器实验内容::button86_Click);
			// 
			// label134
			// 
			this->label134->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label134->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label134->ForeColor = System::Drawing::Color::Black;
			this->label134->Location = System::Drawing::Point(1147, 401);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(90, 25);
			this->label134->TabIndex = 175;
			this->label134->Text = L"2000";
			// 
			// label135
			// 
			this->label135->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label135->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label135->ForeColor = System::Drawing::Color::Black;
			this->label135->Location = System::Drawing::Point(1051, 401);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(90, 25);
			this->label135->TabIndex = 174;
			this->label135->Text = L"1500";
			// 
			// label136
			// 
			this->label136->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label136->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label136->ForeColor = System::Drawing::Color::Black;
			this->label136->Location = System::Drawing::Point(955, 401);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(90, 25);
			this->label136->TabIndex = 173;
			this->label136->Text = L"1300";
			// 
			// label137
			// 
			this->label137->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label137->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label137->ForeColor = System::Drawing::Color::Black;
			this->label137->Location = System::Drawing::Point(859, 401);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(90, 25);
			this->label137->TabIndex = 172;
			this->label137->Text = L"1200";
			// 
			// label138
			// 
			this->label138->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label138->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label138->ForeColor = System::Drawing::Color::Black;
			this->label138->Location = System::Drawing::Point(762, 401);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(90, 25);
			this->label138->TabIndex = 171;
			this->label138->Text = L"1000";
			// 
			// label139
			// 
			this->label139->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label139->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label139->ForeColor = System::Drawing::Color::Black;
			this->label139->Location = System::Drawing::Point(666, 401);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(90, 25);
			this->label139->TabIndex = 170;
			this->label139->Text = L"900";
			// 
			// label140
			// 
			this->label140->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label140->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label140->ForeColor = System::Drawing::Color::Black;
			this->label140->Location = System::Drawing::Point(570, 401);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(90, 25);
			this->label140->TabIndex = 169;
			this->label140->Text = L"800";
			// 
			// label141
			// 
			this->label141->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label141->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label141->ForeColor = System::Drawing::Color::Black;
			this->label141->Location = System::Drawing::Point(474, 401);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(90, 25);
			this->label141->TabIndex = 168;
			this->label141->Text = L"700";
			// 
			// label142
			// 
			this->label142->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label142->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label142->ForeColor = System::Drawing::Color::Black;
			this->label142->Location = System::Drawing::Point(378, 401);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(90, 25);
			this->label142->TabIndex = 167;
			this->label142->Text = L"500";
			// 
			// label143
			// 
			this->label143->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label143->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label143->ForeColor = System::Drawing::Color::Black;
			this->label143->Location = System::Drawing::Point(282, 401);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(90, 25);
			this->label143->TabIndex = 166;
			this->label143->Text = L"400";
			// 
			// button91
			// 
			this->button91->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button91->ForeColor = System::Drawing::Color::Black;
			this->button91->Location = System::Drawing::Point(282, 470);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(90, 31);
			this->button91->TabIndex = 165;
			this->button91->Text = L"获取";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &回转器实验内容::button91_Click);
			// 
			// labelTrial3_400
			// 
			this->labelTrial3_400->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_400->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_400->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_400->Location = System::Drawing::Point(282, 442);
			this->labelTrial3_400->Name = L"labelTrial3_400";
			this->labelTrial3_400->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_400->TabIndex = 164;
			// 
			// label146
			// 
			this->label146->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label146->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label146->ForeColor = System::Drawing::Color::Black;
			this->label146->Location = System::Drawing::Point(28, 401);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(147, 25);
			this->label146->TabIndex = 157;
			this->label146->Text = L"频率";
			// 
			// labelTrial3_700
			// 
			this->labelTrial3_700->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_700->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_700->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_700->Location = System::Drawing::Point(474, 442);
			this->labelTrial3_700->Name = L"labelTrial3_700";
			this->labelTrial3_700->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_700->TabIndex = 154;
			// 
			// button92
			// 
			this->button92->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button92->ForeColor = System::Drawing::Color::Black;
			this->button92->Location = System::Drawing::Point(474, 470);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(90, 31);
			this->button92->TabIndex = 153;
			this->button92->Text = L"获取";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &回转器实验内容::button92_Click);
			// 
			// labelTrial3_500
			// 
			this->labelTrial3_500->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_500->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_500->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_500->Location = System::Drawing::Point(378, 442);
			this->labelTrial3_500->Name = L"labelTrial3_500";
			this->labelTrial3_500->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_500->TabIndex = 152;
			// 
			// button93
			// 
			this->button93->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button93->ForeColor = System::Drawing::Color::Black;
			this->button93->Location = System::Drawing::Point(378, 470);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(90, 31);
			this->button93->TabIndex = 151;
			this->button93->Text = L"获取";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &回转器实验内容::button93_Click);
			// 
			// labelTrial3_200
			// 
			this->labelTrial3_200->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_200->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_200->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_200->Location = System::Drawing::Point(182, 442);
			this->labelTrial3_200->Name = L"labelTrial3_200";
			this->labelTrial3_200->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_200->TabIndex = 150;
			// 
			// button94
			// 
			this->button94->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button94->ForeColor = System::Drawing::Color::Black;
			this->button94->Location = System::Drawing::Point(182, 470);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(90, 31);
			this->button94->TabIndex = 149;
			this->button94->Text = L"获取";
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &回转器实验内容::button94_Click);
			// 
			// label150
			// 
			this->label150->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label150->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label150->ForeColor = System::Drawing::Color::Black;
			this->label150->Location = System::Drawing::Point(186, 401);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(90, 25);
			this->label150->TabIndex = 145;
			this->label150->Text = L"200";
			// 
			// label151
			// 
			this->label151->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label151->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label151->ForeColor = System::Drawing::Color::Black;
			this->label151->Location = System::Drawing::Point(28, 442);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(143, 25);
			this->label151->TabIndex = 144;
			this->label151->Text = L"U1（v）";
			// 
			// label152
			// 
			this->label152->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label152->ForeColor = System::Drawing::Color::Black;
			this->label152->Location = System::Drawing::Point(24, 45);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(1161, 61);
			this->label152->TabIndex = 0;
			this->label152->Text = L"    4．测量谐振特性\r\n    用回转器作电感，与电容器C＝0.1μF构成并联谐振电路，如图18－5所示。";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(110, 3741);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 55);
			this->label129->TabIndex = 288;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(664, 3699);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 42);
			this->button102->TabIndex = 287;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &回转器实验内容::button102_Click);
			// 
			// 回转器实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1528, 706);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"回转器实验内容";
			this->Text = L"回转器实验内容";
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_I))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_U))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void SendData();
		public: ST_回转器 Load_Grade_data();
	private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
		SendData();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line1->Text = global::GetGongPingU();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line2->Text = global::GetGongPingU();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line3->Text = global::GetGongPingU();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line4->Text = global::GetGongPingU();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line5->Text = global::GetGongPingU();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line6->Text = global::GetGongPingU();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U1_line7->Text = global::GetGongPingU();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line1->Text = global::GetGongPingU();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line2->Text = global::GetGongPingU();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line3->Text = global::GetGongPingU();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line4->Text = global::GetGongPingU();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line5->Text = global::GetGongPingU();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line6->Text = global::GetGongPingU();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_U2_line7->Text = global::GetGongPingU();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line1->Text = global::GetI500Data();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line2->Text = global::GetI500Data();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line3->Text = global::GetI500Data();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line4->Text = global::GetI500Data();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line5->Text = global::GetI500Data();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line6->Text = global::GetI500Data();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I1_line7->Text = global::GetI500Data();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line1->Text = global::GetI500Data();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line2->Text = global::GetI500Data();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line3->Text = global::GetI500Data();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line4->Text = global::GetI500Data();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line5->Text = global::GetI500Data();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line6->Text = global::GetI500Data();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial1_I2_line7->Text = global::GetI500Data();
}
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F200_line1->Text = global::GetGongPingU();
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F200_line2->Text = global::GetGongPingU();
}
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F200_line3->Text = global::GetGongPingU();
}
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F400_line3->Text = global::GetGongPingU();
}
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F400_line1->Text = global::GetGongPingU();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F400_line2->Text = global::GetGongPingU();
}
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F500_line1->Text = global::GetGongPingU();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F500_line2->Text = global::GetGongPingU();
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F500_line3->Text = global::GetGongPingU();
}
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F700_line1->Text = global::GetGongPingU();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F700_line2->Text = global::GetGongPingU();
}
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F700_line3->Text = global::GetGongPingU();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F800_line1->Text = global::GetGongPingU();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F800_line2->Text = global::GetGongPingU();
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F800_line3->Text = global::GetGongPingU();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F900_line1->Text = global::GetGongPingU();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F900_line2->Text = global::GetGongPingU();
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F900_line3->Text = global::GetGongPingU();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1000_line1->Text = global::GetGongPingU();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1000_line2->Text = global::GetGongPingU();
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1000_line3->Text = global::GetGongPingU();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1200_line1->Text = global::GetGongPingU();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1200_line2->Text = global::GetGongPingU();
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1200_line3->Text = global::GetGongPingU();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1300_line1->Text = global::GetGongPingU();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1300_line2->Text = global::GetGongPingU();
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1300_line3->Text = global::GetGongPingU();
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1500_line1->Text = global::GetGongPingU();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1500_line2->Text = global::GetGongPingU();
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F1500_line3->Text = global::GetGongPingU();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F2000_line1->Text = global::GetGongPingU();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F2000_line2->Text = global::GetGongPingU();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_F2000_line3->Text = global::GetGongPingU();
}
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_200->Text = global::GetGongPingU();
}
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_400->Text = global::GetGongPingU();
}
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_500->Text = global::GetGongPingU();
}
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_700->Text = global::GetGongPingU();
}
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_800->Text = global::GetGongPingU();
}
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_900->Text = global::GetGongPingU();
}
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_1000->Text = global::GetGongPingU();
}
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_1200->Text = global::GetGongPingU();
}
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_1300->Text = global::GetGongPingU();
}
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_1500->Text = global::GetGongPingU();
}
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial3_2000->Text = global::GetGongPingU();
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial1Path_I;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial1Path_I))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1_I->ImageLocation = imageLocation;
}
		 String ^BathPath = gcnew String(BMPSAVEPATH);
		 String ^trial1Path_U = BathPath + "回转器实验内容Path_U.bmp";
		 String ^trial1Path_I = BathPath + "回转器实验内容Path_I.bmp";

private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial1Path_U;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial1Path_U))) {
		MessageBox::Show("获取波形失败");
		return;
	}
	pictureBoxTrial1_U->ImageLocation = imageLocation;
}
};
}
