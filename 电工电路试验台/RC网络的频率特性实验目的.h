#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RC�����Ƶ������ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class RC�����Ƶ������ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		RC�����Ƶ������ʵ��Ŀ��(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

		}


	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~RC�����Ƶ������ʵ��Ŀ��()
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
			this->label3->Location = System::Drawing::Point(12, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(479, 37);
			this->label3->TabIndex = 18;
			this->label3->Text = L"RC�����Ƶ������ ʵ��Ŀ��";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 501);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1001, 37);
			this->label1->TabIndex = 17;
			this->label1->Text = L"    2��ѧ�������ñ��ʾ�����ⶨ���ϵ��ŵ�·�ķ�Ƶ���Ժ���Ƶ���ԡ�";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 442);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1001, 37);
			this->label2->TabIndex = 16;
			this->label2->Text = L"    1����Ϥ���ϵ��ŵ�·�Ľṹ�ص㼰��Ӧ�á�";
			// 
			// RC�����Ƶ������ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 772);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RC�����Ƶ������ʵ��Ŀ��";
			this->Text = L"RC�����Ƶ������ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &RC�����Ƶ������ʵ��Ŀ��::RC�����Ƶ������ʵ��Ŀ��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RC�����Ƶ������ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
