#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基本电工仪表的使用与测量误差的计算实验目的 摘要
	/// </summary>
	public ref class 基本电工仪表的使用与测量误差的计算实验目的 : public System::Windows::Forms::Form
	{
	public:
		基本电工仪表的使用与测量误差的计算实验目的(void)
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
		~基本电工仪表的使用与测量误差的计算实验目的()
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(658, 37);
			this->label3->TabIndex = 21;
			this->label3->Text = L"基本电工仪表的使用与测量误差的计算 实验目的";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 399);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1001, 37);
			this->label1->TabIndex = 20;
			this->label1->Text = L"    2．熟悉实验台上各类电源的布局及使用方法";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 343);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1001, 37);
			this->label2->TabIndex = 19;
			this->label2->Text = L"    1．熟悉实验台上各类测量仪表的布局";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(12, 504);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1001, 37);
			this->label4->TabIndex = 23;
			this->label4->Text = L"    4．熟悉电工仪表测量误差的计算方法";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(12, 448);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1001, 37);
			this->label5->TabIndex = 22;
			this->label5->Text = L"    3．掌握电压表、电流表内阻的测量方法";
			// 
			// 基本电工仪表的使用与测量误差的计算实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1335, 691);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"基本电工仪表的使用与测量误差的计算实验目的";
			this->Text = L"基本电工仪表的使用与测量误差的计算实验目的";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
