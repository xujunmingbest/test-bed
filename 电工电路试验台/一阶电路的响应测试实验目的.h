#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// һ�׵�·����Ӧ����ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class һ�׵�·����Ӧ����ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		һ�׵�·����Ӧ����ʵ��Ŀ��(void)
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
		~һ�׵�·����Ӧ����ʵ��Ŀ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:


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
			this->label2->Location = System::Drawing::Point(12, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(810, 196);
			this->label2->TabIndex = 6;
			this->label2->Text = L"    1���ⶨRCһ�׵�·����������Ӧ����״̬��Ӧ����ȫ��Ӧ��\r\n    \r\n    2��ѧϰ��·ʱ�䳣���Ĳ���������\r\n\r\n    3�������й�΢�ֵ�·�ͻ���"
				L"��·�ĸ��\r\n\r\n    4����һ��ѧ����ʾ�������ͼ�Ρ�";
			// 
			// һ�׵�·����Ӧ����ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1260, 693);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"һ�׵�·����Ӧ����ʵ��Ŀ��";
			this->Text = L"һ�׵�·����Ӧ����ʵ��Ŀ��";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ��Ŀ��::һ�׵�·����Ӧ����ʵ��Ŀ��_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void һ�׵�·����Ӧ����ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
