#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 一阶电路的响应测试实验目的 摘要
	/// </summary>
	public ref class 一阶电路的响应测试实验目的 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试实验目的(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~一阶电路的响应测试实验目的()
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(一阶电路的响应测试实验目的::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->axShockwaveFlash1 = (gcnew AxShockwaveFlashObjects::AxShockwaveFlash());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axShockwaveFlash1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(117, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"一阶电路的响应测试实验目的";
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
			// 一阶电路的响应测试实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 693);
			this->Controls->Add(this->axShockwaveFlash1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"一阶电路的响应测试实验目的";
			this->Text = L"一阶电路的响应测试实验目的";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &一阶电路的响应测试实验目的::一阶电路的响应测试实验目的_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axShockwaveFlash1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 一阶电路的响应测试实验目的_Load(System::Object^  sender, System::EventArgs^  e) {
		axShockwaveFlash1->Movie = "E:/串口设备连接需要的器件资料/电工实训仿真/电工实训仿真/swf/直流电桥1.swf";
	}
	};
}
