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
	private: System::Windows::Forms::Label^  label1;
	private: AxShockwaveFlashObjects::AxShockwaveFlash^  axShockwaveFlash1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(һ�׵�·����Ӧ����ʵ��Ŀ��::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->axShockwaveFlash1 = (gcnew AxShockwaveFlashObjects::AxShockwaveFlash());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axShockwaveFlash1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(117, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"һ�׵�·����Ӧ����ʵ��Ŀ��";
			// 
			// axShockwaveFlash1
			// 
			this->axShockwaveFlash1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axShockwaveFlash1->Enabled = true;
			this->axShockwaveFlash1->Location = System::Drawing::Point(0, 0);
			this->axShockwaveFlash1->Name = L"axShockwaveFlash1";
			this->axShockwaveFlash1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axShockwaveFlash1.OcxState")));
			this->axShockwaveFlash1->Size = System::Drawing::Size(955, 693);
			this->axShockwaveFlash1->TabIndex = 1;
			// 
			// һ�׵�·����Ӧ����ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 693);
			this->Controls->Add(this->axShockwaveFlash1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"һ�׵�·����Ӧ����ʵ��Ŀ��";
			this->Text = L"һ�׵�·����Ӧ����ʵ��Ŀ��";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ��Ŀ��::һ�׵�·����Ӧ����ʵ��Ŀ��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axShockwaveFlash1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void һ�׵�·����Ӧ����ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
		axShockwaveFlash1->Movie = "E:/�����豸������Ҫ����������/�繤ʵѵ����/�繤ʵѵ����/swf/ֱ������1.swf";
	}
	};
}
