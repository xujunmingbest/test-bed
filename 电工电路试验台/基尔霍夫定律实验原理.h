#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定律实验原理 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验原理 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验原理(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律实验原理()
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
			this->label7->Location = System::Drawing::Point(23, 274);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(272, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"基尔霍夫定律实验原理";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(23, 399);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(940, 217);
			this->label3->TabIndex = 15;
			this->label3->Text = L"    基尔霍夫定律是电路的基本定律。测量某电路的各支路电流及多个元件两端的电压，应能分别满足基尔霍夫电流定律和电压定律。即对电路中的任一个节点而言，应有ΣI＝0"
				L"；对任何一个闭合回路而言，应有ΣU＝0。\r\n\r\n\r\n\r\n    运用上述定律时必须注意电流的正方向，此方向可预先任意设定。\r\n";
			// 
			// 基尔霍夫定律实验原理
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 797);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"基尔霍夫定律实验原理";
			this->Text = L"基尔霍夫定律实验原理";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验原理::基尔霍夫定律实验原理_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 基尔霍夫定律实验原理_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
