#pragma once

public ref class NowTrial{
public:static int NowTrailCode = 0;
public:static System::Windows::Forms::Form^ NowTrailForm = nullptr;
};

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 底部 摘要
	/// </summary>
	public ref class 底部 : public System::Windows::Forms::Form
	{
	public:
		底部(void)
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
		~底部()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// 底部
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 255);
			this->Name = L"底部";
			this->Text = L"底部";
			this->Load += gcnew System::EventHandler(this, &底部::底部_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 底部_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
