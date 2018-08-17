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
	/// 三相交流电路电压电流的测量实验内容 摘要
	/// </summary>
	public ref class 三相交流电路电压电流的测量实验内容 : public System::Windows::Forms::Form
	{
	public:
		三相交流电路电压电流的测量实验内容(void)
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
		~三相交流电路电压电流的测量实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelTrial1_1_I110;
	private: System::Windows::Forms::Label^  labelTrial1_1_U110;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UNO;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IO;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UCO;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UBO;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UAO;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UCA;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UBC;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UAB;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IC;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IB;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IA;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UNO;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IO;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UCO;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UBO;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UAO;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UCA;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UBC;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UAB;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IC;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IB;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IA;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UNO;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IO;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UCO;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UBO;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UAO;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UCA;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UBC;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UAB;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IC;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IB;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IA;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UNO;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IO;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UCO;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UBO;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UAO;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UCA;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UBC;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UAB;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IC;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IB;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IA;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UNO;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IO;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UCO;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UBO;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UAO;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UCA;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UBC;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UAB;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IC;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IB;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IA;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_ICA;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IBC;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IAB;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IC;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IB;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IA;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_UCA;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_UBC;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_UAB;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_ICA;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IBC;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IAB;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IC;
	private: System::Windows::Forms::Button^  button105;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IB;
	private: System::Windows::Forms::Button^  button106;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IA;
	private: System::Windows::Forms::Button^  button107;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_UCA;
	private: System::Windows::Forms::Button^  button108;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_UBC;
	private: System::Windows::Forms::Button^  button109;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_UAB;
	private: System::Windows::Forms::Button^  button110;
	private: System::Windows::Forms::Label^  label149;
	private: System::Windows::Forms::Label^  label150;
	private: System::Windows::Forms::Label^  label151;
	private: System::Windows::Forms::Label^  label152;
	private: System::Windows::Forms::Label^  label153;
	private: System::Windows::Forms::Label^  label154;
	private: System::Windows::Forms::Label^  label155;
	private: System::Windows::Forms::Label^  label156;
	private: System::Windows::Forms::Label^  label157;
	private: System::Windows::Forms::Label^  label167;
	private: System::Windows::Forms::Label^  label168;
	private: System::Windows::Forms::Label^  label169;
	private: System::Windows::Forms::Label^  label170;
	private: System::Windows::Forms::Label^  label171;
	private: System::Windows::Forms::Label^  label172;
	private: System::Windows::Forms::Label^  label173;
	private: System::Windows::Forms::Label^  label174;
	private: System::Windows::Forms::Label^  label175;
	private: System::Windows::Forms::Label^  label179;
	private: System::Windows::Forms::Label^  label181;
	private: System::Windows::Forms::Label^  label183;
	private: System::Windows::Forms::Label^  label184;
	private: System::Windows::Forms::Label^  label185;
	private: System::Windows::Forms::Label^  label186;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label187;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Button^  button56;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(三相交流电路电压电流的测量实验内容::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial1_Line5_UNO = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_IO = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_UCO = (gcnew System::Windows::Forms::Label());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_UBO = (gcnew System::Windows::Forms::Label());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_UAO = (gcnew System::Windows::Forms::Label());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_UCA = (gcnew System::Windows::Forms::Label());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_UBC = (gcnew System::Windows::Forms::Label());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_UAB = (gcnew System::Windows::Forms::Label());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_IC = (gcnew System::Windows::Forms::Label());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_IB = (gcnew System::Windows::Forms::Label());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line5_IA = (gcnew System::Windows::Forms::Label());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UNO = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_IO = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UCO = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UBO = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UAO = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UCA = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UBC = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_UAB = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_IC = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_IB = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line4_IA = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UNO = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_IO = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UCO = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UBO = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UAO = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UCA = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UBC = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_UAB = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_IC = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_IB = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line3_IA = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UNO = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_IO = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UCO = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UBO = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UAO = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UCA = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UBC = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_UAB = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_IC = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_IB = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line2_IA = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UNO = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_IO = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UCO = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UBO = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UAO = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UCA = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UBC = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_UAB = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_IC = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_IB = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Line1_IA = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_I110 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U110 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial2_Line2_ICA = (gcnew System::Windows::Forms::Label());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_IBC = (gcnew System::Windows::Forms::Label());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_IAB = (gcnew System::Windows::Forms::Label());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_IC = (gcnew System::Windows::Forms::Label());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_IB = (gcnew System::Windows::Forms::Label());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_IA = (gcnew System::Windows::Forms::Label());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_UCA = (gcnew System::Windows::Forms::Label());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_UBC = (gcnew System::Windows::Forms::Label());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line2_UAB = (gcnew System::Windows::Forms::Label());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_ICA = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_IBC = (gcnew System::Windows::Forms::Label());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_IAB = (gcnew System::Windows::Forms::Label());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_IC = (gcnew System::Windows::Forms::Label());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_IB = (gcnew System::Windows::Forms::Label());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_IA = (gcnew System::Windows::Forms::Label());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_UCA = (gcnew System::Windows::Forms::Label());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_UBC = (gcnew System::Windows::Forms::Label());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_Line1_UAB = (gcnew System::Windows::Forms::Label());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UNO);
			this->groupBox8->Controls->Add(this->button45);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IO);
			this->groupBox8->Controls->Add(this->button46);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UCO);
			this->groupBox8->Controls->Add(this->button47);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UBO);
			this->groupBox8->Controls->Add(this->button48);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UAO);
			this->groupBox8->Controls->Add(this->button49);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UCA);
			this->groupBox8->Controls->Add(this->button50);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UBC);
			this->groupBox8->Controls->Add(this->button51);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UAB);
			this->groupBox8->Controls->Add(this->button52);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IC);
			this->groupBox8->Controls->Add(this->button53);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IB);
			this->groupBox8->Controls->Add(this->button54);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IA);
			this->groupBox8->Controls->Add(this->button55);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UNO);
			this->groupBox8->Controls->Add(this->button34);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IO);
			this->groupBox8->Controls->Add(this->button35);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UCO);
			this->groupBox8->Controls->Add(this->button36);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UBO);
			this->groupBox8->Controls->Add(this->button37);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UAO);
			this->groupBox8->Controls->Add(this->button38);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UCA);
			this->groupBox8->Controls->Add(this->button39);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UBC);
			this->groupBox8->Controls->Add(this->button40);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UAB);
			this->groupBox8->Controls->Add(this->button41);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IC);
			this->groupBox8->Controls->Add(this->button42);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IB);
			this->groupBox8->Controls->Add(this->button43);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IA);
			this->groupBox8->Controls->Add(this->button44);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UNO);
			this->groupBox8->Controls->Add(this->button23);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IO);
			this->groupBox8->Controls->Add(this->button24);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UCO);
			this->groupBox8->Controls->Add(this->button25);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UBO);
			this->groupBox8->Controls->Add(this->button26);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UAO);
			this->groupBox8->Controls->Add(this->button27);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UCA);
			this->groupBox8->Controls->Add(this->button28);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UBC);
			this->groupBox8->Controls->Add(this->button29);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UAB);
			this->groupBox8->Controls->Add(this->button30);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IC);
			this->groupBox8->Controls->Add(this->button31);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IB);
			this->groupBox8->Controls->Add(this->button32);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IA);
			this->groupBox8->Controls->Add(this->button33);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UNO);
			this->groupBox8->Controls->Add(this->button12);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IO);
			this->groupBox8->Controls->Add(this->button13);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UCO);
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UBO);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UAO);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UCA);
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UBC);
			this->groupBox8->Controls->Add(this->button18);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UAB);
			this->groupBox8->Controls->Add(this->button19);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IC);
			this->groupBox8->Controls->Add(this->button20);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IB);
			this->groupBox8->Controls->Add(this->button21);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IA);
			this->groupBox8->Controls->Add(this->button22);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UNO);
			this->groupBox8->Controls->Add(this->button11);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IO);
			this->groupBox8->Controls->Add(this->button10);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UCO);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UBO);
			this->groupBox8->Controls->Add(this->button8);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UAO);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UCA);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UBC);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UAB);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IC);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IB);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IA);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->label35);
			this->groupBox8->Controls->Add(this->label36);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label27);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->labelTrial1_1_I110);
			this->groupBox8->Controls->Add(this->labelTrial1_1_U110);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(43, 89);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1375, 1171);
			this->groupBox8->TabIndex = 84;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"三相交流电路电压电流的测量 实验内容1";
			// 
			// labelTrial1_Line5_UNO
			// 
			this->labelTrial1_Line5_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UNO->Location = System::Drawing::Point(1239, 1079);
			this->labelTrial1_Line5_UNO->Name = L"labelTrial1_Line5_UNO";
			this->labelTrial1_Line5_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line5_UNO->TabIndex = 168;
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(1239, 1111);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(98, 34);
			this->button45->TabIndex = 167;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_IO
			// 
			this->labelTrial1_Line5_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IO->Location = System::Drawing::Point(1143, 1079);
			this->labelTrial1_Line5_IO->Name = L"labelTrial1_Line5_IO";
			this->labelTrial1_Line5_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IO->TabIndex = 166;
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(1143, 1111);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(90, 34);
			this->button46->TabIndex = 165;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_UCO
			// 
			this->labelTrial1_Line5_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UCO->Location = System::Drawing::Point(1050, 1079);
			this->labelTrial1_Line5_UCO->Name = L"labelTrial1_Line5_UCO";
			this->labelTrial1_Line5_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UCO->TabIndex = 164;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(1050, 1111);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(90, 34);
			this->button47->TabIndex = 163;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_UBO
			// 
			this->labelTrial1_Line5_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UBO->Location = System::Drawing::Point(957, 1079);
			this->labelTrial1_Line5_UBO->Name = L"labelTrial1_Line5_UBO";
			this->labelTrial1_Line5_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UBO->TabIndex = 162;
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(957, 1111);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(90, 34);
			this->button48->TabIndex = 161;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_UAO
			// 
			this->labelTrial1_Line5_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UAO->Location = System::Drawing::Point(861, 1079);
			this->labelTrial1_Line5_UAO->Name = L"labelTrial1_Line5_UAO";
			this->labelTrial1_Line5_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UAO->TabIndex = 160;
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(861, 1111);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(90, 34);
			this->button49->TabIndex = 159;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_UCA
			// 
			this->labelTrial1_Line5_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UCA->Location = System::Drawing::Point(768, 1079);
			this->labelTrial1_Line5_UCA->Name = L"labelTrial1_Line5_UCA";
			this->labelTrial1_Line5_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UCA->TabIndex = 158;
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(768, 1111);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(90, 34);
			this->button50->TabIndex = 157;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_UBC
			// 
			this->labelTrial1_Line5_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UBC->Location = System::Drawing::Point(672, 1079);
			this->labelTrial1_Line5_UBC->Name = L"labelTrial1_Line5_UBC";
			this->labelTrial1_Line5_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UBC->TabIndex = 156;
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(672, 1111);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(90, 34);
			this->button51->TabIndex = 155;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_UAB
			// 
			this->labelTrial1_Line5_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UAB->Location = System::Drawing::Point(579, 1079);
			this->labelTrial1_Line5_UAB->Name = L"labelTrial1_Line5_UAB";
			this->labelTrial1_Line5_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UAB->TabIndex = 154;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(579, 1111);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(90, 34);
			this->button52->TabIndex = 153;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_IC
			// 
			this->labelTrial1_Line5_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IC->Location = System::Drawing::Point(483, 1079);
			this->labelTrial1_Line5_IC->Name = L"labelTrial1_Line5_IC";
			this->labelTrial1_Line5_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IC->TabIndex = 152;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(483, 1111);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(90, 34);
			this->button53->TabIndex = 151;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_IB
			// 
			this->labelTrial1_Line5_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IB->Location = System::Drawing::Point(387, 1079);
			this->labelTrial1_Line5_IB->Name = L"labelTrial1_Line5_IB";
			this->labelTrial1_Line5_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IB->TabIndex = 150;
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(387, 1111);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(90, 34);
			this->button54->TabIndex = 149;
			this->button54->Text = L"获取";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line5_IA
			// 
			this->labelTrial1_Line5_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IA->Location = System::Drawing::Point(291, 1079);
			this->labelTrial1_Line5_IA->Name = L"labelTrial1_Line5_IA";
			this->labelTrial1_Line5_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IA->TabIndex = 148;
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button55->ForeColor = System::Drawing::Color::Black;
			this->button55->Location = System::Drawing::Point(291, 1111);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(90, 34);
			this->button55->TabIndex = 147;
			this->button55->Text = L"获取";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UNO
			// 
			this->labelTrial1_Line4_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UNO->Location = System::Drawing::Point(1236, 987);
			this->labelTrial1_Line4_UNO->Name = L"labelTrial1_Line4_UNO";
			this->labelTrial1_Line4_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line4_UNO->TabIndex = 146;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(1236, 1019);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(98, 34);
			this->button34->TabIndex = 145;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_IO
			// 
			this->labelTrial1_Line4_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IO->Location = System::Drawing::Point(1140, 987);
			this->labelTrial1_Line4_IO->Name = L"labelTrial1_Line4_IO";
			this->labelTrial1_Line4_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IO->TabIndex = 144;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(1140, 1019);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(90, 34);
			this->button35->TabIndex = 143;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UCO
			// 
			this->labelTrial1_Line4_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UCO->Location = System::Drawing::Point(1047, 987);
			this->labelTrial1_Line4_UCO->Name = L"labelTrial1_Line4_UCO";
			this->labelTrial1_Line4_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UCO->TabIndex = 142;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(1047, 1019);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(90, 34);
			this->button36->TabIndex = 141;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UBO
			// 
			this->labelTrial1_Line4_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UBO->Location = System::Drawing::Point(954, 987);
			this->labelTrial1_Line4_UBO->Name = L"labelTrial1_Line4_UBO";
			this->labelTrial1_Line4_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UBO->TabIndex = 140;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(954, 1019);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(90, 34);
			this->button37->TabIndex = 139;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UAO
			// 
			this->labelTrial1_Line4_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UAO->Location = System::Drawing::Point(858, 987);
			this->labelTrial1_Line4_UAO->Name = L"labelTrial1_Line4_UAO";
			this->labelTrial1_Line4_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UAO->TabIndex = 138;
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(858, 1019);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(90, 34);
			this->button38->TabIndex = 137;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UCA
			// 
			this->labelTrial1_Line4_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UCA->Location = System::Drawing::Point(765, 987);
			this->labelTrial1_Line4_UCA->Name = L"labelTrial1_Line4_UCA";
			this->labelTrial1_Line4_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UCA->TabIndex = 136;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(765, 1019);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(90, 34);
			this->button39->TabIndex = 135;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UBC
			// 
			this->labelTrial1_Line4_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UBC->Location = System::Drawing::Point(669, 987);
			this->labelTrial1_Line4_UBC->Name = L"labelTrial1_Line4_UBC";
			this->labelTrial1_Line4_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UBC->TabIndex = 134;
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(669, 1019);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(90, 34);
			this->button40->TabIndex = 133;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_UAB
			// 
			this->labelTrial1_Line4_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UAB->Location = System::Drawing::Point(576, 987);
			this->labelTrial1_Line4_UAB->Name = L"labelTrial1_Line4_UAB";
			this->labelTrial1_Line4_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UAB->TabIndex = 132;
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(576, 1019);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(90, 34);
			this->button41->TabIndex = 131;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_IC
			// 
			this->labelTrial1_Line4_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IC->Location = System::Drawing::Point(480, 987);
			this->labelTrial1_Line4_IC->Name = L"labelTrial1_Line4_IC";
			this->labelTrial1_Line4_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IC->TabIndex = 130;
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(480, 1019);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(90, 34);
			this->button42->TabIndex = 129;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_IB
			// 
			this->labelTrial1_Line4_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IB->Location = System::Drawing::Point(384, 987);
			this->labelTrial1_Line4_IB->Name = L"labelTrial1_Line4_IB";
			this->labelTrial1_Line4_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IB->TabIndex = 128;
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(384, 1019);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(90, 34);
			this->button43->TabIndex = 127;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line4_IA
			// 
			this->labelTrial1_Line4_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IA->Location = System::Drawing::Point(288, 987);
			this->labelTrial1_Line4_IA->Name = L"labelTrial1_Line4_IA";
			this->labelTrial1_Line4_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IA->TabIndex = 126;
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(288, 1019);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(90, 34);
			this->button44->TabIndex = 125;
			this->button44->Text = L"获取";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UNO
			// 
			this->labelTrial1_Line3_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UNO->Location = System::Drawing::Point(1239, 906);
			this->labelTrial1_Line3_UNO->Name = L"labelTrial1_Line3_UNO";
			this->labelTrial1_Line3_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line3_UNO->TabIndex = 124;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(1239, 938);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(98, 34);
			this->button23->TabIndex = 123;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_IO
			// 
			this->labelTrial1_Line3_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IO->Location = System::Drawing::Point(1143, 906);
			this->labelTrial1_Line3_IO->Name = L"labelTrial1_Line3_IO";
			this->labelTrial1_Line3_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IO->TabIndex = 122;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(1143, 938);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(90, 34);
			this->button24->TabIndex = 121;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UCO
			// 
			this->labelTrial1_Line3_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UCO->Location = System::Drawing::Point(1050, 906);
			this->labelTrial1_Line3_UCO->Name = L"labelTrial1_Line3_UCO";
			this->labelTrial1_Line3_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UCO->TabIndex = 120;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(1050, 938);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(90, 34);
			this->button25->TabIndex = 119;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UBO
			// 
			this->labelTrial1_Line3_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UBO->Location = System::Drawing::Point(957, 906);
			this->labelTrial1_Line3_UBO->Name = L"labelTrial1_Line3_UBO";
			this->labelTrial1_Line3_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UBO->TabIndex = 118;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(957, 938);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(90, 34);
			this->button26->TabIndex = 117;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UAO
			// 
			this->labelTrial1_Line3_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UAO->Location = System::Drawing::Point(861, 906);
			this->labelTrial1_Line3_UAO->Name = L"labelTrial1_Line3_UAO";
			this->labelTrial1_Line3_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UAO->TabIndex = 116;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(861, 938);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(90, 34);
			this->button27->TabIndex = 115;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UCA
			// 
			this->labelTrial1_Line3_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UCA->Location = System::Drawing::Point(768, 906);
			this->labelTrial1_Line3_UCA->Name = L"labelTrial1_Line3_UCA";
			this->labelTrial1_Line3_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UCA->TabIndex = 114;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(768, 938);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(90, 34);
			this->button28->TabIndex = 113;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UBC
			// 
			this->labelTrial1_Line3_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UBC->Location = System::Drawing::Point(672, 906);
			this->labelTrial1_Line3_UBC->Name = L"labelTrial1_Line3_UBC";
			this->labelTrial1_Line3_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UBC->TabIndex = 112;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(672, 938);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(90, 34);
			this->button29->TabIndex = 111;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_UAB
			// 
			this->labelTrial1_Line3_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UAB->Location = System::Drawing::Point(579, 906);
			this->labelTrial1_Line3_UAB->Name = L"labelTrial1_Line3_UAB";
			this->labelTrial1_Line3_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UAB->TabIndex = 110;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(579, 938);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(90, 34);
			this->button30->TabIndex = 109;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_IC
			// 
			this->labelTrial1_Line3_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IC->Location = System::Drawing::Point(483, 906);
			this->labelTrial1_Line3_IC->Name = L"labelTrial1_Line3_IC";
			this->labelTrial1_Line3_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IC->TabIndex = 108;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(483, 938);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(90, 34);
			this->button31->TabIndex = 107;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_IB
			// 
			this->labelTrial1_Line3_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IB->Location = System::Drawing::Point(387, 906);
			this->labelTrial1_Line3_IB->Name = L"labelTrial1_Line3_IB";
			this->labelTrial1_Line3_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IB->TabIndex = 106;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(387, 938);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(90, 34);
			this->button32->TabIndex = 105;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line3_IA
			// 
			this->labelTrial1_Line3_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IA->Location = System::Drawing::Point(291, 906);
			this->labelTrial1_Line3_IA->Name = L"labelTrial1_Line3_IA";
			this->labelTrial1_Line3_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IA->TabIndex = 104;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(291, 938);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(90, 34);
			this->button33->TabIndex = 103;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UNO
			// 
			this->labelTrial1_Line2_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UNO->Location = System::Drawing::Point(1239, 814);
			this->labelTrial1_Line2_UNO->Name = L"labelTrial1_Line2_UNO";
			this->labelTrial1_Line2_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line2_UNO->TabIndex = 102;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(1239, 846);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(98, 34);
			this->button12->TabIndex = 101;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_IO
			// 
			this->labelTrial1_Line2_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IO->Location = System::Drawing::Point(1143, 814);
			this->labelTrial1_Line2_IO->Name = L"labelTrial1_Line2_IO";
			this->labelTrial1_Line2_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IO->TabIndex = 100;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(1143, 846);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(90, 34);
			this->button13->TabIndex = 99;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UCO
			// 
			this->labelTrial1_Line2_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UCO->Location = System::Drawing::Point(1050, 814);
			this->labelTrial1_Line2_UCO->Name = L"labelTrial1_Line2_UCO";
			this->labelTrial1_Line2_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UCO->TabIndex = 98;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(1050, 846);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(90, 34);
			this->button14->TabIndex = 97;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UBO
			// 
			this->labelTrial1_Line2_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UBO->Location = System::Drawing::Point(957, 814);
			this->labelTrial1_Line2_UBO->Name = L"labelTrial1_Line2_UBO";
			this->labelTrial1_Line2_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UBO->TabIndex = 96;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(957, 846);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(90, 34);
			this->button15->TabIndex = 95;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UAO
			// 
			this->labelTrial1_Line2_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UAO->Location = System::Drawing::Point(861, 814);
			this->labelTrial1_Line2_UAO->Name = L"labelTrial1_Line2_UAO";
			this->labelTrial1_Line2_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UAO->TabIndex = 94;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(861, 846);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 34);
			this->button16->TabIndex = 93;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UCA
			// 
			this->labelTrial1_Line2_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UCA->Location = System::Drawing::Point(768, 814);
			this->labelTrial1_Line2_UCA->Name = L"labelTrial1_Line2_UCA";
			this->labelTrial1_Line2_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UCA->TabIndex = 92;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(768, 846);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(90, 34);
			this->button17->TabIndex = 91;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UBC
			// 
			this->labelTrial1_Line2_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UBC->Location = System::Drawing::Point(672, 814);
			this->labelTrial1_Line2_UBC->Name = L"labelTrial1_Line2_UBC";
			this->labelTrial1_Line2_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UBC->TabIndex = 90;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(672, 846);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(90, 34);
			this->button18->TabIndex = 89;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_UAB
			// 
			this->labelTrial1_Line2_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UAB->Location = System::Drawing::Point(579, 814);
			this->labelTrial1_Line2_UAB->Name = L"labelTrial1_Line2_UAB";
			this->labelTrial1_Line2_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UAB->TabIndex = 88;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(579, 846);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(90, 34);
			this->button19->TabIndex = 87;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_IC
			// 
			this->labelTrial1_Line2_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IC->Location = System::Drawing::Point(483, 814);
			this->labelTrial1_Line2_IC->Name = L"labelTrial1_Line2_IC";
			this->labelTrial1_Line2_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IC->TabIndex = 86;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(483, 846);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 34);
			this->button20->TabIndex = 85;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_IB
			// 
			this->labelTrial1_Line2_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IB->Location = System::Drawing::Point(387, 814);
			this->labelTrial1_Line2_IB->Name = L"labelTrial1_Line2_IB";
			this->labelTrial1_Line2_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IB->TabIndex = 84;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(387, 846);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(90, 34);
			this->button21->TabIndex = 83;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line2_IA
			// 
			this->labelTrial1_Line2_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IA->Location = System::Drawing::Point(291, 814);
			this->labelTrial1_Line2_IA->Name = L"labelTrial1_Line2_IA";
			this->labelTrial1_Line2_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IA->TabIndex = 82;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(291, 846);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(90, 34);
			this->button22->TabIndex = 81;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UNO
			// 
			this->labelTrial1_Line1_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UNO->Location = System::Drawing::Point(1239, 733);
			this->labelTrial1_Line1_UNO->Name = L"labelTrial1_Line1_UNO";
			this->labelTrial1_Line1_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line1_UNO->TabIndex = 80;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(1239, 765);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(98, 34);
			this->button11->TabIndex = 79;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_IO
			// 
			this->labelTrial1_Line1_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IO->Location = System::Drawing::Point(1143, 733);
			this->labelTrial1_Line1_IO->Name = L"labelTrial1_Line1_IO";
			this->labelTrial1_Line1_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IO->TabIndex = 78;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(1143, 765);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 34);
			this->button10->TabIndex = 77;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UCO
			// 
			this->labelTrial1_Line1_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UCO->Location = System::Drawing::Point(1050, 733);
			this->labelTrial1_Line1_UCO->Name = L"labelTrial1_Line1_UCO";
			this->labelTrial1_Line1_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UCO->TabIndex = 76;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(1050, 765);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 34);
			this->button9->TabIndex = 75;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UBO
			// 
			this->labelTrial1_Line1_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UBO->Location = System::Drawing::Point(957, 733);
			this->labelTrial1_Line1_UBO->Name = L"labelTrial1_Line1_UBO";
			this->labelTrial1_Line1_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UBO->TabIndex = 74;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(957, 765);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 34);
			this->button8->TabIndex = 73;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UAO
			// 
			this->labelTrial1_Line1_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UAO->Location = System::Drawing::Point(861, 733);
			this->labelTrial1_Line1_UAO->Name = L"labelTrial1_Line1_UAO";
			this->labelTrial1_Line1_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UAO->TabIndex = 72;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(861, 765);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 34);
			this->button7->TabIndex = 71;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UCA
			// 
			this->labelTrial1_Line1_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UCA->Location = System::Drawing::Point(768, 733);
			this->labelTrial1_Line1_UCA->Name = L"labelTrial1_Line1_UCA";
			this->labelTrial1_Line1_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UCA->TabIndex = 70;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(768, 765);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 34);
			this->button5->TabIndex = 69;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UBC
			// 
			this->labelTrial1_Line1_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UBC->Location = System::Drawing::Point(672, 733);
			this->labelTrial1_Line1_UBC->Name = L"labelTrial1_Line1_UBC";
			this->labelTrial1_Line1_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UBC->TabIndex = 68;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(672, 765);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 34);
			this->button4->TabIndex = 67;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_UAB
			// 
			this->labelTrial1_Line1_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UAB->Location = System::Drawing::Point(579, 733);
			this->labelTrial1_Line1_UAB->Name = L"labelTrial1_Line1_UAB";
			this->labelTrial1_Line1_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UAB->TabIndex = 66;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(579, 765);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 34);
			this->button3->TabIndex = 65;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_IC
			// 
			this->labelTrial1_Line1_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IC->Location = System::Drawing::Point(483, 733);
			this->labelTrial1_Line1_IC->Name = L"labelTrial1_Line1_IC";
			this->labelTrial1_Line1_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IC->TabIndex = 64;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(483, 765);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 34);
			this->button2->TabIndex = 63;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_IB
			// 
			this->labelTrial1_Line1_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IB->Location = System::Drawing::Point(387, 733);
			this->labelTrial1_Line1_IB->Name = L"labelTrial1_Line1_IB";
			this->labelTrial1_Line1_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IB->TabIndex = 62;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(387, 765);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 34);
			this->button1->TabIndex = 61;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Line1_IA
			// 
			this->labelTrial1_Line1_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IA->Location = System::Drawing::Point(291, 733);
			this->labelTrial1_Line1_IA->Name = L"labelTrial1_Line1_IA";
			this->labelTrial1_Line1_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IA->TabIndex = 60;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(291, 765);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 34);
			this->button6->TabIndex = 59;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(1053, 654);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(87, 60);
			this->label35->TabIndex = 54;
			this->label35->Text = L"UCO";
			// 
			// label36
			// 
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(957, 654);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(90, 60);
			this->label36->TabIndex = 53;
			this->label36->Text = L"UBO";
			// 
			// label38
			// 
			this->label38->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(861, 654);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(90, 60);
			this->label38->TabIndex = 52;
			this->label38->Text = L"UAO";
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(768, 654);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 60);
			this->label32->TabIndex = 51;
			this->label32->Text = L"UCA";
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(672, 654);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(90, 60);
			this->label33->TabIndex = 50;
			this->label33->Text = L"UBC";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(576, 654);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(90, 60);
			this->label34->TabIndex = 49;
			this->label34->Text = L"UAB";
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(483, 654);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(87, 60);
			this->label30->TabIndex = 48;
			this->label30->Text = L"IC";
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(387, 654);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(90, 60);
			this->label29->TabIndex = 47;
			this->label29->Text = L"IB";
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(291, 654);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(90, 60);
			this->label31->TabIndex = 46;
			this->label31->Text = L"IA";
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(239, 1077);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(28, 29);
			this->label26->TabIndex = 45;
			this->label26->Text = L"3";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(205, 1077);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(28, 29);
			this->label27->TabIndex = 44;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(171, 1077);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(28, 29);
			this->label28->TabIndex = 43;
			this->label28->Text = L"1";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(239, 979);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 29);
			this->label23->TabIndex = 42;
			this->label23->Text = L"3";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(205, 979);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(28, 29);
			this->label24->TabIndex = 41;
			this->label24->Text = L"2";
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(171, 979);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(28, 29);
			this->label25->TabIndex = 40;
			this->label25->Text = L"1";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(242, 907);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(28, 29);
			this->label20->TabIndex = 39;
			this->label20->Text = L"3";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(208, 907);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(28, 29);
			this->label21->TabIndex = 38;
			this->label21->Text = L"2";
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(174, 907);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 29);
			this->label22->TabIndex = 37;
			this->label22->Text = L"1";
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(242, 814);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 29);
			this->label17->TabIndex = 36;
			this->label17->Text = L"3";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(208, 814);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 29);
			this->label18->TabIndex = 35;
			this->label18->Text = L"3";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(174, 814);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 29);
			this->label19->TabIndex = 34;
			this->label19->Text = L"3";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(239, 733);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 29);
			this->label16->TabIndex = 33;
			this->label16->Text = L"3";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(205, 733);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 29);
			this->label15->TabIndex = 32;
			this->label15->Text = L"3";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(171, 733);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 29);
			this->label14->TabIndex = 31;
			this->label14->Text = L"3";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(239, 654);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 60);
			this->label13->TabIndex = 30;
			this->label13->Text = L"C\r\n相";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(205, 654);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 60);
			this->label12->TabIndex = 29;
			this->label12->Text = L"B\r\n相";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(171, 654);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 60);
			this->label11->TabIndex = 28;
			this->label11->Text = L"A\r\n相";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(12, 1077);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 29);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Y接B相断开";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(12, 980);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 29);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Y接不平衡负载";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(15, 909);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 29);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Y接不平衡负载";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(15, 816);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 29);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Y接平衡负载";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(1239, 622);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 92);
			this->label3->TabIndex = 23;
			this->label3->Text = L"中点电压\r\nUNO（V）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(861, 622);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"相电压（V）";
			// 
			// labelTrial1_1_I110
			// 
			this->labelTrial1_1_I110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_I110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_I110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_I110->Location = System::Drawing::Point(1146, 622);
			this->labelTrial1_1_I110->Name = L"labelTrial1_1_I110";
			this->labelTrial1_1_I110->Size = System::Drawing::Size(87, 92);
			this->labelTrial1_1_I110->TabIndex = 21;
			this->labelTrial1_1_I110->Text = L"中性电流\r\nIO（A）";
			// 
			// labelTrial1_1_U110
			// 
			this->labelTrial1_1_U110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U110->Location = System::Drawing::Point(15, 733);
			this->labelTrial1_1_U110->Name = L"labelTrial1_1_U110";
			this->labelTrial1_1_U110->Size = System::Drawing::Size(138, 29);
			this->labelTrial1_1_U110->TabIndex = 19;
			this->labelTrial1_1_U110->Text = L"Y接平衡负载";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(576, 622);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(279, 29);
			this->label9->TabIndex = 18;
			this->label9->Text = L"线电压（V）";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(291, 622);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(279, 29);
			this->label8->TabIndex = 17;
			this->label8->Text = L"线电流（A）";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(171, 622);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 29);
			this->label7->TabIndex = 16;
			this->label7->Text = L"开灯盏数";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(348, 251);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(456, 333);
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
			this->label37->Size = System::Drawing::Size(1161, 203);
			this->label37->TabIndex = 0;
			this->label37->Text = resources->GetString(L"label37.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(379, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(468, 25);
			this->label1->TabIndex = 83;
			this->label1->Text = L"三相交流电路电压电流的测量 实验内容";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_ICA);
			this->groupBox1->Controls->Add(this->button91);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IBC);
			this->groupBox1->Controls->Add(this->button92);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IAB);
			this->groupBox1->Controls->Add(this->button93);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IC);
			this->groupBox1->Controls->Add(this->button94);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IB);
			this->groupBox1->Controls->Add(this->button95);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IA);
			this->groupBox1->Controls->Add(this->button96);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_UCA);
			this->groupBox1->Controls->Add(this->button97);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_UBC);
			this->groupBox1->Controls->Add(this->button98);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_UAB);
			this->groupBox1->Controls->Add(this->button99);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_ICA);
			this->groupBox1->Controls->Add(this->button102);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IBC);
			this->groupBox1->Controls->Add(this->button103);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IAB);
			this->groupBox1->Controls->Add(this->button104);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IC);
			this->groupBox1->Controls->Add(this->button105);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IB);
			this->groupBox1->Controls->Add(this->button106);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IA);
			this->groupBox1->Controls->Add(this->button107);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_UCA);
			this->groupBox1->Controls->Add(this->button108);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_UBC);
			this->groupBox1->Controls->Add(this->button109);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_UAB);
			this->groupBox1->Controls->Add(this->button110);
			this->groupBox1->Controls->Add(this->label149);
			this->groupBox1->Controls->Add(this->label150);
			this->groupBox1->Controls->Add(this->label151);
			this->groupBox1->Controls->Add(this->label152);
			this->groupBox1->Controls->Add(this->label153);
			this->groupBox1->Controls->Add(this->label154);
			this->groupBox1->Controls->Add(this->label155);
			this->groupBox1->Controls->Add(this->label156);
			this->groupBox1->Controls->Add(this->label157);
			this->groupBox1->Controls->Add(this->label167);
			this->groupBox1->Controls->Add(this->label168);
			this->groupBox1->Controls->Add(this->label169);
			this->groupBox1->Controls->Add(this->label170);
			this->groupBox1->Controls->Add(this->label171);
			this->groupBox1->Controls->Add(this->label172);
			this->groupBox1->Controls->Add(this->label173);
			this->groupBox1->Controls->Add(this->label174);
			this->groupBox1->Controls->Add(this->label175);
			this->groupBox1->Controls->Add(this->label179);
			this->groupBox1->Controls->Add(this->label181);
			this->groupBox1->Controls->Add(this->label183);
			this->groupBox1->Controls->Add(this->label184);
			this->groupBox1->Controls->Add(this->label185);
			this->groupBox1->Controls->Add(this->label186);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->label187);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(43, 1282);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1375, 906);
			this->groupBox1->TabIndex = 169;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"三相交流电路电压电流的测量 实验内容2";
			// 
			// labelTrial2_Line2_ICA
			// 
			this->labelTrial2_Line2_ICA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_ICA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_ICA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_ICA->Location = System::Drawing::Point(1193, 814);
			this->labelTrial2_Line2_ICA->Name = L"labelTrial2_Line2_ICA";
			this->labelTrial2_Line2_ICA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_ICA->TabIndex = 98;
			// 
			// button91
			// 
			this->button91->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button91->ForeColor = System::Drawing::Color::Black;
			this->button91->Location = System::Drawing::Point(1193, 846);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(90, 34);
			this->button91->TabIndex = 97;
			this->button91->Text = L"获取";
			this->button91->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_IBC
			// 
			this->labelTrial2_Line2_IBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IBC->Location = System::Drawing::Point(1100, 814);
			this->labelTrial2_Line2_IBC->Name = L"labelTrial2_Line2_IBC";
			this->labelTrial2_Line2_IBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IBC->TabIndex = 96;
			// 
			// button92
			// 
			this->button92->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button92->ForeColor = System::Drawing::Color::Black;
			this->button92->Location = System::Drawing::Point(1100, 846);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(90, 34);
			this->button92->TabIndex = 95;
			this->button92->Text = L"获取";
			this->button92->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_IAB
			// 
			this->labelTrial2_Line2_IAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IAB->Location = System::Drawing::Point(1004, 814);
			this->labelTrial2_Line2_IAB->Name = L"labelTrial2_Line2_IAB";
			this->labelTrial2_Line2_IAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IAB->TabIndex = 94;
			// 
			// button93
			// 
			this->button93->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button93->ForeColor = System::Drawing::Color::Black;
			this->button93->Location = System::Drawing::Point(1004, 846);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(90, 34);
			this->button93->TabIndex = 93;
			this->button93->Text = L"获取";
			this->button93->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_IC
			// 
			this->labelTrial2_Line2_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IC->Location = System::Drawing::Point(911, 814);
			this->labelTrial2_Line2_IC->Name = L"labelTrial2_Line2_IC";
			this->labelTrial2_Line2_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IC->TabIndex = 92;
			// 
			// button94
			// 
			this->button94->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button94->ForeColor = System::Drawing::Color::Black;
			this->button94->Location = System::Drawing::Point(911, 846);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(90, 34);
			this->button94->TabIndex = 91;
			this->button94->Text = L"获取";
			this->button94->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_IB
			// 
			this->labelTrial2_Line2_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IB->Location = System::Drawing::Point(815, 814);
			this->labelTrial2_Line2_IB->Name = L"labelTrial2_Line2_IB";
			this->labelTrial2_Line2_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IB->TabIndex = 90;
			// 
			// button95
			// 
			this->button95->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button95->ForeColor = System::Drawing::Color::Black;
			this->button95->Location = System::Drawing::Point(815, 846);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(90, 34);
			this->button95->TabIndex = 89;
			this->button95->Text = L"获取";
			this->button95->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_IA
			// 
			this->labelTrial2_Line2_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IA->Location = System::Drawing::Point(722, 814);
			this->labelTrial2_Line2_IA->Name = L"labelTrial2_Line2_IA";
			this->labelTrial2_Line2_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IA->TabIndex = 88;
			// 
			// button96
			// 
			this->button96->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button96->ForeColor = System::Drawing::Color::Black;
			this->button96->Location = System::Drawing::Point(722, 846);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(90, 34);
			this->button96->TabIndex = 87;
			this->button96->Text = L"获取";
			this->button96->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_UCA
			// 
			this->labelTrial2_Line2_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_UCA->Location = System::Drawing::Point(626, 814);
			this->labelTrial2_Line2_UCA->Name = L"labelTrial2_Line2_UCA";
			this->labelTrial2_Line2_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_UCA->TabIndex = 86;
			// 
			// button97
			// 
			this->button97->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button97->ForeColor = System::Drawing::Color::Black;
			this->button97->Location = System::Drawing::Point(626, 846);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(90, 34);
			this->button97->TabIndex = 85;
			this->button97->Text = L"获取";
			this->button97->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_UBC
			// 
			this->labelTrial2_Line2_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_UBC->Location = System::Drawing::Point(530, 814);
			this->labelTrial2_Line2_UBC->Name = L"labelTrial2_Line2_UBC";
			this->labelTrial2_Line2_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_UBC->TabIndex = 84;
			// 
			// button98
			// 
			this->button98->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button98->ForeColor = System::Drawing::Color::Black;
			this->button98->Location = System::Drawing::Point(530, 846);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(90, 34);
			this->button98->TabIndex = 83;
			this->button98->Text = L"获取";
			this->button98->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line2_UAB
			// 
			this->labelTrial2_Line2_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_UAB->Location = System::Drawing::Point(434, 814);
			this->labelTrial2_Line2_UAB->Name = L"labelTrial2_Line2_UAB";
			this->labelTrial2_Line2_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_UAB->TabIndex = 82;
			// 
			// button99
			// 
			this->button99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button99->ForeColor = System::Drawing::Color::Black;
			this->button99->Location = System::Drawing::Point(434, 846);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(90, 34);
			this->button99->TabIndex = 81;
			this->button99->Text = L"获取";
			this->button99->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_ICA
			// 
			this->labelTrial2_Line1_ICA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_ICA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_ICA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_ICA->Location = System::Drawing::Point(1193, 733);
			this->labelTrial2_Line1_ICA->Name = L"labelTrial2_Line1_ICA";
			this->labelTrial2_Line1_ICA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_ICA->TabIndex = 76;
			// 
			// button102
			// 
			this->button102->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button102->ForeColor = System::Drawing::Color::Black;
			this->button102->Location = System::Drawing::Point(1193, 765);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(90, 34);
			this->button102->TabIndex = 75;
			this->button102->Text = L"获取";
			this->button102->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_IBC
			// 
			this->labelTrial2_Line1_IBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IBC->Location = System::Drawing::Point(1100, 733);
			this->labelTrial2_Line1_IBC->Name = L"labelTrial2_Line1_IBC";
			this->labelTrial2_Line1_IBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IBC->TabIndex = 74;
			// 
			// button103
			// 
			this->button103->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button103->ForeColor = System::Drawing::Color::Black;
			this->button103->Location = System::Drawing::Point(1100, 765);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(90, 34);
			this->button103->TabIndex = 73;
			this->button103->Text = L"获取";
			this->button103->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_IAB
			// 
			this->labelTrial2_Line1_IAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IAB->Location = System::Drawing::Point(1004, 733);
			this->labelTrial2_Line1_IAB->Name = L"labelTrial2_Line1_IAB";
			this->labelTrial2_Line1_IAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IAB->TabIndex = 72;
			// 
			// button104
			// 
			this->button104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button104->ForeColor = System::Drawing::Color::Black;
			this->button104->Location = System::Drawing::Point(1004, 765);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(90, 34);
			this->button104->TabIndex = 71;
			this->button104->Text = L"获取";
			this->button104->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_IC
			// 
			this->labelTrial2_Line1_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IC->Location = System::Drawing::Point(911, 733);
			this->labelTrial2_Line1_IC->Name = L"labelTrial2_Line1_IC";
			this->labelTrial2_Line1_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IC->TabIndex = 70;
			// 
			// button105
			// 
			this->button105->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button105->ForeColor = System::Drawing::Color::Black;
			this->button105->Location = System::Drawing::Point(911, 765);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(90, 34);
			this->button105->TabIndex = 69;
			this->button105->Text = L"获取";
			this->button105->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_IB
			// 
			this->labelTrial2_Line1_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IB->Location = System::Drawing::Point(815, 733);
			this->labelTrial2_Line1_IB->Name = L"labelTrial2_Line1_IB";
			this->labelTrial2_Line1_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IB->TabIndex = 68;
			// 
			// button106
			// 
			this->button106->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button106->ForeColor = System::Drawing::Color::Black;
			this->button106->Location = System::Drawing::Point(815, 765);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(90, 34);
			this->button106->TabIndex = 67;
			this->button106->Text = L"获取";
			this->button106->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_IA
			// 
			this->labelTrial2_Line1_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IA->Location = System::Drawing::Point(722, 733);
			this->labelTrial2_Line1_IA->Name = L"labelTrial2_Line1_IA";
			this->labelTrial2_Line1_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IA->TabIndex = 66;
			// 
			// button107
			// 
			this->button107->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button107->ForeColor = System::Drawing::Color::Black;
			this->button107->Location = System::Drawing::Point(722, 765);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(90, 34);
			this->button107->TabIndex = 65;
			this->button107->Text = L"获取";
			this->button107->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_UCA
			// 
			this->labelTrial2_Line1_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_UCA->Location = System::Drawing::Point(626, 733);
			this->labelTrial2_Line1_UCA->Name = L"labelTrial2_Line1_UCA";
			this->labelTrial2_Line1_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_UCA->TabIndex = 64;
			// 
			// button108
			// 
			this->button108->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button108->ForeColor = System::Drawing::Color::Black;
			this->button108->Location = System::Drawing::Point(626, 765);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(90, 34);
			this->button108->TabIndex = 63;
			this->button108->Text = L"获取";
			this->button108->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_UBC
			// 
			this->labelTrial2_Line1_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_UBC->Location = System::Drawing::Point(530, 733);
			this->labelTrial2_Line1_UBC->Name = L"labelTrial2_Line1_UBC";
			this->labelTrial2_Line1_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_UBC->TabIndex = 62;
			// 
			// button109
			// 
			this->button109->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button109->ForeColor = System::Drawing::Color::Black;
			this->button109->Location = System::Drawing::Point(530, 765);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(90, 34);
			this->button109->TabIndex = 61;
			this->button109->Text = L"获取";
			this->button109->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_Line1_UAB
			// 
			this->labelTrial2_Line1_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_UAB->Location = System::Drawing::Point(434, 733);
			this->labelTrial2_Line1_UAB->Name = L"labelTrial2_Line1_UAB";
			this->labelTrial2_Line1_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_UAB->TabIndex = 60;
			// 
			// button110
			// 
			this->button110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button110->ForeColor = System::Drawing::Color::Black;
			this->button110->Location = System::Drawing::Point(434, 765);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(90, 34);
			this->button110->TabIndex = 59;
			this->button110->Text = L"获取";
			this->button110->UseVisualStyleBackColor = true;
			// 
			// label149
			// 
			this->label149->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label149->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label149->ForeColor = System::Drawing::Color::Black;
			this->label149->Location = System::Drawing::Point(1196, 654);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(87, 60);
			this->label149->TabIndex = 54;
			this->label149->Text = L"ICA";
			// 
			// label150
			// 
			this->label150->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label150->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label150->ForeColor = System::Drawing::Color::Black;
			this->label150->Location = System::Drawing::Point(1100, 654);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(90, 60);
			this->label150->TabIndex = 53;
			this->label150->Text = L"IBC";
			// 
			// label151
			// 
			this->label151->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label151->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label151->ForeColor = System::Drawing::Color::Black;
			this->label151->Location = System::Drawing::Point(1004, 654);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(90, 60);
			this->label151->TabIndex = 52;
			this->label151->Text = L"IAB";
			// 
			// label152
			// 
			this->label152->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label152->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label152->ForeColor = System::Drawing::Color::Black;
			this->label152->Location = System::Drawing::Point(911, 654);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(87, 60);
			this->label152->TabIndex = 51;
			this->label152->Text = L"IC";
			// 
			// label153
			// 
			this->label153->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label153->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label153->ForeColor = System::Drawing::Color::Black;
			this->label153->Location = System::Drawing::Point(815, 654);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(90, 60);
			this->label153->TabIndex = 50;
			this->label153->Text = L"IB";
			// 
			// label154
			// 
			this->label154->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label154->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label154->ForeColor = System::Drawing::Color::Black;
			this->label154->Location = System::Drawing::Point(719, 654);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(90, 60);
			this->label154->TabIndex = 49;
			this->label154->Text = L"IA";
			// 
			// label155
			// 
			this->label155->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label155->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label155->ForeColor = System::Drawing::Color::Black;
			this->label155->Location = System::Drawing::Point(626, 654);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(87, 60);
			this->label155->TabIndex = 48;
			this->label155->Text = L"UCA";
			// 
			// label156
			// 
			this->label156->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label156->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label156->ForeColor = System::Drawing::Color::Black;
			this->label156->Location = System::Drawing::Point(530, 654);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(90, 60);
			this->label156->TabIndex = 47;
			this->label156->Text = L"UBC";
			// 
			// label157
			// 
			this->label157->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label157->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label157->ForeColor = System::Drawing::Color::Black;
			this->label157->Location = System::Drawing::Point(434, 654);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(90, 60);
			this->label157->TabIndex = 46;
			this->label157->Text = L"UAB";
			// 
			// label167
			// 
			this->label167->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label167->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label167->ForeColor = System::Drawing::Color::Black;
			this->label167->Location = System::Drawing::Point(345, 814);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(73, 29);
			this->label167->TabIndex = 36;
			this->label167->Text = L"3";
			// 
			// label168
			// 
			this->label168->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label168->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label168->ForeColor = System::Drawing::Color::Black;
			this->label168->Location = System::Drawing::Point(257, 814);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(82, 29);
			this->label168->TabIndex = 35;
			this->label168->Text = L"2";
			// 
			// label169
			// 
			this->label169->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label169->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label169->ForeColor = System::Drawing::Color::Black;
			this->label169->Location = System::Drawing::Point(171, 815);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(80, 29);
			this->label169->TabIndex = 34;
			this->label169->Text = L"1";
			// 
			// label170
			// 
			this->label170->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label170->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label170->ForeColor = System::Drawing::Color::Black;
			this->label170->Location = System::Drawing::Point(345, 733);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(73, 29);
			this->label170->TabIndex = 33;
			this->label170->Text = L"3";
			// 
			// label171
			// 
			this->label171->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label171->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label171->ForeColor = System::Drawing::Color::Black;
			this->label171->Location = System::Drawing::Point(257, 733);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(82, 29);
			this->label171->TabIndex = 32;
			this->label171->Text = L"3";
			// 
			// label172
			// 
			this->label172->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label172->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label172->ForeColor = System::Drawing::Color::Black;
			this->label172->Location = System::Drawing::Point(171, 733);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(80, 29);
			this->label172->TabIndex = 31;
			this->label172->Text = L"3";
			// 
			// label173
			// 
			this->label173->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label173->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label173->ForeColor = System::Drawing::Color::Black;
			this->label173->Location = System::Drawing::Point(345, 654);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(73, 24);
			this->label173->TabIndex = 30;
			this->label173->Text = L"C-A相";
			// 
			// label174
			// 
			this->label174->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label174->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label174->ForeColor = System::Drawing::Color::Black;
			this->label174->Location = System::Drawing::Point(257, 654);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(82, 24);
			this->label174->TabIndex = 29;
			this->label174->Text = L"B-C相";
			// 
			// label175
			// 
			this->label175->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label175->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label175->ForeColor = System::Drawing::Color::Black;
			this->label175->Location = System::Drawing::Point(171, 654);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(80, 24);
			this->label175->TabIndex = 28;
			this->label175->Text = L"A-B相";
			// 
			// label179
			// 
			this->label179->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label179->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label179->ForeColor = System::Drawing::Color::Black;
			this->label179->Location = System::Drawing::Point(15, 816);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(138, 29);
			this->label179->TabIndex = 24;
			this->label179->Text = L"三相不平衡";
			// 
			// label181
			// 
			this->label181->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label181->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label181->ForeColor = System::Drawing::Color::Black;
			this->label181->Location = System::Drawing::Point(1004, 622);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(279, 29);
			this->label181->TabIndex = 22;
			this->label181->Text = L"相电流（A）";
			// 
			// label183
			// 
			this->label183->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label183->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label183->ForeColor = System::Drawing::Color::Black;
			this->label183->Location = System::Drawing::Point(15, 733);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(138, 29);
			this->label183->TabIndex = 19;
			this->label183->Text = L"三相平衡";
			// 
			// label184
			// 
			this->label184->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label184->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label184->ForeColor = System::Drawing::Color::Black;
			this->label184->Location = System::Drawing::Point(719, 622);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(279, 29);
			this->label184->TabIndex = 18;
			this->label184->Text = L"线电流（A）";
			// 
			// label185
			// 
			this->label185->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label185->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label185->ForeColor = System::Drawing::Color::Black;
			this->label185->Location = System::Drawing::Point(434, 622);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(279, 29);
			this->label185->TabIndex = 17;
			this->label185->Text = L"线电压=相电压（V）";
			// 
			// label186
			// 
			this->label186->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label186->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label186->ForeColor = System::Drawing::Color::Black;
			this->label186->Location = System::Drawing::Point(171, 622);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(247, 29);
			this->label186->TabIndex = 16;
			this->label186->Text = L"开灯盏数";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(319, 205);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(659, 288);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label187
			// 
			this->label187->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label187->ForeColor = System::Drawing::Color::Black;
			this->label187->Location = System::Drawing::Point(24, 45);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(1161, 113);
			this->label187->TabIndex = 0;
			this->label187->Text = L"    2 .负载三角形联接（三相三线制供电）\r\n\r\n    将实验台上三相调压器输出调节至220V，断电按图16－2组接实验电路，经老师检查无误后通电实验。\r\n"
				L"K1～K9始终断开， SA1～SA3的通断控制A相开灯盏数，SA4～SA6的通断控制B相开灯盏数，SA7～SA9的通断控制C相开灯盏数。\r\n并按数据表格的内容进"
				L"行测试。";
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::Color::SkyBlue;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(12, 2247);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(1406, 52);
			this->label39->TabIndex = 171;
			this->label39->Text = L"答题结束";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(561, 2194);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(316, 39);
			this->button56->TabIndex = 170;
			this->button56->Text = L"成绩完成并上传";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &三相交流电路电压电流的测量实验内容::button56_Click);
			// 
			// 三相交流电路电压电流的测量实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1492, 739);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"三相交流电路电压电流的测量实验内容";
			this->Text = L"三相交流电路电压电流的测量实验内容";
			this->Load += gcnew System::EventHandler(this, &三相交流电路电压电流的测量实验内容::三相交流电路电压电流的测量实验内容_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void 三相交流电路电压电流的测量实验内容::SendData();
			 public: ST_三相交流电路电压电流的测量 三相交流电路电压电流的测量实验内容::Load_Grade_data();
	private: System::Void 三相交流电路电压电流的测量实验内容_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
		SendData();
	}
};
}
