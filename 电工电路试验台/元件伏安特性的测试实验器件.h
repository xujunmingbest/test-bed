#pragma once

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ԫ���������ԵĲ���ʵ������ ժҪ
	/// </summary>
	public ref class Ԫ���������ԵĲ���ʵ������ : public System::Windows::Forms::Form
	{
	public:
		Ԫ���������ԵĲ���ʵ������(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Ԫ���������ԵĲ���ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:















































	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Label^  label39;
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
			this->label39 = (gcnew System::Windows::Forms::Label());
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
			this->listView1->Location = System::Drawing::Point(23, 29);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(953, 829);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 4;
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
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(319, 905);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(312, 25);
			this->label39->TabIndex = 35;
			this->label39->Text = L"*��ʾ��ѡ���е��Ƽ�����";
			// 
			// Ԫ���������ԵĲ���ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1853, 1100);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Ԫ���������ԵĲ���ʵ������";
			this->Text = L"Ԫ���������ԵĲ���ʵ������";
			this->Load += gcnew System::EventHandler(this, &Ԫ���������ԵĲ���ʵ������::Ԫ���������ԵĲ���ʵ������_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ԫ���������ԵĲ���ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {

		listView1Load();
	}
			 void listView1Load(){
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
			 listView1->Items[2]->SubItems->Add("���ñ�");

			 listView1->Items->Add("4");
			 listView1->Items[3]->SubItems->Add("�ɵ���ѹԴ");
			 listView1->Items[3]->SubItems->Add("0��30V");
			 listView1->Items[3]->SubItems->Add("DY03����ͨ�ͣ�");

			 listView1->Items->Add("5");
			 listView1->Items[4]->SubItems->Add("");
			 listView1->Items[4]->SubItems->Add("");
			 listView1->Items[4]->SubItems->Add("DY07(������)*");

			 listView1->Items->Add("6");
			 listView1->Items[5]->SubItems->Add("������");
			 listView1->Items[5]->SubItems->Add("2AP9");
			 listView1->Items[5]->SubItems->Add("DG02");

			 listView1->Items->Add("7");
			 listView1->Items[6]->SubItems->Add("������");
			 listView1->Items[6]->SubItems->Add("2CP15");
			 listView1->Items[6]->SubItems->Add("DG02");

			 listView1->Items->Add("8");
			 listView1->Items[7]->SubItems->Add("��ѹ��");
			 listView1->Items[7]->SubItems->Add("5.1V/1W");
			 listView1->Items[7]->SubItems->Add("DG02");

			 listView1->Items->Add("9");
			 listView1->Items[8]->SubItems->Add("�׳��");
			 listView1->Items[8]->SubItems->Add("12V/0.1A");
			 listView1->Items[8]->SubItems->Add("DG03");

			 listView1->Items->Add("10");
			 listView1->Items[9]->SubItems->Add("����");
			 listView1->Items[9]->SubItems->Add("1K/2W");
			 listView1->Items[9]->SubItems->Add("DG02");

			 listView1->Items->Add("11");
			 listView1->Items[10]->SubItems->Add("����");
			 listView1->Items[10]->SubItems->Add("200/5W");
			 listView1->Items[10]->SubItems->Add("DG02");

			 listView1->Items->Add("12");
			 listView1->Items[11]->SubItems->Add("ʵ�鵼��");
			 listView1->Items[11]->SubItems->Add("4mm");
			 listView1->Items[11]->SubItems->Add("��ȫ��");

			 for (int i = 0; i < 4; i++) {
				 listView1->Columns[i]->Width = -2;
			 }
			 }

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label50_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label35_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
