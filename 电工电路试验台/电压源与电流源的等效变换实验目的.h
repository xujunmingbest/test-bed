#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��(void)
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
		~��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(32, 319);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(432, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L" 1�����յ�Դ�����ԵĲ��Է�����";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(47, 379);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 28);
			this->label1->TabIndex = 7;
			this->label1->Text = L"2����֤��ѹԴ�����Դ��Ч�任��������";
			// 
			// ��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1121, 630);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��";
			this->Text = L"��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
