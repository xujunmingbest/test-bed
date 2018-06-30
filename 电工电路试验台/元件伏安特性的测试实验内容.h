#pragma once
#include "tool/tool.h"
namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
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

			Thread ^t = gcnew Thread(gcnew ThreadStart(this, &元件伏安特性的测试实验内容::a));
			//t->Start();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;








































	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox2;








































	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


private: System::Windows::Forms::PictureBox^  pictureBox3;

private: System::Windows::Forms::GroupBox^  groupBox3;








































private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::TextBox^  textBox83;
private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::TextBox^  textBox84;
private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::TextBox^  textBox85;
private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::TextBox^  textBox86;
private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::TextBox^  textBox87;
private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::TextBox^  textBox88;
private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::TextBox^  textBox89;
private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::TextBox^  textBox90;
private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::TextBox^  textBox91;
private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::TextBox^  textBox92;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  textBox123;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::GroupBox^  groupBox4;








































private: System::Windows::Forms::Button^  button111;
private: System::Windows::Forms::TextBox^  textBox113;
private: System::Windows::Forms::Button^  button112;
private: System::Windows::Forms::TextBox^  textBox114;
private: System::Windows::Forms::Button^  button113;
private: System::Windows::Forms::TextBox^  textBox115;
private: System::Windows::Forms::Button^  button114;
private: System::Windows::Forms::TextBox^  textBox116;
private: System::Windows::Forms::Button^  button115;
private: System::Windows::Forms::TextBox^  textBox117;
private: System::Windows::Forms::Button^  button116;
private: System::Windows::Forms::TextBox^  textBox118;
private: System::Windows::Forms::Button^  button117;
private: System::Windows::Forms::TextBox^  textBox119;
private: System::Windows::Forms::Button^  button118;
private: System::Windows::Forms::TextBox^  textBox120;
private: System::Windows::Forms::Button^  button119;
private: System::Windows::Forms::TextBox^  textBox121;
private: System::Windows::Forms::Button^  button120;
private: System::Windows::Forms::TextBox^  textBox122;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;







private: System::Windows::Forms::TextBox^  textBox124;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::GroupBox^  groupBox5;








































private: System::Windows::Forms::Button^  button141;
private: System::Windows::Forms::TextBox^  textBox145;
private: System::Windows::Forms::Button^  button142;
private: System::Windows::Forms::TextBox^  textBox146;
private: System::Windows::Forms::Button^  button143;
private: System::Windows::Forms::TextBox^  textBox147;
private: System::Windows::Forms::Button^  button144;
private: System::Windows::Forms::TextBox^  textBox148;
private: System::Windows::Forms::Button^  button145;
private: System::Windows::Forms::TextBox^  textBox149;
private: System::Windows::Forms::Button^  button146;
private: System::Windows::Forms::TextBox^  textBox150;
private: System::Windows::Forms::Button^  button147;
private: System::Windows::Forms::TextBox^  textBox151;
private: System::Windows::Forms::Button^  button148;
private: System::Windows::Forms::TextBox^  textBox152;
private: System::Windows::Forms::Button^  button149;
private: System::Windows::Forms::TextBox^  textBox153;
private: System::Windows::Forms::Button^  button150;
private: System::Windows::Forms::TextBox^  textBox154;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::GroupBox^  groupBox6;








































private: System::Windows::Forms::Button^  button171;
private: System::Windows::Forms::TextBox^  textBox175;
private: System::Windows::Forms::Button^  button172;
private: System::Windows::Forms::TextBox^  textBox176;
private: System::Windows::Forms::Button^  button173;
private: System::Windows::Forms::TextBox^  textBox177;
private: System::Windows::Forms::Button^  button174;
private: System::Windows::Forms::TextBox^  textBox178;
private: System::Windows::Forms::Button^  button175;
private: System::Windows::Forms::TextBox^  textBox179;
private: System::Windows::Forms::Button^  button176;
private: System::Windows::Forms::TextBox^  textBox180;
private: System::Windows::Forms::Button^  button177;
private: System::Windows::Forms::TextBox^  textBox181;
private: System::Windows::Forms::Button^  button178;
private: System::Windows::Forms::TextBox^  textBox182;
private: System::Windows::Forms::Button^  button179;
private: System::Windows::Forms::TextBox^  textBox183;
private: System::Windows::Forms::Button^  button180;
private: System::Windows::Forms::TextBox^  textBox184;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;

private: System::Windows::Forms::Label^  label28;

private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;

private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label33;

private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;




private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::GroupBox^  groupBox10;


private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::GroupBox^  groupBox9;

private: System::Windows::Forms::Label^  label145;
private: System::Windows::Forms::Label^  label146;
private: System::Windows::Forms::Label^  label147;
private: System::Windows::Forms::Label^  label148;
private: System::Windows::Forms::Label^  label149;
private: System::Windows::Forms::Label^  label150;
private: System::Windows::Forms::Label^  label151;
private: System::Windows::Forms::Label^  label152;
private: System::Windows::Forms::Label^  label153;
private: System::Windows::Forms::Label^  label154;
private: System::Windows::Forms::Label^  label135;
private: System::Windows::Forms::Label^  label136;
private: System::Windows::Forms::Label^  label137;
private: System::Windows::Forms::Label^  label138;
private: System::Windows::Forms::Label^  label139;
private: System::Windows::Forms::Label^  label140;
private: System::Windows::Forms::Label^  label141;
private: System::Windows::Forms::Label^  label142;
private: System::Windows::Forms::Label^  label143;
private: System::Windows::Forms::Label^  label144;
private: System::Windows::Forms::Label^  label125;
private: System::Windows::Forms::Label^  label126;
private: System::Windows::Forms::Label^  label127;
private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Label^  label130;
private: System::Windows::Forms::Label^  label131;
private: System::Windows::Forms::Label^  label132;
private: System::Windows::Forms::Label^  label133;
private: System::Windows::Forms::Label^  label134;
private: System::Windows::Forms::Label^  label115;
private: System::Windows::Forms::Label^  label116;
private: System::Windows::Forms::Label^  label117;
private: System::Windows::Forms::Label^  label118;
private: System::Windows::Forms::Label^  label119;
private: System::Windows::Forms::Label^  label120;
private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Label^  label122;
private: System::Windows::Forms::Label^  label123;
private: System::Windows::Forms::Label^  label124;
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
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::Label^  label108;
private: System::Windows::Forms::Label^  label109;
private: System::Windows::Forms::Label^  label110;
private: System::Windows::Forms::Label^  label111;
private: System::Windows::Forms::Label^  label112;
private: System::Windows::Forms::Label^  label113;
private: System::Windows::Forms::Label^  label114;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Label^  label155;
private: System::Windows::Forms::Label^  label156;

