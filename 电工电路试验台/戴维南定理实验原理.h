#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ��ά�϶���ʵ��ԭ�� ժҪ
	/// </summary>
	public ref class ��ά�϶���ʵ��ԭ�� : public System::Windows::Forms::Form
	{
	public:
		��ά�϶���ʵ��ԭ��(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~��ά�϶���ʵ��ԭ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(��ά�϶���ʵ��ԭ��::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(35, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(246, 25);
			this->label7->TabIndex = 21;
			this->label7->Text = L"��ά�϶���ʵ��ԭ��";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(35, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(940, 168);
			this->label3->TabIndex = 20;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(35, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(940, 119);
			this->label1->TabIndex = 22;
			this->label1->Text = L"2����Դ���������Ч�����Ĳ�������\r\n   ��1����·��ѹ����·������\r\n    ����Դ������������˿�·ʱ���õ�ѹ��ֱ�Ӳ�������˵Ŀ�·��ѹUOC��Ȼ���ٽ�����"
				L"���˶�·���õ���������·����ISC��������Ϊ\r\n                  ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(483, 368);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(93, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(35, 459);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(940, 85);
			this->label2->TabIndex = 24;
			this->label2->Text = L"   ��2��������\r\n    �õ�ѹ������������Դ�����������������ͼ4��1��ʾ�������������������б��tg�գ�������";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(437, 547);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(193, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(35, 629);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(940, 56);
			this->label4->TabIndex = 26;
			this->label4->Text = L"    �÷���������Ҫ�ǲ�����·��ѹ������Ϊ�ֵINʱ������˵�ѹֵUN��������Ϊ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(463, 688);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(142, 58);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(35, 773);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(940, 56);
			this->label5->TabIndex = 28;
			this->label5->Text = L"    ���������������ֵ�ܵ�ʱ�����˲����·������";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(198, 832);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(664, 266);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(35, 1113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(940, 95);
			this->label6->TabIndex = 30;
			this->label6->Text = L"   ��3�����ѹ��\r\n    ��ͼ4��2��ʾ�������ص�ѹΪ�������翪·��ѹһ��ʱ�����ص��裨�ɵ�����Ķ���ȷ������Ϊ������Դ��������ĵ�Ч����ֵ��\r\n";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(35, 1217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(940, 95);
			this->label8->TabIndex = 31;
			this->label8->Text = L"   ��4����ʾ��\r\n    �ڲ������и�������Դ��������Ŀ�·��ѹʱ���õ�ѹ�����ֱ�Ӳ�������ɽϴ����Ϊ��������ѹ�������Ӱ�죬����������ʾ����������ͼ\r"
				L"\n4��3��ʾ��\r\n";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(390, 1315);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(290, 267);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 32;
			this->pictureBox5->TabStop = false;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(35, 1596);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(940, 151);
			this->label9->TabIndex = 33;
			this->label9->Text = L"    ��ʾ������ԭ������һ���������ѹ��Դ�뱻����Դ����������бȽϣ�����\r\nѹ��Դ�������ѹ����Դ��������Ŀ�·��ѹ���ʱ����ѹ��Ķ�����Ϊ��0����Ȼ�󽫵�·"
				L"�Ͽ���������ʱ��ѹ��Դ�������ѹ����Ϊ������Դ��������Ŀ�·��ѹ��\r\n";
			// 
			// ��ά�϶���ʵ��ԭ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1179, 838);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"��ά�϶���ʵ��ԭ��";
			this->Text = L"��ά�϶���ʵ��ԭ��";
			this->Load += gcnew System::EventHandler(this, &��ά�϶���ʵ��ԭ��::��ά�϶���ʵ��ԭ��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��ά�϶���ʵ��ԭ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
