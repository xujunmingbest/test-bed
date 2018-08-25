#pragma once
#include <windows.h>
#include "tool/gradeSubmit.h"
#include "loginWnd.h"
namespace 电工电路试验台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 主窗体 摘要
	/// </summary>
	public ref class 主窗体 : public System::Windows::Forms::Form
	{
	public:
		主窗体(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			this->Name = "主窗体";
			CheckForIllegalCrossThreadCalls = false;

			loginWnd^ lw = gcnew loginWnd;
			lw->ShowDialog();

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~主窗体()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;



	private: System::Windows::Forms::PictureBox^  pictureBox1;














	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;




	public: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;

	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(主窗体::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(319, 1043);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->toolStrip1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->listView1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 228);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(319, 815);
			this->panel2->TabIndex = 1;
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(319, 48);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(50, 50);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"切换登入";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &主窗体::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(50, 50);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"登出";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->AutoSize = false;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(50, 50);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &主窗体::toolStripButton3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(98, 687);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"退   出";
			this->label7->Click += gcnew System::EventHandler(this, &主窗体::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Location = System::Drawing::Point(75, 635);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"实 验 内 容";
			this->label6->Click += gcnew System::EventHandler(this, &主窗体::label6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(75, 572);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"实 验 器 件";
			this->label4->Click += gcnew System::EventHandler(this, &主窗体::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(75, 505);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"实 验 原 理";
			this->label3->Click += gcnew System::EventHandler(this, &主窗体::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(75, 441);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"实 验 目 的";
			this->label2->Click += gcnew System::EventHandler(this, &主窗体::label2_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::None;
			this->listView1->Location = System::Drawing::Point(0, 98);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(313, 322);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &主窗体::listView1_SelectedIndexChanged);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(1, 30);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(98, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"实验目录";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(319, 209);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(319, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1518, 1043);
			this->panel4->TabIndex = 6;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &主窗体::panel4_Paint);
			// 
			// 主窗体
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1837, 1043);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->IsMdiContainer = true;
			this->Name = L"主窗体";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"主窗体";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &主窗体::主窗体_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 主窗体_Load(System::Object^  sender, System::EventArgs^  e) {
		//show实验目的F();
		//实验目的click(6);
		listView1Load();
	}
			void listView1Load(){
				listView1->Items->Clear();

				for (int i = 0; i < Grades.size(); i++) {
					listView1->Items->Add(gcnew String(Grades[i+1].c_str()));
				}
				listView1->Columns[0]->Width = -2;
			}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count == 0) return;
	int index = listView1->SelectedIndices[0] + 1;
	show实验目的F();
	实验目的click(index);
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count == 0) return;
	int index = listView1->SelectedIndices[0] + 1;
	 show实验原理F();
	 实验原理click(index);
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count == 0) return;
	int index = listView1->SelectedIndices[0] + 1;
	 show实验器件F();
	 实验器件click(index);
}

private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count == 0) return;
	int index = listView1->SelectedIndices[0] + 1;
	show实验内容F();
	实验内容click(index);
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if ( listView1->SelectedIndices->Count == 0) return ;
	listViewForeBlack();
	listView1->SelectedItems[0]->ForeColor = Color::YellowGreen;
	SelectWindows(listView1->SelectedIndices[0] + 1);
}
		 void show实验目的F();
		 void show实验原理F();
		 void show实验器件F();
		 void show实验内容F();
		 void show实验报告F();
		 void showBlackF();
         /*******设置前景色******/
		 void SelectWindows(int index);
		 void listViewForeBlack();
		 void CloseAllMidchild();
		 bool GetWindowsChild(String ^FormName);

		 /*******窗体打开******/
		 void open元件伏安特性的测试实验目的();
		 void open元件伏安特性的测试实验原理();
		 void open元件伏安特性的测试实验器件();
		 void open元件伏安特性的测试实验内容();

		 void open基尔霍夫定律实验目的();
		 void open基尔霍夫定律实验原理();
		 void open基尔霍夫定律实验器件();
		 void open基尔霍夫定律实验内容();

		 void open叠加原理实验目的();
		 void open叠加原理实验原理();
		 void open叠加原理实验器件();
		 void open叠加原理实验内容();

		 void open戴维南定理实验目的();
		 void open戴维南定理实验原理();
		 void open戴维南定理实验器件();
		 void open戴维南定理实验内容();

		 void open电压源与电流源的等效变换实验目的();
		 void open电压源与电流源的等效变换实验原理();
		 void open电压源与电流源的等效变换实验器件();
		 void open电压源与电流源的等效变换实验内容();

		 void open一阶电路的响应测试实验目的();
		 void open一阶电路的响应测试实验原理();
		 void open一阶电路的响应测试实验器件();
		 void open一阶电路的响应测试实验内容();
		 
		 void open二阶动态电路响应的研究实验目的();
		 void open二阶动态电路响应的研究实验原理();
		 void open二阶动态电路响应的研究实验器件();
		 void open二阶动态电路响应的研究实验内容();

		 void openVCVS实验实验目的();
		 void openVCVS实验实验原理();
		 void openVCVS实验实验器件();
		 void openVCVS实验实验内容();

		 void open二端口网络的研究实验目的();
		 void open二端口网络的研究实验原理();
		 void open二端口网络的研究实验器件();
		 void open二端口网络的研究实验内容();

		 void open最大功率传输条件的测定实验目的();
		 void open最大功率传输条件的测定实验原理();
		 void open最大功率传输条件的测定实验器件();
		 void open最大功率传输条件的测定实验内容();

		 void open电路状态轨迹的观测实验目的();
		 void open电路状态轨迹的观测实验原理();
		 void open电路状态轨迹的观测实验器件();
		 void open电路状态轨迹的观测实验内容();

		 void openRLC元件阻抗特性的测定实验目的();
		 void openRLC元件阻抗特性的测定实验原理();
		 void openRLC元件阻抗特性的测定实验器件();
		 void openRLC元件阻抗特性的测定实验内容();

		 void openRLC串联谐振电路的研究实验目的();
		 void openRLC串联谐振电路的研究实验原理();
		 void openRLC串联谐振电路的研究实验器件();
		 void openRLC串联谐振电路的研究实验内容();

		 void open单相铁心变压器特性的测试实验目的();
		 void open单相铁心变压器特性的测试实验原理();
		 void open单相铁心变压器特性的测试实验器件();
		 void open单相铁心变压器特性的测试实验内容();

		 void open单相电度表实验实验目的();
		 void open单相电度表实验实验原理();
		 void open单相电度表实验实验器件();
		 void open单相电度表实验实验内容();

		 void open三相交流电路电压电流的测量实验目的();
		 void open三相交流电路电压电流的测量实验原理();
		 void open三相交流电路电压电流的测量实验器件();
		 void open三相交流电路电压电流的测量实验内容();

		 void open日光灯功率因数的提高实验目的();
		 void open日光灯功率因数的提高实验原理();
		 void open日光灯功率因数的提高实验器件();
		 void open日光灯功率因数的提高实验内容();

		 void open回转器实验目的();
		 void open回转器实验原理();
		 void open回转器实验器件();
		 void open回转器实验内容();

		 void open三相电路功率的测量实验目的();
		 void open三相电路功率的测量实验原理();
		 void open三相电路功率的测量实验器件();
		 void open三相电路功率的测量实验内容();


		 void open负阻抗变换器实验目的();
		 void open负阻抗变换器实验原理();
		 void open负阻抗变换器实验器件();
		 void open负阻抗变换器实验内容();

		 void openRC网络的频率特性实验目的();
		 void openRC网络的频率特性实验原理();
		 void openRC网络的频率特性实验器件();
		 void openRC网络的频率特性实验内容();

		 void open仪表量程的扩展实验目的();
		 void open仪表量程的扩展实验原理();
		 void open仪表量程的扩展实验器件();
		 void open仪表量程的扩展实验内容();

		 void open基本电工仪表的使用与测量误差的计算实验目的();
		 void open基本电工仪表的使用与测量误差的计算实验原理();
		 void open基本电工仪表的使用与测量误差的计算实验器件();
		 void open基本电工仪表的使用与测量误差的计算实验内容();

		 void open功率因数及相序的测量实验目的();
		 void open功率因数及相序的测量实验原理();
		 void open功率因数及相序的测量实验器件();
		 void open功率因数及相序的测量实验内容();

		 void open互感器实验目的();
		 void open互感器实验原理();
		 void open互感器实验器件();
		 void open互感器实验内容();
		 /*******实验具体按钮点击******/
		 void 实验目的click(int index);
		 void 实验原理click(int index);
		 void 实验器件click(int index);
		 void 实验内容click(int index);
		 //void 实验报告click(int index);


	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(-1);
	}


private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count == 0) return;
	int index = listView1->SelectedIndices[0] + 1;
	show实验报告F();
	//实验报告click(index);
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	loginWnd ^lw = gcnew loginWnd;
	lw->ShowDialog();
}
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
};
}
