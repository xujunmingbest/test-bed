#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// �չ�ƹ������������ʵ������ ժҪ
	/// </summary>
	public ref class �չ�ƹ������������ʵ������ : public System::Windows::Forms::Form
	{
	public:
		�չ�ƹ������������ʵ������(void)
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
		~�չ�ƹ������������ʵ������()
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
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(29, 212);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(888, 354);
			this->listView1->TabIndex = 3;
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
			// �չ�ƹ������������ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1337, 672);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"�չ�ƹ������������ʵ������";
			this->Text = L"�չ�ƹ������������ʵ������";
			this->Load += gcnew System::EventHandler(this, &�չ�ƹ������������ʵ������::�չ�ƹ������������ʵ������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void �չ�ƹ������������ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
		listView1->Items->Add("1");
		listView1->Items[0]->SubItems->Add("�չ��");
		listView1->Items[0]->SubItems->Add("40W");
		listView1->Items[0]->SubItems->Add("ʵ��̨�ڲ�");

		listView1->Items->Add("2");
		listView1->Items[1]->SubItems->Add("���ܲ����Ǳ�");
		listView1->Items[1]->SubItems->Add("");
		listView1->Items[1]->SubItems->Add("ѡ��");

		listView1->Items->Add("3");
		listView1->Items[2]->SubItems->Add("������");
		listView1->Items[2]->SubItems->Add("40W/220V");
		listView1->Items[2]->SubItems->Add("DG03");

		listView1->Items->Add("4");
		listView1->Items[3]->SubItems->Add("������");
		listView1->Items[3]->SubItems->Add("1��F��2.2��F��4.7��F");
		listView1->Items[3]->SubItems->Add("DG03");

		listView1->Items->Add("5");
		listView1->Items[3]->SubItems->Add("����������");
		listView1->Items[3]->SubItems->Add("");
		listView1->Items[3]->SubItems->Add("DG03");

		for (int i = 0; i < 4; i++) {
			listView1->Columns[i]->Width = -2;
		}
	}
	};
}
