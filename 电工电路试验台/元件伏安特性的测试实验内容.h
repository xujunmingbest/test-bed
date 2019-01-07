#pragma once
#include "data_transf.h"
#include "tool/tool.h"
namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// 元件伏安特性的测试实验内容 摘要
	/// </summary>
	public ref class 元件伏安特性的测试实验内容 : public System::Windows::Forms::Form
	{
	public:
		元件伏安特性的测试实验内容(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	public:
		bool Open = false;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~元件伏安特性的测试实验内容()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::GroupBox^  groupBox7;

private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart白炽;
private: System::Windows::Forms::TextBox^  textBox白炽结论;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Button^  button245;
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Button^  button91;
private: System::Windows::Forms::Button^  button62;
private: System::Windows::Forms::Button^  button63;
private: System::Windows::Forms::Button^  button64;
private: System::Windows::Forms::Button^  button65;
private: System::Windows::Forms::Button^  button66;
private: System::Windows::Forms::Button^  button67;
private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button69;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Label^  label白炽I10;
private: System::Windows::Forms::Label^  label白炽I9;
private: System::Windows::Forms::Label^  label白炽I8;
private: System::Windows::Forms::Label^  label白炽I7;
private: System::Windows::Forms::Label^  label白炽I6;
private: System::Windows::Forms::Label^  label白炽I5;
private: System::Windows::Forms::Label^  label白炽I4;
private: System::Windows::Forms::Label^  label白炽I3;
private: System::Windows::Forms::Label^  label白炽I2;
private: System::Windows::Forms::Label^  label白炽I1;
private: System::Windows::Forms::Label^  label白炽U10;
private: System::Windows::Forms::Label^  label白炽U9;
private: System::Windows::Forms::Label^  label白炽U8;
private: System::Windows::Forms::Label^  label白炽U7;
private: System::Windows::Forms::Label^  label白炽U6;
private: System::Windows::Forms::Label^  label白炽U5;
private: System::Windows::Forms::Label^  label白炽U4;
private: System::Windows::Forms::Label^  label白炽U3;
private: System::Windows::Forms::Label^  label白炽U2;
private: System::Windows::Forms::Label^  label白炽U1;

private: System::Windows::Forms::TextBox^  textBox白炽SU10;

private: System::Windows::Forms::TextBox^  textBox白炽SU9;

private: System::Windows::Forms::TextBox^  textBox白炽SU8;

private: System::Windows::Forms::TextBox^  textBox白炽SU7;

private: System::Windows::Forms::TextBox^  textBox白炽SU6;

private: System::Windows::Forms::TextBox^  textBox白炽SU5;

private: System::Windows::Forms::TextBox^  textBox白炽SU4;

private: System::Windows::Forms::TextBox^  textBox白炽SU3;

private: System::Windows::Forms::TextBox^  textBox白炽SU2;

private: System::Windows::Forms::TextBox^  textBox白炽SU1;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::GroupBox^  groupBox8;

private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart线性;
private: System::Windows::Forms::TextBox^  textBox线性结论;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Button^  button61;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Label^  label线性U10;
private: System::Windows::Forms::Label^  label线性U9;
private: System::Windows::Forms::Label^  label线性U8;
private: System::Windows::Forms::Label^  label线性U7;
private: System::Windows::Forms::Label^  label线性U6;
private: System::Windows::Forms::Label^  label线性U5;
private: System::Windows::Forms::Label^  label线性U4;
private: System::Windows::Forms::Label^  label线性U3;
private: System::Windows::Forms::Label^  label线性U2;
private: System::Windows::Forms::Label^  label线性U1;
private: System::Windows::Forms::Label^  label线性I10;
private: System::Windows::Forms::Label^  label线性I9;
private: System::Windows::Forms::Label^  label线性I8;
private: System::Windows::Forms::Label^  label线性I7;
private: System::Windows::Forms::Label^  label线性I6;
private: System::Windows::Forms::Label^  label线性I5;
private: System::Windows::Forms::Label^  label线性I4;
private: System::Windows::Forms::Label^  label线性I3;
private: System::Windows::Forms::Label^  label线性I2;
private: System::Windows::Forms::Label^  label线性I1;

private: System::Windows::Forms::TextBox^  textBoxSU10;

private: System::Windows::Forms::TextBox^  textBoxSU9;

private: System::Windows::Forms::TextBox^  textBoxSU8;

private: System::Windows::Forms::TextBox^  textBoxSU7;

private: System::Windows::Forms::TextBox^  textBoxSU6;

private: System::Windows::Forms::TextBox^  textBoxSU5;

private: System::Windows::Forms::TextBox^  textBoxSU4;

private: System::Windows::Forms::TextBox^  textBoxSU3;

private: System::Windows::Forms::TextBox^  textBoxSU2;

private: System::Windows::Forms::TextBox^  textBoxSU1;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::GroupBox^  groupBox9;

private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Button^  button103;
private: System::Windows::Forms::Button^  button104;
private: System::Windows::Forms::Button^  button105;
private: System::Windows::Forms::Button^  button106;
private: System::Windows::Forms::Button^  button107;
private: System::Windows::Forms::Button^  button108;
private: System::Windows::Forms::Button^  button109;
private: System::Windows::Forms::Button^  button110;
private: System::Windows::Forms::Button^  button121;
private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Button^  button94;
private: System::Windows::Forms::Button^  button95;
private: System::Windows::Forms::Button^  button96;
private: System::Windows::Forms::Button^  button97;
private: System::Windows::Forms::Button^  button98;
private: System::Windows::Forms::Button^  button99;
private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::Button^  button101;
private: System::Windows::Forms::Label^  label锗管ZI10;
private: System::Windows::Forms::Label^  label锗管ZI9;
private: System::Windows::Forms::Label^  label锗管ZI8;
private: System::Windows::Forms::Label^  label锗管ZI7;
private: System::Windows::Forms::Label^  label锗管ZI6;
private: System::Windows::Forms::Label^  label锗管ZI5;
private: System::Windows::Forms::Label^  label锗管ZI4;
private: System::Windows::Forms::Label^  label锗管ZI3;
private: System::Windows::Forms::Label^  label锗管ZI2;
private: System::Windows::Forms::Label^  label锗管ZI1;
private: System::Windows::Forms::Label^  label锗管ZU10;
private: System::Windows::Forms::Label^  label锗管ZU9;
private: System::Windows::Forms::Label^  label锗管ZU8;
private: System::Windows::Forms::Label^  label锗管ZU7;
private: System::Windows::Forms::Label^  label锗管ZU6;
private: System::Windows::Forms::Label^  label锗管ZU5;
private: System::Windows::Forms::Label^  label锗管ZU4;
private: System::Windows::Forms::Label^  label锗管ZU3;
private: System::Windows::Forms::Label^  label锗管ZU2;
private: System::Windows::Forms::Label^  label锗管ZU1;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU10;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU9;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU8;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU7;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU6;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU5;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU4;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU3;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU2;

private: System::Windows::Forms::TextBox^  textBox锗管ZSU1;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  textBox锗管结论;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Button^  button152;
private: System::Windows::Forms::Button^  button132;
private: System::Windows::Forms::Button^  button133;
private: System::Windows::Forms::Button^  button134;
private: System::Windows::Forms::Button^  button135;
private: System::Windows::Forms::Button^  button136;
private: System::Windows::Forms::Button^  button137;
private: System::Windows::Forms::Button^  button138;
private: System::Windows::Forms::Button^  button139;
private: System::Windows::Forms::Button^  button140;
private: System::Windows::Forms::Button^  button151;
private: System::Windows::Forms::Button^  button122;
private: System::Windows::Forms::Button^  button123;
private: System::Windows::Forms::Button^  button124;
private: System::Windows::Forms::Button^  button125;
private: System::Windows::Forms::Button^  button126;
private: System::Windows::Forms::Button^  button127;
private: System::Windows::Forms::Button^  button128;
private: System::Windows::Forms::Button^  button129;
private: System::Windows::Forms::Button^  button130;
private: System::Windows::Forms::Button^  button131;
private: System::Windows::Forms::Label^  label锗管FI10;
private: System::Windows::Forms::Label^  label锗管FI9;
private: System::Windows::Forms::Label^  label锗管FI8;
private: System::Windows::Forms::Label^  label锗管FI7;
private: System::Windows::Forms::Label^  label锗管FI6;
private: System::Windows::Forms::Label^  label锗管FI5;
private: System::Windows::Forms::Label^  label锗管FI4;
private: System::Windows::Forms::Label^  label锗管FI3;
private: System::Windows::Forms::Label^  label锗管FI2;
private: System::Windows::Forms::Label^  label锗管FI1;
private: System::Windows::Forms::Label^  label锗管FU10;
private: System::Windows::Forms::Label^  label锗管FU9;
private: System::Windows::Forms::Label^  label锗管FU8;
private: System::Windows::Forms::Label^  label锗管FU7;
private: System::Windows::Forms::Label^  label锗管FU6;
private: System::Windows::Forms::Label^  label锗管FU5;
private: System::Windows::Forms::Label^  label锗管FU4;
private: System::Windows::Forms::Label^  label锗管FU3;
private: System::Windows::Forms::Label^  label锗管FU2;
private: System::Windows::Forms::Label^  label锗管FU1;

private: System::Windows::Forms::TextBox^  textBox锗管FSU10;

private: System::Windows::Forms::TextBox^  textBox锗管FSU9;

private: System::Windows::Forms::TextBox^  textBox锗管FSU8;

private: System::Windows::Forms::TextBox^  textBox锗管FSU7;

private: System::Windows::Forms::TextBox^  textBox锗管FSU6;

private: System::Windows::Forms::TextBox^  textBox锗管FSU5;

private: System::Windows::Forms::TextBox^  textBox锗管FSU4;

private: System::Windows::Forms::TextBox^  textBox锗管FSU3;

private: System::Windows::Forms::TextBox^  textBox锗管FSU2;

private: System::Windows::Forms::TextBox^  textBox锗管FSU1;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart锗管;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::GroupBox^  groupBox11;

private: System::Windows::Forms::Label^  label156;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::TextBox^  textBox硅管结论;
private: System::Windows::Forms::Label^  label204;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Button^  button203;
private: System::Windows::Forms::Button^  button193;
private: System::Windows::Forms::Button^  button194;
private: System::Windows::Forms::Button^  button195;
private: System::Windows::Forms::Button^  button196;
private: System::Windows::Forms::Button^  button197;
private: System::Windows::Forms::Button^  button198;
private: System::Windows::Forms::Button^  button199;
private: System::Windows::Forms::Button^  button200;
private: System::Windows::Forms::Button^  button201;
private: System::Windows::Forms::Button^  button202;
private: System::Windows::Forms::Button^  button183;
private: System::Windows::Forms::Button^  button184;
private: System::Windows::Forms::Button^  button185;
private: System::Windows::Forms::Button^  button186;
private: System::Windows::Forms::Button^  button187;
private: System::Windows::Forms::Button^  button188;
private: System::Windows::Forms::Button^  button189;
private: System::Windows::Forms::Button^  button190;
private: System::Windows::Forms::Button^  button191;
private: System::Windows::Forms::Button^  button192;
private: System::Windows::Forms::Label^  label1硅管FI10;
private: System::Windows::Forms::Label^  label1硅管FI9;
private: System::Windows::Forms::Label^  label1硅管FI8;
private: System::Windows::Forms::Label^  label1硅管FI7;
private: System::Windows::Forms::Label^  label1硅管FI6;
private: System::Windows::Forms::Label^  label1硅管FI5;
private: System::Windows::Forms::Label^  label1硅管FI4;
private: System::Windows::Forms::Label^  label1硅管FI3;
private: System::Windows::Forms::Label^  label1硅管FI2;
private: System::Windows::Forms::Label^  label1硅管FI1;
private: System::Windows::Forms::Label^  label1硅管FU10;
private: System::Windows::Forms::Label^  label1硅管FU9;
private: System::Windows::Forms::Label^  label1硅管FU8;
private: System::Windows::Forms::Label^  label1硅管FU7;
private: System::Windows::Forms::Label^  label1硅管FU6;
private: System::Windows::Forms::Label^  label1硅管FU5;
private: System::Windows::Forms::Label^  label1硅管FU4;
private: System::Windows::Forms::Label^  label1硅管FU3;
private: System::Windows::Forms::Label^  label1硅管FU2;
private: System::Windows::Forms::Label^  label1硅管FU1;

private: System::Windows::Forms::TextBox^  textBox硅管FSU10;

private: System::Windows::Forms::TextBox^  textBox硅管FSU9;

private: System::Windows::Forms::TextBox^  textBox硅管FSU8;

private: System::Windows::Forms::TextBox^  textBox硅管FSU7;

private: System::Windows::Forms::TextBox^  textBox硅管FSU6;

private: System::Windows::Forms::TextBox^  textBox硅管FSU5;

private: System::Windows::Forms::TextBox^  textBox硅管FSU4;

private: System::Windows::Forms::TextBox^  textBox硅管FSU3;

private: System::Windows::Forms::TextBox^  textBox硅管FSU2;

private: System::Windows::Forms::TextBox^  textBox硅管FSU1;
private: System::Windows::Forms::Label^  label178;
private: System::Windows::Forms::Label^  label179;
private: System::Windows::Forms::Label^  label180;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::Button^  button163;
private: System::Windows::Forms::Button^  button164;
private: System::Windows::Forms::Button^  button165;
private: System::Windows::Forms::Button^  button166;
private: System::Windows::Forms::Button^  button167;
private: System::Windows::Forms::Button^  button168;
private: System::Windows::Forms::Button^  button169;
private: System::Windows::Forms::Button^  button170;
private: System::Windows::Forms::Button^  button181;
private: System::Windows::Forms::Button^  button182;
private: System::Windows::Forms::Button^  button153;
private: System::Windows::Forms::Button^  button154;
private: System::Windows::Forms::Button^  button155;
private: System::Windows::Forms::Button^  button156;
private: System::Windows::Forms::Button^  button157;
private: System::Windows::Forms::Button^  button158;
private: System::Windows::Forms::Button^  button159;
private: System::Windows::Forms::Button^  button160;
private: System::Windows::Forms::Button^  button161;
private: System::Windows::Forms::Button^  button162;
private: System::Windows::Forms::Label^  label硅管ZI10;
private: System::Windows::Forms::Label^  label硅管ZI9;
private: System::Windows::Forms::Label^  label硅管ZI8;
private: System::Windows::Forms::Label^  label硅管ZI7;
private: System::Windows::Forms::Label^  label硅管ZI6;
private: System::Windows::Forms::Label^  label硅管ZI5;
private: System::Windows::Forms::Label^  label硅管ZI4;
private: System::Windows::Forms::Label^  label硅管ZI3;
private: System::Windows::Forms::Label^  label硅管ZI2;
private: System::Windows::Forms::Label^  label硅管ZI1;
private: System::Windows::Forms::Label^  label硅管ZU10;
private: System::Windows::Forms::Label^  label硅管ZU9;
private: System::Windows::Forms::Label^  label硅管ZU8;
private: System::Windows::Forms::Label^  label硅管ZU7;
private: System::Windows::Forms::Label^  label硅管ZU6;
private: System::Windows::Forms::Label^  label硅管ZU5;
private: System::Windows::Forms::Label^  label硅管ZU4;
private: System::Windows::Forms::Label^  label硅管ZU3;
private: System::Windows::Forms::Label^  label硅管ZU2;
private: System::Windows::Forms::Label^  label硅管ZU1;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU10;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU9;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU8;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU7;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU6;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU5;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU4;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU3;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU2;

private: System::Windows::Forms::TextBox^  textBox硅管ZSU1;
private: System::Windows::Forms::Label^  label201;
private: System::Windows::Forms::Label^  label202;
private: System::Windows::Forms::Label^  label203;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart硅管;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label157;
private: System::Windows::Forms::GroupBox^  groupBox10;

private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::TextBox^  textBox稳压结论;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Button^  button234;
private: System::Windows::Forms::Button^  button235;
private: System::Windows::Forms::Button^  button236;
private: System::Windows::Forms::Button^  button237;
private: System::Windows::Forms::Button^  button238;
private: System::Windows::Forms::Button^  button239;
private: System::Windows::Forms::Button^  button240;
private: System::Windows::Forms::Button^  button241;
private: System::Windows::Forms::Button^  button242;
private: System::Windows::Forms::Button^  button243;
private: System::Windows::Forms::Button^  button224;
private: System::Windows::Forms::Label^  label稳压ZI10;
private: System::Windows::Forms::Button^  button225;
private: System::Windows::Forms::Label^  label稳压ZI9;
private: System::Windows::Forms::Button^  button226;
private: System::Windows::Forms::Label^  label稳压ZI8;
private: System::Windows::Forms::Button^  button227;
private: System::Windows::Forms::Label^  label稳压ZI7;
private: System::Windows::Forms::Button^  button228;
private: System::Windows::Forms::Label^  label稳压ZI6;
private: System::Windows::Forms::Button^  button229;
private: System::Windows::Forms::Label^  label稳压ZI5;
private: System::Windows::Forms::Button^  button230;
private: System::Windows::Forms::Label^  label稳压ZI4;
private: System::Windows::Forms::Button^  button231;
private: System::Windows::Forms::Label^  label稳压ZI3;
private: System::Windows::Forms::Button^  button232;
private: System::Windows::Forms::Button^  button233;
private: System::Windows::Forms::Label^  label稳压ZI2;
private: System::Windows::Forms::Label^  label稳压ZI1;
private: System::Windows::Forms::Label^  label稳压ZU10;
private: System::Windows::Forms::Label^  label稳压ZU9;
private: System::Windows::Forms::Label^  label稳压ZU8;
private: System::Windows::Forms::Label^  label稳压ZU7;
private: System::Windows::Forms::Label^  label稳压ZU6;
private: System::Windows::Forms::Label^  label稳压ZU5;
private: System::Windows::Forms::Label^  label稳压ZU4;
private: System::Windows::Forms::Label^  label稳压ZU3;
private: System::Windows::Forms::Label^  label稳压ZU2;
private: System::Windows::Forms::Label^  label稳压ZU1;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU10;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU9;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU8;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU7;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU6;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU5;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU4;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU3;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU2;

private: System::Windows::Forms::TextBox^  textBox稳压ZSU1;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Button^  button244;
private: System::Windows::Forms::Button^  button214;
private: System::Windows::Forms::Button^  button215;
private: System::Windows::Forms::Button^  button216;
private: System::Windows::Forms::Button^  button217;
private: System::Windows::Forms::Button^  button218;
private: System::Windows::Forms::Button^  button219;
private: System::Windows::Forms::Button^  button220;
private: System::Windows::Forms::Button^  button221;
private: System::Windows::Forms::Button^  button222;
private: System::Windows::Forms::Button^  button223;
private: System::Windows::Forms::Button^  button204;
private: System::Windows::Forms::Button^  button205;
private: System::Windows::Forms::Button^  button206;
private: System::Windows::Forms::Button^  button207;
private: System::Windows::Forms::Button^  button208;
private: System::Windows::Forms::Button^  button209;
private: System::Windows::Forms::Button^  button210;
private: System::Windows::Forms::Button^  button211;
private: System::Windows::Forms::Button^  button212;
private: System::Windows::Forms::Button^  button213;
private: System::Windows::Forms::Label^  label稳压FI10;
private: System::Windows::Forms::Label^  label稳压FI9;
private: System::Windows::Forms::Label^  label稳压FI8;
private: System::Windows::Forms::Label^  label稳压FI7;
private: System::Windows::Forms::Label^  label稳压FI6;
private: System::Windows::Forms::Label^  label稳压FI5;
private: System::Windows::Forms::Label^  label稳压FI4;
private: System::Windows::Forms::Label^  label稳压FI3;
private: System::Windows::Forms::Label^  label稳压FI2;
private: System::Windows::Forms::Label^  label稳压FI1;
private: System::Windows::Forms::Label^  label稳压FU10;
private: System::Windows::Forms::Label^  label稳压FU9;
private: System::Windows::Forms::Label^  label稳压FU8;
private: System::Windows::Forms::Label^  label稳压FU7;
private: System::Windows::Forms::Label^  label稳压FU6;
private: System::Windows::Forms::Label^  label稳压FU5;
private: System::Windows::Forms::Label^  label稳压FU4;
private: System::Windows::Forms::Label^  label稳压FU3;
private: System::Windows::Forms::Label^  label稳压FU2;
private: System::Windows::Forms::Label^  label稳压FU1;

private: System::Windows::Forms::TextBox^  textBox稳压FSU10;

private: System::Windows::Forms::TextBox^  textBox稳压FSU9;

private: System::Windows::Forms::TextBox^  textBox稳压FSU8;

private: System::Windows::Forms::TextBox^  textBox稳压FSU7;

private: System::Windows::Forms::TextBox^  textBox稳压FSU6;

private: System::Windows::Forms::TextBox^  textBox稳压FSU5;

private: System::Windows::Forms::TextBox^  textBox稳压FSU4;

private: System::Windows::Forms::TextBox^  textBox稳压FSU3;

private: System::Windows::Forms::TextBox^  textBox稳压FSU2;

private: System::Windows::Forms::TextBox^  textBox稳压FSU1;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart稳压;
private: System::Windows::Forms::Label^  label63;

private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Button^  button246;
private: System::Windows::Forms::Label^  label6;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(元件伏安特性的测试实验内容::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button246 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chart稳压 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBox稳压结论 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button234 = (gcnew System::Windows::Forms::Button());
			this->button235 = (gcnew System::Windows::Forms::Button());
			this->button236 = (gcnew System::Windows::Forms::Button());
			this->button237 = (gcnew System::Windows::Forms::Button());
			this->button238 = (gcnew System::Windows::Forms::Button());
			this->button239 = (gcnew System::Windows::Forms::Button());
			this->button240 = (gcnew System::Windows::Forms::Button());
			this->button241 = (gcnew System::Windows::Forms::Button());
			this->button242 = (gcnew System::Windows::Forms::Button());
			this->button243 = (gcnew System::Windows::Forms::Button());
			this->button224 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI10 = (gcnew System::Windows::Forms::Label());
			this->button225 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI9 = (gcnew System::Windows::Forms::Label());
			this->button226 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI8 = (gcnew System::Windows::Forms::Label());
			this->button227 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI7 = (gcnew System::Windows::Forms::Label());
			this->button228 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI6 = (gcnew System::Windows::Forms::Label());
			this->button229 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI5 = (gcnew System::Windows::Forms::Label());
			this->button230 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI4 = (gcnew System::Windows::Forms::Label());
			this->button231 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI3 = (gcnew System::Windows::Forms::Label());
			this->button232 = (gcnew System::Windows::Forms::Button());
			this->button233 = (gcnew System::Windows::Forms::Button());
			this->label稳压ZI2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI1 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU1 = (gcnew System::Windows::Forms::Label());
			this->textBox稳压ZSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压ZSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button244 = (gcnew System::Windows::Forms::Button());
			this->button214 = (gcnew System::Windows::Forms::Button());
			this->button215 = (gcnew System::Windows::Forms::Button());
			this->button216 = (gcnew System::Windows::Forms::Button());
			this->button217 = (gcnew System::Windows::Forms::Button());
			this->button218 = (gcnew System::Windows::Forms::Button());
			this->button219 = (gcnew System::Windows::Forms::Button());
			this->button220 = (gcnew System::Windows::Forms::Button());
			this->button221 = (gcnew System::Windows::Forms::Button());
			this->button222 = (gcnew System::Windows::Forms::Button());
			this->button223 = (gcnew System::Windows::Forms::Button());
			this->button204 = (gcnew System::Windows::Forms::Button());
			this->button205 = (gcnew System::Windows::Forms::Button());
			this->button206 = (gcnew System::Windows::Forms::Button());
			this->button207 = (gcnew System::Windows::Forms::Button());
			this->button208 = (gcnew System::Windows::Forms::Button());
			this->button209 = (gcnew System::Windows::Forms::Button());
			this->button210 = (gcnew System::Windows::Forms::Button());
			this->button211 = (gcnew System::Windows::Forms::Button());
			this->button212 = (gcnew System::Windows::Forms::Button());
			this->button213 = (gcnew System::Windows::Forms::Button());
			this->label稳压FI10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI1 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU1 = (gcnew System::Windows::Forms::Label());
			this->textBox稳压FSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox稳压FSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->chart硅管 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox硅管结论 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button203 = (gcnew System::Windows::Forms::Button());
			this->button193 = (gcnew System::Windows::Forms::Button());
			this->button194 = (gcnew System::Windows::Forms::Button());
			this->button195 = (gcnew System::Windows::Forms::Button());
			this->button196 = (gcnew System::Windows::Forms::Button());
			this->button197 = (gcnew System::Windows::Forms::Button());
			this->button198 = (gcnew System::Windows::Forms::Button());
			this->button199 = (gcnew System::Windows::Forms::Button());
			this->button200 = (gcnew System::Windows::Forms::Button());
			this->button201 = (gcnew System::Windows::Forms::Button());
			this->button202 = (gcnew System::Windows::Forms::Button());
			this->button183 = (gcnew System::Windows::Forms::Button());
			this->button184 = (gcnew System::Windows::Forms::Button());
			this->button185 = (gcnew System::Windows::Forms::Button());
			this->button186 = (gcnew System::Windows::Forms::Button());
			this->button187 = (gcnew System::Windows::Forms::Button());
			this->button188 = (gcnew System::Windows::Forms::Button());
			this->button189 = (gcnew System::Windows::Forms::Button());
			this->button190 = (gcnew System::Windows::Forms::Button());
			this->button191 = (gcnew System::Windows::Forms::Button());
			this->button192 = (gcnew System::Windows::Forms::Button());
			this->label1硅管FI10 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI9 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI8 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI7 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI6 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI5 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI4 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI3 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI2 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI1 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU10 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU9 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU8 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU7 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU6 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU5 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU4 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU3 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU2 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU1 = (gcnew System::Windows::Forms::Label());
			this->textBox硅管FSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管FSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->chart锗管 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button163 = (gcnew System::Windows::Forms::Button());
			this->button164 = (gcnew System::Windows::Forms::Button());
			this->button165 = (gcnew System::Windows::Forms::Button());
			this->button166 = (gcnew System::Windows::Forms::Button());
			this->button167 = (gcnew System::Windows::Forms::Button());
			this->button168 = (gcnew System::Windows::Forms::Button());
			this->button169 = (gcnew System::Windows::Forms::Button());
			this->button170 = (gcnew System::Windows::Forms::Button());
			this->button181 = (gcnew System::Windows::Forms::Button());
			this->button182 = (gcnew System::Windows::Forms::Button());
			this->button153 = (gcnew System::Windows::Forms::Button());
			this->button154 = (gcnew System::Windows::Forms::Button());
			this->button155 = (gcnew System::Windows::Forms::Button());
			this->button156 = (gcnew System::Windows::Forms::Button());
			this->button157 = (gcnew System::Windows::Forms::Button());
			this->button158 = (gcnew System::Windows::Forms::Button());
			this->button159 = (gcnew System::Windows::Forms::Button());
			this->button160 = (gcnew System::Windows::Forms::Button());
			this->button161 = (gcnew System::Windows::Forms::Button());
			this->button162 = (gcnew System::Windows::Forms::Button());
			this->label硅管ZI10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI1 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU1 = (gcnew System::Windows::Forms::Label());
			this->textBox硅管ZSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox硅管ZSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->textBox锗管结论 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button121 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->label锗管ZI10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI1 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU1 = (gcnew System::Windows::Forms::Label());
			this->textBox锗管ZSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管ZSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button152 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button136 = (gcnew System::Windows::Forms::Button());
			this->button137 = (gcnew System::Windows::Forms::Button());
			this->button138 = (gcnew System::Windows::Forms::Button());
			this->button139 = (gcnew System::Windows::Forms::Button());
			this->button140 = (gcnew System::Windows::Forms::Button());
			this->button151 = (gcnew System::Windows::Forms::Button());
			this->button122 = (gcnew System::Windows::Forms::Button());
			this->button123 = (gcnew System::Windows::Forms::Button());
			this->button124 = (gcnew System::Windows::Forms::Button());
			this->button125 = (gcnew System::Windows::Forms::Button());
			this->button126 = (gcnew System::Windows::Forms::Button());
			this->button127 = (gcnew System::Windows::Forms::Button());
			this->button128 = (gcnew System::Windows::Forms::Button());
			this->button129 = (gcnew System::Windows::Forms::Button());
			this->button130 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->label锗管FI10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU1 = (gcnew System::Windows::Forms::Label());
			this->textBox锗管FSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox锗管FSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart线性 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox线性结论 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label线性U10 = (gcnew System::Windows::Forms::Label());
			this->label线性U9 = (gcnew System::Windows::Forms::Label());
			this->label线性U8 = (gcnew System::Windows::Forms::Label());
			this->label线性U7 = (gcnew System::Windows::Forms::Label());
			this->label线性U6 = (gcnew System::Windows::Forms::Label());
			this->label线性U5 = (gcnew System::Windows::Forms::Label());
			this->label线性U4 = (gcnew System::Windows::Forms::Label());
			this->label线性U3 = (gcnew System::Windows::Forms::Label());
			this->label线性U2 = (gcnew System::Windows::Forms::Label());
			this->label线性U1 = (gcnew System::Windows::Forms::Label());
			this->label线性I10 = (gcnew System::Windows::Forms::Label());
			this->label线性I9 = (gcnew System::Windows::Forms::Label());
			this->label线性I8 = (gcnew System::Windows::Forms::Label());
			this->label线性I7 = (gcnew System::Windows::Forms::Label());
			this->label线性I6 = (gcnew System::Windows::Forms::Label());
			this->label线性I5 = (gcnew System::Windows::Forms::Label());
			this->label线性I4 = (gcnew System::Windows::Forms::Label());
			this->label线性I3 = (gcnew System::Windows::Forms::Label());
			this->label线性I2 = (gcnew System::Windows::Forms::Label());
			this->label线性I1 = (gcnew System::Windows::Forms::Label());
			this->textBoxSU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSU1 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart白炽 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox白炽结论 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button245 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->label白炽I10 = (gcnew System::Windows::Forms::Label());
			this->label白炽I9 = (gcnew System::Windows::Forms::Label());
			this->label白炽I8 = (gcnew System::Windows::Forms::Label());
			this->label白炽I7 = (gcnew System::Windows::Forms::Label());
			this->label白炽I6 = (gcnew System::Windows::Forms::Label());
			this->label白炽I5 = (gcnew System::Windows::Forms::Label());
			this->label白炽I4 = (gcnew System::Windows::Forms::Label());
			this->label白炽I3 = (gcnew System::Windows::Forms::Label());
			this->label白炽I2 = (gcnew System::Windows::Forms::Label());
			this->label白炽I1 = (gcnew System::Windows::Forms::Label());
			this->label白炽U10 = (gcnew System::Windows::Forms::Label());
			this->label白炽U9 = (gcnew System::Windows::Forms::Label());
			this->label白炽U8 = (gcnew System::Windows::Forms::Label());
			this->label白炽U7 = (gcnew System::Windows::Forms::Label());
			this->label白炽U6 = (gcnew System::Windows::Forms::Label());
			this->label白炽U5 = (gcnew System::Windows::Forms::Label());
			this->label白炽U4 = (gcnew System::Windows::Forms::Label());
			this->label白炽U3 = (gcnew System::Windows::Forms::Label());
			this->label白炽U2 = (gcnew System::Windows::Forms::Label());
			this->label白炽U1 = (gcnew System::Windows::Forms::Label());
			this->textBox白炽SU10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox白炽SU1 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart稳压))->BeginInit();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox14->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart硅管))->BeginInit();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart锗管))->BeginInit();
			this->groupBox13->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart线性))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart白炽))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->button246);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->chart稳压);
			this->panel1->Controls->Add(this->label63);
			this->panel1->Controls->Add(this->textBox稳压结论);
			this->panel1->Controls->Add(this->groupBox10);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->label64);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->groupBox6);
			this->panel1->Controls->Add(this->label157);
			this->panel1->Controls->Add(this->chart硅管);
			this->panel1->Controls->Add(this->textBox硅管结论);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->groupBox11);
			this->panel1->Controls->Add(this->label204);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->groupBox12);
			this->panel1->Controls->Add(this->chart锗管);
			this->panel1->Controls->Add(this->groupBox13);
			this->panel1->Controls->Add(this->textBox锗管结论);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->label53);
			this->panel1->Controls->Add(this->label54);
			this->panel1->Controls->Add(this->groupBox9);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->chart线性);
			this->panel1->Controls->Add(this->textBox线性结论);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->label43);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->chart白炽);
			this->panel1->Controls->Add(this->textBox白炽结论);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->label46);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1729, 968);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &元件伏安特性的测试实验内容::panel1_Paint);
			// 
			// button246
			// 
			this->button246->Location = System::Drawing::Point(716, 4388);
			this->button246->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button246->Name = L"button246";
			this->button246->Size = System::Drawing::Size(189, 38);
			this->button246->TabIndex = 79;
			this->button246->Text = L"成绩完成并上传";
			this->button246->UseVisualStyleBackColor = true;
			this->button246->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button246_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::SkyBlue;
			this->label6->Location = System::Drawing::Point(16, 4371);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1525, 10);
			this->label6->TabIndex = 112;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::SkyBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(13, 4435);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1525, 52);
			this->label5->TabIndex = 111;
			this->label5->Text = L"答题结束";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chart稳压
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart稳压->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart稳压->Legends->Add(legend1);
			this->chart稳压->Location = System::Drawing::Point(945, 3785);
			this->chart稳压->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart稳压->Name = L"chart稳压";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart稳压->Series->Add(series1);
			this->chart稳压->Size = System::Drawing::Size(592, 542);
			this->chart稳压->TabIndex = 109;
			this->chart稳压->Text = L"chart5";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Blue;
			this->label63->Location = System::Drawing::Point(1177, 3745);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(35, 18);
			this->label63->TabIndex = 108;
			this->label63->Text = L"图5";
			// 
			// textBox稳压结论
			// 
			this->textBox稳压结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox稳压结论->Location = System::Drawing::Point(124, 4340);
			this->textBox稳压结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压结论->Name = L"textBox稳压结论";
			this->textBox稳压结论->Size = System::Drawing::Size(811, 28);
			this->textBox稳压结论->TabIndex = 107;
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::Color::Transparent;
			this->groupBox10->Controls->Add(this->label9);
			this->groupBox10->Controls->Add(this->label62);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox10->ForeColor = System::Drawing::Color::Red;
			this->groupBox10->Location = System::Drawing::Point(19, 3460);
			this->groupBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Size = System::Drawing::Size(920, 241);
			this->groupBox10->TabIndex = 103;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"测定稳压二极管的伏安特性";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(28, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(843, 38);
			this->label9->TabIndex = 61;
			this->label9->Text = L"    注意：正向实验时，稳压源U<0.8V内采集多组数据。";
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(31, 54);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(847, 112);
			this->label62->TabIndex = 64;
			this->label62->Text = L"    将图5搭接线路(D换成稳压管并正向接入)，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0-30V)，任意选取十组数据，记下相应"
				L"的电压表和电流表的读数，并绘制相应的元件伏安特性曲线。然后断电，将稳压管反向接入实验电路中，通电重复之前的实验；注意反向电流应<25mA，否则会损坏稳压二极管。"
				L"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(945, 3452);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(400, 271);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 102;
			this->pictureBox4->TabStop = false;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(15, 4342);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 106;
			this->label64->Text = L"实验结论";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::SkyBlue;
			this->label4->Location = System::Drawing::Point(0, 3404);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1525, 10);
			this->label4->TabIndex = 101;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->label22);
			this->groupBox14->Controls->Add(this->label23);
			this->groupBox14->Controls->Add(this->button234);
			this->groupBox14->Controls->Add(this->button235);
			this->groupBox14->Controls->Add(this->button236);
			this->groupBox14->Controls->Add(this->button237);
			this->groupBox14->Controls->Add(this->button238);
			this->groupBox14->Controls->Add(this->button239);
			this->groupBox14->Controls->Add(this->button240);
			this->groupBox14->Controls->Add(this->button241);
			this->groupBox14->Controls->Add(this->button242);
			this->groupBox14->Controls->Add(this->button243);
			this->groupBox14->Controls->Add(this->button224);
			this->groupBox14->Controls->Add(this->label稳压ZI10);
			this->groupBox14->Controls->Add(this->button225);
			this->groupBox14->Controls->Add(this->label稳压ZI9);
			this->groupBox14->Controls->Add(this->button226);
			this->groupBox14->Controls->Add(this->label稳压ZI8);
			this->groupBox14->Controls->Add(this->button227);
			this->groupBox14->Controls->Add(this->label稳压ZI7);
			this->groupBox14->Controls->Add(this->button228);
			this->groupBox14->Controls->Add(this->label稳压ZI6);
			this->groupBox14->Controls->Add(this->button229);
			this->groupBox14->Controls->Add(this->label稳压ZI5);
			this->groupBox14->Controls->Add(this->button230);
			this->groupBox14->Controls->Add(this->label稳压ZI4);
			this->groupBox14->Controls->Add(this->button231);
			this->groupBox14->Controls->Add(this->label稳压ZI3);
			this->groupBox14->Controls->Add(this->button232);
			this->groupBox14->Controls->Add(this->button233);
			this->groupBox14->Controls->Add(this->label稳压ZI2);
			this->groupBox14->Controls->Add(this->label稳压ZI1);
			this->groupBox14->Controls->Add(this->label稳压ZU10);
			this->groupBox14->Controls->Add(this->label稳压ZU9);
			this->groupBox14->Controls->Add(this->label稳压ZU8);
			this->groupBox14->Controls->Add(this->label稳压ZU7);
			this->groupBox14->Controls->Add(this->label稳压ZU6);
			this->groupBox14->Controls->Add(this->label稳压ZU5);
			this->groupBox14->Controls->Add(this->label稳压ZU4);
			this->groupBox14->Controls->Add(this->label稳压ZU3);
			this->groupBox14->Controls->Add(this->label稳压ZU2);
			this->groupBox14->Controls->Add(this->label稳压ZU1);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU10);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU9);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU8);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU7);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU6);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU5);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU4);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU3);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU2);
			this->groupBox14->Controls->Add(this->textBox稳压ZSU1);
			this->groupBox14->Controls->Add(this->label68);
			this->groupBox14->Controls->Add(this->label69);
			this->groupBox14->Controls->Add(this->label70);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(19, 3745);
			this->groupBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox14->Size = System::Drawing::Size(916, 272);
			this->groupBox14->TabIndex = 104;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"正向特性测试";
			// 
			// label22
			// 
			this->label22->ForeColor = System::Drawing::Color::Lime;
			this->label22->Location = System::Drawing::Point(30, 238);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(145, 22);
			this->label22->TabIndex = 116;
			this->label22->Text = L"直流电流表2";
			// 
			// label23
			// 
			this->label23->ForeColor = System::Drawing::Color::Lime;
			this->label23->Location = System::Drawing::Point(28, 159);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(145, 22);
			this->label23->TabIndex = 115;
			this->label23->Text = L"直流电压表3";
			// 
			// button234
			// 
			this->button234->Location = System::Drawing::Point(817, 226);
			this->button234->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button234->Name = L"button234";
			this->button234->Size = System::Drawing::Size(61, 34);
			this->button234->TabIndex = 97;
			this->button234->Text = L"获取";
			this->button234->UseVisualStyleBackColor = true;
			this->button234->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button234_Click);
			// 
			// button235
			// 
			this->button235->Location = System::Drawing::Point(749, 226);
			this->button235->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button235->Name = L"button235";
			this->button235->Size = System::Drawing::Size(61, 34);
			this->button235->TabIndex = 96;
			this->button235->Text = L"获取";
			this->button235->UseVisualStyleBackColor = true;
			this->button235->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button235_Click);
			// 
			// button236
			// 
			this->button236->Location = System::Drawing::Point(681, 226);
			this->button236->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button236->Name = L"button236";
			this->button236->Size = System::Drawing::Size(61, 34);
			this->button236->TabIndex = 95;
			this->button236->Text = L"获取";
			this->button236->UseVisualStyleBackColor = true;
			this->button236->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button236_Click);
			// 
			// button237
			// 
			this->button237->Location = System::Drawing::Point(613, 226);
			this->button237->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button237->Name = L"button237";
			this->button237->Size = System::Drawing::Size(61, 34);
			this->button237->TabIndex = 94;
			this->button237->Text = L"获取";
			this->button237->UseVisualStyleBackColor = true;
			this->button237->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button237_Click);
			// 
			// button238
			// 
			this->button238->Location = System::Drawing::Point(545, 226);
			this->button238->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button238->Name = L"button238";
			this->button238->Size = System::Drawing::Size(61, 34);
			this->button238->TabIndex = 93;
			this->button238->Text = L"获取";
			this->button238->UseVisualStyleBackColor = true;
			this->button238->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button238_Click);
			// 
			// button239
			// 
			this->button239->Location = System::Drawing::Point(477, 226);
			this->button239->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button239->Name = L"button239";
			this->button239->Size = System::Drawing::Size(61, 34);
			this->button239->TabIndex = 92;
			this->button239->Text = L"获取";
			this->button239->UseVisualStyleBackColor = true;
			this->button239->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button239_Click);
			// 
			// button240
			// 
			this->button240->Location = System::Drawing::Point(409, 226);
			this->button240->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button240->Name = L"button240";
			this->button240->Size = System::Drawing::Size(61, 34);
			this->button240->TabIndex = 91;
			this->button240->Text = L"获取";
			this->button240->UseVisualStyleBackColor = true;
			this->button240->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button240_Click);
			// 
			// button241
			// 
			this->button241->Location = System::Drawing::Point(341, 226);
			this->button241->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button241->Name = L"button241";
			this->button241->Size = System::Drawing::Size(61, 34);
			this->button241->TabIndex = 90;
			this->button241->Text = L"获取";
			this->button241->UseVisualStyleBackColor = true;
			this->button241->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button241_Click);
			// 
			// button242
			// 
			this->button242->Location = System::Drawing::Point(273, 226);
			this->button242->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button242->Name = L"button242";
			this->button242->Size = System::Drawing::Size(61, 34);
			this->button242->TabIndex = 89;
			this->button242->Text = L"获取";
			this->button242->UseVisualStyleBackColor = true;
			this->button242->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button242_Click);
			// 
			// button243
			// 
			this->button243->Location = System::Drawing::Point(207, 226);
			this->button243->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button243->Name = L"button243";
			this->button243->Size = System::Drawing::Size(61, 34);
			this->button243->TabIndex = 88;
			this->button243->Text = L"获取";
			this->button243->UseVisualStyleBackColor = true;
			this->button243->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button243_Click);
			// 
			// button224
			// 
			this->button224->Location = System::Drawing::Point(813, 151);
			this->button224->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button224->Name = L"button224";
			this->button224->Size = System::Drawing::Size(61, 34);
			this->button224->TabIndex = 87;
			this->button224->Text = L"获取";
			this->button224->UseVisualStyleBackColor = true;
			this->button224->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button224_Click);
			// 
			// label稳压ZI10
			// 
			this->label稳压ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI10->Location = System::Drawing::Point(817, 196);
			this->label稳压ZI10->Name = L"label稳压ZI10";
			this->label稳压ZI10->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI10->TabIndex = 57;
			this->label稳压ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button225
			// 
			this->button225->Location = System::Drawing::Point(747, 151);
			this->button225->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button225->Name = L"button225";
			this->button225->Size = System::Drawing::Size(61, 34);
			this->button225->TabIndex = 86;
			this->button225->Text = L"获取";
			this->button225->UseVisualStyleBackColor = true;
			this->button225->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button225_Click);
			// 
			// label稳压ZI9
			// 
			this->label稳压ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI9->Location = System::Drawing::Point(749, 196);
			this->label稳压ZI9->Name = L"label稳压ZI9";
			this->label稳压ZI9->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI9->TabIndex = 56;
			this->label稳压ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button226
			// 
			this->button226->Location = System::Drawing::Point(677, 151);
			this->button226->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button226->Name = L"button226";
			this->button226->Size = System::Drawing::Size(61, 34);
			this->button226->TabIndex = 85;
			this->button226->Text = L"获取";
			this->button226->UseVisualStyleBackColor = true;
			this->button226->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button226_Click);
			// 
			// label稳压ZI8
			// 
			this->label稳压ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI8->Location = System::Drawing::Point(681, 196);
			this->label稳压ZI8->Name = L"label稳压ZI8";
			this->label稳压ZI8->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI8->TabIndex = 55;
			this->label稳压ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button227
			// 
			this->button227->Location = System::Drawing::Point(611, 151);
			this->button227->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button227->Name = L"button227";
			this->button227->Size = System::Drawing::Size(61, 34);
			this->button227->TabIndex = 84;
			this->button227->Text = L"获取";
			this->button227->UseVisualStyleBackColor = true;
			this->button227->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button227_Click);
			// 
			// label稳压ZI7
			// 
			this->label稳压ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI7->Location = System::Drawing::Point(613, 198);
			this->label稳压ZI7->Name = L"label稳压ZI7";
			this->label稳压ZI7->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI7->TabIndex = 54;
			this->label稳压ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button228
			// 
			this->button228->Location = System::Drawing::Point(541, 151);
			this->button228->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button228->Name = L"button228";
			this->button228->Size = System::Drawing::Size(61, 34);
			this->button228->TabIndex = 83;
			this->button228->Text = L"获取";
			this->button228->UseVisualStyleBackColor = true;
			this->button228->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button228_Click);
			// 
			// label稳压ZI6
			// 
			this->label稳压ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI6->Location = System::Drawing::Point(545, 196);
			this->label稳压ZI6->Name = L"label稳压ZI6";
			this->label稳压ZI6->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI6->TabIndex = 53;
			this->label稳压ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button229
			// 
			this->button229->Location = System::Drawing::Point(475, 151);
			this->button229->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button229->Name = L"button229";
			this->button229->Size = System::Drawing::Size(61, 34);
			this->button229->TabIndex = 82;
			this->button229->Text = L"获取";
			this->button229->UseVisualStyleBackColor = true;
			this->button229->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button229_Click);
			// 
			// label稳压ZI5
			// 
			this->label稳压ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI5->Location = System::Drawing::Point(477, 196);
			this->label稳压ZI5->Name = L"label稳压ZI5";
			this->label稳压ZI5->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI5->TabIndex = 52;
			this->label稳压ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button230
			// 
			this->button230->Location = System::Drawing::Point(405, 151);
			this->button230->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button230->Name = L"button230";
			this->button230->Size = System::Drawing::Size(61, 34);
			this->button230->TabIndex = 81;
			this->button230->Text = L"获取";
			this->button230->UseVisualStyleBackColor = true;
			this->button230->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button230_Click);
			// 
			// label稳压ZI4
			// 
			this->label稳压ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI4->Location = System::Drawing::Point(409, 196);
			this->label稳压ZI4->Name = L"label稳压ZI4";
			this->label稳压ZI4->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI4->TabIndex = 51;
			this->label稳压ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button231
			// 
			this->button231->Location = System::Drawing::Point(339, 151);
			this->button231->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button231->Name = L"button231";
			this->button231->Size = System::Drawing::Size(61, 34);
			this->button231->TabIndex = 80;
			this->button231->Text = L"获取";
			this->button231->UseVisualStyleBackColor = true;
			this->button231->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button231_Click);
			// 
			// label稳压ZI3
			// 
			this->label稳压ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI3->Location = System::Drawing::Point(341, 198);
			this->label稳压ZI3->Name = L"label稳压ZI3";
			this->label稳压ZI3->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI3->TabIndex = 50;
			this->label稳压ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button232
			// 
			this->button232->Location = System::Drawing::Point(269, 151);
			this->button232->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button232->Name = L"button232";
			this->button232->Size = System::Drawing::Size(61, 34);
			this->button232->TabIndex = 79;
			this->button232->Text = L"获取";
			this->button232->UseVisualStyleBackColor = true;
			this->button232->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button232_Click);
			// 
			// button233
			// 
			this->button233->Location = System::Drawing::Point(204, 151);
			this->button233->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button233->Name = L"button233";
			this->button233->Size = System::Drawing::Size(61, 34);
			this->button233->TabIndex = 78;
			this->button233->Text = L"获取";
			this->button233->UseVisualStyleBackColor = true;
			this->button233->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button233_Click);
			// 
			// label稳压ZI2
			// 
			this->label稳压ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI2->Location = System::Drawing::Point(273, 198);
			this->label稳压ZI2->Name = L"label稳压ZI2";
			this->label稳压ZI2->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI2->TabIndex = 49;
			this->label稳压ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI1
			// 
			this->label稳压ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI1->Location = System::Drawing::Point(207, 196);
			this->label稳压ZI1->Name = L"label稳压ZI1";
			this->label稳压ZI1->Size = System::Drawing::Size(61, 22);
			this->label稳压ZI1->TabIndex = 48;
			this->label稳压ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU10
			// 
			this->label稳压ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU10->Location = System::Drawing::Point(817, 122);
			this->label稳压ZU10->Name = L"label稳压ZU10";
			this->label稳压ZU10->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU10->TabIndex = 47;
			this->label稳压ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU9
			// 
			this->label稳压ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU9->Location = System::Drawing::Point(749, 122);
			this->label稳压ZU9->Name = L"label稳压ZU9";
			this->label稳压ZU9->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU9->TabIndex = 46;
			this->label稳压ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU8
			// 
			this->label稳压ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU8->Location = System::Drawing::Point(681, 122);
			this->label稳压ZU8->Name = L"label稳压ZU8";
			this->label稳压ZU8->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU8->TabIndex = 45;
			this->label稳压ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU7
			// 
			this->label稳压ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU7->Location = System::Drawing::Point(613, 124);
			this->label稳压ZU7->Name = L"label稳压ZU7";
			this->label稳压ZU7->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU7->TabIndex = 44;
			this->label稳压ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU6
			// 
			this->label稳压ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU6->Location = System::Drawing::Point(545, 122);
			this->label稳压ZU6->Name = L"label稳压ZU6";
			this->label稳压ZU6->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU6->TabIndex = 43;
			this->label稳压ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU5
			// 
			this->label稳压ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU5->Location = System::Drawing::Point(477, 122);
			this->label稳压ZU5->Name = L"label稳压ZU5";
			this->label稳压ZU5->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU5->TabIndex = 42;
			this->label稳压ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU4
			// 
			this->label稳压ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU4->Location = System::Drawing::Point(409, 122);
			this->label稳压ZU4->Name = L"label稳压ZU4";
			this->label稳压ZU4->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU4->TabIndex = 41;
			this->label稳压ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU3
			// 
			this->label稳压ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU3->Location = System::Drawing::Point(341, 124);
			this->label稳压ZU3->Name = L"label稳压ZU3";
			this->label稳压ZU3->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU3->TabIndex = 40;
			this->label稳压ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU2
			// 
			this->label稳压ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU2->Location = System::Drawing::Point(273, 124);
			this->label稳压ZU2->Name = L"label稳压ZU2";
			this->label稳压ZU2->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU2->TabIndex = 39;
			this->label稳压ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU1
			// 
			this->label稳压ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU1->Location = System::Drawing::Point(207, 124);
			this->label稳压ZU1->Name = L"label稳压ZU1";
			this->label稳压ZU1->Size = System::Drawing::Size(61, 22);
			this->label稳压ZU1->TabIndex = 38;
			this->label稳压ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox稳压ZSU10
			// 
			this->textBox稳压ZSU10->Location = System::Drawing::Point(817, 38);
			this->textBox稳压ZSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU10->Name = L"textBox稳压ZSU10";
			this->textBox稳压ZSU10->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU10->TabIndex = 26;
			// 
			// textBox稳压ZSU9
			// 
			this->textBox稳压ZSU9->Location = System::Drawing::Point(749, 38);
			this->textBox稳压ZSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU9->Name = L"textBox稳压ZSU9";
			this->textBox稳压ZSU9->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU9->TabIndex = 24;
			// 
			// textBox稳压ZSU8
			// 
			this->textBox稳压ZSU8->Location = System::Drawing::Point(681, 38);
			this->textBox稳压ZSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU8->Name = L"textBox稳压ZSU8";
			this->textBox稳压ZSU8->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU8->TabIndex = 22;
			// 
			// textBox稳压ZSU7
			// 
			this->textBox稳压ZSU7->Location = System::Drawing::Point(613, 38);
			this->textBox稳压ZSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU7->Name = L"textBox稳压ZSU7";
			this->textBox稳压ZSU7->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU7->TabIndex = 20;
			// 
			// textBox稳压ZSU6
			// 
			this->textBox稳压ZSU6->Location = System::Drawing::Point(545, 38);
			this->textBox稳压ZSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU6->Name = L"textBox稳压ZSU6";
			this->textBox稳压ZSU6->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU6->TabIndex = 18;
			// 
			// textBox稳压ZSU5
			// 
			this->textBox稳压ZSU5->Location = System::Drawing::Point(477, 38);
			this->textBox稳压ZSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU5->Name = L"textBox稳压ZSU5";
			this->textBox稳压ZSU5->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU5->TabIndex = 16;
			// 
			// textBox稳压ZSU4
			// 
			this->textBox稳压ZSU4->Location = System::Drawing::Point(409, 38);
			this->textBox稳压ZSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU4->Name = L"textBox稳压ZSU4";
			this->textBox稳压ZSU4->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU4->TabIndex = 14;
			// 
			// textBox稳压ZSU3
			// 
			this->textBox稳压ZSU3->Location = System::Drawing::Point(341, 38);
			this->textBox稳压ZSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU3->Name = L"textBox稳压ZSU3";
			this->textBox稳压ZSU3->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU3->TabIndex = 12;
			// 
			// textBox稳压ZSU2
			// 
			this->textBox稳压ZSU2->Location = System::Drawing::Point(273, 38);
			this->textBox稳压ZSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU2->Name = L"textBox稳压ZSU2";
			this->textBox稳压ZSU2->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU2->TabIndex = 10;
			// 
			// textBox稳压ZSU1
			// 
			this->textBox稳压ZSU1->Location = System::Drawing::Point(207, 38);
			this->textBox稳压ZSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压ZSU1->Name = L"textBox稳压ZSU1";
			this->textBox稳压ZSU1->Size = System::Drawing::Size(63, 28);
			this->textBox稳压ZSU1->TabIndex = 8;
			// 
			// label68
			// 
			this->label68->ForeColor = System::Drawing::Color::Black;
			this->label68->Location = System::Drawing::Point(23, 198);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(176, 20);
			this->label68->TabIndex = 7;
			this->label68->Text = L"电流表读数I(mA)";
			// 
			// label69
			// 
			this->label69->ForeColor = System::Drawing::Color::Black;
			this->label69->Location = System::Drawing::Point(23, 124);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(176, 22);
			this->label69->TabIndex = 6;
			this->label69->Text = L"电压表读数Ud(V)";
			// 
			// label70
			// 
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(21, 40);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(145, 22);
			this->label70->TabIndex = 5;
			this->label70->Text = L"电源电压U(V)";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->button244);
			this->groupBox6->Controls->Add(this->button214);
			this->groupBox6->Controls->Add(this->button215);
			this->groupBox6->Controls->Add(this->button216);
			this->groupBox6->Controls->Add(this->button217);
			this->groupBox6->Controls->Add(this->button218);
			this->groupBox6->Controls->Add(this->button219);
			this->groupBox6->Controls->Add(this->button220);
			this->groupBox6->Controls->Add(this->button221);
			this->groupBox6->Controls->Add(this->button222);
			this->groupBox6->Controls->Add(this->button223);
			this->groupBox6->Controls->Add(this->button204);
			this->groupBox6->Controls->Add(this->button205);
			this->groupBox6->Controls->Add(this->button206);
			this->groupBox6->Controls->Add(this->button207);
			this->groupBox6->Controls->Add(this->button208);
			this->groupBox6->Controls->Add(this->button209);
			this->groupBox6->Controls->Add(this->button210);
			this->groupBox6->Controls->Add(this->button211);
			this->groupBox6->Controls->Add(this->button212);
			this->groupBox6->Controls->Add(this->button213);
			this->groupBox6->Controls->Add(this->label稳压FI10);
			this->groupBox6->Controls->Add(this->label稳压FI9);
			this->groupBox6->Controls->Add(this->label稳压FI8);
			this->groupBox6->Controls->Add(this->label稳压FI7);
			this->groupBox6->Controls->Add(this->label稳压FI6);
			this->groupBox6->Controls->Add(this->label稳压FI5);
			this->groupBox6->Controls->Add(this->label稳压FI4);
			this->groupBox6->Controls->Add(this->label稳压FI3);
			this->groupBox6->Controls->Add(this->label稳压FI2);
			this->groupBox6->Controls->Add(this->label稳压FI1);
			this->groupBox6->Controls->Add(this->label稳压FU10);
			this->groupBox6->Controls->Add(this->label稳压FU9);
			this->groupBox6->Controls->Add(this->label稳压FU8);
			this->groupBox6->Controls->Add(this->label稳压FU7);
			this->groupBox6->Controls->Add(this->label稳压FU6);
			this->groupBox6->Controls->Add(this->label稳压FU5);
			this->groupBox6->Controls->Add(this->label稳压FU4);
			this->groupBox6->Controls->Add(this->label稳压FU3);
			this->groupBox6->Controls->Add(this->label稳压FU2);
			this->groupBox6->Controls->Add(this->label稳压FU1);
			this->groupBox6->Controls->Add(this->textBox稳压FSU10);
			this->groupBox6->Controls->Add(this->textBox稳压FSU9);
			this->groupBox6->Controls->Add(this->textBox稳压FSU8);
			this->groupBox6->Controls->Add(this->textBox稳压FSU7);
			this->groupBox6->Controls->Add(this->textBox稳压FSU6);
			this->groupBox6->Controls->Add(this->textBox稳压FSU5);
			this->groupBox6->Controls->Add(this->textBox稳压FSU4);
			this->groupBox6->Controls->Add(this->textBox稳压FSU3);
			this->groupBox6->Controls->Add(this->textBox稳压FSU2);
			this->groupBox6->Controls->Add(this->textBox稳压FSU1);
			this->groupBox6->Controls->Add(this->label65);
			this->groupBox6->Controls->Add(this->label66);
			this->groupBox6->Controls->Add(this->label67);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->Location = System::Drawing::Point(19, 4024);
			this->groupBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Size = System::Drawing::Size(916, 304);
			this->groupBox6->TabIndex = 105;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"反向特性测试";
			// 
			// label24
			// 
			this->label24->ForeColor = System::Drawing::Color::Lime;
			this->label24->Location = System::Drawing::Point(25, 237);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(145, 22);
			this->label24->TabIndex = 116;
			this->label24->Text = L"直流电流表2";
			// 
			// label25
			// 
			this->label25->ForeColor = System::Drawing::Color::Lime;
			this->label25->Location = System::Drawing::Point(23, 158);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(145, 22);
			this->label25->TabIndex = 115;
			this->label25->Text = L"直流电压表3";
			// 
			// button244
			// 
			this->button244->Location = System::Drawing::Point(773, 262);
			this->button244->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button244->Name = L"button244";
			this->button244->Size = System::Drawing::Size(103, 38);
			this->button244->TabIndex = 78;
			this->button244->Text = L"曲线生成";
			this->button244->UseVisualStyleBackColor = true;
			this->button244->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button244_Click);
			// 
			// button214
			// 
			this->button214->Location = System::Drawing::Point(813, 225);
			this->button214->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button214->Name = L"button214";
			this->button214->Size = System::Drawing::Size(61, 34);
			this->button214->TabIndex = 77;
			this->button214->Text = L"获取";
			this->button214->UseVisualStyleBackColor = true;
			this->button214->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button214_Click);
			// 
			// button215
			// 
			this->button215->Location = System::Drawing::Point(747, 225);
			this->button215->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button215->Name = L"button215";
			this->button215->Size = System::Drawing::Size(61, 34);
			this->button215->TabIndex = 76;
			this->button215->Text = L"获取";
			this->button215->UseVisualStyleBackColor = true;
			this->button215->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button215_Click);
			// 
			// button216
			// 
			this->button216->Location = System::Drawing::Point(677, 225);
			this->button216->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button216->Name = L"button216";
			this->button216->Size = System::Drawing::Size(61, 34);
			this->button216->TabIndex = 75;
			this->button216->Text = L"获取";
			this->button216->UseVisualStyleBackColor = true;
			this->button216->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button216_Click);
			// 
			// button217
			// 
			this->button217->Location = System::Drawing::Point(611, 225);
			this->button217->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button217->Name = L"button217";
			this->button217->Size = System::Drawing::Size(61, 34);
			this->button217->TabIndex = 74;
			this->button217->Text = L"获取";
			this->button217->UseVisualStyleBackColor = true;
			this->button217->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button217_Click);
			// 
			// button218
			// 
			this->button218->Location = System::Drawing::Point(541, 225);
			this->button218->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button218->Name = L"button218";
			this->button218->Size = System::Drawing::Size(61, 34);
			this->button218->TabIndex = 73;
			this->button218->Text = L"获取";
			this->button218->UseVisualStyleBackColor = true;
			this->button218->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button218_Click);
			// 
			// button219
			// 
			this->button219->Location = System::Drawing::Point(475, 225);
			this->button219->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button219->Name = L"button219";
			this->button219->Size = System::Drawing::Size(61, 34);
			this->button219->TabIndex = 72;
			this->button219->Text = L"获取";
			this->button219->UseVisualStyleBackColor = true;
			this->button219->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button219_Click);
			// 
			// button220
			// 
			this->button220->Location = System::Drawing::Point(405, 225);
			this->button220->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button220->Name = L"button220";
			this->button220->Size = System::Drawing::Size(61, 34);
			this->button220->TabIndex = 71;
			this->button220->Text = L"获取";
			this->button220->UseVisualStyleBackColor = true;
			this->button220->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button220_Click);
			// 
			// button221
			// 
			this->button221->Location = System::Drawing::Point(339, 225);
			this->button221->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button221->Name = L"button221";
			this->button221->Size = System::Drawing::Size(61, 34);
			this->button221->TabIndex = 70;
			this->button221->Text = L"获取";
			this->button221->UseVisualStyleBackColor = true;
			this->button221->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button221_Click);
			// 
			// button222
			// 
			this->button222->Location = System::Drawing::Point(269, 225);
			this->button222->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button222->Name = L"button222";
			this->button222->Size = System::Drawing::Size(61, 34);
			this->button222->TabIndex = 69;
			this->button222->Text = L"获取";
			this->button222->UseVisualStyleBackColor = true;
			this->button222->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button222_Click);
			// 
			// button223
			// 
			this->button223->Location = System::Drawing::Point(204, 225);
			this->button223->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button223->Name = L"button223";
			this->button223->Size = System::Drawing::Size(61, 34);
			this->button223->TabIndex = 68;
			this->button223->Text = L"获取";
			this->button223->UseVisualStyleBackColor = true;
			this->button223->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button223_Click);
			// 
			// button204
			// 
			this->button204->Location = System::Drawing::Point(813, 150);
			this->button204->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button204->Name = L"button204";
			this->button204->Size = System::Drawing::Size(61, 34);
			this->button204->TabIndex = 67;
			this->button204->Text = L"获取";
			this->button204->UseVisualStyleBackColor = true;
			this->button204->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button204_Click);
			// 
			// button205
			// 
			this->button205->Location = System::Drawing::Point(747, 150);
			this->button205->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button205->Name = L"button205";
			this->button205->Size = System::Drawing::Size(61, 34);
			this->button205->TabIndex = 66;
			this->button205->Text = L"获取";
			this->button205->UseVisualStyleBackColor = true;
			this->button205->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button205_Click);
			// 
			// button206
			// 
			this->button206->Location = System::Drawing::Point(677, 150);
			this->button206->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button206->Name = L"button206";
			this->button206->Size = System::Drawing::Size(61, 34);
			this->button206->TabIndex = 65;
			this->button206->Text = L"获取";
			this->button206->UseVisualStyleBackColor = true;
			this->button206->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button206_Click);
			// 
			// button207
			// 
			this->button207->Location = System::Drawing::Point(611, 150);
			this->button207->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button207->Name = L"button207";
			this->button207->Size = System::Drawing::Size(61, 34);
			this->button207->TabIndex = 64;
			this->button207->Text = L"获取";
			this->button207->UseVisualStyleBackColor = true;
			this->button207->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button207_Click);
			// 
			// button208
			// 
			this->button208->Location = System::Drawing::Point(541, 150);
			this->button208->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button208->Name = L"button208";
			this->button208->Size = System::Drawing::Size(61, 34);
			this->button208->TabIndex = 63;
			this->button208->Text = L"获取";
			this->button208->UseVisualStyleBackColor = true;
			this->button208->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button208_Click);
			// 
			// button209
			// 
			this->button209->Location = System::Drawing::Point(475, 150);
			this->button209->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button209->Name = L"button209";
			this->button209->Size = System::Drawing::Size(61, 34);
			this->button209->TabIndex = 62;
			this->button209->Text = L"获取";
			this->button209->UseVisualStyleBackColor = true;
			this->button209->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button209_Click);
			// 
			// button210
			// 
			this->button210->Location = System::Drawing::Point(405, 150);
			this->button210->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button210->Name = L"button210";
			this->button210->Size = System::Drawing::Size(61, 34);
			this->button210->TabIndex = 61;
			this->button210->Text = L"获取";
			this->button210->UseVisualStyleBackColor = true;
			this->button210->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button210_Click);
			// 
			// button211
			// 
			this->button211->Location = System::Drawing::Point(339, 150);
			this->button211->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button211->Name = L"button211";
			this->button211->Size = System::Drawing::Size(61, 34);
			this->button211->TabIndex = 60;
			this->button211->Text = L"获取";
			this->button211->UseVisualStyleBackColor = true;
			this->button211->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button211_Click);
			// 
			// button212
			// 
			this->button212->Location = System::Drawing::Point(269, 150);
			this->button212->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button212->Name = L"button212";
			this->button212->Size = System::Drawing::Size(61, 34);
			this->button212->TabIndex = 59;
			this->button212->Text = L"获取";
			this->button212->UseVisualStyleBackColor = true;
			this->button212->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button212_Click);
			// 
			// button213
			// 
			this->button213->Location = System::Drawing::Point(204, 150);
			this->button213->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button213->Name = L"button213";
			this->button213->Size = System::Drawing::Size(61, 34);
			this->button213->TabIndex = 58;
			this->button213->Text = L"获取";
			this->button213->UseVisualStyleBackColor = true;
			this->button213->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button213_Click);
			// 
			// label稳压FI10
			// 
			this->label稳压FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI10->Location = System::Drawing::Point(813, 195);
			this->label稳压FI10->Name = L"label稳压FI10";
			this->label稳压FI10->Size = System::Drawing::Size(61, 22);
			this->label稳压FI10->TabIndex = 57;
			this->label稳压FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI9
			// 
			this->label稳压FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI9->Location = System::Drawing::Point(747, 195);
			this->label稳压FI9->Name = L"label稳压FI9";
			this->label稳压FI9->Size = System::Drawing::Size(61, 22);
			this->label稳压FI9->TabIndex = 56;
			this->label稳压FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI8
			// 
			this->label稳压FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI8->Location = System::Drawing::Point(677, 195);
			this->label稳压FI8->Name = L"label稳压FI8";
			this->label稳压FI8->Size = System::Drawing::Size(61, 22);
			this->label稳压FI8->TabIndex = 55;
			this->label稳压FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI7
			// 
			this->label稳压FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI7->Location = System::Drawing::Point(611, 196);
			this->label稳压FI7->Name = L"label稳压FI7";
			this->label稳压FI7->Size = System::Drawing::Size(61, 22);
			this->label稳压FI7->TabIndex = 54;
			this->label稳压FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI6
			// 
			this->label稳压FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI6->Location = System::Drawing::Point(541, 195);
			this->label稳压FI6->Name = L"label稳压FI6";
			this->label稳压FI6->Size = System::Drawing::Size(61, 22);
			this->label稳压FI6->TabIndex = 53;
			this->label稳压FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI5
			// 
			this->label稳压FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI5->Location = System::Drawing::Point(475, 195);
			this->label稳压FI5->Name = L"label稳压FI5";
			this->label稳压FI5->Size = System::Drawing::Size(61, 22);
			this->label稳压FI5->TabIndex = 52;
			this->label稳压FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI4
			// 
			this->label稳压FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI4->Location = System::Drawing::Point(405, 195);
			this->label稳压FI4->Name = L"label稳压FI4";
			this->label稳压FI4->Size = System::Drawing::Size(61, 22);
			this->label稳压FI4->TabIndex = 51;
			this->label稳压FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI3
			// 
			this->label稳压FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI3->Location = System::Drawing::Point(339, 196);
			this->label稳压FI3->Name = L"label稳压FI3";
			this->label稳压FI3->Size = System::Drawing::Size(61, 22);
			this->label稳压FI3->TabIndex = 50;
			this->label稳压FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI2
			// 
			this->label稳压FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI2->Location = System::Drawing::Point(269, 196);
			this->label稳压FI2->Name = L"label稳压FI2";
			this->label稳压FI2->Size = System::Drawing::Size(61, 22);
			this->label稳压FI2->TabIndex = 49;
			this->label稳压FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI1
			// 
			this->label稳压FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI1->Location = System::Drawing::Point(204, 196);
			this->label稳压FI1->Name = L"label稳压FI1";
			this->label稳压FI1->Size = System::Drawing::Size(61, 22);
			this->label稳压FI1->TabIndex = 48;
			this->label稳压FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU10
			// 
			this->label稳压FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU10->Location = System::Drawing::Point(815, 122);
			this->label稳压FU10->Name = L"label稳压FU10";
			this->label稳压FU10->Size = System::Drawing::Size(61, 22);
			this->label稳压FU10->TabIndex = 47;
			this->label稳压FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU9
			// 
			this->label稳压FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU9->Location = System::Drawing::Point(747, 122);
			this->label稳压FU9->Name = L"label稳压FU9";
			this->label稳压FU9->Size = System::Drawing::Size(61, 22);
			this->label稳压FU9->TabIndex = 46;
			this->label稳压FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU8
			// 
			this->label稳压FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU8->Location = System::Drawing::Point(677, 122);
			this->label稳压FU8->Name = L"label稳压FU8";
			this->label稳压FU8->Size = System::Drawing::Size(61, 22);
			this->label稳压FU8->TabIndex = 45;
			this->label稳压FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU7
			// 
			this->label稳压FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU7->Location = System::Drawing::Point(611, 124);
			this->label稳压FU7->Name = L"label稳压FU7";
			this->label稳压FU7->Size = System::Drawing::Size(61, 22);
			this->label稳压FU7->TabIndex = 44;
			this->label稳压FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU6
			// 
			this->label稳压FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU6->Location = System::Drawing::Point(543, 122);
			this->label稳压FU6->Name = L"label稳压FU6";
			this->label稳压FU6->Size = System::Drawing::Size(61, 22);
			this->label稳压FU6->TabIndex = 43;
			this->label稳压FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU5
			// 
			this->label稳压FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU5->Location = System::Drawing::Point(475, 122);
			this->label稳压FU5->Name = L"label稳压FU5";
			this->label稳压FU5->Size = System::Drawing::Size(61, 22);
			this->label稳压FU5->TabIndex = 42;
			this->label稳压FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU4
			// 
			this->label稳压FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU4->Location = System::Drawing::Point(407, 122);
			this->label稳压FU4->Name = L"label稳压FU4";
			this->label稳压FU4->Size = System::Drawing::Size(61, 22);
			this->label稳压FU4->TabIndex = 41;
			this->label稳压FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU3
			// 
			this->label稳压FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU3->Location = System::Drawing::Point(339, 124);
			this->label稳压FU3->Name = L"label稳压FU3";
			this->label稳压FU3->Size = System::Drawing::Size(61, 22);
			this->label稳压FU3->TabIndex = 40;
			this->label稳压FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU2
			// 
			this->label稳压FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU2->Location = System::Drawing::Point(271, 124);
			this->label稳压FU2->Name = L"label稳压FU2";
			this->label稳压FU2->Size = System::Drawing::Size(61, 22);
			this->label稳压FU2->TabIndex = 39;
			this->label稳压FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU1
			// 
			this->label稳压FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU1->Location = System::Drawing::Point(205, 124);
			this->label稳压FU1->Name = L"label稳压FU1";
			this->label稳压FU1->Size = System::Drawing::Size(61, 22);
			this->label稳压FU1->TabIndex = 38;
			this->label稳压FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox稳压FSU10
			// 
			this->textBox稳压FSU10->Location = System::Drawing::Point(815, 38);
			this->textBox稳压FSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU10->Name = L"textBox稳压FSU10";
			this->textBox稳压FSU10->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU10->TabIndex = 26;
			// 
			// textBox稳压FSU9
			// 
			this->textBox稳压FSU9->Location = System::Drawing::Point(747, 38);
			this->textBox稳压FSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU9->Name = L"textBox稳压FSU9";
			this->textBox稳压FSU9->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU9->TabIndex = 24;
			// 
			// textBox稳压FSU8
			// 
			this->textBox稳压FSU8->Location = System::Drawing::Point(679, 38);
			this->textBox稳压FSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU8->Name = L"textBox稳压FSU8";
			this->textBox稳压FSU8->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU8->TabIndex = 22;
			// 
			// textBox稳压FSU7
			// 
			this->textBox稳压FSU7->Location = System::Drawing::Point(611, 38);
			this->textBox稳压FSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU7->Name = L"textBox稳压FSU7";
			this->textBox稳压FSU7->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU7->TabIndex = 20;
			// 
			// textBox稳压FSU6
			// 
			this->textBox稳压FSU6->Location = System::Drawing::Point(543, 38);
			this->textBox稳压FSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU6->Name = L"textBox稳压FSU6";
			this->textBox稳压FSU6->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU6->TabIndex = 18;
			// 
			// textBox稳压FSU5
			// 
			this->textBox稳压FSU5->Location = System::Drawing::Point(475, 38);
			this->textBox稳压FSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU5->Name = L"textBox稳压FSU5";
			this->textBox稳压FSU5->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU5->TabIndex = 16;
			// 
			// textBox稳压FSU4
			// 
			this->textBox稳压FSU4->Location = System::Drawing::Point(407, 38);
			this->textBox稳压FSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU4->Name = L"textBox稳压FSU4";
			this->textBox稳压FSU4->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU4->TabIndex = 14;
			// 
			// textBox稳压FSU3
			// 
			this->textBox稳压FSU3->Location = System::Drawing::Point(339, 38);
			this->textBox稳压FSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU3->Name = L"textBox稳压FSU3";
			this->textBox稳压FSU3->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU3->TabIndex = 12;
			// 
			// textBox稳压FSU2
			// 
			this->textBox稳压FSU2->Location = System::Drawing::Point(271, 38);
			this->textBox稳压FSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU2->Name = L"textBox稳压FSU2";
			this->textBox稳压FSU2->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU2->TabIndex = 10;
			// 
			// textBox稳压FSU1
			// 
			this->textBox稳压FSU1->Location = System::Drawing::Point(205, 38);
			this->textBox稳压FSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox稳压FSU1->Name = L"textBox稳压FSU1";
			this->textBox稳压FSU1->Size = System::Drawing::Size(63, 28);
			this->textBox稳压FSU1->TabIndex = 8;
			// 
			// label65
			// 
			this->label65->ForeColor = System::Drawing::Color::Black;
			this->label65->Location = System::Drawing::Point(21, 196);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(176, 22);
			this->label65->TabIndex = 7;
			this->label65->Text = L"电流表读数I(mA)";
			// 
			// label66
			// 
			this->label66->ForeColor = System::Drawing::Color::Black;
			this->label66->Location = System::Drawing::Point(21, 124);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(176, 22);
			this->label66->TabIndex = 6;
			this->label66->Text = L"电压表读数Ud(V)";
			// 
			// label67
			// 
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(21, 40);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(145, 22);
			this->label67->TabIndex = 5;
			this->label67->Text = L"电源电压U(V)";
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label157->ForeColor = System::Drawing::Color::Blue;
			this->label157->Location = System::Drawing::Point(1136, 2778);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(35, 18);
			this->label157->TabIndex = 100;
			this->label157->Text = L"图4";
			// 
			// chart硅管
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart硅管->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart硅管->Legends->Add(legend2);
			this->chart硅管->Location = System::Drawing::Point(907, 2832);
			this->chart硅管->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart硅管->Name = L"chart硅管";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart硅管->Series->Add(series2);
			this->chart硅管->Size = System::Drawing::Size(615, 546);
			this->chart硅管->TabIndex = 99;
			this->chart硅管->Text = L"chart4";
			// 
			// textBox硅管结论
			// 
			this->textBox硅管结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox硅管结论->Location = System::Drawing::Point(124, 3349);
			this->textBox硅管结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管结论->Name = L"textBox硅管结论";
			this->textBox硅管结论->Size = System::Drawing::Size(776, 28);
			this->textBox硅管结论->TabIndex = 98;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::SkyBlue;
			this->label3->Location = System::Drawing::Point(0, 2462);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1525, 10);
			this->label3->TabIndex = 94;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label8);
			this->groupBox11->Controls->Add(this->label156);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox11->ForeColor = System::Drawing::Color::Red;
			this->groupBox11->Location = System::Drawing::Point(19, 2492);
			this->groupBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox11->Size = System::Drawing::Size(881, 212);
			this->groupBox11->TabIndex = 93;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"测定半导体二极管的伏安特性-硅管2CP15";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(21, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(843, 38);
			this->label8->TabIndex = 61;
			this->label8->Text = L"    注意：正向实验时，稳压源U<0.8V内采集多组数据。";
			// 
			// label156
			// 
			this->label156->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label156->ForeColor = System::Drawing::Color::Black;
			this->label156->Location = System::Drawing::Point(35, 56);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(843, 88);
			this->label156->TabIndex = 61;
			this->label156->Text = L"    将图4搭接线路(D=2CP15,正向接入)，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0-30V)，任意选取十组数据，记下相"
				L"应的电压表和电流表的读数，并绘制相应的元件伏安特性曲线。然后断电，将D=2CP15反向接入实验电路中，通电重复之前的实验；";
			// 
			// label204
			// 
			this->label204->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label204->ForeColor = System::Drawing::Color::Black;
			this->label204->Location = System::Drawing::Point(15, 3358);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(95, 20);
			this->label204->TabIndex = 97;
			this->label204->Text = L"实验结论";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(907, 2492);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(400, 271);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 92;
			this->pictureBox5->TabStop = false;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label20);
			this->groupBox12->Controls->Add(this->label21);
			this->groupBox12->Controls->Add(this->button203);
			this->groupBox12->Controls->Add(this->button193);
			this->groupBox12->Controls->Add(this->button194);
			this->groupBox12->Controls->Add(this->button195);
			this->groupBox12->Controls->Add(this->button196);
			this->groupBox12->Controls->Add(this->button197);
			this->groupBox12->Controls->Add(this->button198);
			this->groupBox12->Controls->Add(this->button199);
			this->groupBox12->Controls->Add(this->button200);
			this->groupBox12->Controls->Add(this->button201);
			this->groupBox12->Controls->Add(this->button202);
			this->groupBox12->Controls->Add(this->button183);
			this->groupBox12->Controls->Add(this->button184);
			this->groupBox12->Controls->Add(this->button185);
			this->groupBox12->Controls->Add(this->button186);
			this->groupBox12->Controls->Add(this->button187);
			this->groupBox12->Controls->Add(this->button188);
			this->groupBox12->Controls->Add(this->button189);
			this->groupBox12->Controls->Add(this->button190);
			this->groupBox12->Controls->Add(this->button191);
			this->groupBox12->Controls->Add(this->button192);
			this->groupBox12->Controls->Add(this->label1硅管FI10);
			this->groupBox12->Controls->Add(this->label1硅管FI9);
			this->groupBox12->Controls->Add(this->label1硅管FI8);
			this->groupBox12->Controls->Add(this->label1硅管FI7);
			this->groupBox12->Controls->Add(this->label1硅管FI6);
			this->groupBox12->Controls->Add(this->label1硅管FI5);
			this->groupBox12->Controls->Add(this->label1硅管FI4);
			this->groupBox12->Controls->Add(this->label1硅管FI3);
			this->groupBox12->Controls->Add(this->label1硅管FI2);
			this->groupBox12->Controls->Add(this->label1硅管FI1);
			this->groupBox12->Controls->Add(this->label1硅管FU10);
			this->groupBox12->Controls->Add(this->label1硅管FU9);
			this->groupBox12->Controls->Add(this->label1硅管FU8);
			this->groupBox12->Controls->Add(this->label1硅管FU7);
			this->groupBox12->Controls->Add(this->label1硅管FU6);
			this->groupBox12->Controls->Add(this->label1硅管FU5);
			this->groupBox12->Controls->Add(this->label1硅管FU4);
			this->groupBox12->Controls->Add(this->label1硅管FU3);
			this->groupBox12->Controls->Add(this->label1硅管FU2);
			this->groupBox12->Controls->Add(this->label1硅管FU1);
			this->groupBox12->Controls->Add(this->textBox硅管FSU10);
			this->groupBox12->Controls->Add(this->textBox硅管FSU9);
			this->groupBox12->Controls->Add(this->textBox硅管FSU8);
			this->groupBox12->Controls->Add(this->textBox硅管FSU7);
			this->groupBox12->Controls->Add(this->textBox硅管FSU6);
			this->groupBox12->Controls->Add(this->textBox硅管FSU5);
			this->groupBox12->Controls->Add(this->textBox硅管FSU4);
			this->groupBox12->Controls->Add(this->textBox硅管FSU3);
			this->groupBox12->Controls->Add(this->textBox硅管FSU2);
			this->groupBox12->Controls->Add(this->textBox硅管FSU1);
			this->groupBox12->Controls->Add(this->label178);
			this->groupBox12->Controls->Add(this->label179);
			this->groupBox12->Controls->Add(this->label180);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox12->Location = System::Drawing::Point(19, 3048);
			this->groupBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox12->Size = System::Drawing::Size(881, 292);
			this->groupBox12->TabIndex = 96;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"反向特性测试";
			// 
			// label20
			// 
			this->label20->ForeColor = System::Drawing::Color::Lime;
			this->label20->Location = System::Drawing::Point(17, 224);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(145, 22);
			this->label20->TabIndex = 116;
			this->label20->Text = L"直流电流表2";
			// 
			// label21
			// 
			this->label21->ForeColor = System::Drawing::Color::Lime;
			this->label21->Location = System::Drawing::Point(15, 145);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(145, 22);
			this->label21->TabIndex = 115;
			this->label21->Text = L"直流电压表3";
			// 
			// button203
			// 
			this->button203->Location = System::Drawing::Point(764, 254);
			this->button203->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button203->Name = L"button203";
			this->button203->Size = System::Drawing::Size(103, 32);
			this->button203->TabIndex = 99;
			this->button203->Text = L"曲线生成";
			this->button203->UseVisualStyleBackColor = true;
			this->button203->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button203_Click);
			// 
			// button193
			// 
			this->button193->Location = System::Drawing::Point(805, 210);
			this->button193->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button193->Name = L"button193";
			this->button193->Size = System::Drawing::Size(61, 29);
			this->button193->TabIndex = 98;
			this->button193->Text = L"获取";
			this->button193->UseVisualStyleBackColor = true;
			this->button193->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button193_Click);
			// 
			// button194
			// 
			this->button194->Location = System::Drawing::Point(737, 210);
			this->button194->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button194->Name = L"button194";
			this->button194->Size = System::Drawing::Size(61, 29);
			this->button194->TabIndex = 97;
			this->button194->Text = L"获取";
			this->button194->UseVisualStyleBackColor = true;
			this->button194->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button194_Click);
			// 
			// button195
			// 
			this->button195->Location = System::Drawing::Point(669, 210);
			this->button195->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button195->Name = L"button195";
			this->button195->Size = System::Drawing::Size(61, 29);
			this->button195->TabIndex = 96;
			this->button195->Text = L"获取";
			this->button195->UseVisualStyleBackColor = true;
			this->button195->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button195_Click);
			// 
			// button196
			// 
			this->button196->Location = System::Drawing::Point(601, 209);
			this->button196->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button196->Name = L"button196";
			this->button196->Size = System::Drawing::Size(61, 29);
			this->button196->TabIndex = 95;
			this->button196->Text = L"获取";
			this->button196->UseVisualStyleBackColor = true;
			this->button196->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button196_Click);
			// 
			// button197
			// 
			this->button197->Location = System::Drawing::Point(533, 210);
			this->button197->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button197->Name = L"button197";
			this->button197->Size = System::Drawing::Size(61, 29);
			this->button197->TabIndex = 94;
			this->button197->Text = L"获取";
			this->button197->UseVisualStyleBackColor = true;
			this->button197->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button197_Click);
			// 
			// button198
			// 
			this->button198->Location = System::Drawing::Point(465, 210);
			this->button198->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button198->Name = L"button198";
			this->button198->Size = System::Drawing::Size(61, 29);
			this->button198->TabIndex = 93;
			this->button198->Text = L"获取";
			this->button198->UseVisualStyleBackColor = true;
			this->button198->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button198_Click);
			// 
			// button199
			// 
			this->button199->Location = System::Drawing::Point(397, 209);
			this->button199->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button199->Name = L"button199";
			this->button199->Size = System::Drawing::Size(61, 29);
			this->button199->TabIndex = 92;
			this->button199->Text = L"获取";
			this->button199->UseVisualStyleBackColor = true;
			this->button199->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button199_Click);
			// 
			// button200
			// 
			this->button200->Location = System::Drawing::Point(329, 210);
			this->button200->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button200->Name = L"button200";
			this->button200->Size = System::Drawing::Size(61, 29);
			this->button200->TabIndex = 91;
			this->button200->Text = L"获取";
			this->button200->UseVisualStyleBackColor = true;
			this->button200->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button200_Click);
			// 
			// button201
			// 
			this->button201->Location = System::Drawing::Point(261, 209);
			this->button201->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button201->Name = L"button201";
			this->button201->Size = System::Drawing::Size(61, 29);
			this->button201->TabIndex = 90;
			this->button201->Text = L"获取";
			this->button201->UseVisualStyleBackColor = true;
			this->button201->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button201_Click);
			// 
			// button202
			// 
			this->button202->Location = System::Drawing::Point(195, 210);
			this->button202->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button202->Name = L"button202";
			this->button202->Size = System::Drawing::Size(61, 29);
			this->button202->TabIndex = 89;
			this->button202->Text = L"获取";
			this->button202->UseVisualStyleBackColor = true;
			this->button202->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button202_Click);
			// 
			// button183
			// 
			this->button183->Location = System::Drawing::Point(805, 138);
			this->button183->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button183->Name = L"button183";
			this->button183->Size = System::Drawing::Size(61, 29);
			this->button183->TabIndex = 88;
			this->button183->Text = L"获取";
			this->button183->UseVisualStyleBackColor = true;
			this->button183->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button183_Click);
			// 
			// button184
			// 
			this->button184->Location = System::Drawing::Point(737, 138);
			this->button184->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button184->Name = L"button184";
			this->button184->Size = System::Drawing::Size(61, 29);
			this->button184->TabIndex = 87;
			this->button184->Text = L"获取";
			this->button184->UseVisualStyleBackColor = true;
			this->button184->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button184_Click);
			// 
			// button185
			// 
			this->button185->Location = System::Drawing::Point(669, 138);
			this->button185->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button185->Name = L"button185";
			this->button185->Size = System::Drawing::Size(61, 29);
			this->button185->TabIndex = 86;
			this->button185->Text = L"获取";
			this->button185->UseVisualStyleBackColor = true;
			this->button185->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button185_Click);
			// 
			// button186
			// 
			this->button186->Location = System::Drawing::Point(601, 138);
			this->button186->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button186->Name = L"button186";
			this->button186->Size = System::Drawing::Size(61, 29);
			this->button186->TabIndex = 85;
			this->button186->Text = L"获取";
			this->button186->UseVisualStyleBackColor = true;
			this->button186->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button186_Click);
			// 
			// button187
			// 
			this->button187->Location = System::Drawing::Point(533, 138);
			this->button187->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button187->Name = L"button187";
			this->button187->Size = System::Drawing::Size(61, 29);
			this->button187->TabIndex = 84;
			this->button187->Text = L"获取";
			this->button187->UseVisualStyleBackColor = true;
			this->button187->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button187_Click);
			// 
			// button188
			// 
			this->button188->Location = System::Drawing::Point(465, 138);
			this->button188->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button188->Name = L"button188";
			this->button188->Size = System::Drawing::Size(61, 29);
			this->button188->TabIndex = 83;
			this->button188->Text = L"获取";
			this->button188->UseVisualStyleBackColor = true;
			this->button188->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button188_Click);
			// 
			// button189
			// 
			this->button189->Location = System::Drawing::Point(397, 138);
			this->button189->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button189->Name = L"button189";
			this->button189->Size = System::Drawing::Size(61, 29);
			this->button189->TabIndex = 82;
			this->button189->Text = L"获取";
			this->button189->UseVisualStyleBackColor = true;
			this->button189->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button189_Click);
			// 
			// button190
			// 
			this->button190->Location = System::Drawing::Point(329, 138);
			this->button190->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button190->Name = L"button190";
			this->button190->Size = System::Drawing::Size(61, 29);
			this->button190->TabIndex = 81;
			this->button190->Text = L"获取";
			this->button190->UseVisualStyleBackColor = true;
			this->button190->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button190_Click);
			// 
			// button191
			// 
			this->button191->Location = System::Drawing::Point(261, 138);
			this->button191->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button191->Name = L"button191";
			this->button191->Size = System::Drawing::Size(61, 29);
			this->button191->TabIndex = 80;
			this->button191->Text = L"获取";
			this->button191->UseVisualStyleBackColor = true;
			this->button191->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button191_Click);
			// 
			// button192
			// 
			this->button192->Location = System::Drawing::Point(195, 138);
			this->button192->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button192->Name = L"button192";
			this->button192->Size = System::Drawing::Size(61, 29);
			this->button192->TabIndex = 79;
			this->button192->Text = L"获取";
			this->button192->UseVisualStyleBackColor = true;
			this->button192->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button192_Click);
			// 
			// label1硅管FI10
			// 
			this->label1硅管FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI10->Location = System::Drawing::Point(805, 182);
			this->label1硅管FI10->Name = L"label1硅管FI10";
			this->label1硅管FI10->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI10->TabIndex = 57;
			this->label1硅管FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI9
			// 
			this->label1硅管FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI9->Location = System::Drawing::Point(737, 182);
			this->label1硅管FI9->Name = L"label1硅管FI9";
			this->label1硅管FI9->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI9->TabIndex = 56;
			this->label1硅管FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI8
			// 
			this->label1硅管FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI8->Location = System::Drawing::Point(669, 182);
			this->label1硅管FI8->Name = L"label1硅管FI8";
			this->label1硅管FI8->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI8->TabIndex = 55;
			this->label1硅管FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI7
			// 
			this->label1硅管FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI7->Location = System::Drawing::Point(601, 184);
			this->label1硅管FI7->Name = L"label1硅管FI7";
			this->label1硅管FI7->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI7->TabIndex = 54;
			this->label1硅管FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI6
			// 
			this->label1硅管FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI6->Location = System::Drawing::Point(533, 182);
			this->label1硅管FI6->Name = L"label1硅管FI6";
			this->label1硅管FI6->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI6->TabIndex = 53;
			this->label1硅管FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI5
			// 
			this->label1硅管FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI5->Location = System::Drawing::Point(465, 182);
			this->label1硅管FI5->Name = L"label1硅管FI5";
			this->label1硅管FI5->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI5->TabIndex = 52;
			this->label1硅管FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI4
			// 
			this->label1硅管FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI4->Location = System::Drawing::Point(397, 182);
			this->label1硅管FI4->Name = L"label1硅管FI4";
			this->label1硅管FI4->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI4->TabIndex = 51;
			this->label1硅管FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI3
			// 
			this->label1硅管FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI3->Location = System::Drawing::Point(329, 184);
			this->label1硅管FI3->Name = L"label1硅管FI3";
			this->label1硅管FI3->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI3->TabIndex = 50;
			this->label1硅管FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI2
			// 
			this->label1硅管FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI2->Location = System::Drawing::Point(261, 184);
			this->label1硅管FI2->Name = L"label1硅管FI2";
			this->label1硅管FI2->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI2->TabIndex = 49;
			this->label1硅管FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI1
			// 
			this->label1硅管FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI1->Location = System::Drawing::Point(195, 184);
			this->label1硅管FI1->Name = L"label1硅管FI1";
			this->label1硅管FI1->Size = System::Drawing::Size(61, 22);
			this->label1硅管FI1->TabIndex = 48;
			this->label1硅管FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU10
			// 
			this->label1硅管FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU10->Location = System::Drawing::Point(805, 111);
			this->label1硅管FU10->Name = L"label1硅管FU10";
			this->label1硅管FU10->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU10->TabIndex = 47;
			this->label1硅管FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU9
			// 
			this->label1硅管FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU9->Location = System::Drawing::Point(737, 111);
			this->label1硅管FU9->Name = L"label1硅管FU9";
			this->label1硅管FU9->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU9->TabIndex = 46;
			this->label1硅管FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU8
			// 
			this->label1硅管FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU8->Location = System::Drawing::Point(669, 111);
			this->label1硅管FU8->Name = L"label1硅管FU8";
			this->label1硅管FU8->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU8->TabIndex = 45;
			this->label1硅管FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU7
			// 
			this->label1硅管FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU7->Location = System::Drawing::Point(601, 112);
			this->label1硅管FU7->Name = L"label1硅管FU7";
			this->label1硅管FU7->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU7->TabIndex = 44;
			this->label1硅管FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU6
			// 
			this->label1硅管FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU6->Location = System::Drawing::Point(533, 111);
			this->label1硅管FU6->Name = L"label1硅管FU6";
			this->label1硅管FU6->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU6->TabIndex = 43;
			this->label1硅管FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU5
			// 
			this->label1硅管FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU5->Location = System::Drawing::Point(465, 111);
			this->label1硅管FU5->Name = L"label1硅管FU5";
			this->label1硅管FU5->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU5->TabIndex = 42;
			this->label1硅管FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU4
			// 
			this->label1硅管FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU4->Location = System::Drawing::Point(397, 111);
			this->label1硅管FU4->Name = L"label1硅管FU4";
			this->label1硅管FU4->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU4->TabIndex = 41;
			this->label1硅管FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU3
			// 
			this->label1硅管FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU3->Location = System::Drawing::Point(329, 112);
			this->label1硅管FU3->Name = L"label1硅管FU3";
			this->label1硅管FU3->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU3->TabIndex = 40;
			this->label1硅管FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU2
			// 
			this->label1硅管FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU2->Location = System::Drawing::Point(261, 112);
			this->label1硅管FU2->Name = L"label1硅管FU2";
			this->label1硅管FU2->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU2->TabIndex = 39;
			this->label1硅管FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU1
			// 
			this->label1硅管FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU1->Location = System::Drawing::Point(195, 112);
			this->label1硅管FU1->Name = L"label1硅管FU1";
			this->label1硅管FU1->Size = System::Drawing::Size(61, 22);
			this->label1硅管FU1->TabIndex = 38;
			this->label1硅管FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox硅管FSU10
			// 
			this->textBox硅管FSU10->Location = System::Drawing::Point(809, 32);
			this->textBox硅管FSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU10->Name = L"textBox硅管FSU10";
			this->textBox硅管FSU10->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU10->TabIndex = 26;
			// 
			// textBox硅管FSU9
			// 
			this->textBox硅管FSU9->Location = System::Drawing::Point(741, 32);
			this->textBox硅管FSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU9->Name = L"textBox硅管FSU9";
			this->textBox硅管FSU9->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU9->TabIndex = 24;
			// 
			// textBox硅管FSU8
			// 
			this->textBox硅管FSU8->Location = System::Drawing::Point(673, 32);
			this->textBox硅管FSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU8->Name = L"textBox硅管FSU8";
			this->textBox硅管FSU8->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU8->TabIndex = 22;
			// 
			// textBox硅管FSU7
			// 
			this->textBox硅管FSU7->Location = System::Drawing::Point(605, 32);
			this->textBox硅管FSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU7->Name = L"textBox硅管FSU7";
			this->textBox硅管FSU7->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU7->TabIndex = 20;
			// 
			// textBox硅管FSU6
			// 
			this->textBox硅管FSU6->Location = System::Drawing::Point(537, 32);
			this->textBox硅管FSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU6->Name = L"textBox硅管FSU6";
			this->textBox硅管FSU6->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU6->TabIndex = 18;
			// 
			// textBox硅管FSU5
			// 
			this->textBox硅管FSU5->Location = System::Drawing::Point(469, 32);
			this->textBox硅管FSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU5->Name = L"textBox硅管FSU5";
			this->textBox硅管FSU5->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU5->TabIndex = 16;
			// 
			// textBox硅管FSU4
			// 
			this->textBox硅管FSU4->Location = System::Drawing::Point(401, 32);
			this->textBox硅管FSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU4->Name = L"textBox硅管FSU4";
			this->textBox硅管FSU4->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU4->TabIndex = 14;
			// 
			// textBox硅管FSU3
			// 
			this->textBox硅管FSU3->Location = System::Drawing::Point(333, 32);
			this->textBox硅管FSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU3->Name = L"textBox硅管FSU3";
			this->textBox硅管FSU3->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU3->TabIndex = 12;
			// 
			// textBox硅管FSU2
			// 
			this->textBox硅管FSU2->Location = System::Drawing::Point(265, 32);
			this->textBox硅管FSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU2->Name = L"textBox硅管FSU2";
			this->textBox硅管FSU2->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU2->TabIndex = 10;
			// 
			// textBox硅管FSU1
			// 
			this->textBox硅管FSU1->Location = System::Drawing::Point(195, 32);
			this->textBox硅管FSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管FSU1->Name = L"textBox硅管FSU1";
			this->textBox硅管FSU1->Size = System::Drawing::Size(63, 28);
			this->textBox硅管FSU1->TabIndex = 8;
			// 
			// label178
			// 
			this->label178->ForeColor = System::Drawing::Color::Black;
			this->label178->Location = System::Drawing::Point(9, 184);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(176, 22);
			this->label178->TabIndex = 7;
			this->label178->Text = L"电流表读数I(mA)";
			// 
			// label179
			// 
			this->label179->ForeColor = System::Drawing::Color::Black;
			this->label179->Location = System::Drawing::Point(9, 112);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(176, 22);
			this->label179->TabIndex = 6;
			this->label179->Text = L"电压表读数Ud(V)";
			// 
			// label180
			// 
			this->label180->ForeColor = System::Drawing::Color::Black;
			this->label180->Location = System::Drawing::Point(9, 35);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(145, 22);
			this->label180->TabIndex = 5;
			this->label180->Text = L"电源电压U(V)";
			// 
			// chart锗管
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart锗管->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart锗管->Legends->Add(legend3);
			this->chart锗管->Location = System::Drawing::Point(965, 1908);
			this->chart锗管->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart锗管->Name = L"chart锗管";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart锗管->Series->Add(series3);
			this->chart锗管->Size = System::Drawing::Size(547, 522);
			this->chart锗管->TabIndex = 91;
			this->chart锗管->Text = L"chart3";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->label18);
			this->groupBox13->Controls->Add(this->label19);
			this->groupBox13->Controls->Add(this->button163);
			this->groupBox13->Controls->Add(this->button164);
			this->groupBox13->Controls->Add(this->button165);
			this->groupBox13->Controls->Add(this->button166);
			this->groupBox13->Controls->Add(this->button167);
			this->groupBox13->Controls->Add(this->button168);
			this->groupBox13->Controls->Add(this->button169);
			this->groupBox13->Controls->Add(this->button170);
			this->groupBox13->Controls->Add(this->button181);
			this->groupBox13->Controls->Add(this->button182);
			this->groupBox13->Controls->Add(this->button153);
			this->groupBox13->Controls->Add(this->button154);
			this->groupBox13->Controls->Add(this->button155);
			this->groupBox13->Controls->Add(this->button156);
			this->groupBox13->Controls->Add(this->button157);
			this->groupBox13->Controls->Add(this->button158);
			this->groupBox13->Controls->Add(this->button159);
			this->groupBox13->Controls->Add(this->button160);
			this->groupBox13->Controls->Add(this->button161);
			this->groupBox13->Controls->Add(this->button162);
			this->groupBox13->Controls->Add(this->label硅管ZI10);
			this->groupBox13->Controls->Add(this->label硅管ZI9);
			this->groupBox13->Controls->Add(this->label硅管ZI8);
			this->groupBox13->Controls->Add(this->label硅管ZI7);
			this->groupBox13->Controls->Add(this->label硅管ZI6);
			this->groupBox13->Controls->Add(this->label硅管ZI5);
			this->groupBox13->Controls->Add(this->label硅管ZI4);
			this->groupBox13->Controls->Add(this->label硅管ZI3);
			this->groupBox13->Controls->Add(this->label硅管ZI2);
			this->groupBox13->Controls->Add(this->label硅管ZI1);
			this->groupBox13->Controls->Add(this->label硅管ZU10);
			this->groupBox13->Controls->Add(this->label硅管ZU9);
			this->groupBox13->Controls->Add(this->label硅管ZU8);
			this->groupBox13->Controls->Add(this->label硅管ZU7);
			this->groupBox13->Controls->Add(this->label硅管ZU6);
			this->groupBox13->Controls->Add(this->label硅管ZU5);
			this->groupBox13->Controls->Add(this->label硅管ZU4);
			this->groupBox13->Controls->Add(this->label硅管ZU3);
			this->groupBox13->Controls->Add(this->label硅管ZU2);
			this->groupBox13->Controls->Add(this->label硅管ZU1);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU10);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU9);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU8);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU7);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU6);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU5);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU4);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU3);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU2);
			this->groupBox13->Controls->Add(this->textBox硅管ZSU1);
			this->groupBox13->Controls->Add(this->label201);
			this->groupBox13->Controls->Add(this->label202);
			this->groupBox13->Controls->Add(this->label203);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox13->Location = System::Drawing::Point(19, 2751);
			this->groupBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox13->Size = System::Drawing::Size(881, 266);
			this->groupBox13->TabIndex = 95;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"正向特性测试";
			// 
			// label18
			// 
			this->label18->ForeColor = System::Drawing::Color::Lime;
			this->label18->Location = System::Drawing::Point(25, 235);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(145, 22);
			this->label18->TabIndex = 116;
			this->label18->Text = L"直流电流表2";
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Lime;
			this->label19->Location = System::Drawing::Point(23, 156);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(145, 22);
			this->label19->TabIndex = 115;
			this->label19->Text = L"直流电压表3";
			// 
			// button163
			// 
			this->button163->Location = System::Drawing::Point(809, 221);
			this->button163->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button163->Name = L"button163";
			this->button163->Size = System::Drawing::Size(61, 29);
			this->button163->TabIndex = 88;
			this->button163->Text = L"获取";
			this->button163->UseVisualStyleBackColor = true;
			this->button163->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button163_Click);
			// 
			// button164
			// 
			this->button164->Location = System::Drawing::Point(741, 221);
			this->button164->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button164->Name = L"button164";
			this->button164->Size = System::Drawing::Size(61, 29);
			this->button164->TabIndex = 87;
			this->button164->Text = L"获取";
			this->button164->UseVisualStyleBackColor = true;
			this->button164->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button164_Click);
			// 
			// button165
			// 
			this->button165->Location = System::Drawing::Point(673, 221);
			this->button165->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button165->Name = L"button165";
			this->button165->Size = System::Drawing::Size(61, 29);
			this->button165->TabIndex = 86;
			this->button165->Text = L"获取";
			this->button165->UseVisualStyleBackColor = true;
			this->button165->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button165_Click);
			// 
			// button166
			// 
			this->button166->Location = System::Drawing::Point(605, 220);
			this->button166->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button166->Name = L"button166";
			this->button166->Size = System::Drawing::Size(61, 29);
			this->button166->TabIndex = 85;
			this->button166->Text = L"获取";
			this->button166->UseVisualStyleBackColor = true;
			this->button166->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button166_Click);
			// 
			// button167
			// 
			this->button167->Location = System::Drawing::Point(537, 221);
			this->button167->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button167->Name = L"button167";
			this->button167->Size = System::Drawing::Size(61, 29);
			this->button167->TabIndex = 84;
			this->button167->Text = L"获取";
			this->button167->UseVisualStyleBackColor = true;
			this->button167->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button167_Click);
			// 
			// button168
			// 
			this->button168->Location = System::Drawing::Point(469, 221);
			this->button168->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button168->Name = L"button168";
			this->button168->Size = System::Drawing::Size(61, 29);
			this->button168->TabIndex = 83;
			this->button168->Text = L"获取";
			this->button168->UseVisualStyleBackColor = true;
			this->button168->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button168_Click);
			// 
			// button169
			// 
			this->button169->Location = System::Drawing::Point(401, 220);
			this->button169->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button169->Name = L"button169";
			this->button169->Size = System::Drawing::Size(61, 29);
			this->button169->TabIndex = 82;
			this->button169->Text = L"获取";
			this->button169->UseVisualStyleBackColor = true;
			this->button169->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button169_Click);
			// 
			// button170
			// 
			this->button170->Location = System::Drawing::Point(333, 221);
			this->button170->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button170->Name = L"button170";
			this->button170->Size = System::Drawing::Size(61, 29);
			this->button170->TabIndex = 81;
			this->button170->Text = L"获取";
			this->button170->UseVisualStyleBackColor = true;
			this->button170->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button170_Click);
			// 
			// button181
			// 
			this->button181->Location = System::Drawing::Point(265, 220);
			this->button181->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button181->Name = L"button181";
			this->button181->Size = System::Drawing::Size(61, 29);
			this->button181->TabIndex = 80;
			this->button181->Text = L"获取";
			this->button181->UseVisualStyleBackColor = true;
			this->button181->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button181_Click);
			// 
			// button182
			// 
			this->button182->Location = System::Drawing::Point(199, 221);
			this->button182->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button182->Name = L"button182";
			this->button182->Size = System::Drawing::Size(61, 29);
			this->button182->TabIndex = 79;
			this->button182->Text = L"获取";
			this->button182->UseVisualStyleBackColor = true;
			this->button182->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button182_Click);
			// 
			// button153
			// 
			this->button153->Location = System::Drawing::Point(809, 151);
			this->button153->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button153->Name = L"button153";
			this->button153->Size = System::Drawing::Size(61, 29);
			this->button153->TabIndex = 78;
			this->button153->Text = L"获取";
			this->button153->UseVisualStyleBackColor = true;
			this->button153->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button153_Click);
			// 
			// button154
			// 
			this->button154->Location = System::Drawing::Point(741, 151);
			this->button154->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button154->Name = L"button154";
			this->button154->Size = System::Drawing::Size(61, 29);
			this->button154->TabIndex = 77;
			this->button154->Text = L"获取";
			this->button154->UseVisualStyleBackColor = true;
			this->button154->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button154_Click);
			// 
			// button155
			// 
			this->button155->Location = System::Drawing::Point(673, 151);
			this->button155->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button155->Name = L"button155";
			this->button155->Size = System::Drawing::Size(61, 29);
			this->button155->TabIndex = 76;
			this->button155->Text = L"获取";
			this->button155->UseVisualStyleBackColor = true;
			this->button155->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button155_Click);
			// 
			// button156
			// 
			this->button156->Location = System::Drawing::Point(605, 150);
			this->button156->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button156->Name = L"button156";
			this->button156->Size = System::Drawing::Size(61, 29);
			this->button156->TabIndex = 75;
			this->button156->Text = L"获取";
			this->button156->UseVisualStyleBackColor = true;
			this->button156->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button156_Click);
			// 
			// button157
			// 
			this->button157->Location = System::Drawing::Point(537, 151);
			this->button157->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button157->Name = L"button157";
			this->button157->Size = System::Drawing::Size(61, 29);
			this->button157->TabIndex = 74;
			this->button157->Text = L"获取";
			this->button157->UseVisualStyleBackColor = true;
			this->button157->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button157_Click);
			// 
			// button158
			// 
			this->button158->Location = System::Drawing::Point(469, 151);
			this->button158->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button158->Name = L"button158";
			this->button158->Size = System::Drawing::Size(61, 29);
			this->button158->TabIndex = 73;
			this->button158->Text = L"获取";
			this->button158->UseVisualStyleBackColor = true;
			this->button158->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button158_Click);
			// 
			// button159
			// 
			this->button159->Location = System::Drawing::Point(401, 150);
			this->button159->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button159->Name = L"button159";
			this->button159->Size = System::Drawing::Size(61, 29);
			this->button159->TabIndex = 72;
			this->button159->Text = L"获取";
			this->button159->UseVisualStyleBackColor = true;
			this->button159->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button159_Click);
			// 
			// button160
			// 
			this->button160->Location = System::Drawing::Point(333, 151);
			this->button160->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button160->Name = L"button160";
			this->button160->Size = System::Drawing::Size(61, 29);
			this->button160->TabIndex = 71;
			this->button160->Text = L"获取";
			this->button160->UseVisualStyleBackColor = true;
			this->button160->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button160_Click);
			// 
			// button161
			// 
			this->button161->Location = System::Drawing::Point(265, 150);
			this->button161->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button161->Name = L"button161";
			this->button161->Size = System::Drawing::Size(61, 29);
			this->button161->TabIndex = 70;
			this->button161->Text = L"获取";
			this->button161->UseVisualStyleBackColor = true;
			this->button161->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button161_Click);
			// 
			// button162
			// 
			this->button162->Location = System::Drawing::Point(199, 151);
			this->button162->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button162->Name = L"button162";
			this->button162->Size = System::Drawing::Size(61, 29);
			this->button162->TabIndex = 69;
			this->button162->Text = L"获取";
			this->button162->UseVisualStyleBackColor = true;
			this->button162->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button162_Click);
			// 
			// label硅管ZI10
			// 
			this->label硅管ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI10->Location = System::Drawing::Point(809, 190);
			this->label硅管ZI10->Name = L"label硅管ZI10";
			this->label硅管ZI10->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI10->TabIndex = 57;
			this->label硅管ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI9
			// 
			this->label硅管ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI9->Location = System::Drawing::Point(741, 190);
			this->label硅管ZI9->Name = L"label硅管ZI9";
			this->label硅管ZI9->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI9->TabIndex = 56;
			this->label硅管ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI8
			// 
			this->label硅管ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI8->Location = System::Drawing::Point(673, 190);
			this->label硅管ZI8->Name = L"label硅管ZI8";
			this->label硅管ZI8->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI8->TabIndex = 55;
			this->label硅管ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI7
			// 
			this->label硅管ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI7->Location = System::Drawing::Point(605, 191);
			this->label硅管ZI7->Name = L"label硅管ZI7";
			this->label硅管ZI7->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI7->TabIndex = 54;
			this->label硅管ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI6
			// 
			this->label硅管ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI6->Location = System::Drawing::Point(537, 190);
			this->label硅管ZI6->Name = L"label硅管ZI6";
			this->label硅管ZI6->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI6->TabIndex = 53;
			this->label硅管ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI5
			// 
			this->label硅管ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI5->Location = System::Drawing::Point(469, 190);
			this->label硅管ZI5->Name = L"label硅管ZI5";
			this->label硅管ZI5->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI5->TabIndex = 52;
			this->label硅管ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI4
			// 
			this->label硅管ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI4->Location = System::Drawing::Point(401, 190);
			this->label硅管ZI4->Name = L"label硅管ZI4";
			this->label硅管ZI4->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI4->TabIndex = 51;
			this->label硅管ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI3
			// 
			this->label硅管ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI3->Location = System::Drawing::Point(333, 191);
			this->label硅管ZI3->Name = L"label硅管ZI3";
			this->label硅管ZI3->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI3->TabIndex = 50;
			this->label硅管ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI2
			// 
			this->label硅管ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI2->Location = System::Drawing::Point(265, 191);
			this->label硅管ZI2->Name = L"label硅管ZI2";
			this->label硅管ZI2->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI2->TabIndex = 49;
			this->label硅管ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI1
			// 
			this->label硅管ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI1->Location = System::Drawing::Point(199, 191);
			this->label硅管ZI1->Name = L"label硅管ZI1";
			this->label硅管ZI1->Size = System::Drawing::Size(61, 22);
			this->label硅管ZI1->TabIndex = 48;
			this->label硅管ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU10
			// 
			this->label硅管ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU10->Location = System::Drawing::Point(809, 122);
			this->label硅管ZU10->Name = L"label硅管ZU10";
			this->label硅管ZU10->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU10->TabIndex = 47;
			this->label硅管ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU9
			// 
			this->label硅管ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU9->Location = System::Drawing::Point(741, 122);
			this->label硅管ZU9->Name = L"label硅管ZU9";
			this->label硅管ZU9->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU9->TabIndex = 46;
			this->label硅管ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU8
			// 
			this->label硅管ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU8->Location = System::Drawing::Point(673, 122);
			this->label硅管ZU8->Name = L"label硅管ZU8";
			this->label硅管ZU8->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU8->TabIndex = 45;
			this->label硅管ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU7
			// 
			this->label硅管ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU7->Location = System::Drawing::Point(605, 124);
			this->label硅管ZU7->Name = L"label硅管ZU7";
			this->label硅管ZU7->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU7->TabIndex = 44;
			this->label硅管ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU6
			// 
			this->label硅管ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU6->Location = System::Drawing::Point(537, 122);
			this->label硅管ZU6->Name = L"label硅管ZU6";
			this->label硅管ZU6->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU6->TabIndex = 43;
			this->label硅管ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU5
			// 
			this->label硅管ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU5->Location = System::Drawing::Point(469, 122);
			this->label硅管ZU5->Name = L"label硅管ZU5";
			this->label硅管ZU5->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU5->TabIndex = 42;
			this->label硅管ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU4
			// 
			this->label硅管ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU4->Location = System::Drawing::Point(401, 122);
			this->label硅管ZU4->Name = L"label硅管ZU4";
			this->label硅管ZU4->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU4->TabIndex = 41;
			this->label硅管ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU3
			// 
			this->label硅管ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU3->Location = System::Drawing::Point(333, 124);
			this->label硅管ZU3->Name = L"label硅管ZU3";
			this->label硅管ZU3->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU3->TabIndex = 40;
			this->label硅管ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU2
			// 
			this->label硅管ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU2->Location = System::Drawing::Point(265, 124);
			this->label硅管ZU2->Name = L"label硅管ZU2";
			this->label硅管ZU2->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU2->TabIndex = 39;
			this->label硅管ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU1
			// 
			this->label硅管ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU1->Location = System::Drawing::Point(199, 124);
			this->label硅管ZU1->Name = L"label硅管ZU1";
			this->label硅管ZU1->Size = System::Drawing::Size(61, 22);
			this->label硅管ZU1->TabIndex = 38;
			this->label硅管ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox硅管ZSU10
			// 
			this->textBox硅管ZSU10->Location = System::Drawing::Point(809, 38);
			this->textBox硅管ZSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU10->Name = L"textBox硅管ZSU10";
			this->textBox硅管ZSU10->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU10->TabIndex = 26;
			// 
			// textBox硅管ZSU9
			// 
			this->textBox硅管ZSU9->Location = System::Drawing::Point(741, 38);
			this->textBox硅管ZSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU9->Name = L"textBox硅管ZSU9";
			this->textBox硅管ZSU9->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU9->TabIndex = 24;
			// 
			// textBox硅管ZSU8
			// 
			this->textBox硅管ZSU8->Location = System::Drawing::Point(673, 38);
			this->textBox硅管ZSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU8->Name = L"textBox硅管ZSU8";
			this->textBox硅管ZSU8->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU8->TabIndex = 22;
			// 
			// textBox硅管ZSU7
			// 
			this->textBox硅管ZSU7->Location = System::Drawing::Point(605, 38);
			this->textBox硅管ZSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU7->Name = L"textBox硅管ZSU7";
			this->textBox硅管ZSU7->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU7->TabIndex = 20;
			// 
			// textBox硅管ZSU6
			// 
			this->textBox硅管ZSU6->Location = System::Drawing::Point(537, 38);
			this->textBox硅管ZSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU6->Name = L"textBox硅管ZSU6";
			this->textBox硅管ZSU6->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU6->TabIndex = 18;
			// 
			// textBox硅管ZSU5
			// 
			this->textBox硅管ZSU5->Location = System::Drawing::Point(469, 38);
			this->textBox硅管ZSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU5->Name = L"textBox硅管ZSU5";
			this->textBox硅管ZSU5->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU5->TabIndex = 16;
			// 
			// textBox硅管ZSU4
			// 
			this->textBox硅管ZSU4->Location = System::Drawing::Point(401, 38);
			this->textBox硅管ZSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU4->Name = L"textBox硅管ZSU4";
			this->textBox硅管ZSU4->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU4->TabIndex = 14;
			// 
			// textBox硅管ZSU3
			// 
			this->textBox硅管ZSU3->Location = System::Drawing::Point(333, 38);
			this->textBox硅管ZSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU3->Name = L"textBox硅管ZSU3";
			this->textBox硅管ZSU3->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU3->TabIndex = 12;
			// 
			// textBox硅管ZSU2
			// 
			this->textBox硅管ZSU2->Location = System::Drawing::Point(265, 38);
			this->textBox硅管ZSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU2->Name = L"textBox硅管ZSU2";
			this->textBox硅管ZSU2->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU2->TabIndex = 10;
			// 
			// textBox硅管ZSU1
			// 
			this->textBox硅管ZSU1->Location = System::Drawing::Point(199, 38);
			this->textBox硅管ZSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox硅管ZSU1->Name = L"textBox硅管ZSU1";
			this->textBox硅管ZSU1->Size = System::Drawing::Size(63, 28);
			this->textBox硅管ZSU1->TabIndex = 8;
			// 
			// label201
			// 
			this->label201->ForeColor = System::Drawing::Color::Black;
			this->label201->Location = System::Drawing::Point(15, 192);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(176, 22);
			this->label201->TabIndex = 7;
			this->label201->Text = L"电流表读数I(mA)";
			// 
			// label202
			// 
			this->label202->ForeColor = System::Drawing::Color::Black;
			this->label202->Location = System::Drawing::Point(15, 124);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(176, 22);
			this->label202->TabIndex = 6;
			this->label202->Text = L"电压表读数Ud(V)";
			// 
			// label203
			// 
			this->label203->ForeColor = System::Drawing::Color::Black;
			this->label203->Location = System::Drawing::Point(15, 40);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(145, 22);
			this->label203->TabIndex = 5;
			this->label203->Text = L"电源电压U(V)";
			// 
			// textBox锗管结论
			// 
			this->textBox锗管结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox锗管结论->Location = System::Drawing::Point(124, 2402);
			this->textBox锗管结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管结论->Name = L"textBox锗管结论";
			this->textBox锗管结论->Size = System::Drawing::Size(776, 28);
			this->textBox锗管结论->TabIndex = 90;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->button102);
			this->groupBox5->Controls->Add(this->button103);
			this->groupBox5->Controls->Add(this->button104);
			this->groupBox5->Controls->Add(this->button105);
			this->groupBox5->Controls->Add(this->button106);
			this->groupBox5->Controls->Add(this->button107);
			this->groupBox5->Controls->Add(this->button108);
			this->groupBox5->Controls->Add(this->button109);
			this->groupBox5->Controls->Add(this->button110);
			this->groupBox5->Controls->Add(this->button121);
			this->groupBox5->Controls->Add(this->button92);
			this->groupBox5->Controls->Add(this->button93);
			this->groupBox5->Controls->Add(this->button94);
			this->groupBox5->Controls->Add(this->button95);
			this->groupBox5->Controls->Add(this->button96);
			this->groupBox5->Controls->Add(this->button97);
			this->groupBox5->Controls->Add(this->button98);
			this->groupBox5->Controls->Add(this->button99);
			this->groupBox5->Controls->Add(this->button100);
			this->groupBox5->Controls->Add(this->button101);
			this->groupBox5->Controls->Add(this->label锗管ZI10);
			this->groupBox5->Controls->Add(this->label锗管ZI9);
			this->groupBox5->Controls->Add(this->label锗管ZI8);
			this->groupBox5->Controls->Add(this->label锗管ZI7);
			this->groupBox5->Controls->Add(this->label锗管ZI6);
			this->groupBox5->Controls->Add(this->label锗管ZI5);
			this->groupBox5->Controls->Add(this->label锗管ZI4);
			this->groupBox5->Controls->Add(this->label锗管ZI3);
			this->groupBox5->Controls->Add(this->label锗管ZI2);
			this->groupBox5->Controls->Add(this->label锗管ZI1);
			this->groupBox5->Controls->Add(this->label锗管ZU10);
			this->groupBox5->Controls->Add(this->label锗管ZU9);
			this->groupBox5->Controls->Add(this->label锗管ZU8);
			this->groupBox5->Controls->Add(this->label锗管ZU7);
			this->groupBox5->Controls->Add(this->label锗管ZU6);
			this->groupBox5->Controls->Add(this->label锗管ZU5);
			this->groupBox5->Controls->Add(this->label锗管ZU4);
			this->groupBox5->Controls->Add(this->label锗管ZU3);
			this->groupBox5->Controls->Add(this->label锗管ZU2);
			this->groupBox5->Controls->Add(this->label锗管ZU1);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU10);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU9);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU8);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU7);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU6);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU5);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU4);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU3);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU2);
			this->groupBox5->Controls->Add(this->textBox锗管ZSU1);
			this->groupBox5->Controls->Add(this->label58);
			this->groupBox5->Controls->Add(this->label59);
			this->groupBox5->Controls->Add(this->label60);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(19, 1796);
			this->groupBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Size = System::Drawing::Size(881, 290);
			this->groupBox5->TabIndex = 87;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"正向特性测试";
			// 
			// label14
			// 
			this->label14->ForeColor = System::Drawing::Color::Lime;
			this->label14->Location = System::Drawing::Point(17, 237);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 22);
			this->label14->TabIndex = 116;
			this->label14->Text = L"直流电流表2";
			// 
			// label15
			// 
			this->label15->ForeColor = System::Drawing::Color::Lime;
			this->label15->Location = System::Drawing::Point(15, 158);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 22);
			this->label15->TabIndex = 115;
			this->label15->Text = L"直流电压表3";
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(809, 225);
			this->button102->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(61, 29);
			this->button102->TabIndex = 78;
			this->button102->Text = L"获取";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button102_Click);
			// 
			// button103
			// 
			this->button103->Location = System::Drawing::Point(741, 225);
			this->button103->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(61, 29);
			this->button103->TabIndex = 77;
			this->button103->Text = L"获取";
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button103_Click);
			// 
			// button104
			// 
			this->button104->Location = System::Drawing::Point(673, 225);
			this->button104->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(61, 29);
			this->button104->TabIndex = 76;
			this->button104->Text = L"获取";
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button104_Click);
			// 
			// button105
			// 
			this->button105->Location = System::Drawing::Point(605, 224);
			this->button105->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(61, 29);
			this->button105->TabIndex = 75;
			this->button105->Text = L"获取";
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button105_Click);
			// 
			// button106
			// 
			this->button106->Location = System::Drawing::Point(537, 225);
			this->button106->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(61, 29);
			this->button106->TabIndex = 74;
			this->button106->Text = L"获取";
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button106_Click);
			// 
			// button107
			// 
			this->button107->Location = System::Drawing::Point(469, 225);
			this->button107->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(61, 29);
			this->button107->TabIndex = 73;
			this->button107->Text = L"获取";
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button107_Click);
			// 
			// button108
			// 
			this->button108->Location = System::Drawing::Point(401, 224);
			this->button108->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(61, 29);
			this->button108->TabIndex = 72;
			this->button108->Text = L"获取";
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button108_Click);
			// 
			// button109
			// 
			this->button109->Location = System::Drawing::Point(333, 225);
			this->button109->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(61, 29);
			this->button109->TabIndex = 71;
			this->button109->Text = L"获取";
			this->button109->UseVisualStyleBackColor = true;
			this->button109->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button109_Click);
			// 
			// button110
			// 
			this->button110->Location = System::Drawing::Point(265, 224);
			this->button110->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(61, 29);
			this->button110->TabIndex = 70;
			this->button110->Text = L"获取";
			this->button110->UseVisualStyleBackColor = true;
			this->button110->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button110_Click);
			// 
			// button121
			// 
			this->button121->Location = System::Drawing::Point(199, 225);
			this->button121->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button121->Name = L"button121";
			this->button121->Size = System::Drawing::Size(61, 29);
			this->button121->TabIndex = 69;
			this->button121->Text = L"获取";
			this->button121->UseVisualStyleBackColor = true;
			this->button121->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button121_Click);
			// 
			// button92
			// 
			this->button92->Location = System::Drawing::Point(809, 151);
			this->button92->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(61, 29);
			this->button92->TabIndex = 68;
			this->button92->Text = L"获取";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button92_Click);
			// 
			// button93
			// 
			this->button93->Location = System::Drawing::Point(741, 151);
			this->button93->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(61, 29);
			this->button93->TabIndex = 67;
			this->button93->Text = L"获取";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button93_Click);
			// 
			// button94
			// 
			this->button94->Location = System::Drawing::Point(673, 151);
			this->button94->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(61, 29);
			this->button94->TabIndex = 66;
			this->button94->Text = L"获取";
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button94_Click);
			// 
			// button95
			// 
			this->button95->Location = System::Drawing::Point(605, 150);
			this->button95->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(61, 29);
			this->button95->TabIndex = 65;
			this->button95->Text = L"获取";
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button95_Click);
			// 
			// button96
			// 
			this->button96->Location = System::Drawing::Point(537, 151);
			this->button96->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(61, 29);
			this->button96->TabIndex = 64;
			this->button96->Text = L"获取";
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button96_Click);
			// 
			// button97
			// 
			this->button97->Location = System::Drawing::Point(469, 151);
			this->button97->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(61, 29);
			this->button97->TabIndex = 63;
			this->button97->Text = L"获取";
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button97_Click);
			// 
			// button98
			// 
			this->button98->Location = System::Drawing::Point(401, 150);
			this->button98->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(61, 29);
			this->button98->TabIndex = 62;
			this->button98->Text = L"获取";
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button98_Click);
			// 
			// button99
			// 
			this->button99->Location = System::Drawing::Point(333, 151);
			this->button99->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(61, 29);
			this->button99->TabIndex = 61;
			this->button99->Text = L"获取";
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button99_Click);
			// 
			// button100
			// 
			this->button100->Location = System::Drawing::Point(265, 150);
			this->button100->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(61, 29);
			this->button100->TabIndex = 60;
			this->button100->Text = L"获取";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button100_Click);
			// 
			// button101
			// 
			this->button101->Location = System::Drawing::Point(199, 151);
			this->button101->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(61, 29);
			this->button101->TabIndex = 59;
			this->button101->Text = L"获取";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button101_Click);
			// 
			// label锗管ZI10
			// 
			this->label锗管ZI10->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label锗管ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI10->Location = System::Drawing::Point(809, 198);
			this->label锗管ZI10->Name = L"label锗管ZI10";
			this->label锗管ZI10->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI10->TabIndex = 57;
			this->label锗管ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI9
			// 
			this->label锗管ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI9->Location = System::Drawing::Point(741, 198);
			this->label锗管ZI9->Name = L"label锗管ZI9";
			this->label锗管ZI9->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI9->TabIndex = 56;
			this->label锗管ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI8
			// 
			this->label锗管ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI8->Location = System::Drawing::Point(673, 198);
			this->label锗管ZI8->Name = L"label锗管ZI8";
			this->label锗管ZI8->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI8->TabIndex = 55;
			this->label锗管ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI7
			// 
			this->label锗管ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI7->Location = System::Drawing::Point(605, 199);
			this->label锗管ZI7->Name = L"label锗管ZI7";
			this->label锗管ZI7->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI7->TabIndex = 54;
			this->label锗管ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI6
			// 
			this->label锗管ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI6->Location = System::Drawing::Point(537, 198);
			this->label锗管ZI6->Name = L"label锗管ZI6";
			this->label锗管ZI6->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI6->TabIndex = 53;
			this->label锗管ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI5
			// 
			this->label锗管ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI5->Location = System::Drawing::Point(469, 198);
			this->label锗管ZI5->Name = L"label锗管ZI5";
			this->label锗管ZI5->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI5->TabIndex = 52;
			this->label锗管ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI4
			// 
			this->label锗管ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI4->Location = System::Drawing::Point(401, 198);
			this->label锗管ZI4->Name = L"label锗管ZI4";
			this->label锗管ZI4->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI4->TabIndex = 51;
			this->label锗管ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI3
			// 
			this->label锗管ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI3->Location = System::Drawing::Point(333, 199);
			this->label锗管ZI3->Name = L"label锗管ZI3";
			this->label锗管ZI3->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI3->TabIndex = 50;
			this->label锗管ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI2
			// 
			this->label锗管ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI2->Location = System::Drawing::Point(265, 199);
			this->label锗管ZI2->Name = L"label锗管ZI2";
			this->label锗管ZI2->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI2->TabIndex = 49;
			this->label锗管ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI1
			// 
			this->label锗管ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI1->Location = System::Drawing::Point(199, 199);
			this->label锗管ZI1->Name = L"label锗管ZI1";
			this->label锗管ZI1->Size = System::Drawing::Size(61, 22);
			this->label锗管ZI1->TabIndex = 48;
			this->label锗管ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU10
			// 
			this->label锗管ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU10->Location = System::Drawing::Point(809, 122);
			this->label锗管ZU10->Name = L"label锗管ZU10";
			this->label锗管ZU10->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU10->TabIndex = 47;
			this->label锗管ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU9
			// 
			this->label锗管ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU9->Location = System::Drawing::Point(741, 122);
			this->label锗管ZU9->Name = L"label锗管ZU9";
			this->label锗管ZU9->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU9->TabIndex = 46;
			this->label锗管ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU8
			// 
			this->label锗管ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU8->Location = System::Drawing::Point(673, 122);
			this->label锗管ZU8->Name = L"label锗管ZU8";
			this->label锗管ZU8->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU8->TabIndex = 45;
			this->label锗管ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU7
			// 
			this->label锗管ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU7->Location = System::Drawing::Point(605, 124);
			this->label锗管ZU7->Name = L"label锗管ZU7";
			this->label锗管ZU7->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU7->TabIndex = 44;
			this->label锗管ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU6
			// 
			this->label锗管ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU6->Location = System::Drawing::Point(537, 122);
			this->label锗管ZU6->Name = L"label锗管ZU6";
			this->label锗管ZU6->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU6->TabIndex = 43;
			this->label锗管ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU5
			// 
			this->label锗管ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU5->Location = System::Drawing::Point(469, 122);
			this->label锗管ZU5->Name = L"label锗管ZU5";
			this->label锗管ZU5->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU5->TabIndex = 42;
			this->label锗管ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU4
			// 
			this->label锗管ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU4->Location = System::Drawing::Point(401, 122);
			this->label锗管ZU4->Name = L"label锗管ZU4";
			this->label锗管ZU4->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU4->TabIndex = 41;
			this->label锗管ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU3
			// 
			this->label锗管ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU3->Location = System::Drawing::Point(333, 124);
			this->label锗管ZU3->Name = L"label锗管ZU3";
			this->label锗管ZU3->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU3->TabIndex = 40;
			this->label锗管ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU2
			// 
			this->label锗管ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU2->Location = System::Drawing::Point(265, 124);
			this->label锗管ZU2->Name = L"label锗管ZU2";
			this->label锗管ZU2->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU2->TabIndex = 39;
			this->label锗管ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU1
			// 
			this->label锗管ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU1->Location = System::Drawing::Point(199, 124);
			this->label锗管ZU1->Name = L"label锗管ZU1";
			this->label锗管ZU1->Size = System::Drawing::Size(61, 22);
			this->label锗管ZU1->TabIndex = 38;
			this->label锗管ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox锗管ZSU10
			// 
			this->textBox锗管ZSU10->Location = System::Drawing::Point(809, 38);
			this->textBox锗管ZSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU10->Name = L"textBox锗管ZSU10";
			this->textBox锗管ZSU10->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU10->TabIndex = 26;
			// 
			// textBox锗管ZSU9
			// 
			this->textBox锗管ZSU9->Location = System::Drawing::Point(741, 38);
			this->textBox锗管ZSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU9->Name = L"textBox锗管ZSU9";
			this->textBox锗管ZSU9->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU9->TabIndex = 24;
			// 
			// textBox锗管ZSU8
			// 
			this->textBox锗管ZSU8->Location = System::Drawing::Point(673, 38);
			this->textBox锗管ZSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU8->Name = L"textBox锗管ZSU8";
			this->textBox锗管ZSU8->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU8->TabIndex = 22;
			// 
			// textBox锗管ZSU7
			// 
			this->textBox锗管ZSU7->Location = System::Drawing::Point(605, 38);
			this->textBox锗管ZSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU7->Name = L"textBox锗管ZSU7";
			this->textBox锗管ZSU7->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU7->TabIndex = 20;
			// 
			// textBox锗管ZSU6
			// 
			this->textBox锗管ZSU6->Location = System::Drawing::Point(537, 38);
			this->textBox锗管ZSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU6->Name = L"textBox锗管ZSU6";
			this->textBox锗管ZSU6->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU6->TabIndex = 18;
			// 
			// textBox锗管ZSU5
			// 
			this->textBox锗管ZSU5->Location = System::Drawing::Point(469, 38);
			this->textBox锗管ZSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU5->Name = L"textBox锗管ZSU5";
			this->textBox锗管ZSU5->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU5->TabIndex = 16;
			// 
			// textBox锗管ZSU4
			// 
			this->textBox锗管ZSU4->Location = System::Drawing::Point(401, 38);
			this->textBox锗管ZSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU4->Name = L"textBox锗管ZSU4";
			this->textBox锗管ZSU4->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU4->TabIndex = 14;
			// 
			// textBox锗管ZSU3
			// 
			this->textBox锗管ZSU3->Location = System::Drawing::Point(333, 38);
			this->textBox锗管ZSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU3->Name = L"textBox锗管ZSU3";
			this->textBox锗管ZSU3->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU3->TabIndex = 12;
			// 
			// textBox锗管ZSU2
			// 
			this->textBox锗管ZSU2->Location = System::Drawing::Point(265, 38);
			this->textBox锗管ZSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU2->Name = L"textBox锗管ZSU2";
			this->textBox锗管ZSU2->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU2->TabIndex = 10;
			// 
			// textBox锗管ZSU1
			// 
			this->textBox锗管ZSU1->Location = System::Drawing::Point(199, 38);
			this->textBox锗管ZSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管ZSU1->Name = L"textBox锗管ZSU1";
			this->textBox锗管ZSU1->Size = System::Drawing::Size(63, 28);
			this->textBox锗管ZSU1->TabIndex = 8;
			// 
			// label58
			// 
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(15, 201);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(176, 22);
			this->label58->TabIndex = 7;
			this->label58->Text = L"电流表读数I(mA)";
			// 
			// label59
			// 
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(15, 124);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(176, 22);
			this->label59->TabIndex = 6;
			this->label59->Text = L"电压表读数Ud(V)";
			// 
			// label60
			// 
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(15, 40);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(145, 22);
			this->label60->TabIndex = 5;
			this->label60->Text = L"电源电压U(V)";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Blue;
			this->label53->Location = System::Drawing::Point(1197, 1838);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(35, 18);
			this->label53->TabIndex = 86;
			this->label53->Text = L"图3";
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(15, 2410);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(95, 20);
			this->label54->TabIndex = 89;
			this->label54->Text = L"实验结论";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label7);
			this->groupBox9->Controls->Add(this->label52);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox9->ForeColor = System::Drawing::Color::Red;
			this->groupBox9->Location = System::Drawing::Point(19, 1560);
			this->groupBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Size = System::Drawing::Size(881, 201);
			this->groupBox9->TabIndex = 85;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"测定半导体二极管的伏安特性-锗管2AP9";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(36, 152);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(843, 32);
			this->label7->TabIndex = 61;
			this->label7->Text = L"  注意：正向实验时，稳压源U<0.4V内采集多组数据。";
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(35, 49);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(843, 90);
			this->label52->TabIndex = 61;
			this->label52->Text = L"  按图3正确接线(D=2AP9,正向接入)，稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0-30V)，任意选取十组数据，记下相应的电压表和电流表的"
				L"读数，并绘制相应的元件伏安特性曲线。然后断电，将D=2AP9反向接入实验电路中，通电重复之前的实验；";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(965, 1551);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(400, 271);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 84;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->button152);
			this->groupBox4->Controls->Add(this->button132);
			this->groupBox4->Controls->Add(this->button133);
			this->groupBox4->Controls->Add(this->button134);
			this->groupBox4->Controls->Add(this->button135);
			this->groupBox4->Controls->Add(this->button136);
			this->groupBox4->Controls->Add(this->button137);
			this->groupBox4->Controls->Add(this->button138);
			this->groupBox4->Controls->Add(this->button139);
			this->groupBox4->Controls->Add(this->button140);
			this->groupBox4->Controls->Add(this->button151);
			this->groupBox4->Controls->Add(this->button122);
			this->groupBox4->Controls->Add(this->button123);
			this->groupBox4->Controls->Add(this->button124);
			this->groupBox4->Controls->Add(this->button125);
			this->groupBox4->Controls->Add(this->button126);
			this->groupBox4->Controls->Add(this->button127);
			this->groupBox4->Controls->Add(this->button128);
			this->groupBox4->Controls->Add(this->button129);
			this->groupBox4->Controls->Add(this->button130);
			this->groupBox4->Controls->Add(this->button131);
			this->groupBox4->Controls->Add(this->label锗管FI10);
			this->groupBox4->Controls->Add(this->label锗管FI9);
			this->groupBox4->Controls->Add(this->label锗管FI8);
			this->groupBox4->Controls->Add(this->label锗管FI7);
			this->groupBox4->Controls->Add(this->label锗管FI6);
			this->groupBox4->Controls->Add(this->label锗管FI5);
			this->groupBox4->Controls->Add(this->label锗管FI4);
			this->groupBox4->Controls->Add(this->label锗管FI3);
			this->groupBox4->Controls->Add(this->label锗管FI2);
			this->groupBox4->Controls->Add(this->label锗管FI1);
			this->groupBox4->Controls->Add(this->label锗管FU10);
			this->groupBox4->Controls->Add(this->label锗管FU9);
			this->groupBox4->Controls->Add(this->label锗管FU8);
			this->groupBox4->Controls->Add(this->label锗管FU7);
			this->groupBox4->Controls->Add(this->label锗管FU6);
			this->groupBox4->Controls->Add(this->label锗管FU5);
			this->groupBox4->Controls->Add(this->label锗管FU4);
			this->groupBox4->Controls->Add(this->label锗管FU3);
			this->groupBox4->Controls->Add(this->label锗管FU2);
			this->groupBox4->Controls->Add(this->label锗管FU1);
			this->groupBox4->Controls->Add(this->textBox锗管FSU10);
			this->groupBox4->Controls->Add(this->textBox锗管FSU9);
			this->groupBox4->Controls->Add(this->textBox锗管FSU8);
			this->groupBox4->Controls->Add(this->textBox锗管FSU7);
			this->groupBox4->Controls->Add(this->textBox锗管FSU6);
			this->groupBox4->Controls->Add(this->textBox锗管FSU5);
			this->groupBox4->Controls->Add(this->textBox锗管FSU4);
			this->groupBox4->Controls->Add(this->textBox锗管FSU3);
			this->groupBox4->Controls->Add(this->textBox锗管FSU2);
			this->groupBox4->Controls->Add(this->textBox锗管FSU1);
			this->groupBox4->Controls->Add(this->label55);
			this->groupBox4->Controls->Add(this->label56);
			this->groupBox4->Controls->Add(this->label57);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(19, 2102);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(881, 284);
			this->groupBox4->TabIndex = 88;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"反向特性测试";
			// 
			// label16
			// 
			this->label16->ForeColor = System::Drawing::Color::Lime;
			this->label16->Location = System::Drawing::Point(17, 222);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(145, 22);
			this->label16->TabIndex = 116;
			this->label16->Text = L"直流电流表2";
			// 
			// label17
			// 
			this->label17->ForeColor = System::Drawing::Color::Lime;
			this->label17->Location = System::Drawing::Point(15, 143);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(145, 22);
			this->label17->TabIndex = 115;
			this->label17->Text = L"直流电压表3";
			// 
			// button152
			// 
			this->button152->Location = System::Drawing::Point(760, 241);
			this->button152->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button152->Name = L"button152";
			this->button152->Size = System::Drawing::Size(107, 38);
			this->button152->TabIndex = 89;
			this->button152->Text = L"曲线生成";
			this->button152->UseVisualStyleBackColor = true;
			this->button152->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button152_Click);
			// 
			// button132
			// 
			this->button132->Location = System::Drawing::Point(805, 206);
			this->button132->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(61, 29);
			this->button132->TabIndex = 88;
			this->button132->Text = L"获取";
			this->button132->UseVisualStyleBackColor = true;
			this->button132->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button132_Click);
			// 
			// button133
			// 
			this->button133->Location = System::Drawing::Point(737, 206);
			this->button133->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(61, 29);
			this->button133->TabIndex = 87;
			this->button133->Text = L"获取";
			this->button133->UseVisualStyleBackColor = true;
			this->button133->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button133_Click);
			// 
			// button134
			// 
			this->button134->Location = System::Drawing::Point(669, 206);
			this->button134->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(61, 29);
			this->button134->TabIndex = 86;
			this->button134->Text = L"获取";
			this->button134->UseVisualStyleBackColor = true;
			this->button134->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button134_Click);
			// 
			// button135
			// 
			this->button135->Location = System::Drawing::Point(601, 205);
			this->button135->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(61, 29);
			this->button135->TabIndex = 85;
			this->button135->Text = L"获取";
			this->button135->UseVisualStyleBackColor = true;
			this->button135->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button135_Click);
			// 
			// button136
			// 
			this->button136->Location = System::Drawing::Point(533, 206);
			this->button136->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button136->Name = L"button136";
			this->button136->Size = System::Drawing::Size(61, 29);
			this->button136->TabIndex = 84;
			this->button136->Text = L"获取";
			this->button136->UseVisualStyleBackColor = true;
			this->button136->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button136_Click_1);
			// 
			// button137
			// 
			this->button137->Location = System::Drawing::Point(465, 206);
			this->button137->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button137->Name = L"button137";
			this->button137->Size = System::Drawing::Size(61, 29);
			this->button137->TabIndex = 83;
			this->button137->Text = L"获取";
			this->button137->UseVisualStyleBackColor = true;
			this->button137->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button137_Click);
			// 
			// button138
			// 
			this->button138->Location = System::Drawing::Point(397, 205);
			this->button138->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button138->Name = L"button138";
			this->button138->Size = System::Drawing::Size(61, 29);
			this->button138->TabIndex = 82;
			this->button138->Text = L"获取";
			this->button138->UseVisualStyleBackColor = true;
			this->button138->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button138_Click);
			// 
			// button139
			// 
			this->button139->Location = System::Drawing::Point(329, 206);
			this->button139->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button139->Name = L"button139";
			this->button139->Size = System::Drawing::Size(61, 29);
			this->button139->TabIndex = 81;
			this->button139->Text = L"获取";
			this->button139->UseVisualStyleBackColor = true;
			this->button139->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button139_Click);
			// 
			// button140
			// 
			this->button140->Location = System::Drawing::Point(261, 205);
			this->button140->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button140->Name = L"button140";
			this->button140->Size = System::Drawing::Size(61, 29);
			this->button140->TabIndex = 80;
			this->button140->Text = L"获取";
			this->button140->UseVisualStyleBackColor = true;
			this->button140->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button140_Click);
			// 
			// button151
			// 
			this->button151->Location = System::Drawing::Point(195, 206);
			this->button151->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button151->Name = L"button151";
			this->button151->Size = System::Drawing::Size(61, 29);
			this->button151->TabIndex = 79;
			this->button151->Text = L"获取";
			this->button151->UseVisualStyleBackColor = true;
			this->button151->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button151_Click);
			// 
			// button122
			// 
			this->button122->Location = System::Drawing::Point(805, 138);
			this->button122->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button122->Name = L"button122";
			this->button122->Size = System::Drawing::Size(61, 29);
			this->button122->TabIndex = 78;
			this->button122->Text = L"获取";
			this->button122->UseVisualStyleBackColor = true;
			this->button122->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button122_Click);
			// 
			// button123
			// 
			this->button123->Location = System::Drawing::Point(737, 138);
			this->button123->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button123->Name = L"button123";
			this->button123->Size = System::Drawing::Size(61, 29);
			this->button123->TabIndex = 77;
			this->button123->Text = L"获取";
			this->button123->UseVisualStyleBackColor = true;
			this->button123->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button123_Click);
			// 
			// button124
			// 
			this->button124->Location = System::Drawing::Point(669, 138);
			this->button124->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button124->Name = L"button124";
			this->button124->Size = System::Drawing::Size(61, 29);
			this->button124->TabIndex = 76;
			this->button124->Text = L"获取";
			this->button124->UseVisualStyleBackColor = true;
			this->button124->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button124_Click);
			// 
			// button125
			// 
			this->button125->Location = System::Drawing::Point(601, 138);
			this->button125->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button125->Name = L"button125";
			this->button125->Size = System::Drawing::Size(61, 29);
			this->button125->TabIndex = 75;
			this->button125->Text = L"获取";
			this->button125->UseVisualStyleBackColor = true;
			this->button125->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button125_Click);
			// 
			// button126
			// 
			this->button126->Location = System::Drawing::Point(533, 138);
			this->button126->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button126->Name = L"button126";
			this->button126->Size = System::Drawing::Size(61, 29);
			this->button126->TabIndex = 74;
			this->button126->Text = L"获取";
			this->button126->UseVisualStyleBackColor = true;
			this->button126->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button126_Click);
			// 
			// button127
			// 
			this->button127->Location = System::Drawing::Point(465, 138);
			this->button127->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button127->Name = L"button127";
			this->button127->Size = System::Drawing::Size(61, 29);
			this->button127->TabIndex = 73;
			this->button127->Text = L"获取";
			this->button127->UseVisualStyleBackColor = true;
			this->button127->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button127_Click);
			// 
			// button128
			// 
			this->button128->Location = System::Drawing::Point(397, 138);
			this->button128->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button128->Name = L"button128";
			this->button128->Size = System::Drawing::Size(61, 29);
			this->button128->TabIndex = 72;
			this->button128->Text = L"获取";
			this->button128->UseVisualStyleBackColor = true;
			this->button128->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button128_Click);
			// 
			// button129
			// 
			this->button129->Location = System::Drawing::Point(329, 138);
			this->button129->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button129->Name = L"button129";
			this->button129->Size = System::Drawing::Size(61, 29);
			this->button129->TabIndex = 71;
			this->button129->Text = L"获取";
			this->button129->UseVisualStyleBackColor = true;
			this->button129->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button129_Click);
			// 
			// button130
			// 
			this->button130->Location = System::Drawing::Point(261, 138);
			this->button130->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button130->Name = L"button130";
			this->button130->Size = System::Drawing::Size(61, 29);
			this->button130->TabIndex = 70;
			this->button130->Text = L"获取";
			this->button130->UseVisualStyleBackColor = true;
			this->button130->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button130_Click);
			// 
			// button131
			// 
			this->button131->Location = System::Drawing::Point(195, 138);
			this->button131->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(61, 29);
			this->button131->TabIndex = 69;
			this->button131->Text = L"获取";
			this->button131->UseVisualStyleBackColor = true;
			this->button131->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button131_Click);
			// 
			// label锗管FI10
			// 
			this->label锗管FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI10->Location = System::Drawing::Point(805, 179);
			this->label锗管FI10->Name = L"label锗管FI10";
			this->label锗管FI10->Size = System::Drawing::Size(61, 22);
			this->label锗管FI10->TabIndex = 57;
			this->label锗管FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI9
			// 
			this->label锗管FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI9->Location = System::Drawing::Point(737, 179);
			this->label锗管FI9->Name = L"label锗管FI9";
			this->label锗管FI9->Size = System::Drawing::Size(61, 22);
			this->label锗管FI9->TabIndex = 56;
			this->label锗管FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI8
			// 
			this->label锗管FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI8->Location = System::Drawing::Point(669, 179);
			this->label锗管FI8->Name = L"label锗管FI8";
			this->label锗管FI8->Size = System::Drawing::Size(61, 22);
			this->label锗管FI8->TabIndex = 55;
			this->label锗管FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI7
			// 
			this->label锗管FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI7->Location = System::Drawing::Point(601, 180);
			this->label锗管FI7->Name = L"label锗管FI7";
			this->label锗管FI7->Size = System::Drawing::Size(61, 22);
			this->label锗管FI7->TabIndex = 54;
			this->label锗管FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI6
			// 
			this->label锗管FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI6->Location = System::Drawing::Point(533, 179);
			this->label锗管FI6->Name = L"label锗管FI6";
			this->label锗管FI6->Size = System::Drawing::Size(61, 22);
			this->label锗管FI6->TabIndex = 53;
			this->label锗管FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI5
			// 
			this->label锗管FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI5->Location = System::Drawing::Point(465, 179);
			this->label锗管FI5->Name = L"label锗管FI5";
			this->label锗管FI5->Size = System::Drawing::Size(61, 22);
			this->label锗管FI5->TabIndex = 52;
			this->label锗管FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI4
			// 
			this->label锗管FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI4->Location = System::Drawing::Point(397, 179);
			this->label锗管FI4->Name = L"label锗管FI4";
			this->label锗管FI4->Size = System::Drawing::Size(61, 22);
			this->label锗管FI4->TabIndex = 51;
			this->label锗管FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI3
			// 
			this->label锗管FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI3->Location = System::Drawing::Point(329, 180);
			this->label锗管FI3->Name = L"label锗管FI3";
			this->label锗管FI3->Size = System::Drawing::Size(61, 22);
			this->label锗管FI3->TabIndex = 50;
			this->label锗管FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI2
			// 
			this->label锗管FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI2->Location = System::Drawing::Point(261, 180);
			this->label锗管FI2->Name = L"label锗管FI2";
			this->label锗管FI2->Size = System::Drawing::Size(61, 22);
			this->label锗管FI2->TabIndex = 49;
			this->label锗管FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI1
			// 
			this->label锗管FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI1->Location = System::Drawing::Point(195, 180);
			this->label锗管FI1->Name = L"label锗管FI1";
			this->label锗管FI1->Size = System::Drawing::Size(61, 22);
			this->label锗管FI1->TabIndex = 48;
			this->label锗管FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU10
			// 
			this->label锗管FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU10->Location = System::Drawing::Point(805, 111);
			this->label锗管FU10->Name = L"label锗管FU10";
			this->label锗管FU10->Size = System::Drawing::Size(61, 22);
			this->label锗管FU10->TabIndex = 47;
			this->label锗管FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU9
			// 
			this->label锗管FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU9->Location = System::Drawing::Point(737, 111);
			this->label锗管FU9->Name = L"label锗管FU9";
			this->label锗管FU9->Size = System::Drawing::Size(61, 22);
			this->label锗管FU9->TabIndex = 46;
			this->label锗管FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU8
			// 
			this->label锗管FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU8->Location = System::Drawing::Point(669, 111);
			this->label锗管FU8->Name = L"label锗管FU8";
			this->label锗管FU8->Size = System::Drawing::Size(61, 22);
			this->label锗管FU8->TabIndex = 45;
			this->label锗管FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU7
			// 
			this->label锗管FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU7->Location = System::Drawing::Point(601, 112);
			this->label锗管FU7->Name = L"label锗管FU7";
			this->label锗管FU7->Size = System::Drawing::Size(61, 22);
			this->label锗管FU7->TabIndex = 44;
			this->label锗管FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU6
			// 
			this->label锗管FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU6->Location = System::Drawing::Point(533, 111);
			this->label锗管FU6->Name = L"label锗管FU6";
			this->label锗管FU6->Size = System::Drawing::Size(61, 22);
			this->label锗管FU6->TabIndex = 43;
			this->label锗管FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU5
			// 
			this->label锗管FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU5->Location = System::Drawing::Point(465, 111);
			this->label锗管FU5->Name = L"label锗管FU5";
			this->label锗管FU5->Size = System::Drawing::Size(61, 22);
			this->label锗管FU5->TabIndex = 42;
			this->label锗管FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU4
			// 
			this->label锗管FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU4->Location = System::Drawing::Point(397, 111);
			this->label锗管FU4->Name = L"label锗管FU4";
			this->label锗管FU4->Size = System::Drawing::Size(61, 22);
			this->label锗管FU4->TabIndex = 41;
			this->label锗管FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU3
			// 
			this->label锗管FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU3->Location = System::Drawing::Point(329, 112);
			this->label锗管FU3->Name = L"label锗管FU3";
			this->label锗管FU3->Size = System::Drawing::Size(61, 22);
			this->label锗管FU3->TabIndex = 40;
			this->label锗管FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU2
			// 
			this->label锗管FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU2->Location = System::Drawing::Point(261, 112);
			this->label锗管FU2->Name = L"label锗管FU2";
			this->label锗管FU2->Size = System::Drawing::Size(61, 22);
			this->label锗管FU2->TabIndex = 39;
			this->label锗管FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU1
			// 
			this->label锗管FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU1->Location = System::Drawing::Point(195, 112);
			this->label锗管FU1->Name = L"label锗管FU1";
			this->label锗管FU1->Size = System::Drawing::Size(61, 22);
			this->label锗管FU1->TabIndex = 38;
			this->label锗管FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox锗管FSU10
			// 
			this->textBox锗管FSU10->Location = System::Drawing::Point(809, 35);
			this->textBox锗管FSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU10->Name = L"textBox锗管FSU10";
			this->textBox锗管FSU10->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU10->TabIndex = 26;
			// 
			// textBox锗管FSU9
			// 
			this->textBox锗管FSU9->Location = System::Drawing::Point(741, 35);
			this->textBox锗管FSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU9->Name = L"textBox锗管FSU9";
			this->textBox锗管FSU9->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU9->TabIndex = 24;
			// 
			// textBox锗管FSU8
			// 
			this->textBox锗管FSU8->Location = System::Drawing::Point(673, 35);
			this->textBox锗管FSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU8->Name = L"textBox锗管FSU8";
			this->textBox锗管FSU8->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU8->TabIndex = 22;
			// 
			// textBox锗管FSU7
			// 
			this->textBox锗管FSU7->Location = System::Drawing::Point(605, 35);
			this->textBox锗管FSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU7->Name = L"textBox锗管FSU7";
			this->textBox锗管FSU7->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU7->TabIndex = 20;
			// 
			// textBox锗管FSU6
			// 
			this->textBox锗管FSU6->Location = System::Drawing::Point(537, 35);
			this->textBox锗管FSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU6->Name = L"textBox锗管FSU6";
			this->textBox锗管FSU6->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU6->TabIndex = 18;
			// 
			// textBox锗管FSU5
			// 
			this->textBox锗管FSU5->Location = System::Drawing::Point(469, 35);
			this->textBox锗管FSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU5->Name = L"textBox锗管FSU5";
			this->textBox锗管FSU5->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU5->TabIndex = 16;
			// 
			// textBox锗管FSU4
			// 
			this->textBox锗管FSU4->Location = System::Drawing::Point(401, 35);
			this->textBox锗管FSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU4->Name = L"textBox锗管FSU4";
			this->textBox锗管FSU4->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU4->TabIndex = 14;
			// 
			// textBox锗管FSU3
			// 
			this->textBox锗管FSU3->Location = System::Drawing::Point(333, 35);
			this->textBox锗管FSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU3->Name = L"textBox锗管FSU3";
			this->textBox锗管FSU3->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU3->TabIndex = 12;
			// 
			// textBox锗管FSU2
			// 
			this->textBox锗管FSU2->Location = System::Drawing::Point(265, 35);
			this->textBox锗管FSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU2->Name = L"textBox锗管FSU2";
			this->textBox锗管FSU2->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU2->TabIndex = 10;
			// 
			// textBox锗管FSU1
			// 
			this->textBox锗管FSU1->Location = System::Drawing::Point(195, 35);
			this->textBox锗管FSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox锗管FSU1->Name = L"textBox锗管FSU1";
			this->textBox锗管FSU1->Size = System::Drawing::Size(63, 28);
			this->textBox锗管FSU1->TabIndex = 8;
			// 
			// label55
			// 
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(9, 180);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(176, 22);
			this->label55->TabIndex = 7;
			this->label55->Text = L"电流表读数I(mA)";
			// 
			// label56
			// 
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(9, 112);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(176, 22);
			this->label56->TabIndex = 6;
			this->label56->Text = L"电压表读数Ud(V)";
			// 
			// label57
			// 
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(9, 35);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(145, 22);
			this->label57->TabIndex = 5;
			this->label57->Text = L"电源电压U(V)";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::SkyBlue;
			this->label2->Location = System::Drawing::Point(0, 1522);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1525, 10);
			this->label2->TabIndex = 83;
			// 
			// chart线性
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart线性->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart线性->Legends->Add(legend4);
			this->chart线性->Location = System::Drawing::Point(939, 349);
			this->chart线性->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart线性->Name = L"chart线性";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart线性->Series->Add(series4);
			this->chart线性->Size = System::Drawing::Size(560, 360);
			this->chart线性->TabIndex = 82;
			this->chart线性->Text = L"chart1";
			// 
			// textBox线性结论
			// 
			this->textBox线性结论->Location = System::Drawing::Point(120, 679);
			this->textBox线性结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox线性结论->Name = L"textBox线性结论";
			this->textBox线性结论->Size = System::Drawing::Size(789, 25);
			this->textBox线性结论->TabIndex = 81;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->button42);
			this->groupBox2->Controls->Add(this->button43);
			this->groupBox2->Controls->Add(this->button44);
			this->groupBox2->Controls->Add(this->button45);
			this->groupBox2->Controls->Add(this->button46);
			this->groupBox2->Controls->Add(this->button47);
			this->groupBox2->Controls->Add(this->button48);
			this->groupBox2->Controls->Add(this->button49);
			this->groupBox2->Controls->Add(this->button50);
			this->groupBox2->Controls->Add(this->button61);
			this->groupBox2->Controls->Add(this->button41);
			this->groupBox2->Controls->Add(this->button40);
			this->groupBox2->Controls->Add(this->button39);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->button35);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->label线性U10);
			this->groupBox2->Controls->Add(this->label线性U9);
			this->groupBox2->Controls->Add(this->label线性U8);
			this->groupBox2->Controls->Add(this->label线性U7);
			this->groupBox2->Controls->Add(this->label线性U6);
			this->groupBox2->Controls->Add(this->label线性U5);
			this->groupBox2->Controls->Add(this->label线性U4);
			this->groupBox2->Controls->Add(this->label线性U3);
			this->groupBox2->Controls->Add(this->label线性U2);
			this->groupBox2->Controls->Add(this->label线性U1);
			this->groupBox2->Controls->Add(this->label线性I10);
			this->groupBox2->Controls->Add(this->label线性I9);
			this->groupBox2->Controls->Add(this->label线性I8);
			this->groupBox2->Controls->Add(this->label线性I7);
			this->groupBox2->Controls->Add(this->label线性I6);
			this->groupBox2->Controls->Add(this->label线性I5);
			this->groupBox2->Controls->Add(this->label线性I4);
			this->groupBox2->Controls->Add(this->label线性I3);
			this->groupBox2->Controls->Add(this->label线性I2);
			this->groupBox2->Controls->Add(this->label线性I1);
			this->groupBox2->Controls->Add(this->textBoxSU10);
			this->groupBox2->Controls->Add(this->textBoxSU9);
			this->groupBox2->Controls->Add(this->textBoxSU8);
			this->groupBox2->Controls->Add(this->textBoxSU7);
			this->groupBox2->Controls->Add(this->textBoxSU6);
			this->groupBox2->Controls->Add(this->textBoxSU5);
			this->groupBox2->Controls->Add(this->textBoxSU4);
			this->groupBox2->Controls->Add(this->textBoxSU3);
			this->groupBox2->Controls->Add(this->textBoxSU2);
			this->groupBox2->Controls->Add(this->textBoxSU1);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->label42);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(15, 316);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(893, 310);
			this->groupBox2->TabIndex = 80;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"测量数据";
			// 
			// label11
			// 
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(15, 229);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 22);
			this->label11->TabIndex = 114;
			this->label11->Text = L"直流电流表2";
			// 
			// label10
			// 
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(13, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 22);
			this->label10->TabIndex = 113;
			this->label10->Text = L"直流电压表3";
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->Location = System::Drawing::Point(808, 222);
			this->button42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(61, 29);
			this->button42->TabIndex = 68;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->Location = System::Drawing::Point(740, 222);
			this->button43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(61, 29);
			this->button43->TabIndex = 67;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->Location = System::Drawing::Point(672, 222);
			this->button44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(61, 29);
			this->button44->TabIndex = 66;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button44_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->Location = System::Drawing::Point(604, 222);
			this->button45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(61, 29);
			this->button45->TabIndex = 65;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button45_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->Location = System::Drawing::Point(536, 222);
			this->button46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(61, 29);
			this->button46->TabIndex = 64;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button46_Click);
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->Location = System::Drawing::Point(468, 222);
			this->button47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(61, 29);
			this->button47->TabIndex = 63;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button47_Click);
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->Location = System::Drawing::Point(400, 222);
			this->button48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(61, 29);
			this->button48->TabIndex = 62;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button48_Click);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->Location = System::Drawing::Point(332, 222);
			this->button49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(61, 29);
			this->button49->TabIndex = 61;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button49_Click);
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->Location = System::Drawing::Point(264, 222);
			this->button50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(61, 29);
			this->button50->TabIndex = 60;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button50_Click);
			// 
			// button61
			// 
			this->button61->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button61->Location = System::Drawing::Point(197, 222);
			this->button61->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(61, 29);
			this->button61->TabIndex = 59;
			this->button61->Text = L"获取";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button61_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->Location = System::Drawing::Point(808, 146);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(61, 29);
			this->button41->TabIndex = 58;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button41_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->Location = System::Drawing::Point(740, 146);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(61, 29);
			this->button40->TabIndex = 57;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button40_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->Location = System::Drawing::Point(672, 146);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(61, 29);
			this->button39->TabIndex = 56;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button39_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->Location = System::Drawing::Point(604, 145);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(61, 29);
			this->button38->TabIndex = 55;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button38_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->Location = System::Drawing::Point(536, 146);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(61, 29);
			this->button37->TabIndex = 54;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button37_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->Location = System::Drawing::Point(468, 146);
			this->button36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(61, 29);
			this->button36->TabIndex = 53;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button36_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->Location = System::Drawing::Point(400, 145);
			this->button35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(61, 29);
			this->button35->TabIndex = 52;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button35_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->Location = System::Drawing::Point(332, 146);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(61, 29);
			this->button34->TabIndex = 51;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button34_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->Location = System::Drawing::Point(264, 145);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(61, 29);
			this->button33->TabIndex = 50;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button33_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->Location = System::Drawing::Point(197, 146);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(61, 29);
			this->button32->TabIndex = 49;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button32_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(761, 269);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(109, 34);
			this->button31->TabIndex = 48;
			this->button31->Text = L"曲线生成";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button31_Click);
			// 
			// label线性U10
			// 
			this->label线性U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U10->Location = System::Drawing::Point(808, 118);
			this->label线性U10->Name = L"label线性U10";
			this->label线性U10->Size = System::Drawing::Size(61, 22);
			this->label线性U10->TabIndex = 47;
			this->label线性U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U9
			// 
			this->label线性U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U9->Location = System::Drawing::Point(740, 118);
			this->label线性U9->Name = L"label线性U9";
			this->label线性U9->Size = System::Drawing::Size(61, 22);
			this->label线性U9->TabIndex = 46;
			this->label线性U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U8
			// 
			this->label线性U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U8->Location = System::Drawing::Point(672, 118);
			this->label线性U8->Name = L"label线性U8";
			this->label线性U8->Size = System::Drawing::Size(61, 22);
			this->label线性U8->TabIndex = 45;
			this->label线性U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U7
			// 
			this->label线性U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U7->Location = System::Drawing::Point(604, 119);
			this->label线性U7->Name = L"label线性U7";
			this->label线性U7->Size = System::Drawing::Size(61, 22);
			this->label线性U7->TabIndex = 44;
			this->label线性U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U6
			// 
			this->label线性U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U6->Location = System::Drawing::Point(536, 118);
			this->label线性U6->Name = L"label线性U6";
			this->label线性U6->Size = System::Drawing::Size(61, 22);
			this->label线性U6->TabIndex = 43;
			this->label线性U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U5
			// 
			this->label线性U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U5->Location = System::Drawing::Point(468, 118);
			this->label线性U5->Name = L"label线性U5";
			this->label线性U5->Size = System::Drawing::Size(61, 22);
			this->label线性U5->TabIndex = 42;
			this->label线性U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U4
			// 
			this->label线性U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U4->Location = System::Drawing::Point(400, 118);
			this->label线性U4->Name = L"label线性U4";
			this->label线性U4->Size = System::Drawing::Size(61, 22);
			this->label线性U4->TabIndex = 41;
			this->label线性U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U3
			// 
			this->label线性U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U3->Location = System::Drawing::Point(332, 119);
			this->label线性U3->Name = L"label线性U3";
			this->label线性U3->Size = System::Drawing::Size(61, 22);
			this->label线性U3->TabIndex = 40;
			this->label线性U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U2
			// 
			this->label线性U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U2->Location = System::Drawing::Point(264, 119);
			this->label线性U2->Name = L"label线性U2";
			this->label线性U2->Size = System::Drawing::Size(61, 22);
			this->label线性U2->TabIndex = 39;
			this->label线性U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U1
			// 
			this->label线性U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U1->Location = System::Drawing::Point(197, 119);
			this->label线性U1->Name = L"label线性U1";
			this->label线性U1->Size = System::Drawing::Size(61, 28);
			this->label线性U1->TabIndex = 38;
			this->label线性U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I10
			// 
			this->label线性I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I10->Location = System::Drawing::Point(809, 188);
			this->label线性I10->Name = L"label线性I10";
			this->label线性I10->Size = System::Drawing::Size(61, 22);
			this->label线性I10->TabIndex = 37;
			this->label线性I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I9
			// 
			this->label线性I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I9->Location = System::Drawing::Point(741, 188);
			this->label线性I9->Name = L"label线性I9";
			this->label线性I9->Size = System::Drawing::Size(61, 22);
			this->label线性I9->TabIndex = 36;
			this->label线性I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I8
			// 
			this->label线性I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I8->Location = System::Drawing::Point(673, 188);
			this->label线性I8->Name = L"label线性I8";
			this->label线性I8->Size = System::Drawing::Size(61, 22);
			this->label线性I8->TabIndex = 35;
			this->label线性I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I7
			// 
			this->label线性I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I7->Location = System::Drawing::Point(605, 188);
			this->label线性I7->Name = L"label线性I7";
			this->label线性I7->Size = System::Drawing::Size(61, 22);
			this->label线性I7->TabIndex = 34;
			this->label线性I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I6
			// 
			this->label线性I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I6->Location = System::Drawing::Point(537, 188);
			this->label线性I6->Name = L"label线性I6";
			this->label线性I6->Size = System::Drawing::Size(61, 22);
			this->label线性I6->TabIndex = 33;
			this->label线性I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I5
			// 
			this->label线性I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I5->Location = System::Drawing::Point(469, 188);
			this->label线性I5->Name = L"label线性I5";
			this->label线性I5->Size = System::Drawing::Size(61, 22);
			this->label线性I5->TabIndex = 32;
			this->label线性I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I4
			// 
			this->label线性I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I4->Location = System::Drawing::Point(401, 188);
			this->label线性I4->Name = L"label线性I4";
			this->label线性I4->Size = System::Drawing::Size(61, 22);
			this->label线性I4->TabIndex = 31;
			this->label线性I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I3
			// 
			this->label线性I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I3->Location = System::Drawing::Point(333, 188);
			this->label线性I3->Name = L"label线性I3";
			this->label线性I3->Size = System::Drawing::Size(61, 22);
			this->label线性I3->TabIndex = 30;
			this->label线性I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I2
			// 
			this->label线性I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I2->Location = System::Drawing::Point(265, 188);
			this->label线性I2->Name = L"label线性I2";
			this->label线性I2->Size = System::Drawing::Size(61, 22);
			this->label线性I2->TabIndex = 29;
			this->label线性I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I1
			// 
			this->label线性I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I1->Location = System::Drawing::Point(199, 188);
			this->label线性I1->Name = L"label线性I1";
			this->label线性I1->Size = System::Drawing::Size(61, 22);
			this->label线性I1->TabIndex = 28;
			this->label线性I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label线性I1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::label线性I1_Click);
			// 
			// textBoxSU10
			// 
			this->textBoxSU10->Location = System::Drawing::Point(808, 38);
			this->textBoxSU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU10->Name = L"textBoxSU10";
			this->textBoxSU10->Size = System::Drawing::Size(63, 30);
			this->textBoxSU10->TabIndex = 26;
			// 
			// textBoxSU9
			// 
			this->textBoxSU9->Location = System::Drawing::Point(740, 38);
			this->textBoxSU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU9->Name = L"textBoxSU9";
			this->textBoxSU9->Size = System::Drawing::Size(63, 30);
			this->textBoxSU9->TabIndex = 24;
			// 
			// textBoxSU8
			// 
			this->textBoxSU8->Location = System::Drawing::Point(672, 38);
			this->textBoxSU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU8->Name = L"textBoxSU8";
			this->textBoxSU8->Size = System::Drawing::Size(63, 30);
			this->textBoxSU8->TabIndex = 22;
			// 
			// textBoxSU7
			// 
			this->textBoxSU7->Location = System::Drawing::Point(604, 38);
			this->textBoxSU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU7->Name = L"textBoxSU7";
			this->textBoxSU7->Size = System::Drawing::Size(63, 30);
			this->textBoxSU7->TabIndex = 20;
			// 
			// textBoxSU6
			// 
			this->textBoxSU6->Location = System::Drawing::Point(536, 38);
			this->textBoxSU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU6->Name = L"textBoxSU6";
			this->textBoxSU6->Size = System::Drawing::Size(63, 30);
			this->textBoxSU6->TabIndex = 18;
			// 
			// textBoxSU5
			// 
			this->textBoxSU5->Location = System::Drawing::Point(468, 38);
			this->textBoxSU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU5->Name = L"textBoxSU5";
			this->textBoxSU5->Size = System::Drawing::Size(63, 30);
			this->textBoxSU5->TabIndex = 16;
			// 
			// textBoxSU4
			// 
			this->textBoxSU4->Location = System::Drawing::Point(400, 38);
			this->textBoxSU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU4->Name = L"textBoxSU4";
			this->textBoxSU4->Size = System::Drawing::Size(63, 30);
			this->textBoxSU4->TabIndex = 14;
			// 
			// textBoxSU3
			// 
			this->textBoxSU3->Location = System::Drawing::Point(332, 38);
			this->textBoxSU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU3->Name = L"textBoxSU3";
			this->textBoxSU3->Size = System::Drawing::Size(63, 30);
			this->textBoxSU3->TabIndex = 12;
			// 
			// textBoxSU2
			// 
			this->textBoxSU2->Location = System::Drawing::Point(264, 38);
			this->textBoxSU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU2->Name = L"textBoxSU2";
			this->textBoxSU2->Size = System::Drawing::Size(63, 30);
			this->textBoxSU2->TabIndex = 10;
			// 
			// textBoxSU1
			// 
			this->textBoxSU1->Location = System::Drawing::Point(197, 38);
			this->textBoxSU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSU1->Name = L"textBoxSU1";
			this->textBoxSU1->Size = System::Drawing::Size(63, 30);
			this->textBoxSU1->TabIndex = 8;
			// 
			// label40
			// 
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(9, 188);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(176, 22);
			this->label40->TabIndex = 7;
			this->label40->Text = L"电流表读数I(mA)";
			// 
			// label41
			// 
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(9, 119);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(176, 22);
			this->label41->TabIndex = 6;
			this->label41->Text = L"电压表读数Ur(V)";
			// 
			// label42
			// 
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(9, 40);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(145, 22);
			this->label42->TabIndex = 5;
			this->label42->Text = L"电源电压U(V)";
			// 
			// label43
			// 
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(11, 686);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(95, 22);
			this->label43->TabIndex = 79;
			this->label43->Text = L"实验结论";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(15, 28);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(893, 218);
			this->groupBox8->TabIndex = 78;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"测定线性电阻器的伏安特性";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(15, 69);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(863, 88);
			this->label38->TabIndex = 7;
			this->label38->Text = L"    按图1正确接线，稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0-30V)，任意选取十组数据，记下相应的电压表和电流表的读数，并绘制相应的元件"
				L"伏安特性曲线。";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->ForeColor = System::Drawing::Color::Blue;
			this->label39->Location = System::Drawing::Point(1151, 288);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 18);
			this->label39->TabIndex = 77;
			this->label39->Text = L"图1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(939, 18);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 261);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 76;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::SkyBlue;
			this->label1->Location = System::Drawing::Point(3, 762);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1525, 10);
			this->label1->TabIndex = 75;
			// 
			// chart白炽
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart白炽->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart白炽->Legends->Add(legend5);
			this->chart白炽->Location = System::Drawing::Point(961, 1125);
			this->chart白炽->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart白炽->Name = L"chart白炽";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart白炽->Series->Add(series5);
			this->chart白炽->Size = System::Drawing::Size(564, 360);
			this->chart白炽->TabIndex = 74;
			this->chart白炽->Text = L"chart2";
			// 
			// textBox白炽结论
			// 
			this->textBox白炽结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox白炽结论->Location = System::Drawing::Point(151, 1458);
			this->textBox白炽结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽结论->Name = L"textBox白炽结论";
			this->textBox白炽结论->Size = System::Drawing::Size(783, 28);
			this->textBox白炽结论->TabIndex = 73;
			// 
			// label47
			// 
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(43, 1460);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(95, 22);
			this->label47->TabIndex = 72;
			this->label47->Text = L"实验结论";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->button245);
			this->groupBox3->Controls->Add(this->button72);
			this->groupBox3->Controls->Add(this->button73);
			this->groupBox3->Controls->Add(this->button74);
			this->groupBox3->Controls->Add(this->button75);
			this->groupBox3->Controls->Add(this->button76);
			this->groupBox3->Controls->Add(this->button77);
			this->groupBox3->Controls->Add(this->button78);
			this->groupBox3->Controls->Add(this->button79);
			this->groupBox3->Controls->Add(this->button80);
			this->groupBox3->Controls->Add(this->button91);
			this->groupBox3->Controls->Add(this->button62);
			this->groupBox3->Controls->Add(this->button63);
			this->groupBox3->Controls->Add(this->button64);
			this->groupBox3->Controls->Add(this->button65);
			this->groupBox3->Controls->Add(this->button66);
			this->groupBox3->Controls->Add(this->button67);
			this->groupBox3->Controls->Add(this->button68);
			this->groupBox3->Controls->Add(this->button69);
			this->groupBox3->Controls->Add(this->button70);
			this->groupBox3->Controls->Add(this->button71);
			this->groupBox3->Controls->Add(this->label白炽I10);
			this->groupBox3->Controls->Add(this->label白炽I9);
			this->groupBox3->Controls->Add(this->label白炽I8);
			this->groupBox3->Controls->Add(this->label白炽I7);
			this->groupBox3->Controls->Add(this->label白炽I6);
			this->groupBox3->Controls->Add(this->label白炽I5);
			this->groupBox3->Controls->Add(this->label白炽I4);
			this->groupBox3->Controls->Add(this->label白炽I3);
			this->groupBox3->Controls->Add(this->label白炽I2);
			this->groupBox3->Controls->Add(this->label白炽I1);
			this->groupBox3->Controls->Add(this->label白炽U10);
			this->groupBox3->Controls->Add(this->label白炽U9);
			this->groupBox3->Controls->Add(this->label白炽U8);
			this->groupBox3->Controls->Add(this->label白炽U7);
			this->groupBox3->Controls->Add(this->label白炽U6);
			this->groupBox3->Controls->Add(this->label白炽U5);
			this->groupBox3->Controls->Add(this->label白炽U4);
			this->groupBox3->Controls->Add(this->label白炽U3);
			this->groupBox3->Controls->Add(this->label白炽U2);
			this->groupBox3->Controls->Add(this->label白炽U1);
			this->groupBox3->Controls->Add(this->textBox白炽SU10);
			this->groupBox3->Controls->Add(this->textBox白炽SU9);
			this->groupBox3->Controls->Add(this->textBox白炽SU8);
			this->groupBox3->Controls->Add(this->textBox白炽SU7);
			this->groupBox3->Controls->Add(this->textBox白炽SU6);
			this->groupBox3->Controls->Add(this->textBox白炽SU5);
			this->groupBox3->Controls->Add(this->textBox白炽SU4);
			this->groupBox3->Controls->Add(this->textBox白炽SU3);
			this->groupBox3->Controls->Add(this->textBox白炽SU2);
			this->groupBox3->Controls->Add(this->textBox白炽SU1);
			this->groupBox3->Controls->Add(this->label48);
			this->groupBox3->Controls->Add(this->label49);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(35, 1090);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(900, 326);
			this->groupBox3->TabIndex = 71;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"测量数据";
			// 
			// label12
			// 
			this->label12->ForeColor = System::Drawing::Color::Lime;
			this->label12->Location = System::Drawing::Point(19, 245);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 22);
			this->label12->TabIndex = 116;
			this->label12->Text = L"直流电流表2";
			// 
			// label13
			// 
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(17, 166);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 22);
			this->label13->TabIndex = 115;
			this->label13->Text = L"直流电压表3";
			// 
			// button245
			// 
			this->button245->Location = System::Drawing::Point(757, 286);
			this->button245->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button245->Name = L"button245";
			this->button245->Size = System::Drawing::Size(109, 34);
			this->button245->TabIndex = 79;
			this->button245->Text = L"曲线生成";
			this->button245->UseVisualStyleBackColor = true;
			this->button245->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button245_Click);
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(805, 234);
			this->button72->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(61, 29);
			this->button72->TabIndex = 78;
			this->button72->Text = L"获取";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button72_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(741, 234);
			this->button73->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(61, 29);
			this->button73->TabIndex = 77;
			this->button73->Text = L"获取";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button73_Click);
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(673, 234);
			this->button74->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(61, 29);
			this->button74->TabIndex = 76;
			this->button74->Text = L"获取";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button74_Click);
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(605, 232);
			this->button75->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(61, 29);
			this->button75->TabIndex = 75;
			this->button75->Text = L"获取";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button75_Click);
			// 
			// button76
			// 
			this->button76->Location = System::Drawing::Point(537, 234);
			this->button76->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(61, 29);
			this->button76->TabIndex = 74;
			this->button76->Text = L"获取";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button76_Click);
			// 
			// button77
			// 
			this->button77->Location = System::Drawing::Point(469, 234);
			this->button77->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(61, 29);
			this->button77->TabIndex = 73;
			this->button77->Text = L"获取";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button77_Click);
			// 
			// button78
			// 
			this->button78->Location = System::Drawing::Point(401, 232);
			this->button78->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(61, 29);
			this->button78->TabIndex = 72;
			this->button78->Text = L"获取";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button78_Click);
			// 
			// button79
			// 
			this->button79->Location = System::Drawing::Point(333, 234);
			this->button79->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(61, 29);
			this->button79->TabIndex = 71;
			this->button79->Text = L"获取";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button79_Click);
			// 
			// button80
			// 
			this->button80->Location = System::Drawing::Point(265, 232);
			this->button80->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(61, 29);
			this->button80->TabIndex = 70;
			this->button80->Text = L"获取";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button80_Click);
			// 
			// button91
			// 
			this->button91->Location = System::Drawing::Point(199, 234);
			this->button91->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(61, 29);
			this->button91->TabIndex = 69;
			this->button91->Text = L"获取";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button91_Click);
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(809, 159);
			this->button62->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(61, 29);
			this->button62->TabIndex = 68;
			this->button62->Text = L"获取";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button62_Click);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(741, 159);
			this->button63->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(61, 29);
			this->button63->TabIndex = 67;
			this->button63->Text = L"获取";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button63_Click);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(673, 159);
			this->button64->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(61, 29);
			this->button64->TabIndex = 66;
			this->button64->Text = L"获取";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button64_Click);
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(605, 158);
			this->button65->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(61, 29);
			this->button65->TabIndex = 65;
			this->button65->Text = L"获取";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button65_Click);
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(537, 159);
			this->button66->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(61, 29);
			this->button66->TabIndex = 64;
			this->button66->Text = L"获取";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button66_Click);
			// 
			// button67
			// 
			this->button67->Location = System::Drawing::Point(469, 159);
			this->button67->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(61, 29);
			this->button67->TabIndex = 63;
			this->button67->Text = L"获取";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button67_Click);
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(401, 158);
			this->button68->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(61, 29);
			this->button68->TabIndex = 62;
			this->button68->Text = L"获取";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button68_Click);
			// 
			// button69
			// 
			this->button69->Location = System::Drawing::Point(333, 159);
			this->button69->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(61, 29);
			this->button69->TabIndex = 61;
			this->button69->Text = L"获取";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button69_Click);
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(265, 158);
			this->button70->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(61, 29);
			this->button70->TabIndex = 60;
			this->button70->Text = L"获取";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button70_Click);
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(199, 159);
			this->button71->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(61, 29);
			this->button71->TabIndex = 59;
			this->button71->Text = L"获取";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button71_Click);
			// 
			// label白炽I10
			// 
			this->label白炽I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I10->Location = System::Drawing::Point(809, 208);
			this->label白炽I10->Name = L"label白炽I10";
			this->label白炽I10->Size = System::Drawing::Size(61, 22);
			this->label白炽I10->TabIndex = 57;
			this->label白炽I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I9
			// 
			this->label白炽I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I9->Location = System::Drawing::Point(741, 208);
			this->label白炽I9->Name = L"label白炽I9";
			this->label白炽I9->Size = System::Drawing::Size(61, 22);
			this->label白炽I9->TabIndex = 56;
			this->label白炽I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I8
			// 
			this->label白炽I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I8->Location = System::Drawing::Point(673, 208);
			this->label白炽I8->Name = L"label白炽I8";
			this->label白炽I8->Size = System::Drawing::Size(61, 22);
			this->label白炽I8->TabIndex = 55;
			this->label白炽I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I7
			// 
			this->label白炽I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I7->Location = System::Drawing::Point(605, 208);
			this->label白炽I7->Name = L"label白炽I7";
			this->label白炽I7->Size = System::Drawing::Size(61, 22);
			this->label白炽I7->TabIndex = 54;
			this->label白炽I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I6
			// 
			this->label白炽I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I6->Location = System::Drawing::Point(537, 208);
			this->label白炽I6->Name = L"label白炽I6";
			this->label白炽I6->Size = System::Drawing::Size(61, 22);
			this->label白炽I6->TabIndex = 53;
			this->label白炽I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I5
			// 
			this->label白炽I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I5->Location = System::Drawing::Point(469, 208);
			this->label白炽I5->Name = L"label白炽I5";
			this->label白炽I5->Size = System::Drawing::Size(61, 22);
			this->label白炽I5->TabIndex = 52;
			this->label白炽I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I4
			// 
			this->label白炽I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I4->Location = System::Drawing::Point(401, 208);
			this->label白炽I4->Name = L"label白炽I4";
			this->label白炽I4->Size = System::Drawing::Size(61, 22);
			this->label白炽I4->TabIndex = 51;
			this->label白炽I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I3
			// 
			this->label白炽I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I3->Location = System::Drawing::Point(333, 208);
			this->label白炽I3->Name = L"label白炽I3";
			this->label白炽I3->Size = System::Drawing::Size(61, 22);
			this->label白炽I3->TabIndex = 50;
			this->label白炽I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I2
			// 
			this->label白炽I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I2->Location = System::Drawing::Point(265, 208);
			this->label白炽I2->Name = L"label白炽I2";
			this->label白炽I2->Size = System::Drawing::Size(61, 22);
			this->label白炽I2->TabIndex = 49;
			this->label白炽I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I1
			// 
			this->label白炽I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I1->Location = System::Drawing::Point(199, 208);
			this->label白炽I1->Name = L"label白炽I1";
			this->label白炽I1->Size = System::Drawing::Size(61, 22);
			this->label白炽I1->TabIndex = 48;
			this->label白炽I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U10
			// 
			this->label白炽U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U10->Location = System::Drawing::Point(811, 132);
			this->label白炽U10->Name = L"label白炽U10";
			this->label白炽U10->Size = System::Drawing::Size(61, 22);
			this->label白炽U10->TabIndex = 47;
			this->label白炽U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U9
			// 
			this->label白炽U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U9->Location = System::Drawing::Point(743, 132);
			this->label白炽U9->Name = L"label白炽U9";
			this->label白炽U9->Size = System::Drawing::Size(61, 22);
			this->label白炽U9->TabIndex = 46;
			this->label白炽U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U8
			// 
			this->label白炽U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U8->Location = System::Drawing::Point(675, 132);
			this->label白炽U8->Name = L"label白炽U8";
			this->label白炽U8->Size = System::Drawing::Size(61, 22);
			this->label白炽U8->TabIndex = 45;
			this->label白炽U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U7
			// 
			this->label白炽U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U7->Location = System::Drawing::Point(607, 132);
			this->label白炽U7->Name = L"label白炽U7";
			this->label白炽U7->Size = System::Drawing::Size(61, 22);
			this->label白炽U7->TabIndex = 44;
			this->label白炽U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U6
			// 
			this->label白炽U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U6->Location = System::Drawing::Point(539, 132);
			this->label白炽U6->Name = L"label白炽U6";
			this->label白炽U6->Size = System::Drawing::Size(61, 22);
			this->label白炽U6->TabIndex = 43;
			this->label白炽U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U5
			// 
			this->label白炽U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U5->Location = System::Drawing::Point(471, 132);
			this->label白炽U5->Name = L"label白炽U5";
			this->label白炽U5->Size = System::Drawing::Size(61, 22);
			this->label白炽U5->TabIndex = 42;
			this->label白炽U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U4
			// 
			this->label白炽U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U4->Location = System::Drawing::Point(403, 132);
			this->label白炽U4->Name = L"label白炽U4";
			this->label白炽U4->Size = System::Drawing::Size(61, 22);
			this->label白炽U4->TabIndex = 41;
			this->label白炽U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U3
			// 
			this->label白炽U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U3->Location = System::Drawing::Point(335, 132);
			this->label白炽U3->Name = L"label白炽U3";
			this->label白炽U3->Size = System::Drawing::Size(61, 22);
			this->label白炽U3->TabIndex = 40;
			this->label白炽U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U2
			// 
			this->label白炽U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U2->Location = System::Drawing::Point(267, 132);
			this->label白炽U2->Name = L"label白炽U2";
			this->label白炽U2->Size = System::Drawing::Size(61, 22);
			this->label白炽U2->TabIndex = 39;
			this->label白炽U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U1
			// 
			this->label白炽U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U1->Location = System::Drawing::Point(201, 132);
			this->label白炽U1->Name = L"label白炽U1";
			this->label白炽U1->Size = System::Drawing::Size(61, 22);
			this->label白炽U1->TabIndex = 38;
			this->label白炽U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox白炽SU10
			// 
			this->textBox白炽SU10->Location = System::Drawing::Point(811, 48);
			this->textBox白炽SU10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU10->Name = L"textBox白炽SU10";
			this->textBox白炽SU10->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU10->TabIndex = 26;
			// 
			// textBox白炽SU9
			// 
			this->textBox白炽SU9->Location = System::Drawing::Point(743, 48);
			this->textBox白炽SU9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU9->Name = L"textBox白炽SU9";
			this->textBox白炽SU9->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU9->TabIndex = 24;
			// 
			// textBox白炽SU8
			// 
			this->textBox白炽SU8->Location = System::Drawing::Point(675, 48);
			this->textBox白炽SU8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU8->Name = L"textBox白炽SU8";
			this->textBox白炽SU8->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU8->TabIndex = 22;
			// 
			// textBox白炽SU7
			// 
			this->textBox白炽SU7->Location = System::Drawing::Point(607, 48);
			this->textBox白炽SU7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU7->Name = L"textBox白炽SU7";
			this->textBox白炽SU7->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU7->TabIndex = 20;
			// 
			// textBox白炽SU6
			// 
			this->textBox白炽SU6->Location = System::Drawing::Point(539, 48);
			this->textBox白炽SU6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU6->Name = L"textBox白炽SU6";
			this->textBox白炽SU6->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU6->TabIndex = 18;
			// 
			// textBox白炽SU5
			// 
			this->textBox白炽SU5->Location = System::Drawing::Point(471, 48);
			this->textBox白炽SU5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU5->Name = L"textBox白炽SU5";
			this->textBox白炽SU5->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU5->TabIndex = 16;
			// 
			// textBox白炽SU4
			// 
			this->textBox白炽SU4->Location = System::Drawing::Point(403, 48);
			this->textBox白炽SU4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU4->Name = L"textBox白炽SU4";
			this->textBox白炽SU4->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU4->TabIndex = 14;
			// 
			// textBox白炽SU3
			// 
			this->textBox白炽SU3->Location = System::Drawing::Point(335, 48);
			this->textBox白炽SU3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU3->Name = L"textBox白炽SU3";
			this->textBox白炽SU3->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU3->TabIndex = 12;
			// 
			// textBox白炽SU2
			// 
			this->textBox白炽SU2->Location = System::Drawing::Point(267, 48);
			this->textBox白炽SU2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU2->Name = L"textBox白炽SU2";
			this->textBox白炽SU2->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU2->TabIndex = 10;
			// 
			// textBox白炽SU1
			// 
			this->textBox白炽SU1->Location = System::Drawing::Point(201, 48);
			this->textBox白炽SU1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox白炽SU1->Name = L"textBox白炽SU1";
			this->textBox白炽SU1->Size = System::Drawing::Size(63, 28);
			this->textBox白炽SU1->TabIndex = 8;
			// 
			// label48
			// 
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(17, 210);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(176, 22);
			this->label48->TabIndex = 7;
			this->label48->Text = L"电流表读数I(mA)";
			// 
			// label49
			// 
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(17, 135);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(176, 22);
			this->label49->TabIndex = 6;
			this->label49->Text = L"电压表读数Ur(V)";
			// 
			// label50
			// 
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(17, 51);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(145, 22);
			this->label50->TabIndex = 5;
			this->label50->Text = L"电源电压U(V)";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label45);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox7->ForeColor = System::Drawing::Color::Red;
			this->groupBox7->Location = System::Drawing::Point(35, 829);
			this->groupBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Size = System::Drawing::Size(900, 194);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"测定非线性白炽灯泡的伏安特性";
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(5, 66);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(860, 80);
			this->label45->TabIndex = 9;
			this->label45->Text = L"    按图2正确连线，稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0-12V)，任意选取十组数据，记下相应的电压表和电流表的读数，并绘制相应的元件"
				L"伏安特性曲线。注意电源电压不可超过12V，否则会损坏灯炮。";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Blue;
			this->label46->Location = System::Drawing::Point(1188, 1064);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(35, 18);
			this->label46->TabIndex = 15;
			this->label46->Text = L"图2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(961, 790);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(400, 261);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// 元件伏安特性的测试实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1729, 968);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"元件伏安特性的测试实验内容";
			this->Text = L"元件伏安特性的测试实验内容";
			this->Load += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::元件伏安特性的测试实验内容_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart稳压))->EndInit();
			this->groupBox10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart硅管))->EndInit();
			this->groupBox11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart锗管))->EndInit();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart线性))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart白炽))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SetDVNum(textBoxSU1->Text,0,30);
	}


