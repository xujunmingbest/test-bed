#pragma once
#include "tool/tool.h"
namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ���˿�������о�ʵ������ ժҪ
	/// </summary>
	public ref class ���˿�������о�ʵ������ : public System::Windows::Forms::Form
	{
	public:
		���˿�������о�ʵ������(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", LAYSIZE, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~���˿�������о�ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label39;
	protected:
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;
































	protected:






















	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(391, 754);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(312, 25);
			this->label39->TabIndex = 40;
			this->label39->Text = L"*��ʾ��ѡ���е��Ƽ�����";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::Gainsboro;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(102, 79);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(953, 662);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 39;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"���";
			this->columnHeader1->Width = 83;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"��  ��";
			this->columnHeader2->Width = 125;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"�ͺ�����";
			this->columnHeader3->Width = 173;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"�� ע";
			this->columnHeader4->Width = 119;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 60);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// ���˿�������о�ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1156, 778);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"���˿�������о�ʵ������";
			this->Text = L"���˿�������о�ʵ������";
			this->Load += gcnew System::EventHandler(this, &���˿�������о�ʵ������::���˿�������о�ʵ������_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ���˿�������о�ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
	listView1->Items->Add("1");
	listView1->Items[0]->SubItems->Add("�����Ǳ�");
	listView1->Items[0]->SubItems->Add("");
	listView1->Items[0]->SubItems->Add("CL01(DC200mA,DC5A,DC500V)");

	listView1->Items->Add("2");
	listView1->Items[1]->SubItems->Add("");
	listView1->Items[1]->SubItems->Add("");
	listView1->Items[1]->SubItems->Add("CL04(���ܵ������) *");

	listView1->Items->Add("3");
	listView1->Items[2]->SubItems->Add("");
	listView1->Items[2]->SubItems->Add("");
	listView1->Items[2]->SubItems->Add("�������ñ�");

	listView1->Items->Add("4");
	listView1->Items[3]->SubItems->Add("�ɵ���ѹԴ");
	listView1->Items[3]->SubItems->Add("0��30V");
	listView1->Items[3]->SubItems->Add("DY03����ͨ�ͣ�");

	listView1->Items->Add("5");
	listView1->Items[4]->SubItems->Add("");
	listView1->Items[4]->SubItems->Add("");
	listView1->Items[4]->SubItems->Add("DY07(������)*");

	listView1->Items->Add("6");
	listView1->Items[5]->SubItems->Add("�ɵ�����Դ");
	listView1->Items[5]->SubItems->Add("");
	listView1->Items[5]->SubItems->Add("DY10");

	listView1->Items->Add("7");
	listView1->Items[6]->SubItems->Add("˫������");
	listView1->Items[6]->SubItems->Add("");
	listView1->Items[6]->SubItems->Add("DG01");

	listView1->Items->Add("8");
	listView1->Items[7]->SubItems->Add("������");
	listView1->Items[7]->SubItems->Add("");
	listView1->Items[7]->SubItems->Add("DG04");

	listView1->Items->Add("9");
	listView1->Items[8]->SubItems->Add("ʵ�鵼��");
	listView1->Items[8]->SubItems->Add("4mm");
	listView1->Items[8]->SubItems->Add("��ȫ��");

	for (int i = 0; i < 4; i++) {
		listView1->Columns[i]->Width = -2;
	}
}
};
}
