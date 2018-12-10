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































	private: System::Windows::Forms::Label^  labelLine3UBC;

	private: System::Windows::Forms::Label^  labelLine3UAB;

	private: System::Windows::Forms::Label^  labelLine3UFA;





	private: System::Windows::Forms::Label^  labelLine3I3;

	private: System::Windows::Forms::Label^  labelLine3I2;

	private: System::Windows::Forms::Label^  labelLine3I1;











	private: System::Windows::Forms::Label^  labelLine3UDE;

	private: System::Windows::Forms::Label^  labelLine3UCD;


	private: System::Windows::Forms::Label^  labelLine2UBC;

	private: System::Windows::Forms::Label^  labelLine2UAB;

	private: System::Windows::Forms::Label^  labelLine2UFA;



	private: System::Windows::Forms::Label^  labelLine2U11;

	private: System::Windows::Forms::Label^  labelLine2I3;

	private: System::Windows::Forms::Label^  labelLine2I2;

	private: System::Windows::Forms::Label^  labelLine2I1;











	private: System::Windows::Forms::Label^  labelLine2UDE;

	private: System::Windows::Forms::Label^  labelLine2UCD;


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



private: System::Windows::Forms::Label^  labelLine1I3;

private: System::Windows::Forms::Label^  labelLine1I2;

private: System::Windows::Forms::Label^  labelLine1I1;

	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button37;


	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Label^  labelLine1UDE;

private: System::Windows::Forms::Label^  labelLine1UCD;




private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  labelLine8UBC;

private: System::Windows::Forms::Label^  labelLine8UAB;

private: System::Windows::Forms::Label^  labelLine8UFA;



private: System::Windows::Forms::Label^  labelLine8U11;

private: System::Windows::Forms::Label^  labelLine8I3;

private: System::Windows::Forms::Label^  labelLine8I2;

private: System::Windows::Forms::Label^  labelLine8I1;











private: System::Windows::Forms::Label^  labelLine8UDE;

private: System::Windows::Forms::Label^  labelLine8UCD;


private: System::Windows::Forms::Label^  labelLine7UBC;

private: System::Windows::Forms::Label^  labelLine7UAB;

private: System::Windows::Forms::Label^  labelLine7UFA;





private: System::Windows::Forms::Label^  labelLine7I3;

private: System::Windows::Forms::Label^  labelLine7I2;

private: System::Windows::Forms::Label^  labelLine7I1;











private: System::Windows::Forms::Label^  labelLine7UDE;

private: System::Windows::Forms::Label^  labelLine7UCD;


private: System::Windows::Forms::Label^  labelLine6UBC;

private: System::Windows::Forms::Label^  labelLine6UAB;

private: System::Windows::Forms::Label^  labelLine6UFA;



private: System::Windows::Forms::Label^  labelLine6U11;

private: System::Windows::Forms::Label^  labelLine6I3;

private: System::Windows::Forms::Label^  labelLine6I2;

private: System::Windows::Forms::Label^  labelLine6I1;











private: System::Windows::Forms::Label^  labelLine6UDE;

private: System::Windows::Forms::Label^  labelLine6UCD;


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

private: System::Windows::Forms::Label^  labelLine5UBC;

private: System::Windows::Forms::Label^  labelLine5UAB;

private: System::Windows::Forms::Label^  labelLine5UFA;

private: System::Windows::Forms::Label^  labelLine5U12;



private: System::Windows::Forms::Label^  labelLine5I3;

private: System::Windows::Forms::Label^  labelLine5I2;

private: System::Windows::Forms::Label^  labelLine5I1;











private: System::Windows::Forms::Label^  labelLine5UDE;

private: System::Windows::Forms::Label^  labelLine5UCD;


private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  textBox结论;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Button^  button81;










private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button15;


private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;


private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Button^  button45;


private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Button^  button55;


private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::Button^  button59;
private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::Button^  button61;
private: System::Windows::Forms::Button^  button62;
private: System::Windows::Forms::Button^  button63;
private: System::Windows::Forms::Button^  button64;
private: System::Windows::Forms::Button^  button65;


private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button69;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;


private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Button^  button25;


private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  labelLine4UBC;

private: System::Windows::Forms::Label^  labelLine4UAB;

private: System::Windows::Forms::Label^  labelLine4UFA;


private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  labelLine4I3;

private: System::Windows::Forms::Label^  labelLine4I2;

private: System::Windows::Forms::Label^  labelLine4I1;
private: System::Windows::Forms::Label^  labelLine4UDE;


