#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ���迹�任��ʵ������ ժҪ
	/// </summary>
	public ref class ���迹�任��ʵ������ : public System::Windows::Forms::Form
	{
	public:
		���迹�任��ʵ������(void)
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
		~���迹�任��ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^  imageList1;
	protected:
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
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
			this->listView1->Location = System::Drawing::Point(79, 114);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(953, 789);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 49;
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
			// ���迹�任��ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 853);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"���迹�任��ʵ������";
			this->Text = L"���迹�任��ʵ������";
			this->Load += gcnew System::EventHandler(this, &���迹�任��ʵ������::���迹�任��ʵ������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ���迹�任��ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
		listView1->Items->Add("1");
		listView1->Items[0]->SubItems->Add("�����źŷ�����");
		listView1->Items[0]->SubItems->Add("0-2Mhz");
		listView1->Items[0]->SubItems->Add("DY08(������)");

		listView1->Items->Add("2");
		listView1->Items[1]->SubItems->Add("");
		listView1->Items[1]->SubItems->Add("5-550Khz");
		listView1->Items[1]->SubItems->Add("DY09����ͨ�ͣ�");

		listView1->Items->Add("3");
		listView1->Items[2]->SubItems->Add("�����Ǳ�");
		listView1->Items[2]->SubItems->Add("");
		listView1->Items[2]->SubItems->Add("CL04(���ܵ������)");

		listView1->Items->Add("4");
		listView1->Items[3]->SubItems->Add("");
		listView1->Items[3]->SubItems->Add("");
		listView1->Items[3]->SubItems->Add("CL03(������)");

		listView1->Items->Add("5");
		listView1->Items[4]->SubItems->Add("����");
		listView1->Items[4]->SubItems->Add("300��600��1K");
		listView1->Items[4]->SubItems->Add("DG02");

		listView1->Items->Add("6");
		listView1->Items[5]->SubItems->Add("����");
		listView1->Items[5]->SubItems->Add("0.1uf/50V");
		listView1->Items[5]->SubItems->Add("DG02");

		listView1->Items->Add("7");
		listView1->Items[6]->SubItems->Add("���");
		listView1->Items[6]->SubItems->Add("10mH");
		listView1->Items[6]->SubItems->Add("DG02");

		listView1->Items->Add("8");
		listView1->Items[7]->SubItems->Add("˫��ʾ����");
		listView1->Items[7]->SubItems->Add("");
		listView1->Items[7]->SubItems->Add("");

		listView1->Items->Add("9");
		listView1->Items[8]->SubItems->Add("������");
		listView1->Items[8]->SubItems->Add("");
		listView1->Items[8]->SubItems->Add("DG04");

		listView1->Items->Add("10");
		listView1->Items[9]->SubItems->Add("�ɵ���ѹԴ");
		listView1->Items[9]->SubItems->Add("0~30V");
		listView1->Items[9]->SubItems->Add("DY03����ͨ�ͣ�");

		listView1->Items->Add("11");
		listView1->Items[10]->SubItems->Add("");
		listView1->Items[10]->SubItems->Add("");
		listView1->Items[10]->SubItems->Add("DY07�������ͣ�");

		listView1->Items->Add("12");
		listView1->Items[11]->SubItems->Add("���迹�任��");
		listView1->Items[11]->SubItems->Add("");
		listView1->Items[11]->SubItems->Add("DG02");

		for (int i = 0; i < 4; i++) {
			listView1->Columns[i]->Width = -2;
		}

	}
	};
}
