#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����ԭ��ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ����ԭ��ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		����ԭ��ʵ��Ŀ��(void)
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
		~����ԭ��ʵ��Ŀ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 412);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1118, 28);
			this->label2->TabIndex = 5;
			this->label2->Text = L" ��֤���Ե�·����ԭ�����ȷ�ԣ��Ӷ���������Ե�·�ĵ����Ժ�����Ե���ʶ����⡣";
			// 
			// ����ԭ��ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1225, 611);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"����ԭ��ʵ��Ŀ��";
			this->Text = L"����ԭ��ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &����ԭ��ʵ��Ŀ��::����ԭ��ʵ��Ŀ��_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����ԭ��ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
