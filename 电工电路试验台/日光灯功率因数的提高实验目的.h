#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// �չ�ƹ������������ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class �չ�ƹ������������ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		�չ�ƹ������������ʵ��Ŀ��(void)
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
		~�չ�ƹ������������ʵ��Ŀ��()
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
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(62, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(479, 37);
			this->label3->TabIndex = 14;
			this->label3->Text = L"�չ�ƹ������������ ʵ��Ŀ��";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(62, 314);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1001, 49);
			this->label1->TabIndex = 13;
			this->label1->Text = L"    2�������չ����·�Ľ��ߡ�";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(62, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1001, 37);
			this->label2->TabIndex = 12;
			this->label2->Text = L"    1���о�������̬������·�е�ѹ����������֮��Ĺ�ϵ��";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(62, 378);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1001, 49);
			this->label4->TabIndex = 15;
			this->label4->Text = L"    3�������Ƶ�·�������������岢�����䷽����";
			// 
			// �չ�ƹ������������ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1400, 495);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"�չ�ƹ������������ʵ��Ŀ��";
			this->Text = L"�չ�ƹ������������ʵ��Ŀ��";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
