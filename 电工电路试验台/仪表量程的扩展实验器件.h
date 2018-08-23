#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 仪表量程的扩展实验器件 摘要
	/// </summary>
	public ref class 仪表量程的扩展实验器件 : public System::Windows::Forms::Form
	{
	public:
		仪表量程的扩展实验器件(void)
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
		~仪表量程的扩展实验器件()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::Silver;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 182);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(888, 354);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"序号";
			this->columnHeader1->Width = 83;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"名  称";
			this->columnHeader2->Width = 125;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"型号与规格";
			this->columnHeader3->Width = 173;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"备 注";
			this->columnHeader4->Width = 119;
			// 
			// 仪表量程的扩展实验器件
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1101, 601);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"仪表量程的扩展实验器件";
			this->Text = L"仪表量程的扩展实验器件";
			this->Load += gcnew System::EventHandler(this, &仪表量程的扩展实验器件::仪表量程的扩展实验器件_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 仪表量程的扩展实验器件_Load(System::Object^  sender, System::EventArgs^  e) {
		listView1->Items->Add("1");
		listView1->Items[0]->SubItems->Add("直流稳压电源");
		listView1->Items[0]->SubItems->Add("0~30V");
		listView1->Items[0]->SubItems->Add("电源屏");

		listView1->Items->Add("2");
		listView1->Items[1]->SubItems->Add("基本表");
		listView1->Items[1]->SubItems->Add("5mA，160Ω");
		listView1->Items[1]->SubItems->Add("DG05");

		listView1->Items->Add("3");
		listView1->Items[2]->SubItems->Add("电阻箱");
		listView1->Items[2]->SubItems->Add("");
		listView1->Items[2]->SubItems->Add("DG04");

		for (int i = 0; i < 4; i++) {
			listView1->Columns[i]->Width = -2;
		}
	}
	};
}
