#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RLCԪ���迹���ԵĲⶨʵ��ԭ�� ժҪ
	/// </summary>
	public ref class RLCԪ���迹���ԵĲⶨʵ��ԭ�� : public System::Windows::Forms::Form
	{
	public:
		RLCԪ���迹���ԵĲⶨʵ��ԭ��(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~RLCԪ���迹���ԵĲⶨʵ��ԭ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RLCԪ���迹���ԵĲⶨʵ��ԭ��::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(12, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(458, 25);
			this->label7->TabIndex = 23;
			this->label7->Text = L"R��L��CԪ���迹���ԵĲⶨ ʵ��ԭ��";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(13, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(940, 61);
			this->label3->TabIndex = 24;
			this->label3->Text = L"    1�������ҽ����ź������£�R��L��C��·Ԫ���ڵ�·�еĿ����������źŵ�Ƶ���йأ����ǵ��迹Ƶ������R~F��XL~F��XC~F������ͼ12-1��ʾ��";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(13, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(940, 114);
			this->label1->TabIndex = 25;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(120, 348);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(704, 365);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(13, 755);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(940, 56);
			this->label2->TabIndex = 27;
			this->label2->Text = L"    3����Ԫ��R��L��C����������ӣ������ͬ���ķ������Z����Z��\r\nʱ���迹Ƶ������Z��F�����ݵ�ѹ����������λ����ж�Z����Z���Ǹ��Ի������Ը��ء�";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(13, 1174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(940, 107);
			this->label4->TabIndex = 28;
			this->label4->Text = L"    4��Ԫ�����迹�ǣ�����λ��գ��������źŵ�Ƶ�ʱ仯���ı䣬��������ͬƵ���µ���λ�����Ƶ��FΪ�����꣬�迹�Ǧ�Ϊ�����������ֽ�ϣ����ù⻬������������Щ"
				L"�㣬���õ��迹�ǵ�Ƶ���������ߡ� \r\n    ��˫��ʾ���������迹�ǵķ�����ͼ12��3��ʾ��ӫ����������һ������ռn����λ��ռm����ʵ�ʵ���λ��գ��迹�ǣ�"
				L"Ϊ\r\n";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(342, 1302);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(223, 846);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(386, 292);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			// 
			// RLCԪ���迹���ԵĲⶨʵ��ԭ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1028, 1056);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RLCԪ���迹���ԵĲⶨʵ��ԭ��";
			this->Text = L"RLCԪ���迹���ԵĲⶨʵ��ԭ��";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