private: System::Windows::Forms::Label^  label157;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label158;
private: System::Windows::Forms::Label^  label159;
private: System::Windows::Forms::Label^  label160;
private: System::Windows::Forms::Label^  label161;
private: System::Windows::Forms::Label^  label162;
private: System::Windows::Forms::Label^  label163;
private: System::Windows::Forms::Label^  label164;
private: System::Windows::Forms::Label^  label165;
private: System::Windows::Forms::Label^  label166;
private: System::Windows::Forms::Label^  label167;
private: System::Windows::Forms::Label^  label168;
private: System::Windows::Forms::Label^  label169;
private: System::Windows::Forms::Label^  label170;
private: System::Windows::Forms::Label^  label171;
private: System::Windows::Forms::Label^  label172;
private: System::Windows::Forms::Label^  label173;
private: System::Windows::Forms::Label^  label174;
private: System::Windows::Forms::Label^  label175;
private: System::Windows::Forms::Label^  label176;
private: System::Windows::Forms::Label^  label177;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::Label^  label178;
private: System::Windows::Forms::Label^  label179;
private: System::Windows::Forms::Label^  label180;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::Label^  label181;
private: System::Windows::Forms::Label^  label182;
private: System::Windows::Forms::Label^  label183;
private: System::Windows::Forms::Label^  label184;
private: System::Windows::Forms::Label^  label185;
private: System::Windows::Forms::Label^  label186;
private: System::Windows::Forms::Label^  label187;
private: System::Windows::Forms::Label^  label188;
private: System::Windows::Forms::Label^  label189;
private: System::Windows::Forms::Label^  label190;
private: System::Windows::Forms::Label^  label191;
private: System::Windows::Forms::Label^  label192;
private: System::Windows::Forms::Label^  label193;
private: System::Windows::Forms::Label^  label194;
private: System::Windows::Forms::Label^  label195;
private: System::Windows::Forms::Label^  label196;
private: System::Windows::Forms::Label^  label197;
private: System::Windows::Forms::Label^  label198;
private: System::Windows::Forms::Label^  label199;
private: System::Windows::Forms::Label^  label200;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::Label^  label201;
private: System::Windows::Forms::Label^  label202;
private: System::Windows::Forms::Label^  label203;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::Label^  label204;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(元件伏安特性的测试实验内容::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox124 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->button141 = (gcnew System::Windows::Forms::Button());
			this->textBox145 = (gcnew System::Windows::Forms::TextBox());
			this->button142 = (gcnew System::Windows::Forms::Button());
			this->textBox146 = (gcnew System::Windows::Forms::TextBox());
			this->button143 = (gcnew System::Windows::Forms::Button());
			this->textBox147 = (gcnew System::Windows::Forms::TextBox());
			this->button144 = (gcnew System::Windows::Forms::Button());
			this->textBox148 = (gcnew System::Windows::Forms::TextBox());
			this->button145 = (gcnew System::Windows::Forms::Button());
			this->textBox149 = (gcnew System::Windows::Forms::TextBox());
			this->button146 = (gcnew System::Windows::Forms::Button());
			this->textBox150 = (gcnew System::Windows::Forms::TextBox());
			this->button147 = (gcnew System::Windows::Forms::Button());
			this->textBox151 = (gcnew System::Windows::Forms::TextBox());
			this->button148 = (gcnew System::Windows::Forms::Button());
			this->textBox152 = (gcnew System::Windows::Forms::TextBox());
			this->button149 = (gcnew System::Windows::Forms::Button());
			this->textBox153 = (gcnew System::Windows::Forms::TextBox());
			this->button150 = (gcnew System::Windows::Forms::Button());
			this->textBox154 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->button171 = (gcnew System::Windows::Forms::Button());
			this->textBox175 = (gcnew System::Windows::Forms::TextBox());
			this->button172 = (gcnew System::Windows::Forms::Button());
			this->textBox176 = (gcnew System::Windows::Forms::TextBox());
			this->button173 = (gcnew System::Windows::Forms::Button());
			this->textBox177 = (gcnew System::Windows::Forms::TextBox());
			this->button174 = (gcnew System::Windows::Forms::Button());
			this->textBox178 = (gcnew System::Windows::Forms::TextBox());
			this->button175 = (gcnew System::Windows::Forms::Button());
			this->textBox179 = (gcnew System::Windows::Forms::TextBox());
			this->button176 = (gcnew System::Windows::Forms::Button());
			this->textBox180 = (gcnew System::Windows::Forms::TextBox());
			this->button177 = (gcnew System::Windows::Forms::Button());
			this->textBox181 = (gcnew System::Windows::Forms::TextBox());
			this->button178 = (gcnew System::Windows::Forms::Button());
			this->textBox182 = (gcnew System::Windows::Forms::TextBox());
			this->button179 = (gcnew System::Windows::Forms::Button());
			this->textBox183 = (gcnew System::Windows::Forms::TextBox());
			this->button180 = (gcnew System::Windows::Forms::Button());
			this->textBox184 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox123 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->textBox116 = (gcnew System::Windows::Forms::TextBox());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->textBox117 = (gcnew System::Windows::Forms::TextBox());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->textBox118 = (gcnew System::Windows::Forms::TextBox());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->textBox119 = (gcnew System::Windows::Forms::TextBox());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->textBox120 = (gcnew System::Windows::Forms::TextBox());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->textBox121 = (gcnew System::Windows::Forms::TextBox());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->textBox122 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1729, 968);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->AutoScroll = true;
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage4->Controls->Add(this->chart5);
			this->tabPage4->Controls->Add(this->groupBox10);
			this->tabPage4->Controls->Add(this->label38);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->textBox124);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->groupBox5);
			this->tabPage4->Controls->Add(this->groupBox6);
			this->tabPage4->Location = System::Drawing::Point(4, 33);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1721, 931);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"稳压二极管";
			this->tabPage4->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::tabPage4_Click);
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::Color::Transparent;
			this->groupBox10->Controls->Add(this->label11);
			this->groupBox10->Controls->Add(this->label33);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox10->ForeColor = System::Drawing::Color::Red;
			this->groupBox10->Location = System::Drawing::Point(44, 18);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(920, 241);
			this->groupBox10->TabIndex = 71;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"测定稳压二极管的伏安特性";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(31, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(698, 43);
			this->label11->TabIndex = 63;
			this->label11->Text = L"    实验设备与器件：可调稳压源（0~30V）、限流电阻（200/5W）、稳压二极管（5.1V/1W）、直流毫安表（或数字万用表）";
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(31, 113);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(847, 113);
			this->label33->TabIndex = 64;
			this->label33->Text = L"    实验步骤：将图2搭接线路(D换成稳压管并正向接入)，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0~30V)，任意选取十组数据"
				L"(U<0.8V内采集多组数据)，记下相应的电压表和电流表的读数，并绘制相应的元件伏安特性曲线。然后断电，将稳压管反向接入实验电路中，通电重复之前的实验；注意反向"
				L"电流应<25mA，否则会损坏稳压二极管。";
			this->label33->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::label33_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(1238, 285);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(48, 24);
			this->label38->TabIndex = 68;
			this->label38->Text = L"图2";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1065, 11);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(400, 271);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 67;
			this->pictureBox4->TabStop = false;
			// 
			// textBox124
			// 
			this->textBox124->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox124->Location = System::Drawing::Point(149, 813);
			this->textBox124->Name = L"textBox124";
			this->textBox124->Size = System::Drawing::Size(811, 28);
			this->textBox124->TabIndex = 12;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(40, 816);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 25);
			this->label19->TabIndex = 11;
			this->label19->Text = L"实验结论";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label145);
			this->groupBox5->Controls->Add(this->label146);
			this->groupBox5->Controls->Add(this->label147);
			this->groupBox5->Controls->Add(this->label148);
			this->groupBox5->Controls->Add(this->label149);
			this->groupBox5->Controls->Add(this->label150);
			this->groupBox5->Controls->Add(this->label151);
			this->groupBox5->Controls->Add(this->label152);
			this->groupBox5->Controls->Add(this->label153);
			this->groupBox5->Controls->Add(this->label154);
			this->groupBox5->Controls->Add(this->label135);
			this->groupBox5->Controls->Add(this->label136);
			this->groupBox5->Controls->Add(this->label137);
			this->groupBox5->Controls->Add(this->label138);
			this->groupBox5->Controls->Add(this->label139);
			this->groupBox5->Controls->Add(this->label140);
			this->groupBox5->Controls->Add(this->label141);
			this->groupBox5->Controls->Add(this->label142);
			this->groupBox5->Controls->Add(this->label143);
			this->groupBox5->Controls->Add(this->label144);
			this->groupBox5->Controls->Add(this->button141);
			this->groupBox5->Controls->Add(this->textBox145);
			this->groupBox5->Controls->Add(this->button142);
			this->groupBox5->Controls->Add(this->textBox146);
			this->groupBox5->Controls->Add(this->button143);
			this->groupBox5->Controls->Add(this->textBox147);
			this->groupBox5->Controls->Add(this->button144);
			this->groupBox5->Controls->Add(this->textBox148);
			this->groupBox5->Controls->Add(this->button145);
			this->groupBox5->Controls->Add(this->textBox149);
			this->groupBox5->Controls->Add(this->button146);
			this->groupBox5->Controls->Add(this->textBox150);
			this->groupBox5->Controls->Add(this->button147);
			this->groupBox5->Controls->Add(this->textBox151);
			this->groupBox5->Controls->Add(this->button148);
			this->groupBox5->Controls->Add(this->textBox152);
			this->groupBox5->Controls->Add(this->button149);
			this->groupBox5->Controls->Add(this->textBox153);
			this->groupBox5->Controls->Add(this->button150);
			this->groupBox5->Controls->Add(this->textBox154);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(44, 517);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(916, 212);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"反向特性测试";
			// 
			// label145
			// 
			this->label145->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label145->Location = System::Drawing::Point(814, 163);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(62, 23);
			this->label145->TabIndex = 57;
			this->label145->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label146
			// 
			this->label146->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label146->Location = System::Drawing::Point(746, 163);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(62, 23);
			this->label146->TabIndex = 56;
			this->label146->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label147
			// 
			this->label147->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label147->Location = System::Drawing::Point(678, 163);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(62, 23);
			this->label147->TabIndex = 55;
			this->label147->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label148
			// 
			this->label148->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label148->Location = System::Drawing::Point(610, 164);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(62, 23);
			this->label148->TabIndex = 54;
			this->label148->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label149
			// 
			this->label149->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label149->Location = System::Drawing::Point(542, 163);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(62, 23);
			this->label149->TabIndex = 53;
			this->label149->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label150
			// 
			this->label150->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label150->Location = System::Drawing::Point(474, 163);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(62, 23);
			this->label150->TabIndex = 52;
			this->label150->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label151
			// 
			this->label151->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label151->Location = System::Drawing::Point(406, 163);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(62, 23);
			this->label151->TabIndex = 51;
			this->label151->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label152
			// 
			this->label152->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label152->Location = System::Drawing::Point(338, 164);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(62, 23);
			this->label152->TabIndex = 50;
			this->label152->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label153
			// 
			this->label153->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label153->Location = System::Drawing::Point(270, 164);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(62, 23);
			this->label153->TabIndex = 49;
			this->label153->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label154
			// 
			this->label154->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label154->Location = System::Drawing::Point(204, 164);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(62, 23);
			this->label154->TabIndex = 48;
			this->label154->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label135
			// 
			this->label135->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label135->Location = System::Drawing::Point(815, 123);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(62, 23);
			this->label135->TabIndex = 47;
			this->label135->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label136
			// 
			this->label136->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label136->Location = System::Drawing::Point(747, 123);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(62, 23);
			this->label136->TabIndex = 46;
			this->label136->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label137
			// 
			this->label137->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label137->Location = System::Drawing::Point(679, 123);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(62, 23);
			this->label137->TabIndex = 45;
			this->label137->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label138
			// 
			this->label138->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label138->Location = System::Drawing::Point(611, 124);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(62, 23);
			this->label138->TabIndex = 44;
			this->label138->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label139
			// 
			this->label139->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label139->Location = System::Drawing::Point(543, 123);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(62, 23);
			this->label139->TabIndex = 43;
			this->label139->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label140
			// 
			this->label140->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label140->Location = System::Drawing::Point(475, 123);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(62, 23);
			this->label140->TabIndex = 42;
			this->label140->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label141
			// 
			this->label141->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label141->Location = System::Drawing::Point(407, 123);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(62, 23);
			this->label141->TabIndex = 41;
			this->label141->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label142
			// 
			this->label142->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label142->Location = System::Drawing::Point(339, 124);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(62, 23);
			this->label142->TabIndex = 40;
			this->label142->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label143
			// 
			this->label143->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label143->Location = System::Drawing::Point(271, 124);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(62, 23);
			this->label143->TabIndex = 39;
			this->label143->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label144
			// 
			this->label144->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label144->Location = System::Drawing::Point(205, 124);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(62, 23);
			this->label144->TabIndex = 38;
			this->label144->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button141
			// 
			this->button141->Location = System::Drawing::Point(815, 73);
			this->button141->Name = L"button141";
			this->button141->Size = System::Drawing::Size(62, 34);
			this->button141->TabIndex = 27;
			this->button141->Text = L"设置";
			this->button141->UseVisualStyleBackColor = true;
			// 
			// textBox145
			// 
			this->textBox145->Location = System::Drawing::Point(815, 37);
			this->textBox145->Name = L"textBox145";
			this->textBox145->Size = System::Drawing::Size(62, 28);
			this->textBox145->TabIndex = 26;
			// 
			// button142
			// 
			this->button142->Location = System::Drawing::Point(747, 73);
			this->button142->Name = L"button142";
			this->button142->Size = System::Drawing::Size(62, 34);
			this->button142->TabIndex = 25;
			this->button142->Text = L"设置";
			this->button142->UseVisualStyleBackColor = true;
			// 
			// textBox146
			// 
			this->textBox146->Location = System::Drawing::Point(747, 37);
			this->textBox146->Name = L"textBox146";
			this->textBox146->Size = System::Drawing::Size(62, 28);
			this->textBox146->TabIndex = 24;
			// 
			// button143
			// 
			this->button143->Location = System::Drawing::Point(679, 73);
			this->button143->Name = L"button143";
			this->button143->Size = System::Drawing::Size(62, 34);
			this->button143->TabIndex = 23;
			this->button143->Text = L"设置";
			this->button143->UseVisualStyleBackColor = true;
			// 
			// textBox147
			// 
			this->textBox147->Location = System::Drawing::Point(679, 37);
			this->textBox147->Name = L"textBox147";
			this->textBox147->Size = System::Drawing::Size(62, 28);
			this->textBox147->TabIndex = 22;
			// 
			// button144
			// 
			this->button144->Location = System::Drawing::Point(611, 73);
			this->button144->Name = L"button144";
			this->button144->Size = System::Drawing::Size(62, 34);
			this->button144->TabIndex = 21;
			this->button144->Text = L"设置";
			this->button144->UseVisualStyleBackColor = true;
			// 
			// textBox148
			// 
			this->textBox148->Location = System::Drawing::Point(611, 37);
			this->textBox148->Name = L"textBox148";
			this->textBox148->Size = System::Drawing::Size(62, 28);
			this->textBox148->TabIndex = 20;
			// 
			// button145
			// 
			this->button145->Location = System::Drawing::Point(543, 73);
			this->button145->Name = L"button145";
			this->button145->Size = System::Drawing::Size(62, 34);
			this->button145->TabIndex = 19;
			this->button145->Text = L"设置";
			this->button145->UseVisualStyleBackColor = true;
			// 
			// textBox149
			// 
			this->textBox149->Location = System::Drawing::Point(543, 37);
			this->textBox149->Name = L"textBox149";
			this->textBox149->Size = System::Drawing::Size(62, 28);
			this->textBox149->TabIndex = 18;
			// 
			// button146
			// 
			this->button146->Location = System::Drawing::Point(475, 73);
			this->button146->Name = L"button146";
			this->button146->Size = System::Drawing::Size(62, 34);
			this->button146->TabIndex = 17;
			this->button146->Text = L"设置";
			this->button146->UseVisualStyleBackColor = true;
			// 
			// textBox150
			// 
			this->textBox150->Location = System::Drawing::Point(475, 37);
			this->textBox150->Name = L"textBox150";
			this->textBox150->Size = System::Drawing::Size(62, 28);
			this->textBox150->TabIndex = 16;
			// 
			// button147
			// 
			this->button147->Location = System::Drawing::Point(407, 73);
			this->button147->Name = L"button147";
			this->button147->Size = System::Drawing::Size(62, 34);
			this->button147->TabIndex = 15;
			this->button147->Text = L"设置";
			this->button147->UseVisualStyleBackColor = true;
			// 
			// textBox151
			// 
			this->textBox151->Location = System::Drawing::Point(407, 37);
			this->textBox151->Name = L"textBox151";
			this->textBox151->Size = System::Drawing::Size(62, 28);
			this->textBox151->TabIndex = 14;
			// 
			// button148
			// 
			this->button148->Location = System::Drawing::Point(339, 73);
			this->button148->Name = L"button148";
			this->button148->Size = System::Drawing::Size(62, 34);
			this->button148->TabIndex = 13;
			this->button148->Text = L"设置";
			this->button148->UseVisualStyleBackColor = true;
			// 
			// textBox152
			// 
			this->textBox152->Location = System::Drawing::Point(339, 37);
			this->textBox152->Name = L"textBox152";
			this->textBox152->Size = System::Drawing::Size(62, 28);
			this->textBox152->TabIndex = 12;
			// 
			// button149
			// 
			this->button149->Location = System::Drawing::Point(271, 73);
			this->button149->Name = L"button149";
			this->button149->Size = System::Drawing::Size(62, 34);
			this->button149->TabIndex = 11;
			this->button149->Text = L"设置";
			this->button149->UseVisualStyleBackColor = true;
			// 
			// textBox153
			// 
			this->textBox153->Location = System::Drawing::Point(271, 37);
			this->textBox153->Name = L"textBox153";
			this->textBox153->Size = System::Drawing::Size(62, 28);
			this->textBox153->TabIndex = 10;
			// 
			// button150
			// 
			this->button150->Location = System::Drawing::Point(205, 73);
			this->button150->Name = L"button150";
			this->button150->Size = System::Drawing::Size(62, 34);
			this->button150->TabIndex = 9;
			this->button150->Text = L"设置";
			this->button150->UseVisualStyleBackColor = true;
			// 
			// textBox154
			// 
			this->textBox154->Location = System::Drawing::Point(205, 37);
			this->textBox154->Name = L"textBox154";
			this->textBox154->Size = System::Drawing::Size(62, 28);
			this->textBox154->TabIndex = 8;
			// 
			// label20
			// 
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(21, 164);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(176, 23);
			this->label20->TabIndex = 7;
			this->label20->Text = L"电流表读数I(mA)";
			// 
			// label21
			// 
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(21, 124);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(176, 23);
			this->label21->TabIndex = 6;
			this->label21->Text = L"电压表读数Ud(V)";
			// 
			// label22
			// 
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(40, 40);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(145, 23);
			this->label22->TabIndex = 5;
			this->label22->Text = L"电源电压U(V)";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label125);
			this->groupBox6->Controls->Add(this->label126);
			this->groupBox6->Controls->Add(this->label127);
			this->groupBox6->Controls->Add(this->label128);
			this->groupBox6->Controls->Add(this->label129);
			this->groupBox6->Controls->Add(this->label130);
			this->groupBox6->Controls->Add(this->label131);
			this->groupBox6->Controls->Add(this->label132);
			this->groupBox6->Controls->Add(this->label133);
			this->groupBox6->Controls->Add(this->label134);
			this->groupBox6->Controls->Add(this->label115);
			this->groupBox6->Controls->Add(this->label116);
			this->groupBox6->Controls->Add(this->label117);
			this->groupBox6->Controls->Add(this->label118);
			this->groupBox6->Controls->Add(this->label119);
			this->groupBox6->Controls->Add(this->label120);
			this->groupBox6->Controls->Add(this->label121);
			this->groupBox6->Controls->Add(this->label122);
			this->groupBox6->Controls->Add(this->label123);
			this->groupBox6->Controls->Add(this->label124);
			this->groupBox6->Controls->Add(this->button171);
			this->groupBox6->Controls->Add(this->textBox175);
			this->groupBox6->Controls->Add(this->button172);
			this->groupBox6->Controls->Add(this->textBox176);
			this->groupBox6->Controls->Add(this->button173);
			this->groupBox6->Controls->Add(this->textBox177);
			this->groupBox6->Controls->Add(this->button174);
			this->groupBox6->Controls->Add(this->textBox178);
			this->groupBox6->Controls->Add(this->button175);
			this->groupBox6->Controls->Add(this->textBox179);
			this->groupBox6->Controls->Add(this->button176);
			this->groupBox6->Controls->Add(this->textBox180);
			this->groupBox6->Controls->Add(this->button177);
			this->groupBox6->Controls->Add(this->textBox181);
			this->groupBox6->Controls->Add(this->button178);
			this->groupBox6->Controls->Add(this->textBox182);
			this->groupBox6->Controls->Add(this->button179);
			this->groupBox6->Controls->Add(this->textBox183);
			this->groupBox6->Controls->Add(this->button180);
			this->groupBox6->Controls->Add(this->textBox184);
			this->groupBox6->Controls->Add(this->label23);
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->Location = System::Drawing::Point(44, 293);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(916, 208);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"正向特性测试";
			// 
			// label125
			// 
			this->label125->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label125->Location = System::Drawing::Point(817, 161);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(62, 23);
			this->label125->TabIndex = 57;
			this->label125->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label126
			// 
			this->label126->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label126->Location = System::Drawing::Point(749, 161);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(62, 23);
			this->label126->TabIndex = 56;
			this->label126->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label127
			// 
			this->label127->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label127->Location = System::Drawing::Point(681, 161);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(62, 23);
			this->label127->TabIndex = 55;
			this->label127->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label128
			// 
			this->label128->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label128->Location = System::Drawing::Point(613, 162);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(62, 23);
			this->label128->TabIndex = 54;
			this->label128->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label129
			// 
			this->label129->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label129->Location = System::Drawing::Point(545, 161);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(62, 23);
			this->label129->TabIndex = 53;
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label130
			// 
			this->label130->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label130->Location = System::Drawing::Point(477, 161);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(62, 23);
			this->label130->TabIndex = 52;
			this->label130->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label131
			// 
			this->label131->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label131->Location = System::Drawing::Point(409, 161);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(62, 23);
			this->label131->TabIndex = 51;
			this->label131->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label132
			// 
			this->label132->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label132->Location = System::Drawing::Point(341, 162);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(62, 23);
			this->label132->TabIndex = 50;
			this->label132->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label133
			// 
			this->label133->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label133->Location = System::Drawing::Point(273, 162);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(62, 23);
			this->label133->TabIndex = 49;
			this->label133->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label134
			// 
			this->label134->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label134->Location = System::Drawing::Point(207, 162);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(62, 23);
			this->label134->TabIndex = 48;
			this->label134->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label115
			// 
			this->label115->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label115->Location = System::Drawing::Point(817, 123);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(62, 23);
			this->label115->TabIndex = 47;
			this->label115->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label116
			// 
			this->label116->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label116->Location = System::Drawing::Point(749, 123);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(62, 23);
			this->label116->TabIndex = 46;
			this->label116->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label117
			// 
			this->label117->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label117->Location = System::Drawing::Point(681, 123);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(62, 23);
			this->label117->TabIndex = 45;
			this->label117->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label118
			// 
			this->label118->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label118->Location = System::Drawing::Point(613, 124);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(62, 23);
			this->label118->TabIndex = 44;
			this->label118->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label119
			// 
			this->label119->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label119->Location = System::Drawing::Point(545, 123);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(62, 23);
			this->label119->TabIndex = 43;
			this->label119->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label120
			// 
			this->label120->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label120->Location = System::Drawing::Point(477, 123);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(62, 23);
			this->label120->TabIndex = 42;
			this->label120->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label121
			// 
			this->label121->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label121->Location = System::Drawing::Point(409, 123);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(62, 23);
			this->label121->TabIndex = 41;
			this->label121->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label122
			// 
			this->label122->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label122->Location = System::Drawing::Point(341, 124);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(62, 23);
			this->label122->TabIndex = 40;
			this->label122->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label123
			// 
			this->label123->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label123->Location = System::Drawing::Point(273, 124);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(62, 23);
			this->label123->TabIndex = 39;
			this->label123->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->Location = System::Drawing::Point(207, 124);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(62, 23);
			this->label124->TabIndex = 38;
			this->label124->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button171
			// 
			this->button171->Location = System::Drawing::Point(817, 73);
			this->button171->Name = L"button171";
			this->button171->Size = System::Drawing::Size(62, 34);
			this->button171->TabIndex = 27;
			this->button171->Text = L"设置";
			this->button171->UseVisualStyleBackColor = true;
			// 
			// textBox175
			// 
			this->textBox175->Location = System::Drawing::Point(817, 37);
			this->textBox175->Name = L"textBox175";
			this->textBox175->Size = System::Drawing::Size(62, 28);
			this->textBox175->TabIndex = 26;
			// 
			// button172
			// 
			this->button172->Location = System::Drawing::Point(749, 73);
			this->button172->Name = L"button172";
			this->button172->Size = System::Drawing::Size(62, 34);
			this->button172->TabIndex = 25;
			this->button172->Text = L"设置";
			this->button172->UseVisualStyleBackColor = true;
			// 
			// textBox176
			// 
			this->textBox176->Location = System::Drawing::Point(749, 37);
			this->textBox176->Name = L"textBox176";
			this->textBox176->Size = System::Drawing::Size(62, 28);
			this->textBox176->TabIndex = 24;
			// 
			// button173
			// 
			this->button173->Location = System::Drawing::Point(681, 73);
			this->button173->Name = L"button173";
			this->button173->Size = System::Drawing::Size(62, 34);
			this->button173->TabIndex = 23;
			this->button173->Text = L"设置";
			this->button173->UseVisualStyleBackColor = true;
			// 
			// textBox177
			// 
			this->textBox177->Location = System::Drawing::Point(681, 37);
			this->textBox177->Name = L"textBox177";
			this->textBox177->Size = System::Drawing::Size(62, 28);
			this->textBox177->TabIndex = 22;
			// 
			// button174
			// 
			this->button174->Location = System::Drawing::Point(613, 73);
			this->button174->Name = L"button174";
			this->button174->Size = System::Drawing::Size(62, 34);
			this->button174->TabIndex = 21;
			this->button174->Text = L"设置";
			this->button174->UseVisualStyleBackColor = true;
			// 
			// textBox178
			// 
			this->textBox178->Location = System::Drawing::Point(613, 37);
			this->textBox178->Name = L"textBox178";
			this->textBox178->Size = System::Drawing::Size(62, 28);
			this->textBox178->TabIndex = 20;
			// 
			// button175
			// 
			this->button175->Location = System::Drawing::Point(545, 73);
			this->button175->Name = L"button175";
			this->button175->Size = System::Drawing::Size(62, 34);
			this->button175->TabIndex = 19;
			this->button175->Text = L"设置";
			this->button175->UseVisualStyleBackColor = true;
			// 
			// textBox179
			// 
			this->textBox179->Location = System::Drawing::Point(545, 37);
			this->textBox179->Name = L"textBox179";
			this->textBox179->Size = System::Drawing::Size(62, 28);
			this->textBox179->TabIndex = 18;
			// 
			// button176
			// 
			this->button176->Location = System::Drawing::Point(477, 73);
			this->button176->Name = L"button176";
			this->button176->Size = System::Drawing::Size(62, 34);
			this->button176->TabIndex = 17;
			this->button176->Text = L"设置";
			this->button176->UseVisualStyleBackColor = true;
			// 
			// textBox180
			// 
			this->textBox180->Location = System::Drawing::Point(477, 37);
			this->textBox180->Name = L"textBox180";
			this->textBox180->Size = System::Drawing::Size(62, 28);
			this->textBox180->TabIndex = 16;
			// 
			// button177
			// 
			this->button177->Location = System::Drawing::Point(409, 73);
			this->button177->Name = L"button177";
			this->button177->Size = System::Drawing::Size(62, 34);
			this->button177->TabIndex = 15;
			this->button177->Text = L"设置";
			this->button177->UseVisualStyleBackColor = true;
			// 
			// textBox181
			// 
			this->textBox181->Location = System::Drawing::Point(409, 37);
			this->textBox181->Name = L"textBox181";
			this->textBox181->Size = System::Drawing::Size(62, 28);
			this->textBox181->TabIndex = 14;
			// 
			// button178
			// 
			this->button178->Location = System::Drawing::Point(341, 73);
			this->button178->Name = L"button178";
			this->button178->Size = System::Drawing::Size(62, 34);
			this->button178->TabIndex = 13;
			this->button178->Text = L"设置";
			this->button178->UseVisualStyleBackColor = true;
			// 
			// textBox182
			// 
			this->textBox182->Location = System::Drawing::Point(341, 37);
			this->textBox182->Name = L"textBox182";
			this->textBox182->Size = System::Drawing::Size(62, 28);
			this->textBox182->TabIndex = 12;
			// 
			// button179
			// 
			this->button179->Location = System::Drawing::Point(273, 73);
			this->button179->Name = L"button179";
			this->button179->Size = System::Drawing::Size(62, 34);
			this->button179->TabIndex = 11;
			this->button179->Text = L"设置";
			this->button179->UseVisualStyleBackColor = true;
			// 
			// textBox183
			// 
			this->textBox183->Location = System::Drawing::Point(273, 37);
			this->textBox183->Name = L"textBox183";
			this->textBox183->Size = System::Drawing::Size(62, 28);
			this->textBox183->TabIndex = 10;
			// 
			// button180
			// 
			this->button180->Location = System::Drawing::Point(207, 73);
			this->button180->Name = L"button180";
			this->button180->Size = System::Drawing::Size(62, 34);
			this->button180->TabIndex = 9;
			this->button180->Text = L"设置";
			this->button180->UseVisualStyleBackColor = true;
			// 
			// textBox184
			// 
			this->textBox184->Location = System::Drawing::Point(207, 37);
			this->textBox184->Name = L"textBox184";
			this->textBox184->Size = System::Drawing::Size(62, 28);
			this->textBox184->TabIndex = 8;
			// 
			// label23
			// 
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(23, 164);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(176, 23);
			this->label23->TabIndex = 7;
			this->label23->Text = L"电流表读数I(mA)";
			// 
			// label24
			// 
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(23, 124);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(176, 23);
			this->label24->TabIndex = 6;
			this->label24->Text = L"电压表读数Ud(V)";
			// 
			// label25
			// 
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(42, 40);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(145, 23);
			this->label25->TabIndex = 5;
			this->label25->Text = L"电源电压U(V)";
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage1->Controls->Add(this->groupBox8);
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage1->ForeColor = System::Drawing::Color::Black;
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1721, 931);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"线性电阻器";
			this->tabPage1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::tabPage1_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(43, 48);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(894, 217);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"测定线性电阻器的伏安特性";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(24, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(846, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"   实验设备与器件：可调稳压源（0~30V）、电阻（1K/2W）、直流毫安表（或数字万用表）\r\n";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(15, 108);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(820, 76);
			this->label28->TabIndex = 7;
			this->label28->Text = L"    实验步骤：按图1搭接线路，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0~30V)，任意选取十组数据，记下相应的电压表和电流表"
				L"的读数，并绘制相应的元件伏安特性曲线。";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(1133, 321);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(41, 20);
			this->label35->TabIndex = 8;
			this->label35->Text = L"图1";
			// 
			// chart1
			// 
			chartArea12->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->chart1->Legends->Add(legend12);
			this->chart1->Location = System::Drawing::Point(966, 431);
			this->chart1->Name = L"chart1";
			series12->ChartArea = L"ChartArea1";
			series12->Legend = L"Legend1";
			series12->Name = L"Series1";
			this->chart1->Series->Add(series12);
			this->chart1->Size = System::Drawing::Size(416, 360);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 761);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(789, 30);
			this->textBox1->TabIndex = 4;
			// 
			// groupBox1
			// 
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
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->label42);
			this->groupBox1->Controls->Add(this->label41);
			this->groupBox1->Controls->Add(this->label40);
			this->groupBox1->Controls->Add(this->label39);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(43, 398);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(894, 229);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"测量数据";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Location = System::Drawing::Point(808, 123);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(62, 23);
			this->label45->TabIndex = 47;
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Location = System::Drawing::Point(740, 123);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(62, 23);
			this->label46->TabIndex = 46;
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Location = System::Drawing::Point(672, 123);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(62, 23);
			this->label47->TabIndex = 45;
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Location = System::Drawing::Point(604, 124);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(62, 23);
			this->label48->TabIndex = 44;
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Location = System::Drawing::Point(536, 123);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(62, 23);
			this->label49->TabIndex = 43;
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Location = System::Drawing::Point(468, 123);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(62, 23);
			this->label50->TabIndex = 42;
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Location = System::Drawing::Point(400, 123);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(62, 23);
			this->label51->TabIndex = 41;
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label52
			// 
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label52->Location = System::Drawing::Point(332, 124);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(62, 23);
			this->label52->TabIndex = 40;
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Location = System::Drawing::Point(264, 124);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(62, 23);
			this->label53->TabIndex = 39;
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Location = System::Drawing::Point(198, 124);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(62, 23);
			this->label54->TabIndex = 38;
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Location = System::Drawing::Point(808, 170);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(62, 23);
			this->label44->TabIndex = 37;
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->Location = System::Drawing::Point(740, 170);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(62, 23);
			this->label43->TabIndex = 36;
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label42
			// 
			this->label42->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label42->Location = System::Drawing::Point(672, 170);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(62, 23);
			this->label42->TabIndex = 35;
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label41
			// 
			this->label41->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label41->Location = System::Drawing::Point(604, 171);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(62, 23);
			this->label41->TabIndex = 34;
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label40->Location = System::Drawing::Point(536, 170);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(62, 23);
			this->label40->TabIndex = 33;
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label39
			// 
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label39->Location = System::Drawing::Point(468, 170);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(62, 23);
			this->label39->TabIndex = 32;
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Location = System::Drawing::Point(400, 170);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(62, 23);
			this->label34->TabIndex = 31;
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(332, 171);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(62, 23);
			this->label27->TabIndex = 30;
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(264, 171);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 23);
			this->label26->TabIndex = 29;
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(198, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 23);
			this->label6->TabIndex = 28;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(808, 73);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(62, 34);
			this->button10->TabIndex = 27;
			this->button10->Text = L"设置";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(808, 37);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(62, 30);
			this->textBox11->TabIndex = 26;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(740, 73);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 34);
			this->button9->TabIndex = 25;
			this->button9->Text = L"设置";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(740, 37);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(62, 30);
			this->textBox10->TabIndex = 24;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(672, 73);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 34);
			this->button8->TabIndex = 23;
			this->button8->Text = L"设置";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(672, 37);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(62, 30);
			this->textBox9->TabIndex = 22;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(604, 73);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 34);
			this->button7->TabIndex = 21;
			this->button7->Text = L"设置";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(604, 37);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(62, 30);
			this->textBox8->TabIndex = 20;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(536, 73);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 34);
			this->button6->TabIndex = 19;
			this->button6->Text = L"设置";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(536, 37);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(62, 30);
			this->textBox7->TabIndex = 18;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(468, 73);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 34);
			this->button5->TabIndex = 17;
			this->button5->Text = L"设置";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(468, 37);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(62, 30);
			this->textBox6->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(400, 73);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 34);
			this->button4->TabIndex = 15;
			this->button4->Text = L"设置";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(400, 37);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(62, 30);
			this->textBox5->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(332, 73);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 34);
			this->button3->TabIndex = 13;
			this->button3->Text = L"设置";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(332, 37);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 30);
			this->textBox4->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 34);
			this->button2->TabIndex = 11;
			this->button2->Text = L"设置";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(264, 37);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 30);
			this->textBox3->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(198, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"设置";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(198, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 30);
			this->textBox2->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(14, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 23);
			this->label5->TabIndex = 7;
			this->label5->Text = L"电流表读数I(mA)";
			// 
			// label4
			// 
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(14, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"电压表读数Ur(V)";
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(33, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"电源电压U(V)";
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(39, 768);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"实验结论";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(966, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 261);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Controls->Add(this->textBox62);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1721, 931);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"非线性白炽灯泡";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->label30);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox7->ForeColor = System::Drawing::Color::Red;
			this->groupBox7->Location = System::Drawing::Point(51, 67);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(900, 194);
			this->groupBox7->TabIndex = 13;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"测定非线性白炽灯泡的伏安特性";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(8, 50);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(849, 41);
			this->label29->TabIndex = 8;
			this->label29->Text = L"    实验设备与器件：可调稳压源（0~30V）、白炽灯炮（DC12V）、直流毫安表（或数字万用表）\r\n";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(6, 106);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(860, 65);
			this->label30->TabIndex = 9;
			this->label30->Text = L"    实验步骤：将图1中电阻换成白炽灯，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0~12V)，任意选取十组数据，记下相应的电压表"
				L"和电流表的读数，并绘制相应的元件伏安特性曲线。注意电源电压不可超过12V，否则会损坏灯炮";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(1180, 319);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(48, 24);
			this->label36->TabIndex = 12;
			this->label36->Text = L"图1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1009, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(400, 261);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// chart2
			// 
			chartArea11->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->chart2->Legends->Add(legend11);
			this->chart2->Location = System::Drawing::Point(1009, 434);
			this->chart2->Name = L"chart2";
			series11->ChartArea = L"ChartArea1";
			series11->Legend = L"Legend1";
			series11->Name = L"Series1";
			this->chart2->Series->Add(series11);
			this->chart2->Size = System::Drawing::Size(416, 360);
			this->chart2->TabIndex = 10;
			this->chart2->Text = L"chart2";
			// 
			// textBox62
			// 
			this->textBox62->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox62->Location = System::Drawing::Point(168, 763);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(783, 28);
			this->textBox62->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(59, 768);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 23);
			this->label10->TabIndex = 5;
			this->label10->Text = L"实验结论";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label65);
			this->groupBox2->Controls->Add(this->label66);
			this->groupBox2->Controls->Add(this->label67);
			this->groupBox2->Controls->Add(this->label68);
			this->groupBox2->Controls->Add(this->label69);
			this->groupBox2->Controls->Add(this->label70);
			this->groupBox2->Controls->Add(this->label71);
			this->groupBox2->Controls->Add(this->label72);
			this->groupBox2->Controls->Add(this->label73);
			this->groupBox2->Controls->Add(this->label74);
			this->groupBox2->Controls->Add(this->label55);
			this->groupBox2->Controls->Add(this->label56);
			this->groupBox2->Controls->Add(this->label57);
			this->groupBox2->Controls->Add(this->label58);
			this->groupBox2->Controls->Add(this->label59);
			this->groupBox2->Controls->Add(this->label60);
			this->groupBox2->Controls->Add(this->label61);
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->label63);
			this->groupBox2->Controls->Add(this->label64);
			this->groupBox2->Controls->Add(this->button51);
			this->groupBox2->Controls->Add(this->textBox52);
			this->groupBox2->Controls->Add(this->button52);
			this->groupBox2->Controls->Add(this->textBox53);
			this->groupBox2->Controls->Add(this->button53);
			this->groupBox2->Controls->Add(this->textBox54);
			this->groupBox2->Controls->Add(this->button54);
			this->groupBox2->Controls->Add(this->textBox55);
			this->groupBox2->Controls->Add(this->button55);
			this->groupBox2->Controls->Add(this->textBox56);
			this->groupBox2->Controls->Add(this->button56);
			this->groupBox2->Controls->Add(this->textBox57);
			this->groupBox2->Controls->Add(this->button57);
			this->groupBox2->Controls->Add(this->textBox58);
			this->groupBox2->Controls->Add(this->button58);
			this->groupBox2->Controls->Add(this->textBox59);
			this->groupBox2->Controls->Add(this->button59);
			this->groupBox2->Controls->Add(this->textBox60);
			this->groupBox2->Controls->Add(this->button60);
			this->groupBox2->Controls->Add(this->textBox61);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(51, 396);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(900, 231);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"测量数据";
			// 
			// label65
			// 
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->Location = System::Drawing::Point(811, 177);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(62, 23);
			this->label65->TabIndex = 57;
			this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label66
			// 
			this->label66->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label66->Location = System::Drawing::Point(743, 177);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(62, 23);
			this->label66->TabIndex = 56;
			this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->Location = System::Drawing::Point(675, 177);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(62, 23);
			this->label67->TabIndex = 55;
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label68
			// 
			this->label68->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label68->Location = System::Drawing::Point(607, 178);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(62, 23);
			this->label68->TabIndex = 54;
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->Location = System::Drawing::Point(539, 177);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(62, 23);
			this->label69->TabIndex = 53;
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->Location = System::Drawing::Point(471, 177);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(62, 23);
			this->label70->TabIndex = 52;
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label71
			// 
			this->label71->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label71->Location = System::Drawing::Point(403, 177);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(62, 23);
			this->label71->TabIndex = 51;
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label72
			// 
			this->label72->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label72->Location = System::Drawing::Point(335, 178);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(62, 23);
			this->label72->TabIndex = 50;
			this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label73
			// 
			this->label73->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label73->Location = System::Drawing::Point(267, 178);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(62, 23);
			this->label73->TabIndex = 49;
			this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label74
			// 
			this->label74->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label74->Location = System::Drawing::Point(201, 178);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(62, 23);
			this->label74->TabIndex = 48;
			this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Location = System::Drawing::Point(811, 132);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(62, 23);
			this->label55->TabIndex = 47;
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Location = System::Drawing::Point(743, 132);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(62, 23);
			this->label56->TabIndex = 46;
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Location = System::Drawing::Point(675, 132);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(62, 23);
			this->label57->TabIndex = 45;
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Location = System::Drawing::Point(607, 133);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(62, 23);
			this->label58->TabIndex = 44;
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Location = System::Drawing::Point(539, 132);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(62, 23);
			this->label59->TabIndex = 43;
			this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Location = System::Drawing::Point(471, 132);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(62, 23);
			this->label60->TabIndex = 42;
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Location = System::Drawing::Point(403, 132);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(62, 23);
			this->label61->TabIndex = 41;
			this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Location = System::Drawing::Point(335, 133);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(62, 23);
			this->label62->TabIndex = 40;
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label63
			// 
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label63->Location = System::Drawing::Point(267, 133);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(62, 23);
			this->label63->TabIndex = 39;
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label64
			// 
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label64->Location = System::Drawing::Point(201, 133);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(62, 23);
			this->label64->TabIndex = 38;
			this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(811, 84);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(62, 34);
			this->button51->TabIndex = 27;
			this->button51->Text = L"设置";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(811, 48);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(62, 28);
			this->textBox52->TabIndex = 26;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(743, 84);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(62, 34);
			this->button52->TabIndex = 25;
			this->button52->Text = L"设置";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(743, 48);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(62, 28);
			this->textBox53->TabIndex = 24;
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(675, 84);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(62, 34);
			this->button53->TabIndex = 23;
			this->button53->Text = L"设置";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(675, 48);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(62, 28);
			this->textBox54->TabIndex = 22;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(607, 84);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(62, 34);
			this->button54->TabIndex = 21;
			this->button54->Text = L"设置";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(607, 48);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(62, 28);
			this->textBox55->TabIndex = 20;
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(539, 84);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(62, 34);
			this->button55->TabIndex = 19;
			this->button55->Text = L"设置";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(539, 48);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(62, 28);
			this->textBox56->TabIndex = 18;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(471, 84);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(62, 34);
			this->button56->TabIndex = 17;
			this->button56->Text = L"设置";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(471, 48);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(62, 28);
			this->textBox57->TabIndex = 16;
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(403, 84);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(62, 34);
			this->button57->TabIndex = 15;
			this->button57->Text = L"设置";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(403, 48);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(62, 28);
			this->textBox58->TabIndex = 14;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(335, 84);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(62, 34);
			this->button58->TabIndex = 13;
			this->button58->Text = L"设置";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(335, 48);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(62, 28);
			this->textBox59->TabIndex = 12;
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(267, 84);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(62, 34);
			this->button59->TabIndex = 11;
			this->button59->Text = L"设置";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(267, 48);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(62, 28);
			this->textBox60->TabIndex = 10;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(201, 84);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(62, 34);
			this->button60->TabIndex = 9;
			this->button60->Text = L"设置";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(201, 48);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(62, 28);
			this->textBox61->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(19, 180);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 23);
			this->label7->TabIndex = 7;
			this->label7->Text = L"电流表读数I(mA)";
			// 
			// label8
			// 
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(17, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 23);
			this->label8->TabIndex = 6;
			this->label8->Text = L"电压表读数Ur(V)";
			// 
			// label9
			// 
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(36, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 23);
			this->label9->TabIndex = 5;
			this->label9->Text = L"电源电压U(V)";
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Controls->Add(this->groupBox9);
			this->tabPage3->Controls->Add(this->label37);
			this->tabPage3->Controls->Add(this->textBox123);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->ForeColor = System::Drawing::Color::Black;
			this->tabPage3->Location = System::Drawing::Point(4, 33);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1721, 931);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"半导体二极管-锗管2AP9";
			this->tabPage3->Click += gcnew System::EventHandler(this, &元件伏安特性的测试实验内容::tabPage3_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label31);
			this->groupBox9->Controls->Add(this->label32);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox9->ForeColor = System::Drawing::Color::Red;
			this->groupBox9->Location = System::Drawing::Point(48, 34);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(881, 201);
			this->groupBox9->TabIndex = 66;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"测定半导体二极管的伏安特性-锗管2AP9";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(31, 36);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(842, 62);
			this->label31->TabIndex = 60;
			this->label31->Text = L"    实验设备与器件：可调稳压源（0~30V）、锗管（2AP9）、直流毫安表（或数字万用表）通电重复之前的实验；";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(34, 98);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(842, 90);
			this->label32->TabIndex = 61;
			this->label32->Text = L"    实验步骤：将图2搭接线路(D=2AP9,正向接入)，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0~30V)，任意选取十组数据"
				L"(U<0.5V内采集多组数据)，记下相应的电压表和电流表的读数，并绘制相应的元件伏安特性曲线。然后断电，将D=2AP9反向接入实验电路中，通电重复之前的实验；";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(1199, 321);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(48, 24);
			this->label37->TabIndex = 64;
			this->label37->Text = L"图2";
			// 
			// textBox123
			// 
			this->textBox123->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox123->Location = System::Drawing::Point(153, 860);
			this->textBox123->Name = L"textBox123";
			this->textBox123->Size = System::Drawing::Size(776, 28);
			this->textBox123->TabIndex = 8;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(44, 868);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(95, 20);
			this->label18->TabIndex = 7;
			this->label18->Text = L"实验结论";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label105);
			this->groupBox4->Controls->Add(this->label106);
			this->groupBox4->Controls->Add(this->label107);
			this->groupBox4->Controls->Add(this->label108);
			this->groupBox4->Controls->Add(this->label109);
			this->groupBox4->Controls->Add(this->label110);
			this->groupBox4->Controls->Add(this->label111);
			this->groupBox4->Controls->Add(this->label112);
			this->groupBox4->Controls->Add(this->label113);
			this->groupBox4->Controls->Add(this->label114);
			this->groupBox4->Controls->Add(this->label95);
			this->groupBox4->Controls->Add(this->label96);
			this->groupBox4->Controls->Add(this->label97);
			this->groupBox4->Controls->Add(this->label98);
			this->groupBox4->Controls->Add(this->label99);
			this->groupBox4->Controls->Add(this->label100);
			this->groupBox4->Controls->Add(this->label101);
			this->groupBox4->Controls->Add(this->label102);
			this->groupBox4->Controls->Add(this->label103);
			this->groupBox4->Controls->Add(this->label104);
			this->groupBox4->Controls->Add(this->button111);
			this->groupBox4->Controls->Add(this->textBox113);
			this->groupBox4->Controls->Add(this->button112);
			this->groupBox4->Controls->Add(this->textBox114);
			this->groupBox4->Controls->Add(this->button113);
			this->groupBox4->Controls->Add(this->textBox115);
			this->groupBox4->Controls->Add(this->button114);
			this->groupBox4->Controls->Add(this->textBox116);
			this->groupBox4->Controls->Add(this->button115);
			this->groupBox4->Controls->Add(this->textBox117);
			this->groupBox4->Controls->Add(this->button116);
			this->groupBox4->Controls->Add(this->textBox118);
			this->groupBox4->Controls->Add(this->button117);
			this->groupBox4->Controls->Add(this->textBox119);
			this->groupBox4->Controls->Add(this->button118);
			this->groupBox4->Controls->Add(this->textBox120);
			this->groupBox4->Controls->Add(this->button119);
			this->groupBox4->Controls->Add(this->textBox121);
			this->groupBox4->Controls->Add(this->button120);
			this->groupBox4->Controls->Add(this->textBox122);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(48, 582);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(881, 203);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"反向特性测试";
			// 
			// label105
			// 
			this->label105->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label105->Location = System::Drawing::Point(805, 151);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(62, 23);
			this->label105->TabIndex = 57;
			this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->Location = System::Drawing::Point(737, 151);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(62, 23);
			this->label106->TabIndex = 56;
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label107
			// 
			this->label107->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label107->Location = System::Drawing::Point(669, 151);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(62, 23);
			this->label107->TabIndex = 55;
			this->label107->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label108
			// 
			this->label108->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label108->Location = System::Drawing::Point(601, 152);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(62, 23);
			this->label108->TabIndex = 54;
			this->label108->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label109
			// 
			this->label109->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label109->Location = System::Drawing::Point(533, 151);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(62, 23);
			this->label109->TabIndex = 53;
			this->label109->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label110
			// 
			this->label110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label110->Location = System::Drawing::Point(465, 151);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(62, 23);
			this->label110->TabIndex = 52;
			this->label110->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label111
			// 
			this->label111->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label111->Location = System::Drawing::Point(397, 151);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(62, 23);
			this->label111->TabIndex = 51;
			this->label111->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label112
			// 
			this->label112->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label112->Location = System::Drawing::Point(329, 152);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(62, 23);
			this->label112->TabIndex = 50;
			this->label112->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label113
			// 
			this->label113->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label113->Location = System::Drawing::Point(261, 152);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(62, 23);
			this->label113->TabIndex = 49;
			this->label113->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label114
			// 
			this->label114->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label114->Location = System::Drawing::Point(195, 152);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(62, 23);
			this->label114->TabIndex = 48;
			this->label114->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label95
			// 
			this->label95->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label95->Location = System::Drawing::Point(805, 111);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(62, 23);
			this->label95->TabIndex = 47;
			this->label95->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label96
			// 
			this->label96->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label96->Location = System::Drawing::Point(737, 111);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(62, 23);
			this->label96->TabIndex = 46;
			this->label96->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label97
			// 
			this->label97->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label97->Location = System::Drawing::Point(669, 111);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(62, 23);
			this->label97->TabIndex = 45;
			this->label97->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label98
			// 
			this->label98->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label98->Location = System::Drawing::Point(601, 112);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(62, 23);
			this->label98->TabIndex = 44;
			this->label98->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Location = System::Drawing::Point(533, 111);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(62, 23);
			this->label99->TabIndex = 43;
			this->label99->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label100
			// 
			this->label100->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label100->Location = System::Drawing::Point(465, 111);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(62, 23);
			this->label100->TabIndex = 42;
			this->label100->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label101
			// 
			this->label101->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label101->Location = System::Drawing::Point(397, 111);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(62, 23);
			this->label101->TabIndex = 41;
			this->label101->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label102
			// 
			this->label102->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label102->Location = System::Drawing::Point(329, 112);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(62, 23);
			this->label102->TabIndex = 40;
			this->label102->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label103
			// 
			this->label103->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label103->Location = System::Drawing::Point(261, 112);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(62, 23);
			this->label103->TabIndex = 39;
			this->label103->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label104
			// 
			this->label104->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label104->Location = System::Drawing::Point(195, 112);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(62, 23);
			this->label104->TabIndex = 38;
			this->label104->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button111
			// 
			this->button111->Location = System::Drawing::Point(805, 66);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(62, 34);
			this->button111->TabIndex = 27;
			this->button111->Text = L"设置";
			this->button111->UseVisualStyleBackColor = true;
			// 
			// textBox113
			// 
			this->textBox113->Location = System::Drawing::Point(809, 32);
			this->textBox113->Name = L"textBox113";
			this->textBox113->Size = System::Drawing::Size(62, 28);
			this->textBox113->TabIndex = 26;
			// 
			// button112
			// 
			this->button112->Location = System::Drawing::Point(739, 66);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(62, 34);
			this->button112->TabIndex = 25;
			this->button112->Text = L"设置";
			this->button112->UseVisualStyleBackColor = true;
			// 
			// textBox114
			// 
			this->textBox114->Location = System::Drawing::Point(741, 32);
			this->textBox114->Name = L"textBox114";
			this->textBox114->Size = System::Drawing::Size(62, 28);
			this->textBox114->TabIndex = 24;
			// 
			// button113
			// 
			this->button113->Location = System::Drawing::Point(671, 66);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(62, 34);
			this->button113->TabIndex = 23;
			this->button113->Text = L"设置";
			this->button113->UseVisualStyleBackColor = true;
			// 
			// textBox115
			// 
			this->textBox115->Location = System::Drawing::Point(673, 32);
			this->textBox115->Name = L"textBox115";
			this->textBox115->Size = System::Drawing::Size(62, 28);
			this->textBox115->TabIndex = 22;
			// 
			// button114
			// 
			this->button114->Location = System::Drawing::Point(607, 66);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(62, 34);
			this->button114->TabIndex = 21;
			this->button114->Text = L"设置";
			this->button114->UseVisualStyleBackColor = true;
			// 
			// textBox116
			// 
			this->textBox116->Location = System::Drawing::Point(605, 32);
			this->textBox116->Name = L"textBox116";
			this->textBox116->Size = System::Drawing::Size(62, 28);
			this->textBox116->TabIndex = 20;
			// 
			// button115
			// 
			this->button115->Location = System::Drawing::Point(537, 66);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(62, 34);
			this->button115->TabIndex = 19;
			this->button115->Text = L"设置";
			this->button115->UseVisualStyleBackColor = true;
			// 
			// textBox117
			// 
			this->textBox117->Location = System::Drawing::Point(537, 32);
			this->textBox117->Name = L"textBox117";
			this->textBox117->Size = System::Drawing::Size(62, 28);
			this->textBox117->TabIndex = 18;
			// 
			// button116
			// 
			this->button116->Location = System::Drawing::Point(471, 66);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(62, 34);
			this->button116->TabIndex = 17;
			this->button116->Text = L"设置";
			this->button116->UseVisualStyleBackColor = true;
			// 
			// textBox118
			// 
			this->textBox118->Location = System::Drawing::Point(469, 32);
			this->textBox118->Name = L"textBox118";
			this->textBox118->Size = System::Drawing::Size(62, 28);
			this->textBox118->TabIndex = 16;
			// 
			// button117
			// 
			this->button117->Location = System::Drawing::Point(403, 66);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(62, 34);
			this->button117->TabIndex = 15;
			this->button117->Text = L"设置";
			this->button117->UseVisualStyleBackColor = true;
			// 
			// textBox119
			// 
			this->textBox119->Location = System::Drawing::Point(401, 32);
			this->textBox119->Name = L"textBox119";
			this->textBox119->Size = System::Drawing::Size(62, 28);
			this->textBox119->TabIndex = 14;
			// 
			// button118
			// 
			this->button118->Location = System::Drawing::Point(333, 66);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(62, 34);
			this->button118->TabIndex = 13;
			this->button118->Text = L"设置";
			this->button118->UseVisualStyleBackColor = true;
			// 
			// textBox120
			// 
			this->textBox120->Location = System::Drawing::Point(333, 32);
			this->textBox120->Name = L"textBox120";
			this->textBox120->Size = System::Drawing::Size(62, 28);
			this->textBox120->TabIndex = 12;
			// 
			// button119
			// 
			this->button119->Location = System::Drawing::Point(265, 66);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(62, 34);
			this->button119->TabIndex = 11;
			this->button119->Text = L"设置";
			this->button119->UseVisualStyleBackColor = true;
			// 
			// textBox121
			// 
			this->textBox121->Location = System::Drawing::Point(265, 32);
			this->textBox121->Name = L"textBox121";
			this->textBox121->Size = System::Drawing::Size(62, 28);
			this->textBox121->TabIndex = 10;
			// 
			// button120
			// 
			this->button120->Location = System::Drawing::Point(195, 66);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(62, 34);
			this->button120->TabIndex = 9;
			this->button120->Text = L"设置";
			this->button120->UseVisualStyleBackColor = true;
			// 
			// textBox122
			// 
			this->textBox122->Location = System::Drawing::Point(195, 32);
			this->textBox122->Name = L"textBox122";
			this->textBox122->Size = System::Drawing::Size(62, 28);
			this->textBox122->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(9, 152);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(176, 23);
			this->label15->TabIndex = 7;
			this->label15->Text = L"电流表读数I(mA)";
			// 
			// label16
			// 
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(9, 112);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(176, 23);
			this->label16->TabIndex = 6;
			this->label16->Text = L"电压表读数Ud(V)";
			// 
			// label17
			// 
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(30, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(145, 23);
			this->label17->TabIndex = 5;
			this->label17->Text = L"电源电压U(V)";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label85);
			this->groupBox3->Controls->Add(this->label86);
			this->groupBox3->Controls->Add(this->label87);
			this->groupBox3->Controls->Add(this->label88);
			this->groupBox3->Controls->Add(this->label89);
			this->groupBox3->Controls->Add(this->label90);
			this->groupBox3->Controls->Add(this->label91);
			this->groupBox3->Controls->Add(this->label92);
			this->groupBox3->Controls->Add(this->label93);
			this->groupBox3->Controls->Add(this->label94);
			this->groupBox3->Controls->Add(this->label75);
			this->groupBox3->Controls->Add(this->label76);
			this->groupBox3->Controls->Add(this->label77);
			this->groupBox3->Controls->Add(this->label78);
			this->groupBox3->Controls->Add(this->label79);
			this->groupBox3->Controls->Add(this->label80);
			this->groupBox3->Controls->Add(this->label81);
			this->groupBox3->Controls->Add(this->label82);
			this->groupBox3->Controls->Add(this->label83);
			this->groupBox3->Controls->Add(this->label84);
			this->groupBox3->Controls->Add(this->button81);
			this->groupBox3->Controls->Add(this->textBox83);
			this->groupBox3->Controls->Add(this->button82);
			this->groupBox3->Controls->Add(this->textBox84);
			this->groupBox3->Controls->Add(this->button83);
			this->groupBox3->Controls->Add(this->textBox85);
			this->groupBox3->Controls->Add(this->button84);
			this->groupBox3->Controls->Add(this->textBox86);
			this->groupBox3->Controls->Add(this->button85);
			this->groupBox3->Controls->Add(this->textBox87);
			this->groupBox3->Controls->Add(this->button86);
			this->groupBox3->Controls->Add(this->textBox88);
			this->groupBox3->Controls->Add(this->button87);
			this->groupBox3->Controls->Add(this->textBox89);
			this->groupBox3->Controls->Add(this->button88);
			this->groupBox3->Controls->Add(this->textBox90);
			this->groupBox3->Controls->Add(this->button89);
			this->groupBox3->Controls->Add(this->textBox91);
			this->groupBox3->Controls->Add(this->button90);
			this->groupBox3->Controls->Add(this->textBox92);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(48, 286);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(881, 200);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"正向特性测试";
			// 
			// label85
			// 
			this->label85->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label85->Location = System::Drawing::Point(809, 159);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(62, 23);
			this->label85->TabIndex = 57;
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label86
			// 
			this->label86->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label86->Location = System::Drawing::Point(741, 159);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(62, 23);
			this->label86->TabIndex = 56;
			this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label87
			// 
			this->label87->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label87->Location = System::Drawing::Point(673, 159);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(62, 23);
			this->label87->TabIndex = 55;
			this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label88
			// 
			this->label88->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label88->Location = System::Drawing::Point(605, 160);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(62, 23);
			this->label88->TabIndex = 54;
			this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label89
			// 
			this->label89->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label89->Location = System::Drawing::Point(537, 159);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(62, 23);
			this->label89->TabIndex = 53;
			this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label90
			// 
			this->label90->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label90->Location = System::Drawing::Point(469, 159);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(62, 23);
			this->label90->TabIndex = 52;
			this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label91
			// 
			this->label91->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label91->Location = System::Drawing::Point(401, 159);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(62, 23);
			this->label91->TabIndex = 51;
			this->label91->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label92
			// 
			this->label92->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label92->Location = System::Drawing::Point(333, 160);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(62, 23);
			this->label92->TabIndex = 50;
			this->label92->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label93
			// 
			this->label93->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label93->Location = System::Drawing::Point(265, 160);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(62, 23);
			this->label93->TabIndex = 49;
			this->label93->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label94
			// 
			this->label94->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label94->Location = System::Drawing::Point(199, 160);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(62, 23);
			this->label94->TabIndex = 48;
			this->label94->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label75
			// 
			this->label75->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label75->Location = System::Drawing::Point(809, 123);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(62, 23);
			this->label75->TabIndex = 47;
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label76
			// 
			this->label76->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label76->Location = System::Drawing::Point(741, 123);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(62, 23);
			this->label76->TabIndex = 46;
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label77
			// 
			this->label77->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label77->Location = System::Drawing::Point(673, 123);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(62, 23);
			this->label77->TabIndex = 45;
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label78
			// 
			this->label78->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label78->Location = System::Drawing::Point(605, 124);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(62, 23);
			this->label78->TabIndex = 44;
			this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label79
			// 
			this->label79->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label79->Location = System::Drawing::Point(537, 123);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(62, 23);
			this->label79->TabIndex = 43;
			this->label79->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label80
			// 
			this->label80->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label80->Location = System::Drawing::Point(469, 123);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(62, 23);
			this->label80->TabIndex = 42;
			this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label81
			// 
			this->label81->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label81->Location = System::Drawing::Point(401, 123);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(62, 23);
			this->label81->TabIndex = 41;
			this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label82
			// 
			this->label82->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label82->Location = System::Drawing::Point(333, 124);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(62, 23);
			this->label82->TabIndex = 40;
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label83
			// 
			this->label83->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label83->Location = System::Drawing::Point(265, 124);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(62, 23);
			this->label83->TabIndex = 39;
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label84
			// 
			this->label84->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label84->Location = System::Drawing::Point(199, 124);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(62, 23);
			this->label84->TabIndex = 38;
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(809, 73);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(62, 34);
			this->button81->TabIndex = 27;
			this->button81->Text = L"设置";
			this->button81->UseVisualStyleBackColor = true;
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(809, 37);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(62, 28);
			this->textBox83->TabIndex = 26;
			// 
			// button82
			// 
			this->button82->Location = System::Drawing::Point(741, 73);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(62, 34);
			this->button82->TabIndex = 25;
			this->button82->Text = L"设置";
			this->button82->UseVisualStyleBackColor = true;
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(741, 37);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(62, 28);
			this->textBox84->TabIndex = 24;
			// 
			// button83
			// 
			this->button83->Location = System::Drawing::Point(673, 73);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(62, 34);
			this->button83->TabIndex = 23;
			this->button83->Text = L"设置";
			this->button83->UseVisualStyleBackColor = true;
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(673, 37);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(62, 28);
			this->textBox85->TabIndex = 22;
			// 
			// button84
			// 
			this->button84->Location = System::Drawing::Point(605, 73);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(62, 34);
			this->button84->TabIndex = 21;
			this->button84->Text = L"设置";
			this->button84->UseVisualStyleBackColor = true;
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(605, 37);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(62, 28);
			this->textBox86->TabIndex = 20;
			// 
			// button85
			// 
			this->button85->Location = System::Drawing::Point(537, 73);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(62, 34);
			this->button85->TabIndex = 19;
			this->button85->Text = L"设置";
			this->button85->UseVisualStyleBackColor = true;
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(537, 37);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(62, 28);
			this->textBox87->TabIndex = 18;
			// 
			// button86
			// 
			this->button86->Location = System::Drawing::Point(469, 73);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(62, 34);
			this->button86->TabIndex = 17;
			this->button86->Text = L"设置";
			this->button86->UseVisualStyleBackColor = true;
			// 
			// textBox88
			// 
			this->textBox88->Location = System::Drawing::Point(469, 37);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(62, 28);
			this->textBox88->TabIndex = 16;
			// 
			// button87
			// 
			this->button87->Location = System::Drawing::Point(401, 73);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(62, 34);
			this->button87->TabIndex = 15;
			this->button87->Text = L"设置";
			this->button87->UseVisualStyleBackColor = true;
			// 
			// textBox89
			// 
			this->textBox89->Location = System::Drawing::Point(401, 37);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(62, 28);
			this->textBox89->TabIndex = 14;
			// 
			// button88
			// 
			this->button88->Location = System::Drawing::Point(333, 73);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(62, 34);
			this->button88->TabIndex = 13;
			this->button88->Text = L"设置";
			this->button88->UseVisualStyleBackColor = true;
			// 
			// textBox90
			// 
			this->textBox90->Location = System::Drawing::Point(333, 37);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(62, 28);
			this->textBox90->TabIndex = 12;
			// 
			// button89
			// 
			this->button89->Location = System::Drawing::Point(265, 73);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(62, 34);
			this->button89->TabIndex = 11;
			this->button89->Text = L"设置";
			this->button89->UseVisualStyleBackColor = true;
			// 
			// textBox91
			// 
			this->textBox91->Location = System::Drawing::Point(265, 37);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(62, 28);
			this->textBox91->TabIndex = 10;
			// 
			// button90
			// 
			this->button90->Location = System::Drawing::Point(199, 73);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(62, 34);
			this->button90->TabIndex = 9;
			this->button90->Text = L"设置";
			this->button90->UseVisualStyleBackColor = true;
			// 
			// textBox92
			// 
			this->textBox92->Location = System::Drawing::Point(199, 37);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(62, 28);
			this->textBox92->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(15, 162);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 23);
			this->label12->TabIndex = 7;
			this->label12->Text = L"电流表读数I(mA)";
			// 
			// label13
			// 
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(15, 124);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(176, 23);
			this->label13->TabIndex = 6;
			this->label13->Text = L"电压表读数Ud(V)";
			// 
			// label14
			// 
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(34, 40);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 23);
			this->label14->TabIndex = 5;
			this->label14->Text = L"电源电压U(V)";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1028, 50);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(400, 271);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tabPage5->Controls->Add(this->chart4);
			this->tabPage5->Controls->Add(this->textBox32);
			this->tabPage5->Controls->Add(this->label204);
			this->tabPage5->Controls->Add(this->groupBox11);
			this->tabPage5->Controls->Add(this->label157);
			this->tabPage5->Controls->Add(this->groupBox12);
			this->tabPage5->Controls->Add(this->groupBox13);
			this->tabPage5->Controls->Add(this->pictureBox5);
			this->tabPage5->Location = System::Drawing::Point(4, 33);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1721, 931);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"半导体二极管-硅管2CP15";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label155);
			this->groupBox11->Controls->Add(this->label156);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox11->ForeColor = System::Drawing::Color::Red;
			this->groupBox11->Location = System::Drawing::Point(46, 35);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(881, 212);
			this->groupBox11->TabIndex = 72;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"测定半导体二极管的伏安特性-硅管2CP15";
			// 
			// label155
			// 
			this->label155->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label155->ForeColor = System::Drawing::Color::Black;
			this->label155->Location = System::Drawing::Point(31, 36);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(842, 45);
			this->label155->TabIndex = 60;
			this->label155->Text = L"    实验设备与器件：可调稳压源（0~30V）、硅管（2CP15）、直流毫安表（或数字万用表）通电重复之前的实验；\r\n";
			// 
			// label156
			// 
			this->label156->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label156->ForeColor = System::Drawing::Color::Black;
			this->label156->Location = System::Drawing::Point(34, 98);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(842, 87);
			this->label156->TabIndex = 61;
			this->label156->Text = L"    实验步骤：将图2搭接线路(D=2CP15,正向接入)，检查连线无误、稳压源电位器旋到最小时，通电实验；调节稳压源的输出电压U(0~30V)，任意选取十组数"
				L"据(U<0.8V内采集多组数据)，记下相应的电压表和电流表的读数，并绘制相应的元件伏安特性曲线。然后断电，将D=2CP15反向接入实验电路中，通电重复之前的实验"
				L"；";
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Location = System::Drawing::Point(1215, 330);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(48, 24);
			this->label157->TabIndex = 70;
			this->label157->Text = L"图2";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label158);
			this->groupBox12->Controls->Add(this->label159);
			this->groupBox12->Controls->Add(this->label160);
			this->groupBox12->Controls->Add(this->label161);
			this->groupBox12->Controls->Add(this->label162);
			this->groupBox12->Controls->Add(this->label163);
			this->groupBox12->Controls->Add(this->label164);
			this->groupBox12->Controls->Add(this->label165);
			this->groupBox12->Controls->Add(this->label166);
			this->groupBox12->Controls->Add(this->label167);
			this->groupBox12->Controls->Add(this->label168);
			this->groupBox12->Controls->Add(this->label169);
			this->groupBox12->Controls->Add(this->label170);
			this->groupBox12->Controls->Add(this->label171);
			this->groupBox12->Controls->Add(this->label172);
			this->groupBox12->Controls->Add(this->label173);
			this->groupBox12->Controls->Add(this->label174);
			this->groupBox12->Controls->Add(this->label175);
			this->groupBox12->Controls->Add(this->label176);
			this->groupBox12->Controls->Add(this->label177);
			this->groupBox12->Controls->Add(this->button11);
			this->groupBox12->Controls->Add(this->textBox12);
			this->groupBox12->Controls->Add(this->button12);
			this->groupBox12->Controls->Add(this->textBox13);
			this->groupBox12->Controls->Add(this->button13);
			this->groupBox12->Controls->Add(this->textBox14);
			this->groupBox12->Controls->Add(this->button14);
			this->groupBox12->Controls->Add(this->textBox15);
			this->groupBox12->Controls->Add(this->button15);
			this->groupBox12->Controls->Add(this->textBox16);
			this->groupBox12->Controls->Add(this->button16);
			this->groupBox12->Controls->Add(this->textBox17);
			this->groupBox12->Controls->Add(this->button17);
			this->groupBox12->Controls->Add(this->textBox18);
			this->groupBox12->Controls->Add(this->button18);
			this->groupBox12->Controls->Add(this->textBox19);
			this->groupBox12->Controls->Add(this->button19);
			this->groupBox12->Controls->Add(this->textBox20);
			this->groupBox12->Controls->Add(this->button20);
			this->groupBox12->Controls->Add(this->textBox21);
			this->groupBox12->Controls->Add(this->label178);
			this->groupBox12->Controls->Add(this->label179);
			this->groupBox12->Controls->Add(this->label180);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox12->Location = System::Drawing::Point(46, 583);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(881, 203);
			this->groupBox12->TabIndex = 69;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"反向特性测试";
			// 
			// label158
			// 
			this->label158->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label158->Location = System::Drawing::Point(805, 151);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(62, 23);
			this->label158->TabIndex = 57;
			this->label158->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label159
			// 
			this->label159->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label159->Location = System::Drawing::Point(737, 151);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(62, 23);
			this->label159->TabIndex = 56;
			this->label159->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label160
			// 
			this->label160->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label160->Location = System::Drawing::Point(669, 151);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(62, 23);
			this->label160->TabIndex = 55;
			this->label160->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label161
			// 
			this->label161->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label161->Location = System::Drawing::Point(601, 152);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(62, 23);
			this->label161->TabIndex = 54;
			this->label161->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label162
			// 
			this->label162->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label162->Location = System::Drawing::Point(533, 151);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(62, 23);
			this->label162->TabIndex = 53;
			this->label162->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label163
			// 
			this->label163->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label163->Location = System::Drawing::Point(465, 151);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(62, 23);
			this->label163->TabIndex = 52;
			this->label163->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label164
			// 
			this->label164->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label164->Location = System::Drawing::Point(397, 151);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(62, 23);
			this->label164->TabIndex = 51;
			this->label164->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label165
			// 
			this->label165->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label165->Location = System::Drawing::Point(329, 152);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(62, 23);
			this->label165->TabIndex = 50;
			this->label165->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label166
			// 
			this->label166->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label166->Location = System::Drawing::Point(261, 152);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(62, 23);
			this->label166->TabIndex = 49;
			this->label166->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label167
			// 
			this->label167->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label167->Location = System::Drawing::Point(195, 152);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(62, 23);
			this->label167->TabIndex = 48;
			this->label167->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label168
			// 
			this->label168->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label168->Location = System::Drawing::Point(805, 111);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(62, 23);
			this->label168->TabIndex = 47;
			this->label168->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label169
			// 
			this->label169->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label169->Location = System::Drawing::Point(737, 111);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(62, 23);
			this->label169->TabIndex = 46;
			this->label169->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label170
			// 
			this->label170->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label170->Location = System::Drawing::Point(669, 111);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(62, 23);
			this->label170->TabIndex = 45;
			this->label170->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label171
			// 
			this->label171->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label171->Location = System::Drawing::Point(601, 112);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(62, 23);
			this->label171->TabIndex = 44;
			this->label171->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label172
			// 
			this->label172->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label172->Location = System::Drawing::Point(533, 111);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(62, 23);
			this->label172->TabIndex = 43;
			this->label172->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label173
			// 
			this->label173->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label173->Location = System::Drawing::Point(465, 111);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(62, 23);
			this->label173->TabIndex = 42;
			this->label173->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label174
			// 
			this->label174->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label174->Location = System::Drawing::Point(397, 111);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(62, 23);
			this->label174->TabIndex = 41;
			this->label174->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label175
			// 
			this->label175->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label175->Location = System::Drawing::Point(329, 112);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(62, 23);
			this->label175->TabIndex = 40;
			this->label175->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label176
			// 
			this->label176->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label176->Location = System::Drawing::Point(261, 112);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(62, 23);
			this->label176->TabIndex = 39;
			this->label176->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label177
			// 
			this->label177->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label177->Location = System::Drawing::Point(195, 112);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(62, 23);
			this->label177->TabIndex = 38;
			this->label177->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(805, 66);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 34);
			this->button11->TabIndex = 27;
			this->button11->Text = L"设置";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(809, 32);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(62, 28);
			this->textBox12->TabIndex = 26;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(739, 66);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(62, 34);
			this->button12->TabIndex = 25;
			this->button12->Text = L"设置";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(741, 32);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(62, 28);
			this->textBox13->TabIndex = 24;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(671, 66);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(62, 34);
			this->button13->TabIndex = 23;
			this->button13->Text = L"设置";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(673, 32);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(62, 28);
			this->textBox14->TabIndex = 22;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(607, 66);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(62, 34);
			this->button14->TabIndex = 21;
			this->button14->Text = L"设置";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(605, 32);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(62, 28);
			this->textBox15->TabIndex = 20;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(537, 66);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 34);
			this->button15->TabIndex = 19;
			this->button15->Text = L"设置";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(537, 32);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(62, 28);
			this->textBox16->TabIndex = 18;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(471, 66);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(62, 34);
			this->button16->TabIndex = 17;
			this->button16->Text = L"设置";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(469, 32);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(62, 28);
			this->textBox17->TabIndex = 16;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(403, 66);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(62, 34);
			this->button17->TabIndex = 15;
			this->button17->Text = L"设置";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(401, 32);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(62, 28);
			this->textBox18->TabIndex = 14;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(333, 66);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(62, 34);
			this->button18->TabIndex = 13;
			this->button18->Text = L"设置";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(333, 32);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(62, 28);
			this->textBox19->TabIndex = 12;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(265, 66);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(62, 34);
			this->button19->TabIndex = 11;
			this->button19->Text = L"设置";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(265, 32);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(62, 28);
			this->textBox20->TabIndex = 10;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(195, 66);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(62, 34);
			this->button20->TabIndex = 9;
			this->button20->Text = L"设置";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(195, 32);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(62, 28);
			this->textBox21->TabIndex = 8;
			// 
			// label178
			// 
			this->label178->ForeColor = System::Drawing::Color::Black;
			this->label178->Location = System::Drawing::Point(9, 152);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(176, 23);
			this->label178->TabIndex = 7;
			this->label178->Text = L"电流表读数I(mA)";
			// 
			// label179
			// 
			this->label179->ForeColor = System::Drawing::Color::Black;
			this->label179->Location = System::Drawing::Point(9, 112);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(176, 23);
			this->label179->TabIndex = 6;
			this->label179->Text = L"电压表读数Ud(V)";
			// 
			// label180
			// 
			this->label180->ForeColor = System::Drawing::Color::Black;
			this->label180->Location = System::Drawing::Point(30, 35);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(145, 23);
			this->label180->TabIndex = 5;
			this->label180->Text = L"电源电压U(V)";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->label181);
			this->groupBox13->Controls->Add(this->label182);
			this->groupBox13->Controls->Add(this->label183);
			this->groupBox13->Controls->Add(this->label184);
			this->groupBox13->Controls->Add(this->label185);
			this->groupBox13->Controls->Add(this->label186);
			this->groupBox13->Controls->Add(this->label187);
			this->groupBox13->Controls->Add(this->label188);
			this->groupBox13->Controls->Add(this->label189);
			this->groupBox13->Controls->Add(this->label190);
			this->groupBox13->Controls->Add(this->label191);
			this->groupBox13->Controls->Add(this->label192);
			this->groupBox13->Controls->Add(this->label193);
			this->groupBox13->Controls->Add(this->label194);
			this->groupBox13->Controls->Add(this->label195);
			this->groupBox13->Controls->Add(this->label196);
			this->groupBox13->Controls->Add(this->label197);
			this->groupBox13->Controls->Add(this->label198);
			this->groupBox13->Controls->Add(this->label199);
			this->groupBox13->Controls->Add(this->label200);
			this->groupBox13->Controls->Add(this->button21);
			this->groupBox13->Controls->Add(this->textBox22);
			this->groupBox13->Controls->Add(this->button22);
			this->groupBox13->Controls->Add(this->textBox23);
			this->groupBox13->Controls->Add(this->button23);
			this->groupBox13->Controls->Add(this->textBox24);
			this->groupBox13->Controls->Add(this->button24);
			this->groupBox13->Controls->Add(this->textBox25);
			this->groupBox13->Controls->Add(this->button25);
			this->groupBox13->Controls->Add(this->textBox26);
			this->groupBox13->Controls->Add(this->button26);
			this->groupBox13->Controls->Add(this->textBox27);
			this->groupBox13->Controls->Add(this->button27);
			this->groupBox13->Controls->Add(this->textBox28);
			this->groupBox13->Controls->Add(this->button28);
			this->groupBox13->Controls->Add(this->textBox29);
			this->groupBox13->Controls->Add(this->button29);
			this->groupBox13->Controls->Add(this->textBox30);
			this->groupBox13->Controls->Add(this->button30);
			this->groupBox13->Controls->Add(this->textBox31);
			this->groupBox13->Controls->Add(this->label201);
			this->groupBox13->Controls->Add(this->label202);
			this->groupBox13->Controls->Add(this->label203);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox13->Location = System::Drawing::Point(46, 287);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(881, 200);
			this->groupBox13->TabIndex = 68;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"正向特性测试";
			// 
			// label181
			// 
			this->label181->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label181->Location = System::Drawing::Point(809, 159);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(62, 23);
			this->label181->TabIndex = 57;
			this->label181->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label182
			// 
			this->label182->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label182->Location = System::Drawing::Point(741, 159);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(62, 23);
			this->label182->TabIndex = 56;
			this->label182->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label183
			// 
			this->label183->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label183->Location = System::Drawing::Point(673, 159);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(62, 23);
			this->label183->TabIndex = 55;
			this->label183->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label184
			// 
			this->label184->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label184->Location = System::Drawing::Point(605, 160);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(62, 23);
			this->label184->TabIndex = 54;
			this->label184->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label185
			// 
			this->label185->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label185->Location = System::Drawing::Point(537, 159);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(62, 23);
			this->label185->TabIndex = 53;
			this->label185->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label186
			// 
			this->label186->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label186->Location = System::Drawing::Point(469, 159);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(62, 23);
			this->label186->TabIndex = 52;
			this->label186->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label187
			// 
			this->label187->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label187->Location = System::Drawing::Point(401, 159);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(62, 23);
			this->label187->TabIndex = 51;
			this->label187->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label188
			// 
			this->label188->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label188->Location = System::Drawing::Point(333, 160);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(62, 23);
			this->label188->TabIndex = 50;
			this->label188->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label189
			// 
			this->label189->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label189->Location = System::Drawing::Point(265, 160);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(62, 23);
			this->label189->TabIndex = 49;
			this->label189->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label190
			// 
			this->label190->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label190->Location = System::Drawing::Point(199, 160);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(62, 23);
			this->label190->TabIndex = 48;
			this->label190->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label191
			// 
			this->label191->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label191->Location = System::Drawing::Point(809, 123);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(62, 23);
			this->label191->TabIndex = 47;
			this->label191->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label192
			// 
			this->label192->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label192->Location = System::Drawing::Point(741, 123);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(62, 23);
			this->label192->TabIndex = 46;
			this->label192->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label193
			// 
			this->label193->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label193->Location = System::Drawing::Point(673, 123);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(62, 23);
			this->label193->TabIndex = 45;
			this->label193->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label194
			// 
			this->label194->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label194->Location = System::Drawing::Point(605, 124);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(62, 23);
			this->label194->TabIndex = 44;
			this->label194->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label195
			// 
			this->label195->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label195->Location = System::Drawing::Point(537, 123);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(62, 23);
			this->label195->TabIndex = 43;
			this->label195->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label196
			// 
			this->label196->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label196->Location = System::Drawing::Point(469, 123);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(62, 23);
			this->label196->TabIndex = 42;
			this->label196->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label197
			// 
			this->label197->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label197->Location = System::Drawing::Point(401, 123);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(62, 23);
			this->label197->TabIndex = 41;
			this->label197->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label198
			// 
			this->label198->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label198->Location = System::Drawing::Point(333, 124);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(62, 23);
			this->label198->TabIndex = 40;
			this->label198->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label199
			// 
			this->label199->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label199->Location = System::Drawing::Point(265, 124);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(62, 23);
			this->label199->TabIndex = 39;
			this->label199->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label200
			// 
			this->label200->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label200->Location = System::Drawing::Point(199, 124);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(62, 23);
			this->label200->TabIndex = 38;
			this->label200->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(809, 73);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(62, 34);
			this->button21->TabIndex = 27;
			this->button21->Text = L"设置";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(809, 37);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(62, 28);
			this->textBox22->TabIndex = 26;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(741, 73);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(62, 34);
			this->button22->TabIndex = 25;
			this->button22->Text = L"设置";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(741, 37);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(62, 28);
			this->textBox23->TabIndex = 24;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(673, 73);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(62, 34);
			this->button23->TabIndex = 23;
			this->button23->Text = L"设置";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(673, 37);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(62, 28);
			this->textBox24->TabIndex = 22;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(605, 73);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(62, 34);
			this->button24->TabIndex = 21;
			this->button24->Text = L"设置";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(605, 37);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(62, 28);
			this->textBox25->TabIndex = 20;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(537, 73);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(62, 34);
			this->button25->TabIndex = 19;
			this->button25->Text = L"设置";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(537, 37);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(62, 28);
			this->textBox26->TabIndex = 18;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(469, 73);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(62, 34);
			this->button26->TabIndex = 17;
			this->button26->Text = L"设置";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(469, 37);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(62, 28);
			this->textBox27->TabIndex = 16;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(401, 73);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(62, 34);
			this->button27->TabIndex = 15;
			this->button27->Text = L"设置";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(401, 37);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(62, 28);
			this->textBox28->TabIndex = 14;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(333, 73);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(62, 34);
			this->button28->TabIndex = 13;
			this->button28->Text = L"设置";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(333, 37);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(62, 28);
			this->textBox29->TabIndex = 12;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(265, 73);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(62, 34);
			this->button29->TabIndex = 11;
			this->button29->Text = L"设置";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(265, 37);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(62, 28);
			this->textBox30->TabIndex = 10;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(199, 73);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(62, 34);
			this->button30->TabIndex = 9;
			this->button30->Text = L"设置";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(199, 37);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(62, 28);
			this->textBox31->TabIndex = 8;
			// 
			// label201
			// 
			this->label201->ForeColor = System::Drawing::Color::Black;
			this->label201->Location = System::Drawing::Point(15, 162);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(176, 23);
			this->label201->TabIndex = 7;
			this->label201->Text = L"电流表读数I(mA)";
			// 
			// label202
			// 
			this->label202->ForeColor = System::Drawing::Color::Black;
			this->label202->Location = System::Drawing::Point(15, 124);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(176, 23);
			this->label202->TabIndex = 6;
			this->label202->Text = L"电压表读数Ud(V)";
			// 
			// label203
			// 
			this->label203->ForeColor = System::Drawing::Color::Black;
			this->label203->Location = System::Drawing::Point(34, 40);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(145, 23);
			this->label203->TabIndex = 5;
			this->label203->Text = L"电源电压U(V)";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1042, 56);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(400, 271);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 67;
			this->pictureBox5->TabStop = false;
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox32->Location = System::Drawing::Point(151, 852);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(776, 28);
			this->textBox32->TabIndex = 74;
			// 
			// label204
			// 
			this->label204->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label204->ForeColor = System::Drawing::Color::Black;
			this->label204->Location = System::Drawing::Point(42, 860);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(95, 20);
			this->label204->TabIndex = 73;
			this->label204->Text = L"实验结论";
			// 
			// chart3
			// 
			chartArea13->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea13);
			legend13->Name = L"Legend1";
			this->chart3->Legends->Add(legend13);
			this->chart3->Location = System::Drawing::Point(1028, 528);
			this->chart3->Name = L"chart3";
			series13->ChartArea = L"ChartArea1";
			series13->Legend = L"Legend1";
			series13->Name = L"Series1";
			this->chart3->Series->Add(series13);
			this->chart3->Size = System::Drawing::Size(416, 360);
			this->chart3->TabIndex = 62;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea14->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea14);
			legend14->Name = L"Legend1";
			this->chart4->Legends->Add(legend14);
			this->chart4->Location = System::Drawing::Point(1042, 511);
			this->chart4->Name = L"chart4";
			series14->ChartArea = L"ChartArea1";
			series14->Legend = L"Legend1";
			series14->Name = L"Series1";
			this->chart4->Series->Add(series14);
			this->chart4->Size = System::Drawing::Size(416, 360);
			this->chart4->TabIndex = 75;
			this->chart4->Text = L"chart4";
			// 
			// chart5
			// 
			chartArea15->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea15);
			legend15->Name = L"Legend1";
			this->chart5->Legends->Add(legend15);
			this->chart5->Location = System::Drawing::Point(1065, 481);
			this->chart5->Name = L"chart5";
			series15->ChartArea = L"ChartArea1";
			series15->Legend = L"Legend1";
			series15->Name = L"Series1";
			this->chart5->Series->Add(series15);
			this->chart5->Size = System::Drawing::Size(416, 360);
			this->chart5->TabIndex = 76;
			this->chart5->Text = L"chart5";
			// 
			// 元件伏安特性的测试实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1729, 968);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"元件伏安特性的测试实验内容";
			this->Text = L"元件伏安特性的测试实验内容";
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SetDVNum(textBox2->Text,0,30);
		label54->Text = "读取失败";
		label6->Text = "读取失败";

		
		//Sleep(2000);
		S_PLCRecv pr;
		if (!global::sh->GetliKongData(&pr))
		{
			MessageBox::Show("获取力控数据失败,请检串口连接是不是正常");
			return;
		}
		//MessageBox::Show("表头序号:"+pr.HeaderId.ToString());
		label54->Text = DcNumToString(pr.U, pr.DCsymbol);
		label6->Text = DcNumToString(pr.I, pr.DCsymbol) ;
		
	}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 void a() {

			 while (1) {
				 S_PLCRecv pr;
				 if (!global::sh->GetliKongData(&pr))
				 {
					 MessageBox::Show("获取力控数据失败,请检串口连接是不是正常");
					 return;
				 }
				 //MessageBox::Show("表头序号:" + pr.HeaderId.ToString());
				 label54->Text = DcNumToString(pr.U, pr.DCsymbol);
				 label6->Text = DcNumToString(pr.I, pr.DCsymbol);
				 Thread::Sleep(500);
			 }
		 }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab->ForeColor = Color::Red;

}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label33_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
