#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����������ʵ��ԭ�� ժҪ
	/// </summary>
	public ref class ����������ʵ��ԭ�� : public System::Windows::Forms::Form
	{
	public:
		����������ʵ��ԭ��(void)
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
		~����������ʵ��ԭ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;
	protected:
	private: System::Windows::Forms::Label^  label3;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(23, 274);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(272, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"����������ʵ��ԭ��";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(23, 399);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(940, 217);
			this->label3->TabIndex = 15;
			this->label3->Text = L"    �����������ǵ�·�Ļ������ɡ�����ĳ��·�ĸ�֧·���������Ԫ�����˵ĵ�ѹ��Ӧ�ֱܷ������������������ɺ͵�ѹ���ɡ����Ե�·�е���һ���ڵ���ԣ�Ӧ�Ц�I��0"
				L"�����κ�һ���պϻ�·���ԣ�Ӧ�Ц�U��0��\r\n\r\n\r\n\r\n    ������������ʱ����ע������������򣬴˷����Ԥ�������趨��\r\n";
			// 
			// ����������ʵ��ԭ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 797);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"����������ʵ��ԭ��";
			this->Text = L"����������ʵ��ԭ��";
			this->Load += gcnew System::EventHandler(this, &����������ʵ��ԭ��::����������ʵ��ԭ��_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����������ʵ��ԭ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
