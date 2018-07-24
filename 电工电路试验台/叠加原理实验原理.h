#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 叠加原理实验原理 摘要
	/// </summary>
	public ref class 叠加原理实验原理 : public System::Windows::Forms::Form
	{
	public:
		叠加原理实验原理(void)
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
		~叠加原理实验原理()
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(12, 293);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"叠加原理实验原理";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(940, 241);
			this->label3->TabIndex = 18;
			this->label3->Text = L"    叠加原理指出：在有几个独立源共同作用下的线性电路中，通过每一个元件的电流或其两端的电压，可以看成是由每一个独立源单独作用时在该元件上所产生的电流或电压的代"
				L"数和。\r\n\r\n\r\n\r\n    线性电路的齐次性是指当激励信号（某独立源的值）增加或减小K倍时，电路的响应（即在电路其他各电阻元件上所建立的电流和电压值）也将增加"
				L"或减小K倍。\r\n";
			// 
			// 叠加原理实验原理
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 730);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"叠加原理实验原理";
			this->Text = L"叠加原理实验原理";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
