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
	/// Ԫ���������ԵĲ���ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class Ԫ���������ԵĲ���ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		Ԫ���������ԵĲ���ʵ��Ŀ��(void)
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
		~Ԫ���������ԵĲ���ʵ��Ŀ��()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(38, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(446, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1��ѧ��ʶ���õ�·Ԫ���ķ�����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(38, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(754, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2���������Ե��衢�����Ե���Ԫ���������Ե������Է���";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(38, 369);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(642, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"3������ʵ��̨��ֱ���繤�Ǳ���豸��ʹ�÷�����";
			// 
			// Ԫ���������ԵĲ���ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1318, 735);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ԫ���������ԵĲ���ʵ��Ŀ��";
			this->Text = L"Ԫ���������ԵĲ���ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &Ԫ���������ԵĲ���ʵ��Ŀ��::Ԫ���������ԵĲ���ʵ��Ŀ��_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ԫ���������ԵĲ���ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