private: System::Windows::Forms::Label^  labelLine4UCD;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  labelLine3U12;
private: System::Windows::Forms::TextBox^  labelLine3U11;
private: System::Windows::Forms::TextBox^  labelLine2U12;
private: System::Windows::Forms::TextBox^  labelLine1U11;
private: System::Windows::Forms::TextBox^  labelLine4U12;
private: System::Windows::Forms::TextBox^  labelLine8U12;
private: System::Windows::Forms::TextBox^  labelLine7U12;
private: System::Windows::Forms::TextBox^  labelLine7U11;
private: System::Windows::Forms::TextBox^  labelLine6U12;
private: System::Windows::Forms::TextBox^  labelLine5U11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label48;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(叠加原理实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->labelLine4U12 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine3U12 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine3U11 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine2U12 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine1U11 = (gcnew System::Windows::Forms::TextBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelLine4UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine3UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine4UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine3UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine4UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine3UFA = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine4UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine3I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine4UCD = (gcnew System::Windows::Forms::Label());
			this->labelLine3UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine3UCD = (gcnew System::Windows::Forms::Label());
			this->labelLine2UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine2UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine2UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine2U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine2UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine2UCD = (gcnew System::Windows::Forms::Label());
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
			this->labelLine1UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine1UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine1UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine1U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I1 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->labelLine1UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine1UCD = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->labelLine8U12 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine7U12 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine7U11 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine6U12 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine5U11 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->labelLine5U12 = (gcnew System::Windows::Forms::Label());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->labelLine6U11 = (gcnew System::Windows::Forms::Label());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->labelLine8U11 = (gcnew System::Windows::Forms::Label());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->labelLine8UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine8UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine8UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine8I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine8UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine8UCD = (gcnew System::Windows::Forms::Label());
			this->labelLine7UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine7UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine7UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine7I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine7UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine7UCD = (gcnew System::Windows::Forms::Label());
			this->labelLine6UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine6UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine6UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine6I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine6UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine6UCD = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->labelLine5UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine5UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine5UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine5I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine5UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine5UCD = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(1296, 250);
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
			this->label37->Text = L"    实验前，认真接线，确认仪表工作在正确的量程，极性正确接入，无误后再通电； \r\n\r\n    电源两端不可碰线短路。";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(24, 154);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(1185, 95);
			this->label38->TabIndex = 7;
			this->label38->Text = L"    1．将开关向上拔，即电阻R=330Ω接入电路中。\r\n\r\n    2．正确输入电源，测量各支路电流及各电阻元件两端的电压，数据记入表格一中。\r\n";
			this->label38->Click += gcnew System::EventHandler(this, &叠加原理实验内容::label38_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(383, 284);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->label1->Location = System::Drawing::Point(571, 765);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 86;
			this->label1->Text = L"图1电路图";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label48);
			this->groupBox2->Controls->Add(this->labelLine4U12);
			this->groupBox2->Controls->Add(this->labelLine3U12);
			this->groupBox2->Controls->Add(this->labelLine3U11);
			this->groupBox2->Controls->Add(this->labelLine2U12);
			this->groupBox2->Controls->Add(this->labelLine1U11);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->labelLine4UBC);
			this->groupBox2->Controls->Add(this->labelLine3UBC);
			this->groupBox2->Controls->Add(this->labelLine4UAB);
			this->groupBox2->Controls->Add(this->labelLine3UAB);
			this->groupBox2->Controls->Add(this->labelLine4UFA);
			this->groupBox2->Controls->Add(this->labelLine3UFA);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->labelLine4I3);
			this->groupBox2->Controls->Add(this->labelLine4I2);
			this->groupBox2->Controls->Add(this->labelLine3I3);
			this->groupBox2->Controls->Add(this->labelLine4I1);
			this->groupBox2->Controls->Add(this->labelLine3I2);
			this->groupBox2->Controls->Add(this->labelLine4UDE);
			this->groupBox2->Controls->Add(this->labelLine3I1);
			this->groupBox2->Controls->Add(this->labelLine4UCD);
			this->groupBox2->Controls->Add(this->labelLine3UDE);
			this->groupBox2->Controls->Add(this->labelLine3UCD);
			this->groupBox2->Controls->Add(this->labelLine2UBC);
			this->groupBox2->Controls->Add(this->labelLine2UAB);
			this->groupBox2->Controls->Add(this->labelLine2UFA);
			this->groupBox2->Controls->Add(this->labelLine2U11);
			this->groupBox2->Controls->Add(this->labelLine2I3);
			this->groupBox2->Controls->Add(this->labelLine2I2);
			this->groupBox2->Controls->Add(this->labelLine2I1);
			this->groupBox2->Controls->Add(this->labelLine2UDE);
			this->groupBox2->Controls->Add(this->labelLine2UCD);
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
			this->groupBox2->Controls->Add(this->labelLine1UBC);
			this->groupBox2->Controls->Add(this->labelLine1UAB);
			this->groupBox2->Controls->Add(this->labelLine1UFA);
			this->groupBox2->Controls->Add(this->labelLine1U12);
			this->groupBox2->Controls->Add(this->labelLine1I3);
			this->groupBox2->Controls->Add(this->labelLine1I2);
			this->groupBox2->Controls->Add(this->labelLine1I1);
			this->groupBox2->Controls->Add(this->button41);
			this->groupBox2->Controls->Add(this->button40);
			this->groupBox2->Controls->Add(this->button39);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->labelLine1UDE);
			this->groupBox2->Controls->Add(this->labelLine1UCD);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(15, 892);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1289, 621);
			this->groupBox2->TabIndex = 87;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验数据表一";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &叠加原理实验内容::groupBox2_Enter);
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->ForeColor = System::Drawing::Color::Lime;
			this->label12->Location = System::Drawing::Point(434, 64);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(296, 26);
			this->label12->TabIndex = 230;
			this->label12->Text = L"从直流电流表2获取";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->ForeColor = System::Drawing::Color::Lime;
			this->label48->Location = System::Drawing::Point(741, 64);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(500, 26);
			this->label48->TabIndex = 229;
			this->label48->Text = L"从直流电压表3获取";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLine4U12
			// 
			this->labelLine4U12->Location = System::Drawing::Point(304, 489);
			this->labelLine4U12->Name = L"labelLine4U12";
			this->labelLine4U12->Size = System::Drawing::Size(89, 30);
			this->labelLine4U12->TabIndex = 197;
			// 
			// labelLine3U12
			// 
			this->labelLine3U12->Location = System::Drawing::Point(304, 360);
			this->labelLine3U12->Name = L"labelLine3U12";
			this->labelLine3U12->Size = System::Drawing::Size(89, 30);
			this->labelLine3U12->TabIndex = 196;
			// 
			// labelLine3U11
			// 
			this->labelLine3U11->Location = System::Drawing::Point(209, 360);
			this->labelLine3U11->Name = L"labelLine3U11";
			this->labelLine3U11->Size = System::Drawing::Size(89, 30);
			this->labelLine3U11->TabIndex = 195;
			// 
			// labelLine2U12
			// 
			this->labelLine2U12->Location = System::Drawing::Point(304, 234);
			this->labelLine2U12->Name = L"labelLine2U12";
			this->labelLine2U12->Size = System::Drawing::Size(89, 30);
			this->labelLine2U12->TabIndex = 194;
			// 
			// labelLine1U11
			// 
			this->labelLine1U11->Location = System::Drawing::Point(209, 104);
			this->labelLine1U11->Name = L"labelLine1U11";
			this->labelLine1U11->Size = System::Drawing::Size(89, 30);
			this->labelLine1U11->TabIndex = 193;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(1151, 524);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 42);
			this->button29->TabIndex = 192;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button29_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1151, 399);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 42);
			this->button11->TabIndex = 192;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button11_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(1049, 524);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 42);
			this->button28->TabIndex = 191;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button28_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1049, 399);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 42);
			this->button12->TabIndex = 191;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button12_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(945, 524);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 42);
			this->button27->TabIndex = 190;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button27_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(945, 399);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 42);
			this->button13->TabIndex = 190;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button13_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(843, 524);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 42);
			this->button26->TabIndex = 189;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button26_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(843, 399);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 42);
			this->button14->TabIndex = 189;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button14_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(741, 524);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 42);
			this->button25->TabIndex = 188;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button25_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(741, 399);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 42);
			this->button15->TabIndex = 188;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button15_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(639, 524);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 42);
			this->button22->TabIndex = 185;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button22_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(639, 399);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 42);
			this->button18->TabIndex = 185;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button18_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(539, 524);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 42);
			this->button21->TabIndex = 184;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button21_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(539, 399);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 42);
			this->button19->TabIndex = 184;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button19_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(435, 524);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 42);
			this->button7->TabIndex = 183;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button7_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(435, 399);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 42);
			this->button20->TabIndex = 183;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button20_Click);
			// 
			// label5
			// 
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(5, 379);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 62);
			this->label5->TabIndex = 87;
			this->label5->Text = L"双电源供电\r\n推荐U11=12V\r\n    U12=6V";
			// 
			// label33
			// 
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(5, 592);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(941, 26);
			this->label33->TabIndex = 87;
			this->label33->Text = L"注：为了验证叠加定理，Ⅲ中U11、U12为Ⅰ和Ⅱ相应值；Ⅳ中U12为Ⅱ中的K倍。";
			// 
			// label16
			// 
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(-4, 501);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(171, 42);
			this->label16->TabIndex = 87;
			this->label16->Text = L"单电源供电\r\n推荐U12=12V";
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(5, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 42);
			this->label2->TabIndex = 87;
			this->label2->Text = L"单电源供电\r\n推荐U12=6V";
			// 
			// label32
			// 
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(161, 499);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(28, 42);
			this->label32->TabIndex = 87;
			this->label32->Text = L"Ⅳ";
			// 
			// label31
			// 
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(161, 380);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(28, 42);
			this->label31->TabIndex = 87;
			this->label31->Text = L"Ⅲ";
			// 
			// label30
			// 
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(164, 261);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(21, 42);
			this->label30->TabIndex = 87;
			this->label30->Text = L"Ⅱ";
			// 
			// label18
			// 
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(164, 142);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 42);
			this->label18->TabIndex = 87;
			this->label18->Text = L"Ⅰ";
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(5, 131);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(153, 42);
			this->label19->TabIndex = 87;
			this->label19->Text = L"单电源供电\r\n推荐U11=12V";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1151, 280);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 42);
			this->button1->TabIndex = 182;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1049, 280);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 42);
			this->button2->TabIndex = 181;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(945, 280);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 42);
			this->button3->TabIndex = 180;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(843, 280);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 42);
			this->button4->TabIndex = 179;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(741, 280);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 42);
			this->button5->TabIndex = 178;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button5_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(639, 280);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 42);
			this->button8->TabIndex = 175;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(539, 280);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 42);
			this->button9->TabIndex = 174;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(435, 280);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 42);
			this->button10->TabIndex = 173;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button10_Click);
			// 
			// labelLine4UBC
			// 
			this->labelLine4UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UBC->Location = System::Drawing::Point(945, 478);
			this->labelLine4UBC->Name = L"labelLine4UBC";
			this->labelLine4UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine4UBC->TabIndex = 151;
			this->labelLine4UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UBC
			// 
			this->labelLine3UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UBC->Location = System::Drawing::Point(945, 352);
			this->labelLine3UBC->Name = L"labelLine3UBC";
			this->labelLine3UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine3UBC->TabIndex = 151;
			this->labelLine3UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UAB
			// 
			this->labelLine4UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UAB->Location = System::Drawing::Point(843, 478);
			this->labelLine4UAB->Name = L"labelLine4UAB";
			this->labelLine4UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine4UAB->TabIndex = 150;
			this->labelLine4UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UAB
			// 
			this->labelLine3UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UAB->Location = System::Drawing::Point(843, 352);
			this->labelLine3UAB->Name = L"labelLine3UAB";
			this->labelLine3UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine3UAB->TabIndex = 150;
			this->labelLine3UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UFA
			// 
			this->labelLine4UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UFA->Location = System::Drawing::Point(741, 478);
			this->labelLine4UFA->Name = L"labelLine4UFA";
			this->labelLine4UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine4UFA->TabIndex = 149;
			this->labelLine4UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UFA
			// 
			this->labelLine3UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UFA->Location = System::Drawing::Point(741, 352);
			this->labelLine3UFA->Name = L"labelLine3UFA";
			this->labelLine3UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine3UFA->TabIndex = 149;
			this->labelLine3UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Location = System::Drawing::Point(209, 478);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 42);
			this->label11->TabIndex = 147;
			this->label11->Text = L"0V";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLine4I3
			// 
			this->labelLine4I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I3->Location = System::Drawing::Point(639, 478);
			this->labelLine4I3->Name = L"labelLine4I3";
			this->labelLine4I3->Size = System::Drawing::Size(92, 42);
			this->labelLine4I3->TabIndex = 146;
			this->labelLine4I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I2
			// 
			this->labelLine4I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I2->Location = System::Drawing::Point(539, 478);
			this->labelLine4I2->Name = L"labelLine4I2";
			this->labelLine4I2->Size = System::Drawing::Size(93, 42);
			this->labelLine4I2->TabIndex = 145;
			this->labelLine4I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I3
			// 
			this->labelLine3I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I3->Location = System::Drawing::Point(639, 352);
			this->labelLine3I3->Name = L"labelLine3I3";
			this->labelLine3I3->Size = System::Drawing::Size(92, 42);
			this->labelLine3I3->TabIndex = 146;
			this->labelLine3I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I1
			// 
			this->labelLine4I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I1->Location = System::Drawing::Point(437, 478);
			this->labelLine4I1->Name = L"labelLine4I1";
			this->labelLine4I1->Size = System::Drawing::Size(93, 42);
			this->labelLine4I1->TabIndex = 144;
			this->labelLine4I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I2
			// 
			this->labelLine3I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I2->Location = System::Drawing::Point(539, 352);
			this->labelLine3I2->Name = L"labelLine3I2";
			this->labelLine3I2->Size = System::Drawing::Size(93, 42);
			this->labelLine3I2->TabIndex = 145;
			this->labelLine3I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UDE
			// 
			this->labelLine4UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UDE->Location = System::Drawing::Point(1151, 478);
			this->labelLine4UDE->Name = L"labelLine4UDE";
			this->labelLine4UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine4UDE->TabIndex = 133;
			this->labelLine4UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I1
			// 
			this->labelLine3I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I1->Location = System::Drawing::Point(437, 352);
			this->labelLine3I1->Name = L"labelLine3I1";
			this->labelLine3I1->Size = System::Drawing::Size(93, 42);
			this->labelLine3I1->TabIndex = 144;
			this->labelLine3I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UCD
			// 
			this->labelLine4UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UCD->Location = System::Drawing::Point(1049, 478);
			this->labelLine4UCD->Name = L"labelLine4UCD";
			this->labelLine4UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine4UCD->TabIndex = 132;
			this->labelLine4UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UDE
			// 
			this->labelLine3UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UDE->Location = System::Drawing::Point(1151, 352);
			this->labelLine3UDE->Name = L"labelLine3UDE";
			this->labelLine3UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine3UDE->TabIndex = 133;
			this->labelLine3UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UCD
			// 
			this->labelLine3UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UCD->Location = System::Drawing::Point(1049, 352);
			this->labelLine3UCD->Name = L"labelLine3UCD";
			this->labelLine3UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine3UCD->TabIndex = 132;
			this->labelLine3UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UBC
			// 
			this->labelLine2UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UBC->Location = System::Drawing::Point(945, 226);
			this->labelLine2UBC->Name = L"labelLine2UBC";
			this->labelLine2UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine2UBC->TabIndex = 130;
			this->labelLine2UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UAB
			// 
			this->labelLine2UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UAB->Location = System::Drawing::Point(843, 226);
			this->labelLine2UAB->Name = L"labelLine2UAB";
			this->labelLine2UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine2UAB->TabIndex = 129;
			this->labelLine2UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UFA
			// 
			this->labelLine2UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UFA->Location = System::Drawing::Point(741, 226);
			this->labelLine2UFA->Name = L"labelLine2UFA";
			this->labelLine2UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine2UFA->TabIndex = 128;
			this->labelLine2UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2U11
			// 
			this->labelLine2U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2U11->Location = System::Drawing::Point(209, 226);
			this->labelLine2U11->Name = L"labelLine2U11";
			this->labelLine2U11->Size = System::Drawing::Size(89, 42);
			this->labelLine2U11->TabIndex = 126;
			this->labelLine2U11->Text = L"0V";
			this->labelLine2U11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLine2I3
			// 
			this->labelLine2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I3->Location = System::Drawing::Point(639, 226);
			this->labelLine2I3->Name = L"labelLine2I3";
			this->labelLine2I3->Size = System::Drawing::Size(92, 42);
			this->labelLine2I3->TabIndex = 125;
			this->labelLine2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I2
			// 
			this->labelLine2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I2->Location = System::Drawing::Point(539, 226);
			this->labelLine2I2->Name = L"labelLine2I2";
			this->labelLine2I2->Size = System::Drawing::Size(93, 42);
			this->labelLine2I2->TabIndex = 124;
			this->labelLine2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I1
			// 
			this->labelLine2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I1->Location = System::Drawing::Point(437, 226);
			this->labelLine2I1->Name = L"labelLine2I1";
			this->labelLine2I1->Size = System::Drawing::Size(93, 42);
			this->labelLine2I1->TabIndex = 123;
			this->labelLine2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UDE
			// 
			this->labelLine2UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UDE->Location = System::Drawing::Point(1151, 226);
			this->labelLine2UDE->Name = L"labelLine2UDE";
			this->labelLine2UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine2UDE->TabIndex = 112;
			this->labelLine2UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UCD
			// 
			this->labelLine2UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UCD->Location = System::Drawing::Point(1049, 226);
			this->labelLine2UCD->Name = L"labelLine2UCD";
			this->labelLine2UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine2UCD->TabIndex = 111;
			this->labelLine2UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->ForeColor = System::Drawing::Color::Blue;
			this->label20->Location = System::Drawing::Point(945, 28);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 22);
			this->label20->TabIndex = 97;
			this->label20->Text = L"UBC";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->ForeColor = System::Drawing::Color::Blue;
			this->label21->Location = System::Drawing::Point(843, 28);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 22);
			this->label21->TabIndex = 96;
			this->label21->Text = L"UAB";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->ForeColor = System::Drawing::Color::Blue;
			this->label22->Location = System::Drawing::Point(741, 28);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 22);
			this->label22->TabIndex = 95;
			this->label22->Text = L"UFA";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->ForeColor = System::Drawing::Color::Blue;
			this->label23->Location = System::Drawing::Point(304, 28);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 22);
			this->label23->TabIndex = 94;
			this->label23->Text = L"U12";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->ForeColor = System::Drawing::Color::Blue;
			this->label24->Location = System::Drawing::Point(209, 28);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 22);
			this->label24->TabIndex = 93;
			this->label24->Text = L"U11";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->ForeColor = System::Drawing::Color::Blue;
			this->label25->Location = System::Drawing::Point(639, 28);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 22);
			this->label25->TabIndex = 92;
			this->label25->Text = L"I3(mA)";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->ForeColor = System::Drawing::Color::Blue;
			this->label26->Location = System::Drawing::Point(539, 28);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 22);
			this->label26->TabIndex = 91;
			this->label26->Text = L"I2(mA)";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->ForeColor = System::Drawing::Color::Blue;
			this->label27->Location = System::Drawing::Point(437, 28);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 22);
			this->label27->TabIndex = 90;
			this->label27->Text = L"I1(mA)";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->ForeColor = System::Drawing::Color::Blue;
			this->label28->Location = System::Drawing::Point(1151, 28);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(93, 22);
			this->label28->TabIndex = 89;
			this->label28->Text = L"UDE";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->ForeColor = System::Drawing::Color::Blue;
			this->label29->Location = System::Drawing::Point(1049, 28);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(93, 22);
			this->label29->TabIndex = 88;
			this->label29->Text = L"UCD";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UBC
			// 
			this->labelLine1UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UBC->Location = System::Drawing::Point(945, 104);
			this->labelLine1UBC->Name = L"labelLine1UBC";
			this->labelLine1UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine1UBC->TabIndex = 76;
			this->labelLine1UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UAB
			// 
			this->labelLine1UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UAB->Location = System::Drawing::Point(843, 104);
			this->labelLine1UAB->Name = L"labelLine1UAB";
			this->labelLine1UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine1UAB->TabIndex = 75;
			this->labelLine1UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UFA
			// 
			this->labelLine1UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UFA->Location = System::Drawing::Point(741, 104);
			this->labelLine1UFA->Name = L"labelLine1UFA";
			this->labelLine1UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine1UFA->TabIndex = 74;
			this->labelLine1UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1U12
			// 
			this->labelLine1U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1U12->Location = System::Drawing::Point(304, 104);
			this->labelLine1U12->Name = L"labelLine1U12";
			this->labelLine1U12->Size = System::Drawing::Size(93, 42);
			this->labelLine1U12->TabIndex = 73;
			this->labelLine1U12->Text = L"0V";
			this->labelLine1U12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLine1I3
			// 
			this->labelLine1I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I3->Location = System::Drawing::Point(639, 104);
			this->labelLine1I3->Name = L"labelLine1I3";
			this->labelLine1I3->Size = System::Drawing::Size(92, 42);
			this->labelLine1I3->TabIndex = 71;
			this->labelLine1I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I2
			// 
			this->labelLine1I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I2->Location = System::Drawing::Point(539, 104);
			this->labelLine1I2->Name = L"labelLine1I2";
			this->labelLine1I2->Size = System::Drawing::Size(93, 42);
			this->labelLine1I2->TabIndex = 70;
			this->labelLine1I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I1
			// 
			this->labelLine1I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I1->Location = System::Drawing::Point(437, 104);
			this->labelLine1I1->Name = L"labelLine1I1";
			this->labelLine1I1->Size = System::Drawing::Size(93, 42);
			this->labelLine1I1->TabIndex = 69;
			this->labelLine1I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelLine1I1->Click += gcnew System::EventHandler(this, &叠加原理实验内容::labelLine1I1_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(1151, 159);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(93, 42);
			this->button41->TabIndex = 58;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button41_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(1049, 159);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(93, 42);
			this->button40->TabIndex = 57;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button40_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(945, 159);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 42);
			this->button39->TabIndex = 56;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button39_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(843, 159);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 42);
			this->button38->TabIndex = 55;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button38_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(741, 159);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 42);
			this->button37->TabIndex = 54;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button37_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(639, 159);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 42);
			this->button34->TabIndex = 51;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button34_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(539, 159);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 42);
			this->button33->TabIndex = 50;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button33_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(435, 159);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 42);
			this->button32->TabIndex = 49;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button32_Click);
			// 
			// labelLine1UDE
			// 
			this->labelLine1UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UDE->Location = System::Drawing::Point(1151, 104);
			this->labelLine1UDE->Name = L"labelLine1UDE";
			this->labelLine1UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine1UDE->TabIndex = 47;
			this->labelLine1UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UCD
			// 
			this->labelLine1UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UCD->Location = System::Drawing::Point(1049, 104);
			this->labelLine1UCD->Name = L"labelLine1UCD";
			this->labelLine1UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine1UCD->TabIndex = 46;
			this->labelLine1UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(199, 524);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 42);
			this->label17->TabIndex = 5;
			this->label17->Text = L"FE短接";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(203, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 42);
			this->label4->TabIndex = 5;
			this->label4->Text = L"FE短接";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(308, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 42);
			this->label3->TabIndex = 5;
			this->label3->Text = L"BC短接";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->labelLine8U12);
			this->groupBox1->Controls->Add(this->labelLine7U12);
			this->groupBox1->Controls->Add(this->labelLine7U11);
			this->groupBox1->Controls->Add(this->labelLine6U12);
			this->groupBox1->Controls->Add(this->labelLine5U11);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Controls->Add(this->label39);
			this->groupBox1->Controls->Add(this->label40);
			this->groupBox1->Controls->Add(this->label41);
			this->groupBox1->Controls->Add(this->label42);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->button31);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->button42);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->button43);
			this->groupBox1->Controls->Add(this->button44);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->button48);
			this->groupBox1->Controls->Add(this->button49);
			this->groupBox1->Controls->Add(this->button50);
			this->groupBox1->Controls->Add(this->button51);
			this->groupBox1->Controls->Add(this->button52);
			this->groupBox1->Controls->Add(this->button53);
			this->groupBox1->Controls->Add(this->button54);
			this->groupBox1->Controls->Add(this->button55);
			this->groupBox1->Controls->Add(this->button58);
			this->groupBox1->Controls->Add(this->labelLine5U12);
			this->groupBox1->Controls->Add(this->button59);
			this->groupBox1->Controls->Add(this->label86);
			this->groupBox1->Controls->Add(this->button60);
			this->groupBox1->Controls->Add(this->label85);
			this->groupBox1->Controls->Add(this->button61);
			this->groupBox1->Controls->Add(this->labelLine6U11);
			this->groupBox1->Controls->Add(this->button62);
			this->groupBox1->Controls->Add(this->button63);
			this->groupBox1->Controls->Add(this->button64);
			this->groupBox1->Controls->Add(this->button65);
			this->groupBox1->Controls->Add(this->button68);
			this->groupBox1->Controls->Add(this->labelLine8U11);
			this->groupBox1->Controls->Add(this->button69);
			this->groupBox1->Controls->Add(this->button70);
			this->groupBox1->Controls->Add(this->button71);
			this->groupBox1->Controls->Add(this->button72);
			this->groupBox1->Controls->Add(this->button73);
			this->groupBox1->Controls->Add(this->button74);
			this->groupBox1->Controls->Add(this->button75);
			this->groupBox1->Controls->Add(this->button78);
			this->groupBox1->Controls->Add(this->button79);
			this->groupBox1->Controls->Add(this->button80);
			this->groupBox1->Controls->Add(this->labelLine8UBC);
			this->groupBox1->Controls->Add(this->labelLine8UAB);
			this->groupBox1->Controls->Add(this->labelLine8UFA);
			this->groupBox1->Controls->Add(this->labelLine8I3);
			this->groupBox1->Controls->Add(this->labelLine8I2);
			this->groupBox1->Controls->Add(this->labelLine8I1);
			this->groupBox1->Controls->Add(this->labelLine8UDE);
			this->groupBox1->Controls->Add(this->labelLine8UCD);
			this->groupBox1->Controls->Add(this->labelLine7UBC);
			this->groupBox1->Controls->Add(this->labelLine7UAB);
			this->groupBox1->Controls->Add(this->labelLine7UFA);
			this->groupBox1->Controls->Add(this->labelLine7I3);
			this->groupBox1->Controls->Add(this->labelLine7I2);
			this->groupBox1->Controls->Add(this->labelLine7I1);
			this->groupBox1->Controls->Add(this->labelLine7UDE);
			this->groupBox1->Controls->Add(this->labelLine7UCD);
			this->groupBox1->Controls->Add(this->labelLine6UBC);
			this->groupBox1->Controls->Add(this->labelLine6UAB);
			this->groupBox1->Controls->Add(this->labelLine6UFA);
			this->groupBox1->Controls->Add(this->labelLine6I3);
			this->groupBox1->Controls->Add(this->labelLine6I2);
			this->groupBox1->Controls->Add(this->labelLine6I1);
			this->groupBox1->Controls->Add(this->labelLine6UDE);
			this->groupBox1->Controls->Add(this->labelLine6UCD);
			this->groupBox1->Controls->Add(this->label82);
			this->groupBox1->Controls->Add(this->label83);
			this->groupBox1->Controls->Add(this->label84);
			this->groupBox1->Controls->Add(this->label87);
			this->groupBox1->Controls->Add(this->label88);
			this->groupBox1->Controls->Add(this->label89);
			this->groupBox1->Controls->Add(this->label90);
			this->groupBox1->Controls->Add(this->label91);
			this->groupBox1->Controls->Add(this->labelLine5UBC);
			this->groupBox1->Controls->Add(this->labelLine5UAB);
			this->groupBox1->Controls->Add(this->labelLine5UFA);
			this->groupBox1->Controls->Add(this->labelLine5I3);
			this->groupBox1->Controls->Add(this->labelLine5I2);
			this->groupBox1->Controls->Add(this->labelLine5I1);
			this->groupBox1->Controls->Add(this->labelLine5UDE);
			this->groupBox1->Controls->Add(this->labelLine5UCD);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 1664);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1289, 579);
			this->groupBox1->TabIndex = 173;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验数据表二";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->ForeColor = System::Drawing::Color::Lime;
			this->label49->Location = System::Drawing::Point(435, 59);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(296, 26);
			this->label49->TabIndex = 228;
			this->label49->Text = L"从直流电流表2获取";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->ForeColor = System::Drawing::Color::Lime;
			this->label50->Location = System::Drawing::Point(748, 59);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(500, 26);
			this->label50->TabIndex = 227;
			this->label50->Text = L"从直流电压表3获取";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLine8U12
			// 
			this->labelLine8U12->Location = System::Drawing::Point(311, 420);
			this->labelLine8U12->Name = L"labelLine8U12";
			this->labelLine8U12->Size = System::Drawing::Size(89, 30);
			this->labelLine8U12->TabIndex = 226;
			// 
			// labelLine7U12
			// 
			this->labelLine7U12->Location = System::Drawing::Point(311, 316);
			this->labelLine7U12->Name = L"labelLine7U12";
			this->labelLine7U12->Size = System::Drawing::Size(89, 30);
			this->labelLine7U12->TabIndex = 225;
			// 
			// labelLine7U11
			// 
			this->labelLine7U11->Location = System::Drawing::Point(212, 316);
			this->labelLine7U11->Name = L"labelLine7U11";
			this->labelLine7U11->Size = System::Drawing::Size(89, 30);
			this->labelLine7U11->TabIndex = 224;
			// 
			// labelLine6U12
			// 
			this->labelLine6U12->Location = System::Drawing::Point(307, 207);
			this->labelLine6U12->Name = L"labelLine6U12";
			this->labelLine6U12->Size = System::Drawing::Size(89, 30);
			this->labelLine6U12->TabIndex = 223;
			// 
			// labelLine5U11
			// 
			this->labelLine5U11->Location = System::Drawing::Point(212, 100);
			this->labelLine5U11->Name = L"labelLine5U11";
			this->labelLine5U11->Size = System::Drawing::Size(89, 30);
			this->labelLine5U11->TabIndex = 222;
			// 
			// label34
			// 
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(11, 319);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(129, 62);
			this->label34->TabIndex = 213;
			this->label34->Text = L"双电源供电\r\n推荐U11=12V\r\n    U12=6V";
			// 
			// label35
			// 
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(9, 534);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(941, 26);
			this->label35->TabIndex = 214;
			this->label35->Text = L"注：为了验证叠加定理，Ⅲ中U11、U12为Ⅰ和Ⅱ相应值；Ⅳ中U12为Ⅱ中的K倍。";
			// 
			// label36
			// 
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(1, 441);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(171, 42);
			this->label36->TabIndex = 215;
			this->label36->Text = L"单电源供电\r\n推荐U12=12V";
			// 
			// label39
			// 
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(11, 226);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(129, 42);
			this->label39->TabIndex = 216;
			this->label39->Text = L"单电源供电\r\n推荐U12=6V";
			// 
			// label40
			// 
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(167, 441);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(28, 42);
			this->label40->TabIndex = 217;
			this->label40->Text = L"Ⅳ";
			// 
			// label41
			// 
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(167, 329);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(28, 42);
			this->label41->TabIndex = 218;
			this->label41->Text = L"Ⅲ";
			// 
			// label42
			// 
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(169, 226);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(21, 42);
			this->label42->TabIndex = 219;
			this->label42->Text = L"Ⅱ";
			// 
			// label43
			// 
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(169, 120);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(21, 42);
			this->label43->TabIndex = 220;
			this->label43->Text = L"Ⅰ";
			// 
			// label44
			// 
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(11, 120);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(171, 42);
			this->label44->TabIndex = 221;
			this->label44->Text = L"单电源供电\r\n推荐U11=12V";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(1155, 455);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 42);
			this->button31->TabIndex = 212;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button31_Click);
			// 
			// label47
			// 
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(200, 458);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(101, 42);
			this->label47->TabIndex = 5;
			this->label47->Text = L"FE短接";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label45
			// 
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(307, 139);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(93, 42);
			this->label45->TabIndex = 5;
			this->label45->Text = L"BC短接";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(1053, 455);
			this->button42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 42);
			this->button42->TabIndex = 211;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button42_Click);
			// 
			// label46
			// 
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(212, 250);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(92, 42);
			this->label46->TabIndex = 5;
			this->label46->Text = L"FE短接";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(949, 455);
			this->button43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(93, 42);
			this->button43->TabIndex = 210;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(847, 455);
			this->button44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(93, 42);
			this->button44->TabIndex = 209;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(745, 455);
			this->button45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(93, 42);
			this->button45->TabIndex = 208;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button45_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(641, 455);
			this->button48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(93, 42);
			this->button48->TabIndex = 205;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button48_Click);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(541, 455);
			this->button49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(93, 42);
			this->button49->TabIndex = 204;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button49_Click);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(437, 455);
			this->button50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(93, 42);
			this->button50->TabIndex = 203;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button50_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(1155, 346);
			this->button51->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(93, 42);
			this->button51->TabIndex = 202;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button51_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(1053, 346);
			this->button52->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(93, 42);
			this->button52->TabIndex = 201;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button52_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(949, 346);
			this->button53->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(93, 42);
			this->button53->TabIndex = 200;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button53_Click);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(847, 346);
			this->button54->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(93, 42);
			this->button54->TabIndex = 199;
			this->button54->Text = L"获取";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button54_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(745, 346);
			this->button55->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(93, 42);
			this->button55->TabIndex = 198;
			this->button55->Text = L"获取";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button55_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(641, 346);
			this->button58->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(93, 42);
			this->button58->TabIndex = 195;
			this->button58->Text = L"获取";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button58_Click);
			// 
			// labelLine5U12
			// 
			this->labelLine5U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5U12->Location = System::Drawing::Point(307, 92);
			this->labelLine5U12->Name = L"labelLine5U12";
			this->labelLine5U12->Size = System::Drawing::Size(93, 42);
			this->labelLine5U12->TabIndex = 73;
			this->labelLine5U12->Text = L"0V";
			this->labelLine5U12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(541, 346);
			this->button59->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(93, 42);
			this->button59->TabIndex = 194;
			this->button59->Text = L"获取";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button59_Click);
			// 
			// label86
			// 
			this->label86->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label86->Location = System::Drawing::Point(214, 25);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(89, 22);
			this->label86->TabIndex = 93;
			this->label86->Text = L"U11";
			this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(437, 346);
			this->button60->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(93, 42);
			this->button60->TabIndex = 193;
			this->button60->Text = L"获取";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button60_Click);
			// 
			// label85
			// 
			this->label85->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label85->Location = System::Drawing::Point(309, 25);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(93, 22);
			this->label85->TabIndex = 94;
			this->label85->Text = L"U12";
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(1155, 250);
			this->button61->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(93, 42);
			this->button61->TabIndex = 192;
			this->button61->Text = L"获取";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button61_Click);
			// 
			// labelLine6U11
			// 
			this->labelLine6U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6U11->Location = System::Drawing::Point(212, 195);
			this->labelLine6U11->Name = L"labelLine6U11";
			this->labelLine6U11->Size = System::Drawing::Size(89, 42);
			this->labelLine6U11->TabIndex = 126;
			this->labelLine6U11->Text = L"0V";
			this->labelLine6U11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(1053, 250);
			this->button62->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(93, 42);
			this->button62->TabIndex = 191;
			this->button62->Text = L"获取";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button62_Click);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(949, 250);
			this->button63->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(93, 42);
			this->button63->TabIndex = 190;
			this->button63->Text = L"获取";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button63_Click);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(847, 250);
			this->button64->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(93, 42);
			this->button64->TabIndex = 189;
			this->button64->Text = L"获取";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button64_Click);
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(745, 250);
			this->button65->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(93, 42);
			this->button65->TabIndex = 188;
			this->button65->Text = L"获取";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button65_Click);
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(641, 250);
			this->button68->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(93, 42);
			this->button68->TabIndex = 185;
			this->button68->Text = L"获取";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button68_Click);
			// 
			// labelLine8U11
			// 
			this->labelLine8U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8U11->Location = System::Drawing::Point(212, 410);
			this->labelLine8U11->Name = L"labelLine8U11";
			this->labelLine8U11->Size = System::Drawing::Size(89, 42);
			this->labelLine8U11->TabIndex = 168;
			this->labelLine8U11->Text = L"0V";
			this->labelLine8U11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button69
			// 
			this->button69->Location = System::Drawing::Point(541, 250);
			this->button69->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(93, 42);
			this->button69->TabIndex = 184;
			this->button69->Text = L"获取";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button69_Click);
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(437, 250);
			this->button70->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(93, 42);
			this->button70->TabIndex = 183;
			this->button70->Text = L"获取";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button70_Click);
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(1157, 139);
			this->button71->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(93, 42);
			this->button71->TabIndex = 182;
			this->button71->Text = L"获取";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button71_Click);
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(1056, 139);
			this->button72->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(93, 42);
			this->button72->TabIndex = 181;
			this->button72->Text = L"获取";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button72_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(952, 139);
			this->button73->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(93, 42);
			this->button73->TabIndex = 180;
			this->button73->Text = L"获取";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button73_Click);
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(851, 139);
			this->button74->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(93, 42);
			this->button74->TabIndex = 179;
			this->button74->Text = L"获取";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button74_Click);
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(748, 139);
			this->button75->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(93, 42);
			this->button75->TabIndex = 178;
			this->button75->Text = L"获取";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button75_Click);
			// 
			// button78
			// 
			this->button78->Location = System::Drawing::Point(644, 139);
			this->button78->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(93, 42);
			this->button78->TabIndex = 175;
			this->button78->Text = L"获取";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button78_Click);
			// 
			// button79
			// 
			this->button79->Location = System::Drawing::Point(545, 139);
			this->button79->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(93, 42);
			this->button79->TabIndex = 174;
			this->button79->Text = L"获取";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button79_Click);
			// 
			// button80
			// 
			this->button80->Location = System::Drawing::Point(441, 139);
			this->button80->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(93, 42);
			this->button80->TabIndex = 173;
			this->button80->Text = L"获取";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button80_Click);
			// 
			// labelLine8UBC
			// 
			this->labelLine8UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UBC->Location = System::Drawing::Point(949, 410);
			this->labelLine8UBC->Name = L"labelLine8UBC";
			this->labelLine8UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine8UBC->TabIndex = 172;
			this->labelLine8UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UAB
			// 
			this->labelLine8UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UAB->Location = System::Drawing::Point(847, 410);
			this->labelLine8UAB->Name = L"labelLine8UAB";
			this->labelLine8UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine8UAB->TabIndex = 171;
			this->labelLine8UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UFA
			// 
			this->labelLine8UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UFA->Location = System::Drawing::Point(745, 410);
			this->labelLine8UFA->Name = L"labelLine8UFA";
			this->labelLine8UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine8UFA->TabIndex = 170;
			this->labelLine8UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I3
			// 
			this->labelLine8I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I3->Location = System::Drawing::Point(641, 410);
			this->labelLine8I3->Name = L"labelLine8I3";
			this->labelLine8I3->Size = System::Drawing::Size(92, 42);
			this->labelLine8I3->TabIndex = 167;
			this->labelLine8I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I2
			// 
			this->labelLine8I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I2->Location = System::Drawing::Point(541, 410);
			this->labelLine8I2->Name = L"labelLine8I2";
			this->labelLine8I2->Size = System::Drawing::Size(93, 42);
			this->labelLine8I2->TabIndex = 166;
			this->labelLine8I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I1
			// 
			this->labelLine8I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I1->Location = System::Drawing::Point(440, 410);
			this->labelLine8I1->Name = L"labelLine8I1";
			this->labelLine8I1->Size = System::Drawing::Size(93, 42);
			this->labelLine8I1->TabIndex = 165;
			this->labelLine8I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UDE
			// 
			this->labelLine8UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UDE->Location = System::Drawing::Point(1155, 410);
			this->labelLine8UDE->Name = L"labelLine8UDE";
			this->labelLine8UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine8UDE->TabIndex = 154;
			this->labelLine8UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UCD
			// 
			this->labelLine8UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UCD->Location = System::Drawing::Point(1053, 410);
			this->labelLine8UCD->Name = L"labelLine8UCD";
			this->labelLine8UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine8UCD->TabIndex = 153;
			this->labelLine8UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UBC
			// 
			this->labelLine7UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UBC->Location = System::Drawing::Point(949, 300);
			this->labelLine7UBC->Name = L"labelLine7UBC";
			this->labelLine7UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine7UBC->TabIndex = 151;
			this->labelLine7UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UAB
			// 
			this->labelLine7UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UAB->Location = System::Drawing::Point(847, 300);
			this->labelLine7UAB->Name = L"labelLine7UAB";
			this->labelLine7UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine7UAB->TabIndex = 150;
			this->labelLine7UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UFA
			// 
			this->labelLine7UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UFA->Location = System::Drawing::Point(745, 300);
			this->labelLine7UFA->Name = L"labelLine7UFA";
			this->labelLine7UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine7UFA->TabIndex = 149;
			this->labelLine7UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I3
			// 
			this->labelLine7I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I3->Location = System::Drawing::Point(641, 300);
			this->labelLine7I3->Name = L"labelLine7I3";
			this->labelLine7I3->Size = System::Drawing::Size(92, 42);
			this->labelLine7I3->TabIndex = 146;
			this->labelLine7I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I2
			// 
			this->labelLine7I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I2->Location = System::Drawing::Point(541, 300);
			this->labelLine7I2->Name = L"labelLine7I2";
			this->labelLine7I2->Size = System::Drawing::Size(93, 42);
			this->labelLine7I2->TabIndex = 145;
			this->labelLine7I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I1
			// 
			this->labelLine7I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I1->Location = System::Drawing::Point(440, 300);
			this->labelLine7I1->Name = L"labelLine7I1";
			this->labelLine7I1->Size = System::Drawing::Size(93, 42);
			this->labelLine7I1->TabIndex = 144;
			this->labelLine7I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UDE
			// 
			this->labelLine7UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UDE->Location = System::Drawing::Point(1155, 300);
			this->labelLine7UDE->Name = L"labelLine7UDE";
			this->labelLine7UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine7UDE->TabIndex = 133;
			this->labelLine7UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UCD
			// 
			this->labelLine7UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UCD->Location = System::Drawing::Point(1053, 300);
			this->labelLine7UCD->Name = L"labelLine7UCD";
			this->labelLine7UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine7UCD->TabIndex = 132;
			this->labelLine7UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UBC
			// 
			this->labelLine6UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UBC->Location = System::Drawing::Point(949, 195);
			this->labelLine6UBC->Name = L"labelLine6UBC";
			this->labelLine6UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine6UBC->TabIndex = 130;
			this->labelLine6UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UAB
			// 
			this->labelLine6UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UAB->Location = System::Drawing::Point(847, 195);
			this->labelLine6UAB->Name = L"labelLine6UAB";
			this->labelLine6UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine6UAB->TabIndex = 129;
			this->labelLine6UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UFA
			// 
			this->labelLine6UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UFA->Location = System::Drawing::Point(745, 195);
			this->labelLine6UFA->Name = L"labelLine6UFA";
			this->labelLine6UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine6UFA->TabIndex = 128;
			this->labelLine6UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I3
			// 
			this->labelLine6I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I3->Location = System::Drawing::Point(641, 195);
			this->labelLine6I3->Name = L"labelLine6I3";
			this->labelLine6I3->Size = System::Drawing::Size(92, 42);
			this->labelLine6I3->TabIndex = 125;
			this->labelLine6I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I2
			// 
			this->labelLine6I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I2->Location = System::Drawing::Point(541, 195);
			this->labelLine6I2->Name = L"labelLine6I2";
			this->labelLine6I2->Size = System::Drawing::Size(93, 42);
			this->labelLine6I2->TabIndex = 124;
			this->labelLine6I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I1
			// 
			this->labelLine6I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I1->Location = System::Drawing::Point(440, 195);
			this->labelLine6I1->Name = L"labelLine6I1";
			this->labelLine6I1->Size = System::Drawing::Size(93, 42);
			this->labelLine6I1->TabIndex = 123;
			this->labelLine6I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UDE
			// 
			this->labelLine6UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UDE->Location = System::Drawing::Point(1155, 195);
			this->labelLine6UDE->Name = L"labelLine6UDE";
			this->labelLine6UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine6UDE->TabIndex = 112;
			this->labelLine6UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UCD
			// 
			this->labelLine6UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UCD->Location = System::Drawing::Point(1053, 195);
			this->labelLine6UCD->Name = L"labelLine6UCD";
			this->labelLine6UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine6UCD->TabIndex = 111;
			this->labelLine6UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label82
			// 
			this->label82->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label82->Location = System::Drawing::Point(951, 25);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(93, 22);
			this->label82->TabIndex = 97;
			this->label82->Text = L"UBC";
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label83
			// 
			this->label83->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label83->Location = System::Drawing::Point(849, 25);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(93, 22);
			this->label83->TabIndex = 96;
			this->label83->Text = L"UAB";
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label84
			// 
			this->label84->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label84->Location = System::Drawing::Point(747, 25);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(93, 22);
			this->label84->TabIndex = 95;
			this->label84->Text = L"UFA";
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label87
			// 
			this->label87->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label87->Location = System::Drawing::Point(643, 25);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(92, 22);
			this->label87->TabIndex = 92;
			this->label87->Text = L"I3(mA)";
			this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label88
			// 
			this->label88->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label88->Location = System::Drawing::Point(543, 25);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(93, 22);
			this->label88->TabIndex = 91;
			this->label88->Text = L"I2(mA)";
			this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label89
			// 
			this->label89->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label89->Location = System::Drawing::Point(442, 25);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(93, 22);
			this->label89->TabIndex = 90;
			this->label89->Text = L"I1(mA)";
			this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label90
			// 
			this->label90->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label90->Location = System::Drawing::Point(1157, 25);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(93, 22);
			this->label90->TabIndex = 89;
			this->label90->Text = L"UDE";
			this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label91
			// 
			this->label91->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label91->Location = System::Drawing::Point(1055, 25);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(93, 22);
			this->label91->TabIndex = 88;
			this->label91->Text = L"UCD";
			this->label91->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UBC
			// 
			this->labelLine5UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UBC->Location = System::Drawing::Point(949, 92);
			this->labelLine5UBC->Name = L"labelLine5UBC";
			this->labelLine5UBC->Size = System::Drawing::Size(93, 42);
			this->labelLine5UBC->TabIndex = 76;
			this->labelLine5UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UAB
			// 
			this->labelLine5UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UAB->Location = System::Drawing::Point(847, 92);
			this->labelLine5UAB->Name = L"labelLine5UAB";
			this->labelLine5UAB->Size = System::Drawing::Size(93, 42);
			this->labelLine5UAB->TabIndex = 75;
			this->labelLine5UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UFA
			// 
			this->labelLine5UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UFA->Location = System::Drawing::Point(745, 92);
			this->labelLine5UFA->Name = L"labelLine5UFA";
			this->labelLine5UFA->Size = System::Drawing::Size(93, 42);
			this->labelLine5UFA->TabIndex = 74;
			this->labelLine5UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I3
			// 
			this->labelLine5I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I3->Location = System::Drawing::Point(641, 92);
			this->labelLine5I3->Name = L"labelLine5I3";
			this->labelLine5I3->Size = System::Drawing::Size(92, 42);
			this->labelLine5I3->TabIndex = 71;
			this->labelLine5I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I2
			// 
			this->labelLine5I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I2->Location = System::Drawing::Point(541, 92);
			this->labelLine5I2->Name = L"labelLine5I2";
			this->labelLine5I2->Size = System::Drawing::Size(93, 42);
			this->labelLine5I2->TabIndex = 70;
			this->labelLine5I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I1
			// 
			this->labelLine5I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I1->Location = System::Drawing::Point(440, 92);
			this->labelLine5I1->Name = L"labelLine5I1";
			this->labelLine5I1->Size = System::Drawing::Size(93, 42);
			this->labelLine5I1->TabIndex = 69;
			this->labelLine5I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UDE
			// 
			this->labelLine5UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UDE->Location = System::Drawing::Point(1155, 92);
			this->labelLine5UDE->Name = L"labelLine5UDE";
			this->labelLine5UDE->Size = System::Drawing::Size(93, 42);
			this->labelLine5UDE->TabIndex = 47;
			this->labelLine5UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UCD
			// 
			this->labelLine5UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UCD->Location = System::Drawing::Point(1053, 92);
			this->labelLine5UCD->Name = L"labelLine5UCD";
			this->labelLine5UCD->Size = System::Drawing::Size(93, 42);
			this->labelLine5UCD->TabIndex = 46;
			this->labelLine5UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label104
			// 
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(31, 42);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(533, 84);
			this->label104->TabIndex = 174;
			this->label104->Text = L"    3．将开关向下拔，即电阻D=1N4007接入电路中。\r\n\r\n    4．重复步骤1，2，并将相应的数据填入表中。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label104);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(15, 1535);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1285, 122);
			this->groupBox3->TabIndex = 175;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"叠加定律实验内容";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(212, 2249);
			this->textBox结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1001, 28);
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
			this->label106->Size = System::Drawing::Size(1315, 52);
			this->label106->TabIndex = 179;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(561, 2298);
			this->button81->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 178;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button81_Click);
			// 
			// 叠加原理实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1692, 892);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"叠加原理实验内容";
			this->Text = L"叠加原理实验内容";
			this->Load += gcnew System::EventHandler(this, &叠加原理实验内容::叠加原理实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1I1->Text = global::GetI500Data();
}
private: System::Void labelLine1I1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2I1->Text = global::GetI500Data();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3I1->Text = global::GetI500Data();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	//labelLine4I1->Text = global::GetI500Data();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1I2->Text = global::GetI500Data();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2I2->Text = global::GetI500Data();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3I2->Text = global::GetI500Data();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4UDE->Text = global::GetU30_U400VData();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1I3->Text = global::GetI500Data();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2I3->Text = global::GetI500Data();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3I3->Text = global::GetI500Data();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4UCD->Text = global::GetU30_U400VData();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	//labelLine1U11->Text = global::GetU30_U400VData();
	SetDVNum(labelLine1U11->Text,0,30);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4I1->Text = global::GetI500Data();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine3U11->Text, 0, 30);
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4UBC->Text = global::GetU30_U400VData();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1U12->Text = global::GetU30_U400VData();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine2U12->Text, 0, 30);
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine4U12->Text, 0, 30);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4UAB->Text = global::GetU30_U400VData();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1UFA->Text = global::GetU30_U400VData();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2UFA->Text = global::GetU30_U400VData();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3UFA->Text = global::GetU30_U400VData();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4UFA->Text = global::GetU30_U400VData();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1UAB->Text = global::GetU30_U400VData();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2UAB->Text = global::GetU30_U400VData();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3UAB->Text = global::GetU30_U400VData();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	//labelLine4UAB->Text = global::GetU30_U400VData();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1UBC->Text = global::GetU30_U400VData();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2UBC->Text = global::GetU30_U400VData();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3UBC->Text = global::GetU30_U400VData();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	//labelLine4UBC->Text = global::GetU30_U400VData();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1UCD->Text = global::GetU30_U400VData();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2UCD->Text = global::GetU30_U400VData();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3UCD->Text = global::GetU30_U400VData();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4I3->Text = global::GetI500Data();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine1UDE->Text = global::GetU30_U400VData();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine2UDE->Text = global::GetU30_U400VData();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine3UDE->Text = global::GetU30_U400VData();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine4I2->Text = global::GetI500Data();
}
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5I1->Text = global::GetI500Data();
}
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6I1->Text = global::GetI500Data();
}
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7I1->Text = global::GetI500Data();
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8I1->Text = global::GetI500Data();
}
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5I2->Text = global::GetI500Data();
}
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6I2->Text = global::GetI500Data();
}
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7I2->Text = global::GetI500Data();
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8I2->Text = global::GetI500Data();
}
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5I3->Text = global::GetI500Data();
}
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6I3->Text = global::GetI500Data();
}
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7I3->Text = global::GetI500Data();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8I3->Text = global::GetI500Data();
}
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6U11->Text = global::GetU30_U400VData();
}
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine5U11->Text,0,30);
}
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine7U11->Text, 0, 30);
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8U11->Text = global::GetU30_U400VData();
}
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5U12->Text = global::GetU30_U400VData();
}