private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}


		 void chart线性Init();
		 void Loadchart线性();
		 void chart白炽Init();
		 void Loadchart白炽();
		 void chart锗管Init();
		 void Loadchart锗管();
		 void chart硅管Init();
		 void Loadchart硅管();
		 void chart稳压Init();
		 void Loadchart稳压();

private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label33_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	SetDVNum(textBoxSU2->Text, 0, 30);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU3->Text, 0, 30);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU4->Text, 0, 30);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU5->Text, 0, 30);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU6->Text, 0, 30);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	SetDVNum(textBoxSU7->Text, 0, 30);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU8->Text, 0, 30);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU9->Text, 0, 30);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBoxSU10->Text, 0, 30);
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	Loadchart线性();
}

private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U1->Text = GetUData();
}
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I1->Text = GetIData();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U2->Text = GetUData();
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I2->Text = GetIData();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U3->Text = GetUData();
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {

	label线性I3->Text = GetIData();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U4->Text = GetUData();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I4->Text = GetIData();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U5->Text = GetUData();
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I5->Text = GetIData();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U6->Text = GetUData();
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I6->Text = GetIData();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {

	label线性U7->Text = GetUData();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I7->Text = GetIData();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U8->Text = GetUData();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I8->Text = GetIData();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U9->Text = GetUData();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I9->Text = GetIData();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性U10->Text = GetUData();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	label线性I10->Text = GetIData();
}
private: System::Void label50_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 元件伏安特性的测试实验内容_Load(System::Object^  sender, System::EventArgs^  e) {

	lcc.SendComputerInfo(Grades[1]+"正在实验中");
	NowTrial::NowTrailCode = 1;
	NowTrial::NowTrailForm = this;
	This_Load();
}
		 void This_Load();

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label132_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU1->Text, 0, 30);
}
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU2->Text, 0, 30);
}
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU3->Text, 0, 30);
}
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU4->Text, 0, 30);
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU5->Text, 0, 30);
}
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU6->Text, 0, 30);
}
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU7->Text, 0, 30);
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU8->Text, 0, 30);
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU9->Text, 0, 30);
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox白炽SU10->Text, 0, 30);
}

		 String^ GetUData();
		 String^ GetIData();
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U1->Text = GetUData();
}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I1->Text = GetIData();
}
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U2->Text = GetUData();
}
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U3->Text = GetUData();
}
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U4->Text = GetUData();
}
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U5->Text = GetUData();
}
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U6->Text = GetUData();
}
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U7->Text = GetUData();
}
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U8->Text = GetUData();
}
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U9->Text = GetUData();
}
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽U10->Text = GetUData();
}
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I2->Text = GetIData();
}
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I3->Text = GetIData();
}
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I4->Text = GetIData();
}
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I5->Text = GetIData();
}

