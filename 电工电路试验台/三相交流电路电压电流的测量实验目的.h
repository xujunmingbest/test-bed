#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��(void)
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
		~���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��()
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
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(533, 37);
			this->label3->TabIndex = 11;
			this->label3->Text = L"���ཻ����·��ѹ�����Ĳ��� ʵ��Ŀ��";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 418);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1001, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"    2���������������߹���ϵͳ�����ߵ����á�";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1001, 62);
			this->label2->TabIndex = 9;
			this->label2->Text = L"    1���������ฺ�����������ӡ����������ӵķ�������֤�����ֽӷ����ߡ����ѹ���ߡ������֮��Ĺ�ϵ��";
			// 
			// ���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1309, 738);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��";
			this->Text = L"���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