private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine6U12->Text, 0, 30);
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine7U12->Text, 0, 30);
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDVNum(labelLine8U12->Text, 0, 30);
}
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5UFA->Text = global::GetU30_U400VData();
}
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6UFA->Text = global::GetU30_U400VData();
}
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7UFA->Text = global::GetU30_U400VData();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8UFA->Text = global::GetU30_U400VData();
}
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5UAB->Text = global::GetU30_U400VData();
}
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6UAB->Text = global::GetU30_U400VData();
}
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7UAB->Text = global::GetU30_U400VData();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8UAB->Text = global::GetU30_U400VData();
}
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5UBC->Text = global::GetU30_U400VData();
}
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6UBC->Text = global::GetU30_U400VData();
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7UBC->Text = global::GetU30_U400VData();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8UBC->Text = global::GetU30_U400VData();
}
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5UCD->Text = global::GetU30_U400VData();
}
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6UCD->Text = global::GetU30_U400VData();
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7UCD->Text = global::GetU30_U400VData();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8UCD->Text = global::GetU30_U400VData();
}
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine5UDE->Text = global::GetU30_U400VData();
}
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine6UDE->Text = global::GetU30_U400VData();
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine7UDE->Text = global::GetU30_U400VData();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	labelLine8UDE->Text = global::GetU30_U400VData();
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
};
