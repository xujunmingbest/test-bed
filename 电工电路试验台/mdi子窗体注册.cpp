#include "������.h"
#include "ʵ�����ͷ�ļ�.h"
using namespace �繤��·����̨;






void ������::openԪ���������ԵĲ���ʵ��Ŀ��() {
	bool f= GetWindowsChild("Ԫ���������ԵĲ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ��Ŀ��^ f = gcnew Ԫ���������ԵĲ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "Ԫ���������ԵĲ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::openԪ���������ԵĲ���ʵ��ԭ��() {
	bool f = GetWindowsChild("Ԫ���������ԵĲ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f  ) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ��ԭ��^ f = gcnew Ԫ���������ԵĲ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "Ԫ���������ԵĲ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::openԪ���������ԵĲ���ʵ������() {
	bool f = GetWindowsChild("Ԫ���������ԵĲ���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ������^ f = gcnew Ԫ���������ԵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "Ԫ���������ԵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void ������::openԪ���������ԵĲ���ʵ������() {
	bool f = GetWindowsChild("Ԫ���������ԵĲ���ʵ������");
	showʵ������F();
	if (!f ) {
		CloseAllMidchild();
		Ԫ���������ԵĲ���ʵ������^ f = gcnew Ԫ���������ԵĲ���ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "Ԫ���������ԵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open����������ʵ��Ŀ��() {
	bool f = GetWindowsChild("����������ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		����������ʵ��Ŀ��^ f = gcnew ����������ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open����������ʵ��ԭ��() {
	bool f = GetWindowsChild("����������ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		����������ʵ��ԭ��^ f = gcnew ����������ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open����������ʵ������() {
	bool f = GetWindowsChild("����������ʵ���豸");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		����������ʵ���豸^ f = gcnew ����������ʵ���豸;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ���豸";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open����������ʵ������() {
	bool f = GetWindowsChild("����������ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		����������ʵ������^ f = gcnew ����������ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open����ԭ��ʵ��Ŀ��() {
	bool f = GetWindowsChild("����ԭ��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		����ԭ��ʵ��Ŀ��^ f = gcnew ����ԭ��ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open����ԭ��ʵ��ԭ��() {
	bool f = GetWindowsChild("����ԭ��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		����ԭ��ʵ��ԭ��^ f = gcnew ����ԭ��ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open����ԭ��ʵ������() {
	bool f = GetWindowsChild("����ԭ��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		����ԭ��ʵ������^ f = gcnew ����ԭ��ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open����ԭ��ʵ������() {
	bool f = GetWindowsChild("����ԭ��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		����ԭ��ʵ������^ f = gcnew ����ԭ��ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "����ԭ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


/*
void ������::ʵ�鱨��click(int index) {
	bool f = GetWindowsChild("Ԫ���������ԵĲ���ʵ�鱨��");
	showʵ�鱨��F();
	if (!f) {
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
	bool f = GetWindowsChild("һ�׵�·����Ӧ����ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f ) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ��Ŀ��^ f = gcnew һ�׵�·����Ӧ����ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}

void ������::openһ�׵�·����Ӧ����ʵ��ԭ��() {
	bool f = GetWindowsChild("һ�׵�·����Ӧ����ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ��ԭ��^ f = gcnew һ�׵�·����Ӧ����ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::openһ�׵�·����Ӧ����ʵ������() {
	bool f = GetWindowsChild("һ�׵�·����Ӧ����ʵ������");
	showʵ������F();
	if (!f ) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ������^ f = gcnew һ�׵�·����Ӧ����ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void ������::openһ�׵�·����Ӧ����ʵ������() {
	bool f = GetWindowsChild("һ�׵�·����Ӧ����ʵ������");
	showʵ������F();
	if (!f ) {
		CloseAllMidchild();
		һ�׵�·����Ӧ����ʵ������^ f = gcnew һ�׵�·����Ӧ����ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "һ�׵�·����Ӧ����ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
