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
	/// һ�׵�·����Ӧ����ʵ������ ժҪ
	/// </summary>
	public ref class һ�׵�·����Ӧ����ʵ������ : public System::Windows::Forms::Form
	{
	public:
		һ�׵�·����Ӧ����ʵ������(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			File::Delete(trial1Path_in);
			File::Delete(trial1Path_out);
			File::Delete(trial2Path_in);
			File::Delete(trial2Path_out);
			File::Delete(trial3Path_in);
			File::Delete(trial3Path_out);
		
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~һ�׵�·����Ӧ����ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox8;
	protected:


	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;









































































	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBoxtrial��;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_in;


private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_in;


private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_in;


private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::TextBox^  textBox����;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_out;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_out;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_out;

private: System::Windows::Forms::Label^  label10;























	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(һ�׵�·����Ӧ����ʵ������::typeid));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_out = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial�� = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_in = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial2_out = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial2_in = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_out = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_in = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->textBox���� = (gcnew System::Windows::Forms::TextBox());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_in))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_in))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_in))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->pictureBox3);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 12);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(1296, 1290);
			this->groupBox8->TabIndex = 81;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"һ�׵�·����Ӧ����ʵ������";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 962);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(787, 308);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(212, 496);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(795, 441);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(605, 422);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ͼ6-3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(117, 141);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(57, 48);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(1239, 55);
			this->label38->TabIndex = 7;
			this->label38->Text = L"   ʵ����·��Ľṹ��ͼ6��3��ʾ������R��CԪ���Ĳ��ּ�����ֵ�������ص�ͨ��λ�õȵȡ�K1-K4����Ϊ�պϣ�K5-K16���ϲ�Ϊ�պϡ�";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_out);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBoxtrial��);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_in);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 1308);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1296, 1355);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ʵ������һ";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::groupBox2_Enter);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(22, 739);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 32);
			this->button5->TabIndex = 97;
			this->button5->Text = L"��ȡ����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button5_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(459, 1233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 25);
			this->label7->TabIndex = 96;
			this->label7->Text = L"�������";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(459, 690);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 25);
			this->label5->TabIndex = 95;
			this->label5->Text = L"���벨��";
			// 
			// pictureBoxTrial1_out
			// 
			this->pictureBoxTrial1_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_out.Image")));
			this->pictureBoxTrial1_out->Location = System::Drawing::Point(172, 739);
			this->pictureBoxTrial1_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial1_out->Name = L"pictureBoxTrial1_out";
			this->pictureBoxTrial1_out->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_out->TabIndex = 94;
			this->pictureBoxTrial1_out->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(996, 1287);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 32);
			this->button4->TabIndex = 93;
			this->button4->Text = L"������Ƶ�ʵ���";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(22, 202);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 32);
			this->button1->TabIndex = 92;
			this->button1->Text = L"��ȡ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button1_Click);
			// 
			// textBoxtrial��
			// 
			this->textBoxtrial��->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrial��->Location = System::Drawing::Point(199, 1294);
			this->textBoxtrial��->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial��->Name = L"textBoxtrial��";
			this->textBoxtrial��->Size = System::Drawing::Size(284, 30);
			this->textBoxtrial��->TabIndex = 91;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(68, 1294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 25);
			this->label3->TabIndex = 90;
			this->label3->Text = L"ʱ�䳣����";
			// 
			// pictureBoxTrial1_in
			// 
			this->pictureBoxTrial1_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_in.Image")));
			this->pictureBoxTrial1_in->Location = System::Drawing::Point(172, 202);
			this->pictureBoxTrial1_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial1_in->Name = L"pictureBoxTrial1_in";
			this->pictureBoxTrial1_in->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_in->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_in->TabIndex = 89;
			this->pictureBoxTrial1_in->TabStop = false;
			this->pictureBoxTrial1_in->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::pictureBoxTrial1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1100, 34);
			this->label2->TabIndex = 88;
			this->label2->Text = L"    �����ظı����ֵ�����ֵ�����Եع۲����Ӧ��Ӱ�죬��¼�۲쵽������  ��";
			this->label2->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::label2_Click);
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1100, 91);
			this->label19->TabIndex = 87;
			this->label19->Text = L"    1��ѡ��̬��·���ϵ�R��CԪ������R��30K����C��1000PF��K2��K11�պϣ������Ͽ��������ͼ6��1��b����ʾ��RC��ŵ��·��EΪ�����źŷ���"
				L"�����Um��3V��F��1KHz�ķ�����ѹ�źţ���ͨ������ͬ������ߣ�������ԴE����ӦUc���źŷֱ�����ʾ���������������YA��YB����ʱ����ʾ��������Ļ�Ϲ۲쵽"
				L"��������Ӧ�ı仯���ɣ����ʱ�䳣���ӣ����÷���ֽ��1��1�ı�����沨�� ��";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_out);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_in);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 2688);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1296, 1186);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ʵ�����ݶ�";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(412, 1139);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 25);
			this->label9->TabIndex = 99;
			this->label9->Text = L"���벨��";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(412, 595);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 25);
			this->label8->TabIndex = 96;
			this->label8->Text = L"���벨��";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(6, 652);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 32);
			this->button6->TabIndex = 98;
			this->button6->Text = L"��ȡ����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button6_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(6, 108);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 32);
			this->button2->TabIndex = 92;
			this->button2->Text = L"��ȡ����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button2_Click);
			// 
			// pictureBoxTrial2_out
			// 
			this->pictureBoxTrial2_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_out.Image")));
			this->pictureBoxTrial2_out->Location = System::Drawing::Point(132, 652);
			this->pictureBoxTrial2_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial2_out->Name = L"pictureBoxTrial2_out";
			this->pictureBoxTrial2_out->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial2_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_out->TabIndex = 97;
			this->pictureBoxTrial2_out->TabStop = false;
			// 
			// pictureBoxTrial2_in
			// 
			this->pictureBoxTrial2_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_in.Image")));
			this->pictureBoxTrial2_in->Location = System::Drawing::Point(132, 108);
			this->pictureBoxTrial2_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial2_in->Name = L"pictureBoxTrial2_in";
			this->pictureBoxTrial2_in->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial2_in->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_in->TabIndex = 89;
			this->pictureBoxTrial2_in->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(33, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1100, 52);
			this->label6->TabIndex = 87;
			this->label6->Text = L"    2����R��10K����C��0.1��F��K1��K16�պϣ������Ͽ������۲첢�����Ӧ�Ĳ��Σ���������Cֵ֮�����Եع۲����Ӧ��Ӱ�졣";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->pictureBoxTrial3_out);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->pictureBoxTrial3_in);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 3904);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1296, 1194);
			this->groupBox3->TabIndex = 90;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"ʵ��������";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(412, 1154);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 25);
			this->label11->TabIndex = 100;
			this->label11->Text = L"�������";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(0, 666);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 32);
			this->button7->TabIndex = 99;
			this->button7->Text = L"��ȡ����";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button7_Click);
			// 
			// pictureBoxTrial3_out
			// 
			this->pictureBoxTrial3_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_out.Image")));
			this->pictureBoxTrial3_out->Location = System::Drawing::Point(132, 666);
			this->pictureBoxTrial3_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial3_out->Name = L"pictureBoxTrial3_out";
			this->pictureBoxTrial3_out->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_out->TabIndex = 98;
			this->pictureBoxTrial3_out->TabStop = false;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(412, 637);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(120, 25);
			this->label10->TabIndex = 97;
			this->label10->Text = L"���벨��";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(0, 149);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 32);
			this->button3->TabIndex = 92;
			this->button3->Text = L"��ȡ����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button3_Click);
			// 
			// pictureBoxTrial3_in
			// 
			this->pictureBoxTrial3_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_in.Image")));
			this->pictureBoxTrial3_in->Location = System::Drawing::Point(132, 149);
			this->pictureBoxTrial3_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial3_in->Name = L"pictureBoxTrial3_in";
			this->pictureBoxTrial3_in->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_in->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_in->TabIndex = 89;
			this->pictureBoxTrial3_in->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1100, 95);
			this->label4->TabIndex = 87;
			this->label4->Text = L"    3��ѡ��̬���ϵ�R��CԪ���������ͼ6-2��a����ʾ��΢�ֵ�·����C��0.01��F��R��100������K4��K6�պϣ������Ͽ���\r\n    ��ͬ���ķ�����"
				L"���źţ�Um��2V��F =1KHz�������£��۲Ⲣ��漤������Ӧ�Ĳ��Ρ�\r\n����Rֵ֮�����Եع۲����Ӧ��Ӱ�죬������¼����R����1M��ʱ��������������кα���"
				L"�ϵ�����";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(1, 5248);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1315, 52);
			this->label106->TabIndex = 183;
			this->label106->Text = L"�������";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox����
			// 
			this->textBox����->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox����->Location = System::Drawing::Point(195, 5171);
			this->textBox����->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox����->Name = L"textBox����";
			this->textBox����->Size = System::Drawing::Size(1001, 28);
			this->textBox����->TabIndex = 181;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(556, 5205);
			this->button81->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 182;
			this->button81->Text = L"�ɼ���ɲ��ϴ�";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button81_Click);
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(8, 5171);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 180;
			this->label105->Text = L"ʵ�����";
			// 
			// һ�׵�·����Ӧ����ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1586, 758);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->textBox����);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"һ�׵�·����Ӧ����ʵ������";
			this->Text = L"һ�׵�·����Ӧ����ʵ������";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::һ�׵�·����Ӧ����ʵ������_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_in))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_in))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_in))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void һ�׵�·����Ӧ����ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String ^imageLocation = trial1Path_in;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial1Path_in))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBoxTrial1_in->ImageLocation = imageLocation;
}
private: System::Void pictureBoxTrial1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial3Path_in;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial3Path_in))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBoxTrial3_in->ImageLocation = imageLocation;
}
		 String ^BathPath = gcnew String(BMPSAVEPATH);
		 String ^trial1Path_in = BathPath + "һ�׵�·����Ӧ����Trial1_in.bmp";
		 String ^trial1Path_out = BathPath + "һ�׵�·����Ӧ����Trial1_out.bmp";
		 String ^trial2Path_in = BathPath + "һ�׵�·����Ӧ����Trial2_in.bmp";
		 String ^trial2Path_out = BathPath + "һ�׵�·����Ӧ����Trial2_out.bmp";
		 String ^trial3Path_in = BathPath + "һ�׵�·����Ӧ����Trial3_in.bmp";
		 String ^trial3Path_out = BathPath + "һ�׵�·����Ӧ����Trial3_out.bmp";

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial2Path_in;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial2Path_in))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBoxTrial2_in->ImageLocation = imageLocation;

}

				 public:ST_һ�׵�·����Ӧ���� Load_Grade_data();
				 void SendData();
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	global::scs->SetWaveForm(SQUAREWAVE);
	global::scs->SetFrequency(100000);
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial1Path_out;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial1Path_out))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBoxTrial1_out->ImageLocation = imageLocation;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial2Path_out;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial2Path_out))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBoxTrial2_out->ImageLocation = imageLocation;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^imageLocation = trial3Path_out;
	File::Delete(imageLocation);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(trial3Path_out))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBoxTrial3_out->ImageLocation = imageLocation;
}
};
}
