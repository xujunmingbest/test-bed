#pragma once

public ref class NowTrial{
public:static int NowTrailCode = 0;
public:static System::Windows::Forms::Form^ NowTrailForm = nullptr;
};

namespace �繤��·����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// �ײ� ժҪ
	/// </summary>
	public ref class �ײ� : public System::Windows::Forms::Form
	{
	public:
		�ײ�(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~�ײ�()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// �ײ�
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 255);
			this->Name = L"�ײ�";
			this->Text = L"�ײ�";
			this->Load += gcnew System::EventHandler(this, &�ײ�::�ײ�_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void �ײ�_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