private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I6->Text = GetIData();
}
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I7->Text = GetIData();
}
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I8->Text = GetIData();
}
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I9->Text = GetIData();
}
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
	label白炽I10->Text = GetIData();
}
private: System::Void button245_Click(System::Object^  sender, System::EventArgs^  e) {
	Loadchart白炽();
}
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU1->Text, 0, 30);
}
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU2->Text, 0, 30);
}
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU3->Text, 0, 30);
}
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU4->Text, 0, 30);
}
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU5->Text, 0, 30);
}
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU6->Text, 0, 30);
}
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU7->Text, 0, 30);
}
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU8->Text, 0, 30);
}
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU9->Text, 0, 30);
}
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU10->Text, 0, 30);
}
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU1->Text = GetUData();
}
private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU2->Text = GetUData();
}
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU3->Text = GetUData();
}
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU4->Text = GetUData();
}
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU5->Text = GetUData();
}
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU6->Text = GetUData();
}
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU7->Text = GetUData();
}
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU8->Text = GetUData();
}
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU9->Text = GetUData();
}
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZU10->Text = GetUData();
}
private: System::Void button121_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI1->Text = GetIData();
}
private: System::Void button110_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI2->Text = GetIData();
}
private: System::Void button109_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI3->Text = GetIData();
}
private: System::Void button108_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI4->Text = GetIData();
}
private: System::Void button107_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI5->Text = GetIData();
}
private: System::Void button106_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI6->Text = GetIData();
}
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI7->Text = GetIData();
}
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI8->Text = GetIData();
}
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI9->Text = GetIData();
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管ZI10->Text = GetIData();
}
private: System::Void button120_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU1->Text, 0, 30);
}
private: System::Void button119_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU2->Text, 0, 30);
}
private: System::Void button118_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU3->Text, 0, 30);
}
private: System::Void button117_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU4->Text, 0, 30);
}
private: System::Void button116_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU5->Text, 0, 30);
}
private: System::Void button115_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU6->Text, 0, 30);
}
private: System::Void button114_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU7->Text, 0, 30);
}
private: System::Void button113_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU8->Text, 0, 30);
}
private: System::Void button112_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU9->Text, 0, 30);
}
private: System::Void button111_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管FSU10->Text, 0, 30);
}
private: System::Void button131_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU1->Text = GetUData();
}
private: System::Void button130_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU2->Text = GetUData();
}
private: System::Void button129_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU3->Text = GetUData();
}
private: System::Void button128_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU4->Text = GetUData();
}
private: System::Void button127_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU5->Text = GetUData();
}
private: System::Void button126_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU6->Text = GetUData();
}
private: System::Void button125_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU7->Text = GetUData();
}
private: System::Void button124_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU8->Text = GetUData();
}
private: System::Void button123_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU9->Text = GetUData();
}
private: System::Void button122_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FU10->Text = GetUData();
}
private: System::Void button151_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI1->Text = GetIData();
}
private: System::Void button140_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI2->Text = GetIData();
}
private: System::Void button139_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI3->Text = GetIData();
}
private: System::Void button138_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI4->Text = GetIData();
}
private: System::Void button137_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI5->Text = GetIData();
}
private: System::Void button136_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI6->Text = GetIData();
}
private: System::Void button135_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI7->Text = GetIData();
}
private: System::Void button134_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI8->Text = GetIData();
}
private: System::Void button133_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI9->Text = GetIData();
}
private: System::Void button132_Click(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI10->Text = GetIData();
}
private: System::Void button152_Click(System::Object^  sender, System::EventArgs^  e) {
	Loadchart锗管();
}
private: System::Void textBox锗管结论_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU1->Text, 0, 30);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU2->Text, 0, 30);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU3->Text, 0, 30);
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU4->Text, 0, 30);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU5->Text, 0, 30);
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU6->Text, 0, 30);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU7->Text, 0, 30);
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU8->Text, 0, 30);
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU9->Text, 0, 30);
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管ZSU10->Text, 0, 30);
}
private: System::Void button162_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU1->Text = GetUData();
}
private: System::Void button161_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU2->Text = GetUData();
}
private: System::Void button160_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU3->Text = GetUData();
}
private: System::Void button159_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU4->Text = GetUData();
}
private: System::Void button158_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU5->Text = GetUData();
}
private: System::Void button157_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU6->Text = GetUData();
}
private: System::Void button156_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU7->Text = GetUData();
}
private: System::Void button155_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU8->Text = GetUData();
}
private: System::Void button154_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU9->Text = GetUData();
}
private: System::Void button153_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZU10->Text = GetUData();
}
private: System::Void button182_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI1->Text = GetIData();
}

