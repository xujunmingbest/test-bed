#pragma once
#include "tool/tool.h"
namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ��������������Ĳ���ʵ������ ժҪ
	/// </summary>
	public ref class ��������������Ĳ���ʵ������ : public System::Windows::Forms::Form
	{
	public:
		��������������Ĳ���ʵ������(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}
		void SendData();
		ST_��������������Ĳ��� Load_Grade_data();
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~��������������Ĳ���ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:





















































	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::GroupBox^  groupBox1;





	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_4;






	private: System::Windows::Forms::Label^  labelTrial2_I_4;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  labelTrial2_UC_4;

	private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Label^  labelTrial2_UL_4;

	private: System::Windows::Forms::Button^  button22;

	private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Label^  labelTrial2_U_4;

	private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_3;






private: System::Windows::Forms::Label^  labelTrial2_I_3;

	private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Label^  labelTrial2_UC_3;

	private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Label^  labelTrial2_UL_3;

	private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Label^  labelTrial2_UR_3;

	private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Label^  labelTrial2_U_3;

	private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_2;






private: System::Windows::Forms::Label^  labelTrial2_I_2;

	private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Label^  labelTrial2_UC_2;

	private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  labelTrial2_UL_2;

	private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Label^  labelTrial2_UR_2;

	private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Label^  labelTrial2_U_2;

	private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBoxTrial2_Load_1;




	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label18;



	private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  labelTrial2_I_1;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  labelTrial2_UC_1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  labelTrial2_UL_1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  labelTrial2_UR_1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  labelTrial2_U_1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Label^  labelTrial2_UR_4;




private: System::Windows::Forms::TextBox^  textBox����;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  labelTrial2_P_4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Label^  labelTrial2_P_3;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  labelTrial2_P_2;
private: System::Windows::Forms::Button^  button13;

private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Label^  textBoxTrial2_��_4;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Label^  textBoxTrial2_��_3;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Label^  textBoxTrial2_��_2;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Label^  textBoxTrial2_��_1;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Label^  labelTrial2_P_1;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(��������������Ĳ���ʵ������::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox���� = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_��_4 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_��_3 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_��_2 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_��_1 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_P_4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_P_3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_P_2 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_P_1 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_I_4 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UC_4 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_4 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UR_4 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_4 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_I_3 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UC_3 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_3 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UR_3 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_3 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_I_2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UC_2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UR_2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_2 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBoxTrial2_Load_1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UC_1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UR_1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBox����);
			this->groupBox8->Controls->Add(this->label105);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(25, 85);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1367, 565);
			this->groupBox8->TabIndex = 88;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"��������������Ĳ��� ʵ������1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::groupBox8_Enter);
			// 
			// textBox����
			// 
			this->textBox����->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox����->Location = System::Drawing::Point(203, 519);
			this->textBox����->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox����->Name = L"textBox����";
			this->textBox����->Size = System::Drawing::Size(1137, 28);
			this->textBox����->TabIndex = 181;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(27, 523);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 180;
			this->label105->Text = L"ʵ�����";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(543, 334);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 28);
			this->label9->TabIndex = 90;
			this->label9->Text = L"    ͼ25��1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(455, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 89;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(11, 472);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1119, 35);
			this->label4->TabIndex = 86;
			this->label4->Text = L"    ��2������Դ���������������ٽ����·���۲����Ƶ�����״̬���ж����ཻ����Դ������";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(34, 389);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1119, 65);
			this->label37->TabIndex = 0;
			this->label37->Text = L" 1������Ĳⶨ\r\n   ��1����ʵ��̨�������ѹ�����������U1V1=220V���ϵ�ȡ220V��15W�׳����ֻ��0.47��F/450V������һֻ��ͼ25��1��"
				L"�ߣ��ж����ཻ����Դ������\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(361, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 25);
			this->label1->TabIndex = 87;
			this->label1->Text = L"��������������Ĳ��� ʵ������";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_��_4);
			this->groupBox1->Controls->Add(this->button25);
			this->groupBox1->Controls->Add(this->textBoxTrial2_��_3);
			this->groupBox1->Controls->Add(this->button26);
			this->groupBox1->Controls->Add(this->textBoxTrial2_��_2);
			this->groupBox1->Controls->Add(this->button27);
			this->groupBox1->Controls->Add(this->textBoxTrial2_��_1);
			this->groupBox1->Controls->Add(this->button28);
			this->groupBox1->Controls->Add(this->labelTrial2_P_4);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->labelTrial2_P_3);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->labelTrial2_P_2);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->labelTrial2_P_1);
			this->groupBox1->Controls->Add(this->button19);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_4);
			this->groupBox1->Controls->Add(this->labelTrial2_I_4);
			this->groupBox1->Controls->Add(this->button20);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_4);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_4);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_4);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->labelTrial2_U_4);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_3);
			this->groupBox1->Controls->Add(this->labelTrial2_I_3);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_3);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_3);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_3);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->labelTrial2_U_3);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_2);
			this->groupBox1->Controls->Add(this->labelTrial2_I_2);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_2);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_2);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_2);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->labelTrial2_U_2);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_1);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->labelTrial2_I_1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->labelTrial2_U_1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(25, 656);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1247, 866);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������������Ĳ��� ʵ������2";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::groupBox1_Enter);
			// 
			// textBoxTrial2_��_4
			// 
			this->textBoxTrial2_��_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_��_4->Location = System::Drawing::Point(832, 745);
			this->textBoxTrial2_��_4->Name = L"textBoxTrial2_��_4";
			this->textBoxTrial2_��_4->Size = System::Drawing::Size(100, 50);
			this->textBoxTrial2_��_4->TabIndex = 235;
			this->textBoxTrial2_��_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(832, 798);
			this->button25->Name = L"button25";
			this->button25->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button25->Size = System::Drawing::Size(100, 29);
			this->button25->TabIndex = 234;
			this->button25->Text = L"��ȡ";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button25_Click);
			// 
			// textBoxTrial2_��_3
			// 
			this->textBoxTrial2_��_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_��_3->Location = System::Drawing::Point(832, 633);
			this->textBoxTrial2_��_3->Name = L"textBoxTrial2_��_3";
			this->textBoxTrial2_��_3->Size = System::Drawing::Size(100, 50);
			this->textBoxTrial2_��_3->TabIndex = 233;
			this->textBoxTrial2_��_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(832, 686);
			this->button26->Name = L"button26";
			this->button26->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button26->Size = System::Drawing::Size(100, 29);
			this->button26->TabIndex = 232;
			this->button26->Text = L"��ȡ";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button26_Click);
			// 
			// textBoxTrial2_��_2
			// 
			this->textBoxTrial2_��_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_��_2->Location = System::Drawing::Point(832, 524);
			this->textBoxTrial2_��_2->Name = L"textBoxTrial2_��_2";
			this->textBoxTrial2_��_2->Size = System::Drawing::Size(100, 50);
			this->textBoxTrial2_��_2->TabIndex = 231;
			this->textBoxTrial2_��_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(832, 577);
			this->button27->Name = L"button27";
			this->button27->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button27->Size = System::Drawing::Size(100, 29);
			this->button27->TabIndex = 230;
			this->button27->Text = L"��ȡ";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button27_Click);
			// 
			// textBoxTrial2_��_1
			// 
			this->textBoxTrial2_��_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_��_1->Location = System::Drawing::Point(832, 420);
			this->textBoxTrial2_��_1->Name = L"textBoxTrial2_��_1";
			this->textBoxTrial2_��_1->Size = System::Drawing::Size(100, 50);
			this->textBoxTrial2_��_1->TabIndex = 229;
			this->textBoxTrial2_��_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(832, 473);
			this->button28->Name = L"button28";
			this->button28->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button28->Size = System::Drawing::Size(100, 29);
			this->button28->TabIndex = 228;
			this->button28->Text = L"��ȡ";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button28_Click);
			// 
			// labelTrial2_P_4
			// 
			this->labelTrial2_P_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_4->Location = System::Drawing::Point(711, 745);
			this->labelTrial2_P_4->Name = L"labelTrial2_P_4";
			this->labelTrial2_P_4->Size = System::Drawing::Size(100, 50);
			this->labelTrial2_P_4->TabIndex = 227;
			this->labelTrial2_P_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(711, 798);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button5->Size = System::Drawing::Size(100, 29);
			this->button5->TabIndex = 226;
			this->button5->Text = L"��ȡ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button5_Click);
			// 
			// labelTrial2_P_3
			// 
			this->labelTrial2_P_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_3->Location = System::Drawing::Point(711, 633);
			this->labelTrial2_P_3->Name = L"labelTrial2_P_3";
			this->labelTrial2_P_3->Size = System::Drawing::Size(100, 50);
			this->labelTrial2_P_3->TabIndex = 225;
			this->labelTrial2_P_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(711, 686);
			this->button7->Name = L"button7";
			this->button7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button7->Size = System::Drawing::Size(100, 29);
			this->button7->TabIndex = 224;
			this->button7->Text = L"��ȡ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button7_Click);
			// 
			// labelTrial2_P_2
			// 
			this->labelTrial2_P_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_2->Location = System::Drawing::Point(711, 524);
			this->labelTrial2_P_2->Name = L"labelTrial2_P_2";
			this->labelTrial2_P_2->Size = System::Drawing::Size(100, 50);
			this->labelTrial2_P_2->TabIndex = 223;
			this->labelTrial2_P_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(711, 577);
			this->button13->Name = L"button13";
			this->button13->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button13->Size = System::Drawing::Size(100, 29);
			this->button13->TabIndex = 222;
			this->button13->Text = L"��ȡ";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button13_Click);
			// 
			// labelTrial2_P_1
			// 
			this->labelTrial2_P_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_1->Location = System::Drawing::Point(711, 420);
			this->labelTrial2_P_1->Name = L"labelTrial2_P_1";
			this->labelTrial2_P_1->Size = System::Drawing::Size(100, 50);
			this->labelTrial2_P_1->TabIndex = 221;
			this->labelTrial2_P_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(711, 473);
			this->button19->Name = L"button19";
			this->button19->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button19->Size = System::Drawing::Size(100, 29);
			this->button19->TabIndex = 220;
			this->button19->Text = L"��ȡ";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button19_Click);
			// 
			// textBoxTrial2_Load_4
			// 
			this->textBoxTrial2_Load_4->Location = System::Drawing::Point(962, 757);
			this->textBoxTrial2_Load_4->Name = L"textBoxTrial2_Load_4";
			this->textBoxTrial2_Load_4->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_4->TabIndex = 215;
			// 
			// labelTrial2_I_4
			// 
			this->labelTrial2_I_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_4->Location = System::Drawing::Point(607, 745);
			this->labelTrial2_I_4->Name = L"labelTrial2_I_4";
			this->labelTrial2_I_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_4->TabIndex = 211;
			this->labelTrial2_I_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(607, 798);
			this->button20->Name = L"button20";
			this->button20->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button20->Size = System::Drawing::Size(88, 29);
			this->button20->TabIndex = 210;
			this->button20->Text = L"��ȡ";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button20_Click);
			// 
			// labelTrial2_UC_4
			// 
			this->labelTrial2_UC_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_4->Location = System::Drawing::Point(504, 745);
			this->labelTrial2_UC_4->Name = L"labelTrial2_UC_4";
			this->labelTrial2_UC_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_4->TabIndex = 209;
			this->labelTrial2_UC_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(504, 798);
			this->button21->Name = L"button21";
			this->button21->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button21->Size = System::Drawing::Size(88, 29);
			this->button21->TabIndex = 208;
			this->button21->Text = L"��ȡ";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button21_Click);
			// 
			// labelTrial2_UL_4
			// 
			this->labelTrial2_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_4->Location = System::Drawing::Point(400, 745);
			this->labelTrial2_UL_4->Name = L"labelTrial2_UL_4";
			this->labelTrial2_UL_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_4->TabIndex = 207;
			this->labelTrial2_UL_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(400, 798);
			this->button22->Name = L"button22";
			this->button22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button22->Size = System::Drawing::Size(88, 29);
			this->button22->TabIndex = 206;
			this->button22->Text = L"��ȡ";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button22_Click);
			// 
			// labelTrial2_UR_4
			// 
			this->labelTrial2_UR_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_4->Location = System::Drawing::Point(296, 745);
			this->labelTrial2_UR_4->Name = L"labelTrial2_UR_4";
			this->labelTrial2_UR_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_4->TabIndex = 205;
			this->labelTrial2_UR_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(296, 798);
			this->button23->Name = L"button23";
			this->button23->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button23->Size = System::Drawing::Size(88, 29);
			this->button23->TabIndex = 204;
			this->button23->Text = L"��ȡ";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button23_Click);
			// 
			// labelTrial2_U_4
			// 
			this->labelTrial2_U_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_4->Location = System::Drawing::Point(192, 745);
			this->labelTrial2_U_4->Name = L"labelTrial2_U_4";
			this->labelTrial2_U_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_4->TabIndex = 203;
			this->labelTrial2_U_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(192, 798);
			this->button24->Name = L"button24";
			this->button24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button24->Size = System::Drawing::Size(88, 29);
			this->button24->TabIndex = 202;
			this->button24->Text = L"��ȡ";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button24_Click);
			// 
			// textBoxTrial2_Load_3
			// 
			this->textBoxTrial2_Load_3->Location = System::Drawing::Point(962, 645);
			this->textBoxTrial2_Load_3->Name = L"textBoxTrial2_Load_3";
			this->textBoxTrial2_Load_3->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_3->TabIndex = 201;
			// 
			// labelTrial2_I_3
			// 
			this->labelTrial2_I_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_3->Location = System::Drawing::Point(607, 633);
			this->labelTrial2_I_3->Name = L"labelTrial2_I_3";
			this->labelTrial2_I_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_3->TabIndex = 197;
			this->labelTrial2_I_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(607, 686);
			this->button14->Name = L"button14";
			this->button14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button14->Size = System::Drawing::Size(88, 29);
			this->button14->TabIndex = 196;
			this->button14->Text = L"��ȡ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button14_Click);
			// 
			// labelTrial2_UC_3
			// 
			this->labelTrial2_UC_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_3->Location = System::Drawing::Point(504, 633);
			this->labelTrial2_UC_3->Name = L"labelTrial2_UC_3";
			this->labelTrial2_UC_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_3->TabIndex = 195;
			this->labelTrial2_UC_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(504, 686);
			this->button15->Name = L"button15";
			this->button15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button15->Size = System::Drawing::Size(88, 29);
			this->button15->TabIndex = 194;
			this->button15->Text = L"��ȡ";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button15_Click);
			// 
			// labelTrial2_UL_3
			// 
			this->labelTrial2_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_3->Location = System::Drawing::Point(400, 633);
			this->labelTrial2_UL_3->Name = L"labelTrial2_UL_3";
			this->labelTrial2_UL_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_3->TabIndex = 193;
			this->labelTrial2_UL_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(400, 686);
			this->button16->Name = L"button16";
			this->button16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button16->Size = System::Drawing::Size(88, 29);
			this->button16->TabIndex = 192;
			this->button16->Text = L"��ȡ";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button16_Click);
			// 
			// labelTrial2_UR_3
			// 
			this->labelTrial2_UR_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_3->Location = System::Drawing::Point(296, 633);
			this->labelTrial2_UR_3->Name = L"labelTrial2_UR_3";
			this->labelTrial2_UR_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_3->TabIndex = 191;
			this->labelTrial2_UR_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(296, 686);
			this->button17->Name = L"button17";
			this->button17->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button17->Size = System::Drawing::Size(88, 29);
			this->button17->TabIndex = 190;
			this->button17->Text = L"��ȡ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button17_Click);
			// 
			// labelTrial2_U_3
			// 
			this->labelTrial2_U_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_3->Location = System::Drawing::Point(192, 633);
			this->labelTrial2_U_3->Name = L"labelTrial2_U_3";
			this->labelTrial2_U_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_3->TabIndex = 189;
			this->labelTrial2_U_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(192, 686);
			this->button18->Name = L"button18";
			this->button18->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button18->Size = System::Drawing::Size(88, 29);
			this->button18->TabIndex = 188;
			this->button18->Text = L"��ȡ";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button18_Click);
			// 
			// textBoxTrial2_Load_2
			// 
			this->textBoxTrial2_Load_2->Location = System::Drawing::Point(962, 536);
			this->textBoxTrial2_Load_2->Name = L"textBoxTrial2_Load_2";
			this->textBoxTrial2_Load_2->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_2->TabIndex = 187;
			// 
			// labelTrial2_I_2
			// 
			this->labelTrial2_I_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_2->Location = System::Drawing::Point(607, 524);
			this->labelTrial2_I_2->Name = L"labelTrial2_I_2";
			this->labelTrial2_I_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_2->TabIndex = 183;
			this->labelTrial2_I_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(607, 577);
			this->button8->Name = L"button8";
			this->button8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button8->Size = System::Drawing::Size(88, 29);
			this->button8->TabIndex = 182;
			this->button8->Text = L"��ȡ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button8_Click);
			// 
			// labelTrial2_UC_2
			// 
			this->labelTrial2_UC_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_2->Location = System::Drawing::Point(504, 524);
			this->labelTrial2_UC_2->Name = L"labelTrial2_UC_2";
			this->labelTrial2_UC_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_2->TabIndex = 181;
			this->labelTrial2_UC_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(504, 577);
			this->button9->Name = L"button9";
			this->button9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button9->Size = System::Drawing::Size(88, 29);
			this->button9->TabIndex = 180;
			this->button9->Text = L"��ȡ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button9_Click);
			// 
			// labelTrial2_UL_2
			// 
			this->labelTrial2_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_2->Location = System::Drawing::Point(400, 524);
			this->labelTrial2_UL_2->Name = L"labelTrial2_UL_2";
			this->labelTrial2_UL_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_2->TabIndex = 179;
			this->labelTrial2_UL_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(400, 577);
			this->button10->Name = L"button10";
			this->button10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button10->Size = System::Drawing::Size(88, 29);
			this->button10->TabIndex = 178;
			this->button10->Text = L"��ȡ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button10_Click);
			// 
			// labelTrial2_UR_2
			// 
			this->labelTrial2_UR_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_2->Location = System::Drawing::Point(296, 524);
			this->labelTrial2_UR_2->Name = L"labelTrial2_UR_2";
			this->labelTrial2_UR_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_2->TabIndex = 177;
			this->labelTrial2_UR_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(296, 577);
			this->button11->Name = L"button11";
			this->button11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button11->Size = System::Drawing::Size(88, 29);
			this->button11->TabIndex = 176;
			this->button11->Text = L"��ȡ";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button11_Click);
			// 
			// labelTrial2_U_2
			// 
			this->labelTrial2_U_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_2->Location = System::Drawing::Point(192, 524);
			this->labelTrial2_U_2->Name = L"labelTrial2_U_2";
			this->labelTrial2_U_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_2->TabIndex = 175;
			this->labelTrial2_U_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(192, 577);
			this->button12->Name = L"button12";
			this->button12->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button12->Size = System::Drawing::Size(88, 29);
			this->button12->TabIndex = 174;
			this->button12->Text = L"��ȡ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button12_Click);
			// 
			// textBoxTrial2_Load_1
			// 
			this->textBoxTrial2_Load_1->Location = System::Drawing::Point(962, 432);
			this->textBoxTrial2_Load_1->Name = L"textBoxTrial2_Load_1";
			this->textBoxTrial2_Load_1->Size = System::Drawing::Size(159, 30);
			this->textBoxTrial2_Load_1->TabIndex = 173;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(962, 370);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(159, 27);
			this->label22->TabIndex = 171;
			this->label22->Text = L"��������";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(832, 370);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(100, 27);
			this->label23->TabIndex = 170;
			this->label23->Text = L"cos��";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(711, 370);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 27);
			this->label18->TabIndex = 169;
			this->label18->Text = L"P(w)";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(607, 370);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(88, 27);
			this->label20->TabIndex = 166;
			this->label20->Text = L"I(v)";
			// 
			// labelTrial2_I_1
			// 
			this->labelTrial2_I_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_1->Location = System::Drawing::Point(607, 420);
			this->labelTrial2_I_1->Name = L"labelTrial2_I_1";
			this->labelTrial2_I_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_1->TabIndex = 165;
			this->labelTrial2_I_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(607, 473);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button6->Size = System::Drawing::Size(88, 29);
			this->button6->TabIndex = 164;
			this->button6->Text = L"��ȡ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button6_Click);
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(504, 370);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 27);
			this->label14->TabIndex = 163;
			this->label14->Text = L"UC(v)";
			// 
			// labelTrial2_UC_1
			// 
			this->labelTrial2_UC_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_1->Location = System::Drawing::Point(504, 420);
			this->labelTrial2_UC_1->Name = L"labelTrial2_UC_1";
			this->labelTrial2_UC_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_1->TabIndex = 162;
			this->labelTrial2_UC_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(504, 473);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(88, 29);
			this->button2->TabIndex = 161;
			this->button2->Text = L"��ȡ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button2_Click);
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(400, 370);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(88, 27);
			this->label16->TabIndex = 160;
			this->label16->Text = L"UL(v)";
			// 
			// labelTrial2_UL_1
			// 
			this->labelTrial2_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_1->Location = System::Drawing::Point(400, 420);
			this->labelTrial2_UL_1->Name = L"labelTrial2_UL_1";
			this->labelTrial2_UL_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_1->TabIndex = 159;
			this->labelTrial2_UL_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(400, 473);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button3->Size = System::Drawing::Size(88, 29);
			this->button3->TabIndex = 158;
			this->button3->Text = L"��ȡ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button3_Click);
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(296, 370);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 27);
			this->label12->TabIndex = 157;
			this->label12->Text = L"UR(v)";
			// 
			// labelTrial2_UR_1
			// 
			this->labelTrial2_UR_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_1->Location = System::Drawing::Point(296, 420);
			this->labelTrial2_UR_1->Name = L"labelTrial2_UR_1";
			this->labelTrial2_UR_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_1->TabIndex = 156;
			this->labelTrial2_UR_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(296, 473);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(88, 29);
			this->button1->TabIndex = 155;
			this->button1->Text = L"��ȡ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button1_Click);
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(192, 370);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 27);
			this->label11->TabIndex = 154;
			this->label11->Text = L"U(v)";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(36, 745);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 50);
			this->label10->TabIndex = 153;
			this->label10->Text = L"SA2��SA3�ϣ�\r\nSA1��";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(36, 633);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 50);
			this->label7->TabIndex = 152;
			this->label7->Text = L"SA3�ϣ�\r\nSA1��SA2��";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(36, 524);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 50);
			this->label6->TabIndex = 151;
			this->label6->Text = L"SA2��\r\nSA1��SA3��";
			// 
			// labelTrial2_U_1
			// 
			this->labelTrial2_U_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_1->Location = System::Drawing::Point(192, 420);
			this->labelTrial2_U_1->Name = L"labelTrial2_U_1";
			this->labelTrial2_U_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_1->TabIndex = 150;
			this->labelTrial2_U_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(192, 473);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button4->Size = System::Drawing::Size(88, 29);
			this->button4->TabIndex = 149;
			this->button4->Text = L"��ȡ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button4_Click);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(36, 420);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 50);
			this->label3->TabIndex = 147;
			this->label3->Text = L"SA1��\r\nSA2��SA3����";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(36, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 27);
			this->label5->TabIndex = 146;
			this->label5->Text = L"����״̬";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(503, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 28);
			this->label2->TabIndex = 91;
			this->label2->Text = L"    ͼ25��2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(203, 99);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(746, 221);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 91;
			this->pictureBox2->TabStop = false;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(24, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1119, 61);
			this->label8->TabIndex = 0;
			this->label8->Text = L"2����·���ʣ�P���͹���������cos�գ��Ĳⶨ\r\n    ��ͼ25��2���ߣ����±��������غ�բ����¼cos�ձ���������Ķ������������������ʡ�SA1��SA2��S"
				L"A3�õ��ߴ��档";
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(18, 1599);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 197;
			this->label129->Text = L"�������";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(572, 1557);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 196;
			this->button102->Text = L"�ɼ���ɲ��ϴ�";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::button102_Click);
			// 
			// ��������������Ĳ���ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1408, 875);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"��������������Ĳ���ʵ������";
			this->Text = L"��������������Ĳ���ʵ������";
			this->Load += gcnew System::EventHandler(this, &��������������Ĳ���ʵ������::��������������Ĳ���ʵ������_Load);
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
	private: System::Void ��������������Ĳ���ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
		lcc.SendComputerInfo(Grades[25] + "����ʵ����");
		NowTrial::NowTrailCode = 25;
		NowTrial::NowTrailForm = this;
	}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_U_1->Text = global::GetGongPingU();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_U_2->Text = global::GetGongPingU();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_U_3->Text = global::GetGongPingU();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_U_4->Text = global::GetGongPingU();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UR_1->Text = global::GetGongPingU();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UR_2->Text = global::GetGongPingU();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UR_3->Text = global::GetGongPingU();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UR_4->Text = global::GetGongPingU();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UL_1->Text = global::GetGongPingU();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UL_2->Text = global::GetGongPingU();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UL_3->Text = global::GetGongPingU();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UL_4->Text = global::GetGongPingU();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UC_1->Text = global::GetGongPingU();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UC_2->Text = global::GetGongPingU();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UC_3->Text = global::GetGongPingU();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_UC_4->Text = global::GetGongPingU();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_I_1->Text = global::GetGongPingI();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_I_2->Text = global::GetGongPingI();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_I_3->Text = global::GetGongPingI();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_I_4->Text = global::GetGongPingI();
}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P_1->Text = global::GetGongPingP();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P_2->Text = global::GetGongPingP();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P_3->Text = global::GetGongPingP();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelTrial2_P_4->Text = global::GetGongPingP();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial2_��_1->Text = global::GetGongPingCos();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial2_��_2->Text = global::GetGongPingCos();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial2_��_3->Text = global::GetGongPingCos();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxTrial2_��_4->Text = global::GetGongPingCos();
}
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
