#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����ԭ��ʵ��ԭ�� ժҪ
	/// </summary>
	public ref class ����ԭ��ʵ��ԭ�� : public System::Windows::Forms::Form
	{
	public:
		����ԭ��ʵ��ԭ��(void)
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
		~����ԭ��ʵ��ԭ��()
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
			this->label7->Location = System::Drawing::Point(12, 293);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"����ԭ��ʵ��ԭ��";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(940, 241);
			this->label3->TabIndex = 18;
			this->label3->Text = L"    ����ԭ��ָ�������м�������Դ��ͬ�����µ����Ե�·�У�ͨ��ÿһ��Ԫ���ĵ����������˵ĵ�ѹ�����Կ�������ÿһ������Դ��������ʱ�ڸ�Ԫ�����������ĵ������ѹ�Ĵ�"
				L"���͡�\r\n\r\n\r\n\r\n    ���Ե�·���������ָ�������źţ�ĳ����Դ��ֵ�����ӻ��СK��ʱ����·����Ӧ�����ڵ�·����������Ԫ�����������ĵ����͵�ѹֵ��Ҳ������"
				L"���СK����\r\n";
			// 
			// ����ԭ��ʵ��ԭ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 730);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"����ԭ��ʵ��ԭ��";
			this->Text = L"����ԭ��ʵ��ԭ��";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