private: System::Void button181_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI2->Text = GetIData();
}
private: System::Void button170_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI3->Text = GetIData();
}
private: System::Void button169_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI4->Text = GetIData();
}
private: System::Void button168_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI5->Text = GetIData();
}
private: System::Void button167_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI6->Text = GetIData();
}
private: System::Void button166_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI7->Text = GetIData();
}
private: System::Void button165_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI8->Text = GetIData();
}
private: System::Void button164_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI9->Text = GetIData();
}
private: System::Void button163_Click(System::Object^  sender, System::EventArgs^  e) {
	label硅管ZI10->Text = GetIData();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU1->Text, 0, 30);
}
private: System::Void textBox稳压结论_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU2->Text, 0, 30);
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU3->Text, 0, 30);

}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU4->Text, 0, 30);
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU5->Text, 0, 30);
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU6->Text, 0, 30);
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU7->Text, 0, 30);
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU8->Text, 0, 30);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU9->Text, 0, 30);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox硅管FSU10->Text, 0, 30);
}
private: System::Void button192_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU1->Text = GetUData();
}
private: System::Void button191_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU2->Text = GetUData();
}
private: System::Void button190_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU3->Text = GetUData();
}
private: System::Void button189_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU4->Text = GetUData();
}
private: System::Void button188_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU5->Text = GetUData();
}
private: System::Void button187_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU6->Text = GetUData();
}
private: System::Void button186_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU7->Text = GetUData();
}
private: System::Void button185_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU8->Text = GetUData();
}
private: System::Void button184_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU9->Text = GetUData();
}
private: System::Void button183_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FU10->Text = GetUData();
}
private: System::Void button202_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI1->Text = GetIData();
}
private: System::Void button201_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI2->Text = GetIData();
}
private: System::Void button200_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI3->Text = GetIData();
}
private: System::Void button199_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI4->Text = GetIData();
}
private: System::Void button198_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI5->Text = GetIData();
}
private: System::Void button197_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI6->Text = GetIData();
}
private: System::Void button196_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI7->Text = GetIData();
}
private: System::Void button195_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI8->Text = GetIData();
}
private: System::Void button194_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI9->Text = GetIData();
}
private: System::Void button193_Click(System::Object^  sender, System::EventArgs^  e) {
	label1硅管FI10->Text = GetIData();
}
private: System::Void button244_Click(System::Object^  sender, System::EventArgs^  e) {
	Loadchart稳压();
}
private: System::Void button205_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU9->Text = GetUData();
}
private: System::Void button180_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU1->Text, 0, 30);
}
private: System::Void button179_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU2->Text, 0, 30);
}
private: System::Void button178_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU3->Text, 0, 30);
}
private: System::Void button177_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU4->Text, 0, 30);
}
private: System::Void button176_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU5->Text, 0, 30);
}
private: System::Void button175_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU6->Text, 0, 30);
}
private: System::Void button174_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU7->Text, 0, 30);
}
private: System::Void button173_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU8->Text, 0, 30);
}
private: System::Void button172_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU9->Text, 0, 30);
}
private: System::Void button171_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压ZSU10->Text, 0, 30);
}
private: System::Void button150_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU1->Text, 0, 30);
}
private: System::Void button149_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU2->Text, 0, 30);
}
private: System::Void button233_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU1->Text = GetUData();
}
private: System::Void button232_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU2->Text = GetUData();
}
private: System::Void button231_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU3->Text = GetUData();
}
private: System::Void button230_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU4->Text = GetUData();
}
private: System::Void button229_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU5->Text = GetUData();
}
private: System::Void button228_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU6->Text = GetUData();
}
private: System::Void button227_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU7->Text = GetUData();
}
private: System::Void button226_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU8->Text = GetUData();
}
private: System::Void button225_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU9->Text = GetUData();
}
private: System::Void button224_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZU10->Text = GetUData();
}
private: System::Void button243_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI1->Text = GetIData();
}
private: System::Void button242_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI2->Text = GetIData();
}
private: System::Void button241_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI3->Text = GetIData();
}
private: System::Void button240_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI4->Text = GetIData();
}
private: System::Void button239_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI5->Text = GetIData();
}
private: System::Void button238_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI6->Text = GetIData();
}
private: System::Void button237_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI7->Text = GetIData();
}
private: System::Void button236_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI8->Text = GetIData();
}
private: System::Void button235_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI9->Text = GetIData();
}
private: System::Void button234_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压ZI10->Text = GetIData();
}
private: System::Void button148_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU3->Text, 0, 30);
}
private: System::Void button147_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU4->Text, 0, 30);
}
private: System::Void button146_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU5->Text, 0, 30);
}
private: System::Void button145_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU6->Text, 0, 30);
}
private: System::Void button144_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU7->Text, 0, 30);
}
private: System::Void button143_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU8->Text, 0, 30);
}
private: System::Void button142_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU9->Text, 0, 30);
}
private: System::Void button141_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox稳压FSU10->Text, 0, 30);
}
private: System::Void button213_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU1->Text = GetUData();
}
private: System::Void button212_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU2->Text = GetUData();
}
private: System::Void button211_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU3->Text = GetUData();
}
private: System::Void button210_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU4->Text = GetUData();
}
private: System::Void button209_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU5->Text = GetUData();
}
private: System::Void button208_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU6->Text = GetUData();
}
private: System::Void button207_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU7->Text = GetUData();
}
private: System::Void button206_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU8->Text = GetUData();
}
private: System::Void button204_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FU10->Text = GetUData();
}
private: System::Void button223_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI1->Text = GetIData();
}
private: System::Void button222_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI2->Text = GetIData();
}
private: System::Void button221_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI3->Text = GetIData();
}
private: System::Void button220_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI4->Text = GetIData();
}
private: System::Void groupBox5_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button219_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI5->Text = GetIData();
}
private: System::Void button218_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI6->Text = GetIData();
}
private: System::Void button217_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI7->Text = GetIData();
}
private: System::Void button216_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI8->Text = GetIData();

}
private: System::Void button215_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI9->Text = GetIData();

}
private: System::Void button214_Click(System::Object^  sender, System::EventArgs^  e) {
	label稳压FI10->Text = GetIData();
}
private: System::Void textBox白炽结论_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button203_Click(System::Object^  sender, System::EventArgs^  e) {
	Loadchart硅管();
}
private: System::Void textBox硅管结论_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		public: ST_元件伏安特性测试 LoadGradeData();

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

		 public: void  SendGrade();
		 String ^GenerateStuInfo();
private: System::Void button246_Click(System::Object^  sender, System::EventArgs^  e) {
	//System::Windows::Forms::DialogResult dr = MessageBox::Show(GenerateStuInfo(), "请确认信息", MessageBoxButtons::OKCancel);
	SendGrade();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label线性I1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button136_Click_1(System::Object^  sender, System::EventArgs^  e) {
	label锗管FI6->Text = GetIData();
}
private: System::Void button81_Click_1(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU10->Text, 0, 30);
}
private: System::Void button82_Click_1(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(textBox锗管ZSU9->Text, 0, 30);
}
};
}


/********************/