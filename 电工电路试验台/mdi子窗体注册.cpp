#include "������.h"
#include "ʵ�����ͷ�ļ�.h"
using namespace �繤��·����̨;






void ������::openԪ���������ԵĲ���ʵ��Ŀ��() {
	String ^name = "Ԫ���������ԵĲ���ʵ��Ŀ��";
	Control^ wndf= GetWindowsChild(name);
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ��Ŀ��^ f = gcnew Ԫ���������ԵĲ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = name;
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
				wndf->BringToFront();
				return;
	}
}

void ������::openԪ���������ԵĲ���ʵ��ԭ��() {
	String ^name = "Ԫ���������ԵĲ���ʵ��ԭ��";
	Control^ wndf = GetWindowsChild(name);
	showʵ��ԭ��F();
	if (wndf == nullptr  ) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ��ԭ��^ f = gcnew Ԫ���������ԵĲ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = name;
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::openԪ���������ԵĲ���ʵ������() {
	String ^name = "Ԫ���������ԵĲ���ʵ������";
	Control^ wndf = GetWindowsChild(name);
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ������^ f = gcnew Ԫ���������ԵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = name;
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::openԪ���������ԵĲ���ʵ������() {
	String ^name = "Ԫ���������ԵĲ���ʵ������";
	Control^ wndf = GetWindowsChild(name);
	showʵ������F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ������^ f = gcnew Ԫ���������ԵĲ���ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = name;
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open����������ʵ��Ŀ��() {
	String ^name = "����������ʵ��Ŀ��";
	Control^ wndf = GetWindowsChild(name);
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����������ʵ��Ŀ��^ f = gcnew ����������ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = name;
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open����������ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("����������ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����������ʵ��ԭ��^ f = gcnew ����������ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open����������ʵ������() {
	Control^ wndf = GetWindowsChild("����������ʵ���豸");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����������ʵ���豸^ f = gcnew ����������ʵ���豸;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ���豸";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open����������ʵ������() {
	Control^ wndf = GetWindowsChild("����������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����������ʵ������^ f = gcnew ����������ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open����ԭ��ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("����ԭ��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ԭ��ʵ��Ŀ��^ f = gcnew ����ԭ��ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open����ԭ��ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("����ԭ��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ԭ��ʵ��ԭ��^ f = gcnew ����ԭ��ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open����ԭ��ʵ������() {
	Control^ wndf = GetWindowsChild("����ԭ��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ԭ��ʵ������^ f = gcnew ����ԭ��ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open����ԭ��ʵ������() {
	Control^ wndf = GetWindowsChild("����ԭ��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ԭ��ʵ������^ f = gcnew ����ԭ��ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open��ά�϶���ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("��ά�϶���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ά�϶���ʵ��Ŀ��^ f = gcnew ��ά�϶���ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open��ά�϶���ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("��ά�϶���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ά�϶���ʵ��ԭ��^ f = gcnew ��ά�϶���ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��ά�϶���ʵ������() {
	Control^ wndf = GetWindowsChild("��ά�϶���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ά�϶���ʵ������^ f = gcnew ��ά�϶���ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open��ά�϶���ʵ������() {
	Control^ wndf = GetWindowsChild("��ά�϶���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ά�϶���ʵ������^ f = gcnew ��ά�϶���ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ������() {
	Control^ wndf = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ������^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ������() {
	Control^ wndf = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ������^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


/*
void ������::ʵ�鱨��click(int index) {
	Control^ wndf = GetWindowsChild("Ԫ���������ԵĲ���ʵ�鱨��");
	showʵ�鱨��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ�鱨��^ f = gcnew Ԫ���������ԵĲ���ʵ�鱨��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "Ԫ���������ԵĲ���ʵ�鱨��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

*/





void ������::openһ�׵�·����Ӧ����ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("һ�׵�·����Ӧ����ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ��Ŀ��^ f = gcnew һ�׵�·����Ӧ����ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}

void ������::openһ�׵�·����Ӧ����ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("һ�׵�·����Ӧ����ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ��ԭ��^ f = gcnew һ�׵�·����Ӧ����ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::openһ�׵�·����Ӧ����ʵ������() {
	Control^ wndf = GetWindowsChild("һ�׵�·����Ӧ����ʵ������");
	showʵ������F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ������^ f = gcnew һ�׵�·����Ӧ����ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::openһ�׵�·����Ӧ����ʵ������() {
	Control^ wndf = GetWindowsChild("һ�׵�·����Ӧ����ʵ������");
	showʵ������F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ������^ f = gcnew һ�׵�·����Ӧ����ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}


void ������::open���׶�̬��·��Ӧ���о�ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ��Ŀ��^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}

void ������::open���׶�̬��·��Ӧ���о�ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ��ԭ��^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open���׶�̬��·��Ӧ���о�ʵ������() {
	Control^ wndf = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ������^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::open���׶�̬��·��Ӧ���о�ʵ������() {
	Control^ wndf = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ������^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}


void ������::openVCVSʵ��ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("VCVSʵ��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVSʵ��ʵ��Ŀ��^ f = gcnew VCVSʵ��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openVCVSʵ��ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("VCVSʵ��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVSʵ��ʵ��ԭ��^ f = gcnew VCVSʵ��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openVCVSʵ��ʵ������() {
	Control^ wndf = GetWindowsChild("VCVSʵ��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVSʵ��ʵ������^ f = gcnew VCVSʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::openVCVSʵ��ʵ������() {
	Control^ wndf = GetWindowsChild("VCVSʵ��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVSʵ��ʵ������^ f = gcnew VCVSʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}


}


void ������::open���˿�������о�ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("���˿�������о�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���˿�������о�ʵ��Ŀ��^ f = gcnew ���˿�������о�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open���˿�������о�ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("���˿�������о�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���˿�������о�ʵ��ԭ��^ f = gcnew ���˿�������о�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open���˿�������о�ʵ������() {
	Control^ wndf = GetWindowsChild("���˿�������о�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���˿�������о�ʵ������^ f = gcnew ���˿�������о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open���˿�������о�ʵ������() {
	Control^ wndf = GetWindowsChild("���˿�������о�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���˿�������о�ʵ������^ f = gcnew ���˿�������о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}



void ������::open����ʴ��������Ĳⶨʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("����ʴ��������Ĳⶨʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ��Ŀ��^ f = gcnew ����ʴ��������Ĳⶨʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open����ʴ��������Ĳⶨʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("����ʴ��������Ĳⶨʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ��ԭ��^ f = gcnew ����ʴ��������Ĳⶨʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open����ʴ��������Ĳⶨʵ������() {
	Control^ wndf = GetWindowsChild("����ʴ��������Ĳⶨʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ������^ f = gcnew ����ʴ��������Ĳⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open����ʴ��������Ĳⶨʵ������() {
	Control^ wndf = GetWindowsChild("����ʴ��������Ĳⶨʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ������^ f = gcnew ����ʴ��������Ĳⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}


}





void ������::open��·״̬�켣�Ĺ۲�ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ��Ŀ��^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��·״̬�켣�Ĺ۲�ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ��ԭ��^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��·״̬�켣�Ĺ۲�ʵ������() {
	Control^ wndf = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ������^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open��·״̬�켣�Ĺ۲�ʵ������() {
	Control^ wndf = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ������^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}





void ������::openRLCԪ���迹���ԵĲⶨʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ��Ŀ��^ f = gcnew RLCԪ���迹���ԵĲⶨʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openRLCԪ���迹���ԵĲⶨʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ��ԭ��^ f = gcnew RLCԪ���迹���ԵĲⶨʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openRLCԪ���迹���ԵĲⶨʵ������() {
	Control^ wndf = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ������^ f = gcnew RLCԪ���迹���ԵĲⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::openRLCԪ���迹���ԵĲⶨʵ������() {
	Control^ wndf = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ������^ f = gcnew RLCԪ���迹���ԵĲⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}


}

void ������::openRLC����г���·���о�ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("RLC����г���·���о�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ��Ŀ��^ f = gcnew RLC����г���·���о�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::openRLC����г���·���о�ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("RLC����г���·���о�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ��ԭ��^ f = gcnew RLC����г���·���о�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openRLC����г���·���о�ʵ������() {
	Control^ wndf = GetWindowsChild("RLC����г���·���о�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ������^ f = gcnew RLC����г���·���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::openRLC����г���·���о�ʵ������() {
	Control^ wndf = GetWindowsChild("RLC����г���·���о�ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ������^ f = gcnew RLC����г���·���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::open�������ı�ѹ�����ԵĲ���ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ��Ŀ��^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open�������ı�ѹ�����ԵĲ���ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ��ԭ��^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open�������ı�ѹ�����ԵĲ���ʵ������() {
	Control^ wndf = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ������^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�������ı�ѹ�����ԵĲ���ʵ������() {
	Control^ wndf = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ������^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void ������::open�����ȱ�ʵ��ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("�����ȱ�ʵ��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ��Ŀ��^ f = gcnew �����ȱ�ʵ��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open�����ȱ�ʵ��ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("�����ȱ�ʵ��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ��ԭ��^ f = gcnew �����ȱ�ʵ��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open�����ȱ�ʵ��ʵ������() {
	Control^ wndf = GetWindowsChild("�����ȱ�ʵ��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ������^ f = gcnew �����ȱ�ʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�����ȱ�ʵ��ʵ������() {
	Control^ wndf = GetWindowsChild("�����ȱ�ʵ��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ������^ f = gcnew �����ȱ�ʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void ������::open���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open���ཻ����·��ѹ�����Ĳ���ʵ������() {
	Control^ wndf = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ������^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open���ཻ����·��ѹ�����Ĳ���ʵ������() {
	Control^ wndf = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ������^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void ������::open�չ�ƹ������������ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("�չ�ƹ������������ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ��Ŀ��^ f = gcnew �չ�ƹ������������ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ��Ŀ��";
		f->BringToFront();
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�չ�ƹ������������ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("�չ�ƹ������������ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ��ԭ��^ f = gcnew �չ�ƹ������������ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open�չ�ƹ������������ʵ������() {
	Control^ wndf = GetWindowsChild("�չ�ƹ������������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ������^ f = gcnew �չ�ƹ������������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�չ�ƹ������������ʵ������() {
	Control^ wndf = GetWindowsChild("�չ�ƹ������������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ������^ f = gcnew �չ�ƹ������������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void ������::open��ת��ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("��ת��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ת��ʵ��Ŀ��^ f = gcnew ��ת��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��ת��ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("��ת��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ת��ʵ��ԭ��^ f = gcnew ��ת��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��ת��ʵ������() {
	Control^ wndf = GetWindowsChild("��ת��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ת��ʵ������^ f = gcnew ��ת��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open��ת��ʵ������() {
	Control^ wndf = GetWindowsChild("��ת��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��ת��ʵ������^ f = gcnew ��ת��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void ������::open�����·���ʵĲ���ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("�����·���ʵĲ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����·���ʵĲ���ʵ��Ŀ��^ f = gcnew �����·���ʵĲ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����·���ʵĲ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open�����·���ʵĲ���ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("�����·���ʵĲ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����·���ʵĲ���ʵ��ԭ��^ f = gcnew �����·���ʵĲ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����·���ʵĲ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open�����·���ʵĲ���ʵ������() {
	Control^ wndf = GetWindowsChild("�����·���ʵĲ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����·���ʵĲ���ʵ������^ f = gcnew �����·���ʵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����·���ʵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�����·���ʵĲ���ʵ������() {
	Control^ wndf = GetWindowsChild("�����·���ʵĲ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����·���ʵĲ���ʵ������^ f = gcnew �����·���ʵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����·���ʵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::open���迹�任��ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("���迹�任��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���迹�任��ʵ��Ŀ��^ f = gcnew ���迹�任��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���迹�任��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open���迹�任��ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("���迹�任��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���迹�任��ʵ��ԭ��^ f = gcnew ���迹�任��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���迹�任��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open���迹�任��ʵ������() {
	Control^ wndf = GetWindowsChild("���迹�任��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���迹�任��ʵ������^ f = gcnew ���迹�任��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���迹�任��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open���迹�任��ʵ������() {
	Control^ wndf = GetWindowsChild("���迹�任��ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		���迹�任��ʵ������^ f = gcnew ���迹�任��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���迹�任��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::openRC�����Ƶ������ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("RC�����Ƶ������ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC�����Ƶ������ʵ��Ŀ��^ f = gcnew RC�����Ƶ������ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC�����Ƶ������ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openRC�����Ƶ������ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("RC�����Ƶ������ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC�����Ƶ������ʵ��ԭ��^ f = gcnew RC�����Ƶ������ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC�����Ƶ������ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::openRC�����Ƶ������ʵ������() {
	Control^ wndf = GetWindowsChild("RC�����Ƶ������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC�����Ƶ������ʵ������^ f = gcnew RC�����Ƶ������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC�����Ƶ������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::openRC�����Ƶ������ʵ������() {
	Control^ wndf = GetWindowsChild("RC�����Ƶ������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC�����Ƶ������ʵ������^ f = gcnew RC�����Ƶ������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC�����Ƶ������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void ������::open�Ǳ����̵���չʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("�Ǳ����̵���չʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�Ǳ����̵���չʵ��Ŀ��^ f = gcnew �Ǳ����̵���չʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�Ǳ����̵���չʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open�Ǳ����̵���չʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("�Ǳ����̵���չʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�Ǳ����̵���չʵ��ԭ��^ f = gcnew �Ǳ����̵���չʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�Ǳ����̵���չʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open�Ǳ����̵���չʵ������() {
	Control^ wndf = GetWindowsChild("�Ǳ����̵���չʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�Ǳ����̵���չʵ������^ f = gcnew �Ǳ����̵���չʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�Ǳ����̵���չʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�Ǳ����̵���չʵ������() {
	Control^ wndf = GetWindowsChild("�Ǳ����̵���չʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�Ǳ����̵���չʵ������^ f = gcnew �Ǳ����̵���չʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�Ǳ����̵���չʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void ������::open�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��^ f = gcnew �����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void ������::open�����繤�Ǳ��ʹ����������ļ���ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("�����繤�Ǳ��ʹ����������ļ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����繤�Ǳ��ʹ����������ļ���ʵ��ԭ��^ f = gcnew �����繤�Ǳ��ʹ����������ļ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����繤�Ǳ��ʹ����������ļ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open�����繤�Ǳ��ʹ����������ļ���ʵ������() {
	Control^ wndf = GetWindowsChild("�����繤�Ǳ��ʹ����������ļ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����繤�Ǳ��ʹ����������ļ���ʵ������^ f = gcnew �����繤�Ǳ��ʹ����������ļ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����繤�Ǳ��ʹ����������ļ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open�����繤�Ǳ��ʹ����������ļ���ʵ������() {
	Control^ wndf = GetWindowsChild("�����繤�Ǳ��ʹ����������ļ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		�����繤�Ǳ��ʹ����������ļ���ʵ������^ f = gcnew �����繤�Ǳ��ʹ����������ļ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����繤�Ǳ��ʹ����������ļ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void ������::open��������������Ĳ���ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("��������������Ĳ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��������������Ĳ���ʵ��Ŀ��^ f = gcnew ��������������Ĳ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��������������Ĳ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��������������Ĳ���ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("��������������Ĳ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��������������Ĳ���ʵ��ԭ��^ f = gcnew ��������������Ĳ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��������������Ĳ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open��������������Ĳ���ʵ������() {
	Control^ wndf = GetWindowsChild("��������������Ĳ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��������������Ĳ���ʵ������^ f = gcnew ��������������Ĳ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��������������Ĳ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open��������������Ĳ���ʵ������() {
	Control^ wndf = GetWindowsChild("��������������Ĳ���ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		��������������Ĳ���ʵ������^ f = gcnew ��������������Ĳ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��������������Ĳ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void ������::open������ʵ��Ŀ��() {
	Control^ wndf = GetWindowsChild("������ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		������ʵ��Ŀ��^ f = gcnew ������ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "������ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open������ʵ��ԭ��() {
	Control^ wndf = GetWindowsChild("������ʵ��ԭ��");
	showʵ��ԭ��F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		������ʵ��ԭ��^ f = gcnew ������ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "������ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void ������::open������ʵ������() {
	Control^ wndf = GetWindowsChild("������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		������ʵ������^ f = gcnew ������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void ������::open������ʵ������() {
	Control^ wndf = GetWindowsChild("������ʵ������");
	showʵ������F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		������ʵ������^ f = gcnew ������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
