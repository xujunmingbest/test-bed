#pragma once
#include "tool/tool.h"
namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// loginWnd 摘要
	/// </summary>
	public ref class loginWnd : public System::Windows::Forms::Form
	{
	public:
		loginWnd(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void ShowMsgRet(string &s_s) {
			MessageBox::Show(gcnew String(s_s.c_str()));
			if (s_s == MsgRet[2]) {
				this->Close();
			}
			else if ( s_s == MsgRet[-4]) {
			
			}
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~loginWnd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label3;




	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxmajor;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBoxlab;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBoxteacher;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  textBoxclass;
	private: System::Windows::Forms::ComboBox^  textBoxStuName2;
	private: System::Windows::Forms::ComboBox^  textBoxStuName1;
	private: System::Windows::Forms::ComboBox^  textBoxXueHao1;
	private: System::Windows::Forms::ComboBox^  textBoxXueHao2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(loginWnd::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxmajor = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxlab = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxteacher = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxclass = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxStuName2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxStuName1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxXueHao1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxXueHao2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(43, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(226, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 31);
			this->button1->TabIndex = 10;
			this->button1->Text = L"登入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &loginWnd::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(39, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"班级";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(39, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"姓名1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(39, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"学号1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(39, 343);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"学号2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(39, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"姓名2";
			// 
			// textBoxmajor
			// 
			this->textBoxmajor->Location = System::Drawing::Point(145, 123);
			this->textBoxmajor->Name = L"textBoxmajor";
			this->textBoxmajor->Size = System::Drawing::Size(168, 25);
			this->textBoxmajor->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(39, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"专业";
			// 
			// textBoxlab
			// 
			this->textBoxlab->Location = System::Drawing::Point(145, 159);
			this->textBoxlab->Name = L"textBoxlab";
			this->textBoxlab->Size = System::Drawing::Size(168, 25);
			this->textBoxlab->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(39, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 20);
			this->label7->TabIndex = 22;
			this->label7->Text = L"实验室";
			// 
			// textBoxteacher
			// 
			this->textBoxteacher->Location = System::Drawing::Point(145, 194);
			this->textBoxteacher->Name = L"textBoxteacher";
			this->textBoxteacher->Size = System::Drawing::Size(168, 25);
			this->textBoxteacher->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(39, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 20);
			this->label8->TabIndex = 24;
			this->label8->Text = L"指导老师";
			// 
			// textBoxclass
			// 
			this->textBoxclass->FormattingEnabled = true;
			this->textBoxclass->Location = System::Drawing::Point(145, 94);
			this->textBoxclass->Name = L"textBoxclass";
			this->textBoxclass->Size = System::Drawing::Size(168, 23);
			this->textBoxclass->TabIndex = 26;
			this->textBoxclass->SelectedIndexChanged += gcnew System::EventHandler(this, &loginWnd::textBoxclass_SelectedIndexChanged);
			// 
			// textBoxStuName2
			// 
			this->textBoxStuName2->FormattingEnabled = true;
			this->textBoxStuName2->Location = System::Drawing::Point(145, 309);
			this->textBoxStuName2->Name = L"textBoxStuName2";
			this->textBoxStuName2->Size = System::Drawing::Size(168, 23);
			this->textBoxStuName2->TabIndex = 27;
			// 
			// textBoxStuName1
			// 
			this->textBoxStuName1->FormattingEnabled = true;
			this->textBoxStuName1->Location = System::Drawing::Point(145, 236);
			this->textBoxStuName1->Name = L"textBoxStuName1";
			this->textBoxStuName1->Size = System::Drawing::Size(168, 23);
			this->textBoxStuName1->TabIndex = 28;
			// 
			// textBoxXueHao1
			// 
			this->textBoxXueHao1->FormattingEnabled = true;
			this->textBoxXueHao1->Location = System::Drawing::Point(145, 271);
			this->textBoxXueHao1->Name = L"textBoxXueHao1";
			this->textBoxXueHao1->Size = System::Drawing::Size(168, 23);
			this->textBoxXueHao1->TabIndex = 29;
			// 
			// textBoxXueHao2
			// 
			this->textBoxXueHao2->FormattingEnabled = true;
			this->textBoxXueHao2->Location = System::Drawing::Point(145, 340);
			this->textBoxXueHao2->Name = L"textBoxXueHao2";
			this->textBoxXueHao2->Size = System::Drawing::Size(168, 23);
			this->textBoxXueHao2->TabIndex = 30;
			// 
			// loginWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 457);
			this->Controls->Add(this->textBoxXueHao2);
			this->Controls->Add(this->textBoxXueHao1);
			this->Controls->Add(this->textBoxStuName1);
			this->Controls->Add(this->textBoxStuName2);
			this->Controls->Add(this->textBoxclass);
			this->Controls->Add(this->textBoxteacher);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxlab);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxmajor);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"loginWnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"登入";
			this->Load += gcnew System::EventHandler(this, &loginWnd::loginWnd_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginWnd_Load(System::Object^  sender, System::EventArgs^  e) {
		lcc.GetStudentList();
		Sleep(1000);
		textBoxclass->Items->Clear();
		g_ClassListMutex.Lock();
		for (int i = 0; i < g_ClassList.size(); i++) {
			textBoxclass->Items->Add(gcnew String(g_ClassList[i].ClassName));
		}
		g_ClassListMutex.UnLock();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


	snprintf(trialInfo.Class, sizeof(trialInfo.Class), "%s", textBoxclass->Text);
	snprintf(trialInfo.Lab, sizeof(trialInfo.date), "%s", textBoxlab->Text);
	snprintf(trialInfo.major, sizeof(trialInfo.major), "%s", textBoxmajor->Text);
	snprintf(trialInfo.stuName1, sizeof(trialInfo.stuName1), "%s", textBoxStuName1->Text);
	snprintf(trialInfo.stuName2, sizeof(trialInfo.stuName2), "%s", textBoxStuName2->Text);
	snprintf(trialInfo.teacher, sizeof(trialInfo.teacher), "%s", textBoxteacher->Text);
	snprintf(trialInfo.XueHao1, sizeof(trialInfo.XueHao1), "%s", textBoxXueHao1->Text);
	snprintf(trialInfo.XueHao2, sizeof(trialInfo.XueHao2), "%s", textBoxXueHao2->Text);
	lcc.SendComputerInfo("软件已开机");
}
private: System::Void textBoxclass_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int Index = textBoxclass->SelectedIndex;
	if (Index >= 0) {
		textBoxStuName1->Items->Clear();
		textBoxStuName2->Items->Clear();
		textBoxXueHao1->Items->Clear();
		textBoxXueHao2->Items->Clear();
		for (int i = 0; i < 100; i++) {
			string Name = g_ClassList[Index].SEs[i].stuName;
			string XueHao = g_ClassList[Index].SEs[i].XueHao;
			if (Name.length() == 0 || XueHao.length() == 0) {
				continue;
			}
			textBoxStuName1->Items->Add(gcnew String(Name.c_str()));
			textBoxStuName2->Items->Add(gcnew String(Name.c_str()));
			textBoxXueHao1->Items->Add(gcnew String(XueHao.c_str()));
			textBoxXueHao2->Items->Add(gcnew String(XueHao.c_str()));
			textBoxStuName1->SelectedIndex = 0;
			textBoxStuName2->SelectedIndex = 0;
			textBoxXueHao1->SelectedIndex = 0;
			textBoxXueHao2->SelectedIndex = 0;
		}
	}
}
};
}
