#pragma once

namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 最大功率传输条件的测定实验器件 摘要
	/// </summary>
	public ref class 最大功率传输条件的测定实验器件 : public System::Windows::Forms::Form
	{
	public:
		最大功率传输条件的测定实验器件(void)
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
		~最大功率传输条件的测定实验器件()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^  imageList1;
	protected:
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::ComponentModel::IContainer^  components;

	protected:























	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 60);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(321, 718);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(312, 25);
			this->label39->TabIndex = 42;
			this->label39->Text = L"*表示多选项中的推荐配置";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::Gainsboro;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(32, 43);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(953, 662);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 41;
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
			// 最大功率传输条件的测定实验器件
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1020, 717);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"最大功率传输条件的测定实验器件";
			this->Text = L"最大功率传输条件的测定实验器件";
			this->Load += gcnew System::EventHandler(this, &最大功率传输条件的测定实验器件::最大功率传输条件的测定实验器件_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 最大功率传输条件的测定实验器件_Load(System::Object^  sender, System::EventArgs^  e) {
		listView1->Items->Add("1");
		listView1->Items[0]->SubItems->Add("测量仪表");
		listView1->Items[0]->SubItems->Add("");
		listView1->Items[0]->SubItems->Add("CL01(DC200mA,DC5A,DC500V)");

		listView1->Items->Add("2");
		listView1->Items[1]->SubItems->Add("");
		listView1->Items[1]->SubItems->Add("");
		listView1->Items[1]->SubItems->Add("CL04(智能电参数仪)");

		listView1->Items->Add("3");
		listView1->Items[2]->SubItems->Add("");
		listView1->Items[2]->SubItems->Add("");
		listView1->Items[2]->SubItems->Add("万用表");

		listView1->Items->Add("4");
		listView1->Items[3]->SubItems->Add("可调稳压源");
		listView1->Items[3]->SubItems->Add("0～30V");
		listView1->Items[3]->SubItems->Add("DY03（普通型）");

		listView1->Items->Add("5");
		listView1->Items[4]->SubItems->Add("");
		listView1->Items[4]->SubItems->Add("");
		listView1->Items[4]->SubItems->Add("DY07(数控型)");

		listView1->Items->Add("6");
		listView1->Items[5]->SubItems->Add("最大功率传输条件测定");
		listView1->Items[5]->SubItems->Add("");
		listView1->Items[5]->SubItems->Add("DG06");

		listView1->Items->Add("7");
		listView1->Items[6]->SubItems->Add("可变电阻箱");
		listView1->Items[6]->SubItems->Add("");
		listView1->Items[6]->SubItems->Add("DG04");

		listView1->Items->Add("8");
		listView1->Items[7]->SubItems->Add("电位器");
		listView1->Items[7]->SubItems->Add("1K/2W");
		listView1->Items[7]->SubItems->Add("DG04");

		for (int i = 0; i < 4; i++) {
			listView1->Columns[i]->Width = -2;
		}
	}
	};
}
