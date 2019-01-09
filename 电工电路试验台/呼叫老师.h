#pragma once
#include "tool/tool.h"
namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 呼叫老师 摘要
	/// </summary>
	public ref class 呼叫老师 : public System::Windows::Forms::Form
	{
	public:
		呼叫老师(void)
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
		~呼叫老师()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBoxMsg;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;

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
			this->richTextBoxMsg = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBoxMsg
			// 
			this->richTextBoxMsg->Location = System::Drawing::Point(12, 12);
			this->richTextBoxMsg->Name = L"richTextBoxMsg";
			this->richTextBoxMsg->Size = System::Drawing::Size(345, 110);
			this->richTextBoxMsg->TabIndex = 0;
			this->richTextBoxMsg->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(345, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"发送通知给老师";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &呼叫老师::button1_Click);
			// 
			// 呼叫老师
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 181);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBoxMsg);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"呼叫老师";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"呼叫老师";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		S_CallTeacher sct;
		sct.ti = trialInfo;
		snprintf(sct.msg, sizeof(sct.msg), "%s", richTextBoxMsg->Text);
		lcc.CallTeacher(string( (char*)&sct,sizeof(S_CallTeacher)));
	}
	};
}
