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
	/// 叠加原理实验内容 摘要
	/// </summary>
	public ref class 叠加原理实验内容 : public System::Windows::Forms::Form
	{
	public:
		叠加原理实验内容(void)
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
		~叠加原理实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelLine4UBC;

	private: System::Windows::Forms::Label^  labelLine4UAB;

	private: System::Windows::Forms::Label^  labelLine4UFA;

	private: System::Windows::Forms::Label^  labelLine4U12;

	private: System::Windows::Forms::Label^  labelLine4U11;

	private: System::Windows::Forms::Label^  labelLine4I3;

	private: System::Windows::Forms::Label^  labelLine4I2;

	private: System::Windows::Forms::Label^  labelLine4I1;











	private: System::Windows::Forms::Label^  labelLine4UDE;

	private: System::Windows::Forms::Label^  labelLine4UCD;

	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  labelLine3UBC;

	private: System::Windows::Forms::Label^  labelLine3UAB;

	private: System::Windows::Forms::Label^  labelLine3UFA;

	private: System::Windows::Forms::Label^  labelLine3U12;

	private: System::Windows::Forms::Label^  labelLine3U11;

	private: System::Windows::Forms::Label^  labelLine3I3;

	private: System::Windows::Forms::Label^  labelLine3I2;

	private: System::Windows::Forms::Label^  labelLine3I1;











	private: System::Windows::Forms::Label^  labelLine3UDE;

	private: System::Windows::Forms::Label^  labelLine3UCD;

	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  labelLine2UBC;

	private: System::Windows::Forms::Label^  labelLine2UAB;

	private: System::Windows::Forms::Label^  labelLine2UFA;

	private: System::Windows::Forms::Label^  labelLine2U12;

	private: System::Windows::Forms::Label^  labelLine2U11;

	private: System::Windows::Forms::Label^  labelLine2I3;

	private: System::Windows::Forms::Label^  labelLine2I2;

	private: System::Windows::Forms::Label^  labelLine2I1;











	private: System::Windows::Forms::Label^  labelLine2UDE;

	private: System::Windows::Forms::Label^  labelLine2UCD;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  labelLine1UBC;


private: System::Windows::Forms::Label^  labelLine1UAB;

private: System::Windows::Forms::Label^  labelLine1UFA;

private: System::Windows::Forms::Label^  labelLine1U12;

private: System::Windows::Forms::Label^  labelLine1U11;

private: System::Windows::Forms::Label^  labelLine1I3;

private: System::Windows::Forms::Label^  labelLine1I2;

private: System::Windows::Forms::Label^  labelLine1I1;

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
private: System::Windows::Forms::Label^  labelLine1UDE;

private: System::Windows::Forms::Label^  labelLine1UCD;



	private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  labelLine8UBC;

private: System::Windows::Forms::Label^  labelLine8UAB;

private: System::Windows::Forms::Label^  labelLine8UFA;

private: System::Windows::Forms::Label^  labelLine8U12;

private: System::Windows::Forms::Label^  labelLine8U11;

private: System::Windows::Forms::Label^  labelLine8I3;

private: System::Windows::Forms::Label^  labelLine8I2;

private: System::Windows::Forms::Label^  labelLine8I1;











private: System::Windows::Forms::Label^  labelLine8UDE;

private: System::Windows::Forms::Label^  labelLine8UCD;

private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  labelLine7UBC;

private: System::Windows::Forms::Label^  labelLine7UAB;

private: System::Windows::Forms::Label^  labelLine7UFA;

private: System::Windows::Forms::Label^  labelLine7U12;

private: System::Windows::Forms::Label^  labelLine7U11;

private: System::Windows::Forms::Label^  labelLine7I3;

private: System::Windows::Forms::Label^  labelLine7I2;

private: System::Windows::Forms::Label^  labelLine7I1;











private: System::Windows::Forms::Label^  labelLine7UDE;

private: System::Windows::Forms::Label^  labelLine7UCD;

private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  labelLine6UBC;

private: System::Windows::Forms::Label^  labelLine6UAB;

private: System::Windows::Forms::Label^  labelLine6UFA;

private: System::Windows::Forms::Label^  labelLine6U12;

private: System::Windows::Forms::Label^  labelLine6U11;

private: System::Windows::Forms::Label^  labelLine6I3;

private: System::Windows::Forms::Label^  labelLine6I2;

private: System::Windows::Forms::Label^  labelLine6I1;











private: System::Windows::Forms::Label^  labelLine6UDE;

private: System::Windows::Forms::Label^  labelLine6UCD;

private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  labelLine5UBC;

private: System::Windows::Forms::Label^  labelLine5UAB;

private: System::Windows::Forms::Label^  labelLine5UFA;

private: System::Windows::Forms::Label^  labelLine5U12;

private: System::Windows::Forms::Label^  labelLine5U11;

private: System::Windows::Forms::Label^  labelLine5I3;

private: System::Windows::Forms::Label^  labelLine5I2;

private: System::Windows::Forms::Label^  labelLine5I1;











private: System::Windows::Forms::Label^  labelLine5UDE;

private: System::Windows::Forms::Label^  labelLine5UCD;

private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Button^  button81;
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
private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::Button^  button57;
private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::Button^  button59;
private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::Button^  button61;
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
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(叠加原理实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelLine4UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine4UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine4UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine4U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine4U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine4UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine4UCD = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->labelLine3UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine3UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine3UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine3U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine3U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine3UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine3UCD = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->labelLine2UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine2UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine2UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine2U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine2U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine2UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine2UCD = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->labelLine1UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine1UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine1UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine1U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine1U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I1 = (gcnew System::Windows::Forms::Label());
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
			this->labelLine1UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine1UCD = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelLine8UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine8UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine8UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine8U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine8U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine8UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine8UCD = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->labelLine7UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine7UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine7UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine7U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine7U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine7UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine7UCD = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->labelLine6UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine6UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine6UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine6U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine6U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine6UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine6UCD = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->labelLine5UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine5UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine5UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine5U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine5U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine5UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine5UCD = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
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
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 12);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 421);
			this->groupBox8->TabIndex = 80;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"叠加定律实验内容";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 54);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 64);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    实验前，认真接线，确认仪表工作在正确的量程，极性接入正确，无误后再通电； \r\n\r\n    电源两端不可碰线短路，当电源过载指示灯亮，说明超载，请断电检查电"
				L"路。";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(24, 178);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(1185, 212);
			this->label38->TabIndex = 7;
			this->label38->Text = resources->GetString(L"label38.Text");
			this->label38->Click += gcnew System::EventHandler(this, &叠加原理实验内容::label38_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(383, 439);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 469);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 81;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(570, 920);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 86;
			this->label1->Text = L"图1电路图";
			// 
			// groupBox2
			// 
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
			this->groupBox2->Controls->Add(this->labelLine4UBC);
			this->groupBox2->Controls->Add(this->labelLine4UAB);
			this->groupBox2->Controls->Add(this->labelLine4UFA);
			this->groupBox2->Controls->Add(this->labelLine4U12);
			this->groupBox2->Controls->Add(this->labelLine4U11);
			this->groupBox2->Controls->Add(this->labelLine4I3);
			this->groupBox2->Controls->Add(this->labelLine4I2);
			this->groupBox2->Controls->Add(this->labelLine4I1);
			this->groupBox2->Controls->Add(this->labelLine4UDE);
			this->groupBox2->Controls->Add(this->labelLine4UCD);
			this->groupBox2->Controls->Add(this->label48);
			this->groupBox2->Controls->Add(this->labelLine3UBC);
			this->groupBox2->Controls->Add(this->labelLine3UAB);
			this->groupBox2->Controls->Add(this->labelLine3UFA);
			this->groupBox2->Controls->Add(this->labelLine3U12);
			this->groupBox2->Controls->Add(this->labelLine3U11);
			this->groupBox2->Controls->Add(this->labelLine3I3);
			this->groupBox2->Controls->Add(this->labelLine3I2);
			this->groupBox2->Controls->Add(this->labelLine3I1);
			this->groupBox2->Controls->Add(this->labelLine3UDE);
			this->groupBox2->Controls->Add(this->labelLine3UCD);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->labelLine2UBC);
			this->groupBox2->Controls->Add(this->labelLine2UAB);
			this->groupBox2->Controls->Add(this->labelLine2UFA);
			this->groupBox2->Controls->Add(this->labelLine2U12);
			this->groupBox2->Controls->Add(this->labelLine2U11);
			this->groupBox2->Controls->Add(this->labelLine2I3);
			this->groupBox2->Controls->Add(this->labelLine2I2);
			this->groupBox2->Controls->Add(this->labelLine2I1);
			this->groupBox2->Controls->Add(this->labelLine2UDE);
			this->groupBox2->Controls->Add(this->labelLine2UCD);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->labelLine1UBC);
			this->groupBox2->Controls->Add(this->labelLine1UAB);
			this->groupBox2->Controls->Add(this->labelLine1UFA);
			this->groupBox2->Controls->Add(this->labelLine1U12);
			this->groupBox2->Controls->Add(this->labelLine1U11);
			this->groupBox2->Controls->Add(this->labelLine1I3);
			this->groupBox2->Controls->Add(this->labelLine1I2);
			this->groupBox2->Controls->Add(this->labelLine1I1);
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
			this->groupBox2->Controls->Add(this->labelLine1UDE);
			this->groupBox2->Controls->Add(this->labelLine1UCD);
			this->groupBox2->Controls->Add(this->label42);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(15, 966);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1289, 539);
			this->groupBox2->TabIndex = 87;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// labelLine4UBC
			// 
			this->labelLine4UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UBC->Location = System::Drawing::Point(901, 407);
			this->labelLine4UBC->Name = L"labelLine4UBC";
			this->labelLine4UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine4UBC->TabIndex = 172;
			this->labelLine4UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UAB
			// 
			this->labelLine4UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UAB->Location = System::Drawing::Point(799, 407);
			this->labelLine4UAB->Name = L"labelLine4UAB";
			this->labelLine4UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine4UAB->TabIndex = 171;
			this->labelLine4UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UFA
			// 
			this->labelLine4UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UFA->Location = System::Drawing::Point(697, 407);
			this->labelLine4UFA->Name = L"labelLine4UFA";
			this->labelLine4UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine4UFA->TabIndex = 170;
			this->labelLine4UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4U12
			// 
			this->labelLine4U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4U12->Location = System::Drawing::Point(598, 407);
			this->labelLine4U12->Name = L"labelLine4U12";
			this->labelLine4U12->Size = System::Drawing::Size(93, 43);
			this->labelLine4U12->TabIndex = 169;
			this->labelLine4U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4U11
			// 
			this->labelLine4U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4U11->Location = System::Drawing::Point(503, 407);
			this->labelLine4U11->Name = L"labelLine4U11";
			this->labelLine4U11->Size = System::Drawing::Size(89, 43);
			this->labelLine4U11->TabIndex = 168;
			this->labelLine4U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I3
			// 
			this->labelLine4I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I3->Location = System::Drawing::Point(401, 407);
			this->labelLine4I3->Name = L"labelLine4I3";
			this->labelLine4I3->Size = System::Drawing::Size(92, 43);
			this->labelLine4I3->TabIndex = 167;
			this->labelLine4I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I2
			// 
			this->labelLine4I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I2->Location = System::Drawing::Point(302, 407);
			this->labelLine4I2->Name = L"labelLine4I2";
			this->labelLine4I2->Size = System::Drawing::Size(93, 43);
			this->labelLine4I2->TabIndex = 166;
			this->labelLine4I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I1
			// 
			this->labelLine4I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I1->Location = System::Drawing::Point(200, 407);
			this->labelLine4I1->Name = L"labelLine4I1";
			this->labelLine4I1->Size = System::Drawing::Size(93, 43);
			this->labelLine4I1->TabIndex = 165;
			this->labelLine4I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UDE
			// 
			this->labelLine4UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UDE->Location = System::Drawing::Point(1107, 407);
			this->labelLine4UDE->Name = L"labelLine4UDE";
			this->labelLine4UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine4UDE->TabIndex = 154;
			this->labelLine4UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UCD
			// 
			this->labelLine4UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UCD->Location = System::Drawing::Point(1005, 407);
			this->labelLine4UCD->Name = L"labelLine4UCD";
			this->labelLine4UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine4UCD->TabIndex = 153;
			this->labelLine4UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label48
			// 
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(33, 407);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(104, 43);
			this->label48->TabIndex = 152;
			this->label48->Text = L"U11=0V\r\nU12=12V";
			// 
			// labelLine3UBC
			// 
			this->labelLine3UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UBC->Location = System::Drawing::Point(901, 298);
			this->labelLine3UBC->Name = L"labelLine3UBC";
			this->labelLine3UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine3UBC->TabIndex = 151;
			this->labelLine3UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UAB
			// 
			this->labelLine3UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UAB->Location = System::Drawing::Point(799, 298);
			this->labelLine3UAB->Name = L"labelLine3UAB";
			this->labelLine3UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine3UAB->TabIndex = 150;
			this->labelLine3UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UFA
			// 
			this->labelLine3UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UFA->Location = System::Drawing::Point(697, 298);
			this->labelLine3UFA->Name = L"labelLine3UFA";
			this->labelLine3UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine3UFA->TabIndex = 149;
			this->labelLine3UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3U12
			// 
			this->labelLine3U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3U12->Location = System::Drawing::Point(598, 298);
			this->labelLine3U12->Name = L"labelLine3U12";
			this->labelLine3U12->Size = System::Drawing::Size(93, 43);
			this->labelLine3U12->TabIndex = 148;
			this->labelLine3U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3U11
			// 
			this->labelLine3U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3U11->Location = System::Drawing::Point(503, 298);
			this->labelLine3U11->Name = L"labelLine3U11";
			this->labelLine3U11->Size = System::Drawing::Size(89, 43);
			this->labelLine3U11->TabIndex = 147;
			this->labelLine3U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I3
			// 
			this->labelLine3I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I3->Location = System::Drawing::Point(401, 298);
			this->labelLine3I3->Name = L"labelLine3I3";
			this->labelLine3I3->Size = System::Drawing::Size(92, 43);
			this->labelLine3I3->TabIndex = 146;
			this->labelLine3I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I2
			// 
			this->labelLine3I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I2->Location = System::Drawing::Point(302, 298);
			this->labelLine3I2->Name = L"labelLine3I2";
			this->labelLine3I2->Size = System::Drawing::Size(93, 43);
			this->labelLine3I2->TabIndex = 145;
			this->labelLine3I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I1
			// 
			this->labelLine3I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I1->Location = System::Drawing::Point(200, 298);
			this->labelLine3I1->Name = L"labelLine3I1";
			this->labelLine3I1->Size = System::Drawing::Size(93, 43);
			this->labelLine3I1->TabIndex = 144;
			this->labelLine3I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UDE
			// 
			this->labelLine3UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UDE->Location = System::Drawing::Point(1107, 298);
			this->labelLine3UDE->Name = L"labelLine3UDE";
			this->labelLine3UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine3UDE->TabIndex = 133;
			this->labelLine3UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UCD
			// 
			this->labelLine3UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UCD->Location = System::Drawing::Point(1005, 298);
			this->labelLine3UCD->Name = L"labelLine3UCD";
			this->labelLine3UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine3UCD->TabIndex = 132;
			this->labelLine3UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label34
			// 
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(33, 298);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(104, 43);
			this->label34->TabIndex = 131;
			this->label34->Text = L"U11=12V\r\nU12=6V";
			// 
			// labelLine2UBC
			// 
			this->labelLine2UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UBC->Location = System::Drawing::Point(901, 193);
			this->labelLine2UBC->Name = L"labelLine2UBC";
			this->labelLine2UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine2UBC->TabIndex = 130;
			this->labelLine2UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UAB
			// 
			this->labelLine2UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UAB->Location = System::Drawing::Point(799, 193);
			this->labelLine2UAB->Name = L"labelLine2UAB";
			this->labelLine2UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine2UAB->TabIndex = 129;
			this->labelLine2UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UFA
			// 
			this->labelLine2UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UFA->Location = System::Drawing::Point(697, 193);
			this->labelLine2UFA->Name = L"labelLine2UFA";
			this->labelLine2UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine2UFA->TabIndex = 128;
			this->labelLine2UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2U12
			// 
			this->labelLine2U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2U12->Location = System::Drawing::Point(598, 193);
			this->labelLine2U12->Name = L"labelLine2U12";
			this->labelLine2U12->Size = System::Drawing::Size(93, 43);
			this->labelLine2U12->TabIndex = 127;
			this->labelLine2U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelLine2U12->Click += gcnew System::EventHandler(this, &叠加原理实验内容::label6_Click);
			// 
			// labelLine2U11
			// 
			this->labelLine2U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2U11->Location = System::Drawing::Point(503, 193);
			this->labelLine2U11->Name = L"labelLine2U11";
			this->labelLine2U11->Size = System::Drawing::Size(89, 43);
			this->labelLine2U11->TabIndex = 126;
			this->labelLine2U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I3
			// 
			this->labelLine2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I3->Location = System::Drawing::Point(401, 193);
			this->labelLine2I3->Name = L"labelLine2I3";
			this->labelLine2I3->Size = System::Drawing::Size(92, 43);
			this->labelLine2I3->TabIndex = 125;
			this->labelLine2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I2
			// 
			this->labelLine2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I2->Location = System::Drawing::Point(302, 193);
			this->labelLine2I2->Name = L"labelLine2I2";
			this->labelLine2I2->Size = System::Drawing::Size(93, 43);
			this->labelLine2I2->TabIndex = 124;
			this->labelLine2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I1
			// 
			this->labelLine2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I1->Location = System::Drawing::Point(200, 193);
			this->labelLine2I1->Name = L"labelLine2I1";
			this->labelLine2I1->Size = System::Drawing::Size(93, 43);
			this->labelLine2I1->TabIndex = 123;
			this->labelLine2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UDE
			// 
			this->labelLine2UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UDE->Location = System::Drawing::Point(1107, 193);
			this->labelLine2UDE->Name = L"labelLine2UDE";
			this->labelLine2UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine2UDE->TabIndex = 112;
			this->labelLine2UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UCD
			// 
			this->labelLine2UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UCD->Location = System::Drawing::Point(1005, 193);
			this->labelLine2UCD->Name = L"labelLine2UCD";
			this->labelLine2UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine2UCD->TabIndex = 111;
			this->labelLine2UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 43);
			this->label2->TabIndex = 110;
			this->label2->Text = L"U11=0V\r\nU12=6V";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Location = System::Drawing::Point(901, 39);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 23);
			this->label20->TabIndex = 97;
			this->label20->Text = L"UBC";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Location = System::Drawing::Point(799, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 23);
			this->label21->TabIndex = 96;
			this->label21->Text = L"UAB";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Location = System::Drawing::Point(697, 39);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 23);
			this->label22->TabIndex = 95;
			this->label22->Text = L"UFA";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Location = System::Drawing::Point(598, 39);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 23);
			this->label23->TabIndex = 94;
			this->label23->Text = L"U12";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Location = System::Drawing::Point(503, 39);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 23);
			this->label24->TabIndex = 93;
			this->label24->Text = L"U11";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(401, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 23);
			this->label25->TabIndex = 92;
			this->label25->Text = L"I3(mA)";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(302, 39);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 23);
			this->label26->TabIndex = 91;
			this->label26->Text = L"I2(mA)";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(200, 39);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 23);
			this->label27->TabIndex = 90;
			this->label27->Text = L"I1(mA)";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Location = System::Drawing::Point(1107, 39);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(93, 23);
			this->label28->TabIndex = 89;
			this->label28->Text = L"UDE";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Location = System::Drawing::Point(1005, 39);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(93, 23);
			this->label29->TabIndex = 88;
			this->label29->Text = L"UCD";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(104, 23);
			this->label19->TabIndex = 87;
			this->label19->Text = L"被测量";
			// 
			// labelLine1UBC
			// 
			this->labelLine1UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UBC->Location = System::Drawing::Point(901, 90);
			this->labelLine1UBC->Name = L"labelLine1UBC";
			this->labelLine1UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine1UBC->TabIndex = 76;
			this->labelLine1UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UAB
			// 
			this->labelLine1UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UAB->Location = System::Drawing::Point(799, 90);
			this->labelLine1UAB->Name = L"labelLine1UAB";
			this->labelLine1UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine1UAB->TabIndex = 75;
			this->labelLine1UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UFA
			// 
			this->labelLine1UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UFA->Location = System::Drawing::Point(697, 90);
			this->labelLine1UFA->Name = L"labelLine1UFA";
			this->labelLine1UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine1UFA->TabIndex = 74;
			this->labelLine1UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1U12
			// 
			this->labelLine1U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1U12->Location = System::Drawing::Point(598, 90);
			this->labelLine1U12->Name = L"labelLine1U12";
			this->labelLine1U12->Size = System::Drawing::Size(93, 43);
			this->labelLine1U12->TabIndex = 73;
			this->labelLine1U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1U11
			// 
			this->labelLine1U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1U11->Location = System::Drawing::Point(503, 90);
			this->labelLine1U11->Name = L"labelLine1U11";
			this->labelLine1U11->Size = System::Drawing::Size(89, 43);
			this->labelLine1U11->TabIndex = 72;
			this->labelLine1U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I3
			// 
			this->labelLine1I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I3->Location = System::Drawing::Point(401, 90);
			this->labelLine1I3->Name = L"labelLine1I3";
			this->labelLine1I3->Size = System::Drawing::Size(92, 43);
			this->labelLine1I3->TabIndex = 71;
			this->labelLine1I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I2
			// 
			this->labelLine1I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I2->Location = System::Drawing::Point(302, 90);
			this->labelLine1I2->Name = L"labelLine1I2";
			this->labelLine1I2->Size = System::Drawing::Size(93, 43);
			this->labelLine1I2->TabIndex = 70;
			this->labelLine1I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I1
			// 
			this->labelLine1I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I1->Location = System::Drawing::Point(200, 90);
			this->labelLine1I1->Name = L"labelLine1I1";
			this->labelLine1I1->Size = System::Drawing::Size(93, 43);
			this->labelLine1I1->TabIndex = 69;
			this->labelLine1I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(1107, 145);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 43);
			this->button41->TabIndex = 58;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(1005, 145);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 43);
			this->button40->TabIndex = 57;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(901, 145);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 43);
			this->button39->TabIndex = 56;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(799, 145);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 43);
			this->button38->TabIndex = 55;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(697, 145);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 43);
			this->button37->TabIndex = 54;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(598, 145);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(93, 43);
			this->button36->TabIndex = 53;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(503, 145);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(93, 43);
			this->button35->TabIndex = 52;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(401, 145);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 43);
			this->button34->TabIndex = 51;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(302, 145);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 43);
			this->button33->TabIndex = 50;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(198, 145);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 43);
			this->button32->TabIndex = 49;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// labelLine1UDE
			// 
			this->labelLine1UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UDE->Location = System::Drawing::Point(1107, 90);
			this->labelLine1UDE->Name = L"labelLine1UDE";
			this->labelLine1UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine1UDE->TabIndex = 47;
			this->labelLine1UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UCD
			// 
			this->labelLine1UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UCD->Location = System::Drawing::Point(1005, 90);
			this->labelLine1UCD->Name = L"labelLine1UCD";
			this->labelLine1UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine1UCD->TabIndex = 46;
			this->labelLine1UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label42
			// 
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(33, 90);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(104, 43);
			this->label42->TabIndex = 5;
			this->label42->Text = L"U11=12V\r\nU12=0V";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button31);
			this->groupBox1->Controls->Add(this->button42);
			this->groupBox1->Controls->Add(this->button43);
			this->groupBox1->Controls->Add(this->button44);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->button46);
			this->groupBox1->Controls->Add(this->button47);
			this->groupBox1->Controls->Add(this->button48);
			this->groupBox1->Controls->Add(this->button49);
			this->groupBox1->Controls->Add(this->button50);
			this->groupBox1->Controls->Add(this->button51);
			this->groupBox1->Controls->Add(this->button52);
			this->groupBox1->Controls->Add(this->button53);
			this->groupBox1->Controls->Add(this->button54);
			this->groupBox1->Controls->Add(this->button55);
			this->groupBox1->Controls->Add(this->button56);
			this->groupBox1->Controls->Add(this->button57);
			this->groupBox1->Controls->Add(this->button58);
			this->groupBox1->Controls->Add(this->button59);
			this->groupBox1->Controls->Add(this->button60);
			this->groupBox1->Controls->Add(this->button61);
			this->groupBox1->Controls->Add(this->button62);
			this->groupBox1->Controls->Add(this->button63);
			this->groupBox1->Controls->Add(this->button64);
			this->groupBox1->Controls->Add(this->button65);
			this->groupBox1->Controls->Add(this->button66);
			this->groupBox1->Controls->Add(this->button67);
			this->groupBox1->Controls->Add(this->button68);
			this->groupBox1->Controls->Add(this->button69);
			this->groupBox1->Controls->Add(this->button70);
			this->groupBox1->Controls->Add(this->button71);
			this->groupBox1->Controls->Add(this->button72);
			this->groupBox1->Controls->Add(this->button73);
			this->groupBox1->Controls->Add(this->button74);
			this->groupBox1->Controls->Add(this->button75);
			this->groupBox1->Controls->Add(this->button76);
			this->groupBox1->Controls->Add(this->button77);
			this->groupBox1->Controls->Add(this->button78);
			this->groupBox1->Controls->Add(this->button79);
			this->groupBox1->Controls->Add(this->button80);
			this->groupBox1->Controls->Add(this->labelLine8UBC);
			this->groupBox1->Controls->Add(this->labelLine8UAB);
			this->groupBox1->Controls->Add(this->labelLine8UFA);
			this->groupBox1->Controls->Add(this->labelLine8U12);
			this->groupBox1->Controls->Add(this->labelLine8U11);
			this->groupBox1->Controls->Add(this->labelLine8I3);
			this->groupBox1->Controls->Add(this->labelLine8I2);
			this->groupBox1->Controls->Add(this->labelLine8I1);
			this->groupBox1->Controls->Add(this->labelLine8UDE);
			this->groupBox1->Controls->Add(this->labelLine8UCD);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->labelLine7UBC);
			this->groupBox1->Controls->Add(this->labelLine7UAB);
			this->groupBox1->Controls->Add(this->labelLine7UFA);
			this->groupBox1->Controls->Add(this->labelLine7U12);
			this->groupBox1->Controls->Add(this->labelLine7U11);
			this->groupBox1->Controls->Add(this->labelLine7I3);
			this->groupBox1->Controls->Add(this->labelLine7I2);
			this->groupBox1->Controls->Add(this->labelLine7I1);
			this->groupBox1->Controls->Add(this->labelLine7UDE);
			this->groupBox1->Controls->Add(this->labelLine7UCD);
			this->groupBox1->Controls->Add(this->label70);
			this->groupBox1->Controls->Add(this->labelLine6UBC);
			this->groupBox1->Controls->Add(this->labelLine6UAB);
			this->groupBox1->Controls->Add(this->labelLine6UFA);
			this->groupBox1->Controls->Add(this->labelLine6U12);
			this->groupBox1->Controls->Add(this->labelLine6U11);
			this->groupBox1->Controls->Add(this->labelLine6I3);
			this->groupBox1->Controls->Add(this->labelLine6I2);
			this->groupBox1->Controls->Add(this->labelLine6I1);
			this->groupBox1->Controls->Add(this->labelLine6UDE);
			this->groupBox1->Controls->Add(this->labelLine6UCD);
			this->groupBox1->Controls->Add(this->label81);
			this->groupBox1->Controls->Add(this->label82);
			this->groupBox1->Controls->Add(this->label83);
			this->groupBox1->Controls->Add(this->label84);
			this->groupBox1->Controls->Add(this->label85);
			this->groupBox1->Controls->Add(this->label86);
			this->groupBox1->Controls->Add(this->label87);
			this->groupBox1->Controls->Add(this->label88);
			this->groupBox1->Controls->Add(this->label89);
			this->groupBox1->Controls->Add(this->label90);
			this->groupBox1->Controls->Add(this->label91);
			this->groupBox1->Controls->Add(this->label92);
			this->groupBox1->Controls->Add(this->labelLine5UBC);
			this->groupBox1->Controls->Add(this->labelLine5UAB);
			this->groupBox1->Controls->Add(this->labelLine5UFA);
			this->groupBox1->Controls->Add(this->labelLine5U12);
			this->groupBox1->Controls->Add(this->labelLine5U11);
			this->groupBox1->Controls->Add(this->labelLine5I3);
			this->groupBox1->Controls->Add(this->labelLine5I2);
			this->groupBox1->Controls->Add(this->labelLine5I1);
			this->groupBox1->Controls->Add(this->labelLine5UDE);
			this->groupBox1->Controls->Add(this->labelLine5UCD);
			this->groupBox1->Controls->Add(this->label103);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 1704);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1289, 539);
			this->groupBox1->TabIndex = 173;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			// 
			// labelLine8UBC
			// 
			this->labelLine8UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UBC->Location = System::Drawing::Point(901, 407);
			this->labelLine8UBC->Name = L"labelLine8UBC";
			this->labelLine8UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine8UBC->TabIndex = 172;
			this->labelLine8UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UAB
			// 
			this->labelLine8UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UAB->Location = System::Drawing::Point(799, 407);
			this->labelLine8UAB->Name = L"labelLine8UAB";
			this->labelLine8UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine8UAB->TabIndex = 171;
			this->labelLine8UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UFA
			// 
			this->labelLine8UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UFA->Location = System::Drawing::Point(697, 407);
			this->labelLine8UFA->Name = L"labelLine8UFA";
			this->labelLine8UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine8UFA->TabIndex = 170;
			this->labelLine8UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8U12
			// 
			this->labelLine8U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8U12->Location = System::Drawing::Point(598, 407);
			this->labelLine8U12->Name = L"labelLine8U12";
			this->labelLine8U12->Size = System::Drawing::Size(93, 43);
			this->labelLine8U12->TabIndex = 169;
			this->labelLine8U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8U11
			// 
			this->labelLine8U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8U11->Location = System::Drawing::Point(503, 407);
			this->labelLine8U11->Name = L"labelLine8U11";
			this->labelLine8U11->Size = System::Drawing::Size(89, 43);
			this->labelLine8U11->TabIndex = 168;
			this->labelLine8U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I3
			// 
			this->labelLine8I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I3->Location = System::Drawing::Point(401, 407);
			this->labelLine8I3->Name = L"labelLine8I3";
			this->labelLine8I3->Size = System::Drawing::Size(92, 43);
			this->labelLine8I3->TabIndex = 167;
			this->labelLine8I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I2
			// 
			this->labelLine8I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I2->Location = System::Drawing::Point(302, 407);
			this->labelLine8I2->Name = L"labelLine8I2";
			this->labelLine8I2->Size = System::Drawing::Size(93, 43);
			this->labelLine8I2->TabIndex = 166;
			this->labelLine8I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I1
			// 
			this->labelLine8I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I1->Location = System::Drawing::Point(200, 407);
			this->labelLine8I1->Name = L"labelLine8I1";
			this->labelLine8I1->Size = System::Drawing::Size(93, 43);
			this->labelLine8I1->TabIndex = 165;
			this->labelLine8I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UDE
			// 
			this->labelLine8UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UDE->Location = System::Drawing::Point(1107, 407);
			this->labelLine8UDE->Name = L"labelLine8UDE";
			this->labelLine8UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine8UDE->TabIndex = 154;
			this->labelLine8UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UCD
			// 
			this->labelLine8UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UCD->Location = System::Drawing::Point(1005, 407);
			this->labelLine8UCD->Name = L"labelLine8UCD";
			this->labelLine8UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine8UCD->TabIndex = 153;
			this->labelLine8UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label59
			// 
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(33, 407);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(104, 43);
			this->label59->TabIndex = 152;
			this->label59->Text = L"U11=0V\r\nU12=12V";
			// 
			// labelLine7UBC
			// 
			this->labelLine7UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UBC->Location = System::Drawing::Point(901, 298);
			this->labelLine7UBC->Name = L"labelLine7UBC";
			this->labelLine7UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine7UBC->TabIndex = 151;
			this->labelLine7UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UAB
			// 
			this->labelLine7UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UAB->Location = System::Drawing::Point(799, 298);
			this->labelLine7UAB->Name = L"labelLine7UAB";
			this->labelLine7UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine7UAB->TabIndex = 150;
			this->labelLine7UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UFA
			// 
			this->labelLine7UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UFA->Location = System::Drawing::Point(697, 298);
			this->labelLine7UFA->Name = L"labelLine7UFA";
			this->labelLine7UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine7UFA->TabIndex = 149;
			this->labelLine7UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7U12
			// 
			this->labelLine7U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7U12->Location = System::Drawing::Point(598, 298);
			this->labelLine7U12->Name = L"labelLine7U12";
			this->labelLine7U12->Size = System::Drawing::Size(93, 43);
			this->labelLine7U12->TabIndex = 148;
			this->labelLine7U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7U11
			// 
			this->labelLine7U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7U11->Location = System::Drawing::Point(503, 298);
			this->labelLine7U11->Name = L"labelLine7U11";
			this->labelLine7U11->Size = System::Drawing::Size(89, 43);
			this->labelLine7U11->TabIndex = 147;
			this->labelLine7U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I3
			// 
			this->labelLine7I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I3->Location = System::Drawing::Point(401, 298);
			this->labelLine7I3->Name = L"labelLine7I3";
			this->labelLine7I3->Size = System::Drawing::Size(92, 43);
			this->labelLine7I3->TabIndex = 146;
			this->labelLine7I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I2
			// 
			this->labelLine7I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I2->Location = System::Drawing::Point(302, 298);
			this->labelLine7I2->Name = L"labelLine7I2";
			this->labelLine7I2->Size = System::Drawing::Size(93, 43);
			this->labelLine7I2->TabIndex = 145;
			this->labelLine7I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I1
			// 
			this->labelLine7I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I1->Location = System::Drawing::Point(200, 298);
			this->labelLine7I1->Name = L"labelLine7I1";
			this->labelLine7I1->Size = System::Drawing::Size(93, 43);
			this->labelLine7I1->TabIndex = 144;
			this->labelLine7I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UDE
			// 
			this->labelLine7UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UDE->Location = System::Drawing::Point(1107, 298);
			this->labelLine7UDE->Name = L"labelLine7UDE";
			this->labelLine7UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine7UDE->TabIndex = 133;
			this->labelLine7UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UCD
			// 
			this->labelLine7UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UCD->Location = System::Drawing::Point(1005, 298);
			this->labelLine7UCD->Name = L"labelLine7UCD";
			this->labelLine7UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine7UCD->TabIndex = 132;
			this->labelLine7UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label70
			// 
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(33, 298);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(104, 43);
			this->label70->TabIndex = 131;
			this->label70->Text = L"U11=12V\r\nU12=6V";
			// 
			// labelLine6UBC
			// 
			this->labelLine6UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UBC->Location = System::Drawing::Point(901, 193);
			this->labelLine6UBC->Name = L"labelLine6UBC";
			this->labelLine6UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine6UBC->TabIndex = 130;
			this->labelLine6UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UAB
			// 
			this->labelLine6UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UAB->Location = System::Drawing::Point(799, 193);
			this->labelLine6UAB->Name = L"labelLine6UAB";
			this->labelLine6UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine6UAB->TabIndex = 129;
			this->labelLine6UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UFA
			// 
			this->labelLine6UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UFA->Location = System::Drawing::Point(697, 193);
			this->labelLine6UFA->Name = L"labelLine6UFA";
			this->labelLine6UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine6UFA->TabIndex = 128;
			this->labelLine6UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6U12
			// 
			this->labelLine6U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6U12->Location = System::Drawing::Point(598, 193);
			this->labelLine6U12->Name = L"labelLine6U12";
			this->labelLine6U12->Size = System::Drawing::Size(93, 43);
			this->labelLine6U12->TabIndex = 127;
			this->labelLine6U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6U11
			// 
			this->labelLine6U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6U11->Location = System::Drawing::Point(503, 193);
			this->labelLine6U11->Name = L"labelLine6U11";
			this->labelLine6U11->Size = System::Drawing::Size(89, 43);
			this->labelLine6U11->TabIndex = 126;
			this->labelLine6U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I3
			// 
			this->labelLine6I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I3->Location = System::Drawing::Point(401, 193);
			this->labelLine6I3->Name = L"labelLine6I3";
			this->labelLine6I3->Size = System::Drawing::Size(92, 43);
			this->labelLine6I3->TabIndex = 125;
			this->labelLine6I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I2
			// 
			this->labelLine6I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I2->Location = System::Drawing::Point(302, 193);
			this->labelLine6I2->Name = L"labelLine6I2";
			this->labelLine6I2->Size = System::Drawing::Size(93, 43);
			this->labelLine6I2->TabIndex = 124;
			this->labelLine6I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I1
			// 
			this->labelLine6I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I1->Location = System::Drawing::Point(200, 193);
			this->labelLine6I1->Name = L"labelLine6I1";
			this->labelLine6I1->Size = System::Drawing::Size(93, 43);
			this->labelLine6I1->TabIndex = 123;
			this->labelLine6I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UDE
			// 
			this->labelLine6UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UDE->Location = System::Drawing::Point(1107, 193);
			this->labelLine6UDE->Name = L"labelLine6UDE";
			this->labelLine6UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine6UDE->TabIndex = 112;
			this->labelLine6UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UCD
			// 
			this->labelLine6UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UCD->Location = System::Drawing::Point(1005, 193);
			this->labelLine6UCD->Name = L"labelLine6UCD";
			this->labelLine6UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine6UCD->TabIndex = 111;
			this->labelLine6UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label81
			// 
			this->label81->ForeColor = System::Drawing::Color::Black;
			this->label81->Location = System::Drawing::Point(33, 193);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(104, 43);
			this->label81->TabIndex = 110;
			this->label81->Text = L"U11=0V\r\nU12=6V";
			// 
			// label82
			// 
			this->label82->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label82->Location = System::Drawing::Point(901, 39);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(93, 23);
			this->label82->TabIndex = 97;
			this->label82->Text = L"UBC";
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label83
			// 
			this->label83->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label83->Location = System::Drawing::Point(799, 39);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(93, 23);
			this->label83->TabIndex = 96;
			this->label83->Text = L"UAB";
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label84
			// 
			this->label84->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label84->Location = System::Drawing::Point(697, 39);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(93, 23);
			this->label84->TabIndex = 95;
			this->label84->Text = L"UFA";
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label85
			// 
			this->label85->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label85->Location = System::Drawing::Point(598, 39);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(93, 23);
			this->label85->TabIndex = 94;
			this->label85->Text = L"U12";
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label86
			// 
			this->label86->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label86->Location = System::Drawing::Point(503, 39);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(89, 23);
			this->label86->TabIndex = 93;
			this->label86->Text = L"U11";
			this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label87
			// 
			this->label87->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label87->Location = System::Drawing::Point(401, 39);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(92, 23);
			this->label87->TabIndex = 92;
			this->label87->Text = L"I3(mA)";
			this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label88
			// 
			this->label88->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label88->Location = System::Drawing::Point(302, 39);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(93, 23);
			this->label88->TabIndex = 91;
			this->label88->Text = L"I2(mA)";
			this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label89
			// 
			this->label89->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label89->Location = System::Drawing::Point(200, 39);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(93, 23);
			this->label89->TabIndex = 90;
			this->label89->Text = L"I1(mA)";
			this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label90
			// 
			this->label90->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label90->Location = System::Drawing::Point(1107, 39);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(93, 23);
			this->label90->TabIndex = 89;
			this->label90->Text = L"UDE";
			this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label91
			// 
			this->label91->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label91->Location = System::Drawing::Point(1005, 39);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(93, 23);
			this->label91->TabIndex = 88;
			this->label91->Text = L"UCD";
			this->label91->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label92
			// 
			this->label92->ForeColor = System::Drawing::Color::Black;
			this->label92->Location = System::Drawing::Point(33, 39);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(104, 23);
			this->label92->TabIndex = 87;
			this->label92->Text = L"被测量";
			// 
			// labelLine5UBC
			// 
			this->labelLine5UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UBC->Location = System::Drawing::Point(901, 90);
			this->labelLine5UBC->Name = L"labelLine5UBC";
			this->labelLine5UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine5UBC->TabIndex = 76;
			this->labelLine5UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UAB
			// 
			this->labelLine5UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UAB->Location = System::Drawing::Point(799, 90);
			this->labelLine5UAB->Name = L"labelLine5UAB";
			this->labelLine5UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine5UAB->TabIndex = 75;
			this->labelLine5UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UFA
			// 
			this->labelLine5UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UFA->Location = System::Drawing::Point(697, 90);
			this->labelLine5UFA->Name = L"labelLine5UFA";
			this->labelLine5UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine5UFA->TabIndex = 74;
			this->labelLine5UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5U12
			// 
			this->labelLine5U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5U12->Location = System::Drawing::Point(598, 90);
			this->labelLine5U12->Name = L"labelLine5U12";
			this->labelLine5U12->Size = System::Drawing::Size(93, 43);
			this->labelLine5U12->TabIndex = 73;
			this->labelLine5U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5U11
			// 
			this->labelLine5U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5U11->Location = System::Drawing::Point(503, 90);
			this->labelLine5U11->Name = L"labelLine5U11";
			this->labelLine5U11->Size = System::Drawing::Size(89, 43);
			this->labelLine5U11->TabIndex = 72;
			this->labelLine5U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I3
			// 
			this->labelLine5I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I3->Location = System::Drawing::Point(401, 90);
			this->labelLine5I3->Name = L"labelLine5I3";
			this->labelLine5I3->Size = System::Drawing::Size(92, 43);
			this->labelLine5I3->TabIndex = 71;
			this->labelLine5I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I2
			// 
			this->labelLine5I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I2->Location = System::Drawing::Point(302, 90);
			this->labelLine5I2->Name = L"labelLine5I2";
			this->labelLine5I2->Size = System::Drawing::Size(93, 43);
			this->labelLine5I2->TabIndex = 70;
			this->labelLine5I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I1
			// 
			this->labelLine5I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I1->Location = System::Drawing::Point(200, 90);
			this->labelLine5I1->Name = L"labelLine5I1";
			this->labelLine5I1->Size = System::Drawing::Size(93, 43);
			this->labelLine5I1->TabIndex = 69;
			this->labelLine5I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UDE
			// 
			this->labelLine5UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UDE->Location = System::Drawing::Point(1107, 90);
			this->labelLine5UDE->Name = L"labelLine5UDE";
			this->labelLine5UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine5UDE->TabIndex = 47;
			this->labelLine5UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UCD
			// 
			this->labelLine5UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UCD->Location = System::Drawing::Point(1005, 90);
			this->labelLine5UCD->Name = L"labelLine5UCD";
			this->labelLine5UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine5UCD->TabIndex = 46;
			this->labelLine5UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label103
			// 
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(33, 90);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(104, 43);
			this->label103->TabIndex = 5;
			this->label103->Text = L"U11=12V\r\nU12=0V";
			// 
			// label104
			// 
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(31, 43);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(533, 84);
			this->label104->TabIndex = 174;
			this->label104->Text = L"    6．将开关向下拔，即电阻D=1N4007接入电路中。\r\n\r\n    7．重复步骤2~5，并将相应的数据填入表中。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label104);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(15, 1522);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1286, 134);
			this->groupBox3->TabIndex = 175;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"叠加定律实验内容";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(212, 2249);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1002, 28);
			this->textBox结论->TabIndex = 177;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(36, 2252);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 176;
			this->label105->Text = L"实验结论";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(7, 2340);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 179;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(561, 2298);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 178;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button81_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1107, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 43);
			this->button1->TabIndex = 182;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1005, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 43);
			this->button2->TabIndex = 181;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(901, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 43);
			this->button3->TabIndex = 180;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(799, 246);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 43);
			this->button4->TabIndex = 179;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(697, 246);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 43);
			this->button5->TabIndex = 178;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(598, 246);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 43);
			this->button6->TabIndex = 177;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(503, 246);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 43);
			this->button7->TabIndex = 176;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(401, 246);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 43);
			this->button8->TabIndex = 175;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(302, 246);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 43);
			this->button9->TabIndex = 174;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(198, 246);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 43);
			this->button10->TabIndex = 173;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1107, 344);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 43);
			this->button11->TabIndex = 192;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1005, 344);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 43);
			this->button12->TabIndex = 191;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(901, 344);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 43);
			this->button13->TabIndex = 190;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(799, 344);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 43);
			this->button14->TabIndex = 189;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(697, 344);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 43);
			this->button15->TabIndex = 188;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(598, 344);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 43);
			this->button16->TabIndex = 187;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(503, 344);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 43);
			this->button17->TabIndex = 186;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(401, 344);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 43);
			this->button18->TabIndex = 185;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(302, 344);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 43);
			this->button19->TabIndex = 184;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(198, 344);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 43);
			this->button20->TabIndex = 183;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(1107, 462);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 43);
			this->button21->TabIndex = 202;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(1005, 462);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 43);
			this->button22->TabIndex = 201;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(901, 462);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 43);
			this->button23->TabIndex = 200;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(799, 462);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 43);
			this->button24->TabIndex = 199;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(697, 462);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 43);
			this->button25->TabIndex = 198;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(598, 462);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 43);
			this->button26->TabIndex = 197;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(503, 462);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 43);
			this->button27->TabIndex = 196;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(401, 462);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 43);
			this->button28->TabIndex = 195;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(302, 462);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 43);
			this->button29->TabIndex = 194;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(198, 462);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(93, 43);
			this->button30->TabIndex = 193;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(1110, 136);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(93, 43);
			this->button71->TabIndex = 182;
			this->button71->Text = L"获取";
			this->button71->UseVisualStyleBackColor = true;
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(1008, 136);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(93, 43);
			this->button72->TabIndex = 181;
			this->button72->Text = L"获取";
			this->button72->UseVisualStyleBackColor = true;
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(904, 136);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(93, 43);
			this->button73->TabIndex = 180;
			this->button73->Text = L"获取";
			this->button73->UseVisualStyleBackColor = true;
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(802, 136);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(93, 43);
			this->button74->TabIndex = 179;
			this->button74->Text = L"获取";
			this->button74->UseVisualStyleBackColor = true;
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(700, 136);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(93, 43);
			this->button75->TabIndex = 178;
			this->button75->Text = L"获取";
			this->button75->UseVisualStyleBackColor = true;
			// 
			// button76
			// 
			this->button76->Location = System::Drawing::Point(601, 136);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(93, 43);
			this->button76->TabIndex = 177;
			this->button76->Text = L"获取";
			this->button76->UseVisualStyleBackColor = true;
			// 
			// button77
			// 
			this->button77->Location = System::Drawing::Point(506, 136);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(93, 43);
			this->button77->TabIndex = 176;
			this->button77->Text = L"获取";
			this->button77->UseVisualStyleBackColor = true;
			// 
			// button78
			// 
			this->button78->Location = System::Drawing::Point(404, 136);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(93, 43);
			this->button78->TabIndex = 175;
			this->button78->Text = L"获取";
			this->button78->UseVisualStyleBackColor = true;
			// 
			// button79
			// 
			this->button79->Location = System::Drawing::Point(305, 136);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(93, 43);
			this->button79->TabIndex = 174;
			this->button79->Text = L"获取";
			this->button79->UseVisualStyleBackColor = true;
			// 
			// button80
			// 
			this->button80->Location = System::Drawing::Point(201, 136);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(93, 43);
			this->button80->TabIndex = 173;
			this->button80->Text = L"获取";
			this->button80->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(1107, 248);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(93, 43);
			this->button61->TabIndex = 192;
			this->button61->Text = L"获取";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(1005, 248);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(93, 43);
			this->button62->TabIndex = 191;
			this->button62->Text = L"获取";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(901, 248);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(93, 43);
			this->button63->TabIndex = 190;
			this->button63->Text = L"获取";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(799, 248);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(93, 43);
			this->button64->TabIndex = 189;
			this->button64->Text = L"获取";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(697, 248);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(93, 43);
			this->button65->TabIndex = 188;
			this->button65->Text = L"获取";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(598, 248);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(93, 43);
			this->button66->TabIndex = 187;
			this->button66->Text = L"获取";
			this->button66->UseVisualStyleBackColor = true;
			// 
			// button67
			// 
			this->button67->Location = System::Drawing::Point(503, 248);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(93, 43);
			this->button67->TabIndex = 186;
			this->button67->Text = L"获取";
			this->button67->UseVisualStyleBackColor = true;
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(401, 248);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(93, 43);
			this->button68->TabIndex = 185;
			this->button68->Text = L"获取";
			this->button68->UseVisualStyleBackColor = true;
			// 
			// button69
			// 
			this->button69->Location = System::Drawing::Point(302, 248);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(93, 43);
			this->button69->TabIndex = 184;
			this->button69->Text = L"获取";
			this->button69->UseVisualStyleBackColor = true;
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(198, 248);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(93, 43);
			this->button70->TabIndex = 183;
			this->button70->Text = L"获取";
			this->button70->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(1107, 344);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(93, 43);
			this->button51->TabIndex = 202;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(1005, 344);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(93, 43);
			this->button52->TabIndex = 201;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(901, 344);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(93, 43);
			this->button53->TabIndex = 200;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(799, 344);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(93, 43);
			this->button54->TabIndex = 199;
			this->button54->Text = L"获取";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(697, 344);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(93, 43);
			this->button55->TabIndex = 198;
			this->button55->Text = L"获取";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(598, 344);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(93, 43);
			this->button56->TabIndex = 197;
			this->button56->Text = L"获取";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(503, 344);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(93, 43);
			this->button57->TabIndex = 196;
			this->button57->Text = L"获取";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(401, 344);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(93, 43);
			this->button58->TabIndex = 195;
			this->button58->Text = L"获取";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(302, 344);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(93, 43);
			this->button59->TabIndex = 194;
			this->button59->Text = L"获取";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(198, 344);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(93, 43);
			this->button60->TabIndex = 193;
			this->button60->Text = L"获取";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(1107, 453);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 43);
			this->button31->TabIndex = 212;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(1005, 453);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 43);
			this->button42->TabIndex = 211;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(901, 453);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(93, 43);
			this->button43->TabIndex = 210;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(799, 453);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(93, 43);
			this->button44->TabIndex = 209;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(697, 453);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(93, 43);
			this->button45->TabIndex = 208;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(598, 453);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(93, 43);
			this->button46->TabIndex = 207;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(503, 453);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(93, 43);
			this->button47->TabIndex = 206;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(401, 453);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(93, 43);
			this->button48->TabIndex = 205;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(302, 453);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(93, 43);
			this->button49->TabIndex = 204;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(198, 453);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(93, 43);
			this->button50->TabIndex = 203;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// 叠加原理实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1481, 892);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"叠加原理实验内容";
			this->Text = L"叠加原理实验内容";
			this->Load += gcnew System::EventHandler(this, &叠加原理实验内容::叠加原理实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 叠加原理实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
		this->VerticalScroll->Value = 100;
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
	public:	 void SendData();
		 ST_叠加原理 Load_Grade_data();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void label38_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
