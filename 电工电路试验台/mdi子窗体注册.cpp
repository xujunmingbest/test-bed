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
