#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// �����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class �����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��(void)
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
		~�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(658, 37);
			this->label3->TabIndex = 21;
			this->label3->Text = L"�����繤�Ǳ��ʹ����������ļ��� ʵ��Ŀ��";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 399);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1001, 37);
			this->label1->TabIndex = 20;
			this->label1->Text = L"    2����Ϥʵ��̨�ϸ����Դ�Ĳ��ּ�ʹ�÷���";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 343);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1001, 37);
			this->label2->TabIndex = 19;
			this->label2->Text = L"    1����Ϥʵ��̨�ϸ�������Ǳ�Ĳ���";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(12, 504);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1001, 37);
			this->label4->TabIndex = 23;
			this->label4->Text = L"    4����Ϥ�繤�Ǳ�������ļ��㷽��";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(12, 448);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1001, 37);
			this->label5->TabIndex = 22;
			this->label5->Text = L"    3�����յ�ѹ������������Ĳ�������";
			// 
			// �����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1335, 691);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��";
			this->Text = L"�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
