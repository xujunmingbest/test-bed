#pragma once
#include "tool/tool.h"
namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// ��·״̬�켣�Ĺ۲�ʵ������ ժҪ
	/// </summary>
	public ref class ��·״̬�켣�Ĺ۲�ʵ������ : public System::Windows::Forms::Form
	{
	public:
		��·״̬�켣�Ĺ۲�ʵ������(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			File::Delete(Trial1_name);
			File::Delete(Trial2_name);
			File::Delete(Trial3_name);
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~��·״̬�켣�Ĺ۲�ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label106;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::TextBox^  textBox����;
	private: System::Windows::Forms::Label^  label105;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(��·״̬�켣�Ĺ۲�ʵ������::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->textBox���� = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(580, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"��·״̬�켣�Ĺ۲� ʵ������";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->label106);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label102);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(27, 83);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1350, 2110);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ʵ������";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::groupBox1_Enter);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(717, 2065);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 39);
			this->button3->TabIndex = 189;
			this->button3->Text = L"��ȡ����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::button3_Click);
			// 
			// label5
			// 
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(151, 2080);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(341, 27);
			this->label5->TabIndex = 188;
			this->label5->Text = L"RLC��·��R=0ʱ��״̬�켣";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(48, 1540);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(605, 395);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 187;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::SkyBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(-5, 1524);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1338, 10);
			this->label4->TabIndex = 186;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(692, 1473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 39);
			this->button2->TabIndex = 185;
			this->button2->Text = L"��ȡ����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::button2_Click);
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(132, 1488);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(341, 27);
			this->label3->TabIndex = 184;
			this->label3->Text = L"RLC��·��Ƿ����ʱ��״̬�켣";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(48, 943);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(605, 395);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 183;
			this->pictureBox2->TabStop = false;
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(6, 916);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1338, 10);
			this->label106->TabIndex = 182;
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(692, 859);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 39);
			this->button1->TabIndex = 91;
			this->button1->Text = L"��ȡ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::button1_Click);
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(126, 872);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(341, 27);
			this->label2->TabIndex = 90;
			this->label2->Text = L"RLC��·�ڹ�����ʱ��״̬�켣";
			// 
			// label102
			// 
			this->label102->ForeColor = System::Drawing::Color::Black;
			this->label102->Location = System::Drawing::Point(44, 104);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(973, 82);
			this->label102->TabIndex = 89;
			this->label102->Text = L"    Ȼ����ź�Դ��ʾ�����ĵ�Դ���۲�ͼ11-1��·��״̬�켣��Ӧ���ڵ�·����ЩԪ��������ʹ֮�ܹ۲쵽Ԥ�Ƶ�״̬�켣\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(48, 332);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(605, 395);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::pictureBox1_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::SkyBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(22, 2314);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1355, 52);
			this->label7->TabIndex = 185;
			this->label7->Text = L"�������";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(604, 2272);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 184;
			this->button81->Text = L"�ɼ���ɲ��ϴ�";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::button81_Click);
			// 
			// textBox����
			// 
			this->textBox����->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox����->Location = System::Drawing::Point(124, 2225);
			this->textBox����->Name = L"textBox����";
			this->textBox����->Size = System::Drawing::Size(1253, 28);
			this->textBox����->TabIndex = 183;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(23, 2228);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 182;
			this->label105->Text = L"ʵ�����";
			// 
			// ��·״̬�켣�Ĺ۲�ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1645, 918);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->textBox����);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"��·״̬�켣�Ĺ۲�ʵ������";
			this->Text = L"��·״̬�켣�Ĺ۲�ʵ������";
			this->Load += gcnew System::EventHandler(this, &��·״̬�켣�Ĺ۲�ʵ������::��·״̬�켣�Ĺ۲�ʵ������_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^picdir = gcnew String(BMPSAVEPATH);
		String ^Trial1_name = picdir + "��·״̬�켣�Ĺ۲�Trial1.bmp";
		String ^Trial2_name = picdir + "��·״̬�켣�Ĺ۲�Trial2.bmp";
		String ^Trial3_name = picdir + "��·״̬�켣�Ĺ۲�Trial3.bmp";
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		File::Delete(Trial1_name);
		if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial1_name))) {
			MessageBox::Show("��ȡ����ʧ��");
			return;
		}
		pictureBox1->ImageLocation = Trial1_name;
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial2_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial2_name))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBox2->ImageLocation = Trial2_name;
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	File::Delete(Trial3_name);
	if (!oscillograph::GetOscilloscopePrtScnBmp(T_to_string(Trial3_name))) {
		MessageBox::Show("��ȡ����ʧ��");
		return;
	}
	pictureBox3->ImageLocation = Trial3_name;
}
		public: void SendData();
		public: ST_��·״̬�켣�Ĺ۲� Load_Grade_data();
private: System::Void ��·״̬�켣�Ĺ۲�ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
	lcc.SendComputerInfo(Grades[11] + "����ʵ����");
	NowTrial::NowTrailCode = 11;
	NowTrial::NowTrailForm = this;
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	SendData();

}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
