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
void ������::open��ά�϶���ʵ��Ŀ��() {
	bool f = GetWindowsChild("��ά�϶���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		��ά�϶���ʵ��Ŀ��^ f = gcnew ��ά�϶���ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open��ά�϶���ʵ��ԭ��() {
	bool f = GetWindowsChild("��ά�϶���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		��ά�϶���ʵ��ԭ��^ f = gcnew ��ά�϶���ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open��ά�϶���ʵ������() {
	bool f = GetWindowsChild("��ά�϶���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��ά�϶���ʵ������^ f = gcnew ��ά�϶���ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open��ά�϶���ʵ������() {
	bool f = GetWindowsChild("��ά�϶���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��ά�϶���ʵ������^ f = gcnew ��ά�϶���ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ά�϶���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��() {
	bool f = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��() {
	bool f = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ������() {
	bool f = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ������^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open��ѹԴ�����Դ�ĵ�Ч�任ʵ������() {
	bool f = GetWindowsChild("��ѹԴ�����Դ�ĵ�Ч�任ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��ѹԴ�����Դ�ĵ�Ч�任ʵ������^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任ʵ������;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "��ѹԴ�����Դ�ĵ�Ч�任ʵ������";
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


void ������::open���׶�̬��·��Ӧ���о�ʵ��Ŀ��() {
	bool f = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ��Ŀ��^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}

void ������::open���׶�̬��·��Ӧ���о�ʵ��ԭ��() {
	bool f = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ��ԭ��^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open���׶�̬��·��Ӧ���о�ʵ������() {
	bool f = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ������^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void ������::open���׶�̬��·��Ӧ���о�ʵ������() {
	bool f = GetWindowsChild("���׶�̬��·��Ӧ���о�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		���׶�̬��·��Ӧ���о�ʵ������^ f = gcnew ���׶�̬��·��Ӧ���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���׶�̬��·��Ӧ���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}


void ������::openVCVSʵ��ʵ��Ŀ��() {
	bool f = GetWindowsChild("VCVSʵ��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		VCVSʵ��ʵ��Ŀ��^ f = gcnew VCVSʵ��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::openVCVSʵ��ʵ��ԭ��() {
	bool f = GetWindowsChild("VCVSʵ��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		VCVSʵ��ʵ��ԭ��^ f = gcnew VCVSʵ��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::openVCVSʵ��ʵ������() {
	bool f = GetWindowsChild("VCVSʵ��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		VCVSʵ��ʵ������^ f = gcnew VCVSʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::openVCVSʵ��ʵ������() {
	bool f = GetWindowsChild("VCVSʵ��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		VCVSʵ��ʵ������^ f = gcnew VCVSʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVSʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}


void ������::open���˿�������о�ʵ��Ŀ��() {
	bool f = GetWindowsChild("���˿�������о�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		���˿�������о�ʵ��Ŀ��^ f = gcnew ���˿�������о�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open���˿�������о�ʵ��ԭ��() {
	bool f = GetWindowsChild("���˿�������о�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		���˿�������о�ʵ��ԭ��^ f = gcnew ���˿�������о�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open���˿�������о�ʵ������() {
	bool f = GetWindowsChild("���˿�������о�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		���˿�������о�ʵ������^ f = gcnew ���˿�������о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open���˿�������о�ʵ������() {
	bool f = GetWindowsChild("���˿�������о�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		���˿�������о�ʵ������^ f = gcnew ���˿�������о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���˿�������о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}



void ������::open����ʴ��������Ĳⶨʵ��Ŀ��() {
	bool f = GetWindowsChild("����ʴ��������Ĳⶨʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ��Ŀ��^ f = gcnew ����ʴ��������Ĳⶨʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open����ʴ��������Ĳⶨʵ��ԭ��() {
	bool f = GetWindowsChild("����ʴ��������Ĳⶨʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ��ԭ��^ f = gcnew ����ʴ��������Ĳⶨʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open����ʴ��������Ĳⶨʵ������() {
	bool f = GetWindowsChild("����ʴ��������Ĳⶨʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ������^ f = gcnew ����ʴ��������Ĳⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open����ʴ��������Ĳⶨʵ������() {
	bool f = GetWindowsChild("����ʴ��������Ĳⶨʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		����ʴ��������Ĳⶨʵ������^ f = gcnew ����ʴ��������Ĳⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "����ʴ��������Ĳⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}





void ������::open��·״̬�켣�Ĺ۲�ʵ��Ŀ��() {
	bool f = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ��Ŀ��^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open��·״̬�켣�Ĺ۲�ʵ��ԭ��() {
	bool f = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ��ԭ��^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open��·״̬�켣�Ĺ۲�ʵ������() {
	bool f = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ������^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::open��·״̬�켣�Ĺ۲�ʵ������() {
	bool f = GetWindowsChild("��·״̬�켣�Ĺ۲�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��·״̬�켣�Ĺ۲�ʵ������^ f = gcnew ��·״̬�켣�Ĺ۲�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��·״̬�켣�Ĺ۲�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}





void ������::openRLCԪ���迹���ԵĲⶨʵ��Ŀ��() {
	bool f = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ��Ŀ��^ f = gcnew RLCԪ���迹���ԵĲⶨʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::openRLCԪ���迹���ԵĲⶨʵ��ԭ��() {
	bool f = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ��ԭ��^ f = gcnew RLCԪ���迹���ԵĲⶨʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::openRLCԪ���迹���ԵĲⶨʵ������() {
	bool f = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ������^ f = gcnew RLCԪ���迹���ԵĲⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void ������::openRLCԪ���迹���ԵĲⶨʵ������() {
	bool f = GetWindowsChild("RLCԪ���迹���ԵĲⶨʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		RLCԪ���迹���ԵĲⶨʵ������^ f = gcnew RLCԪ���迹���ԵĲⶨʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLCԪ���迹���ԵĲⶨʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}

void ������::openRLC����г���·���о�ʵ��Ŀ��() {
	bool f = GetWindowsChild("RLC����г���·���о�ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ��Ŀ��^ f = gcnew RLC����г���·���о�ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::openRLC����г���·���о�ʵ��ԭ��() {
	bool f = GetWindowsChild("RLC����г���·���о�ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ��ԭ��^ f = gcnew RLC����г���·���о�ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::openRLC����г���·���о�ʵ������() {
	bool f = GetWindowsChild("RLC����г���·���о�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ������^ f = gcnew RLC����г���·���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::openRLC����г���·���о�ʵ������() {
	bool f = GetWindowsChild("RLC����г���·���о�ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		RLC����г���·���о�ʵ������^ f = gcnew RLC����г���·���о�ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC����г���·���о�ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void ������::open�������ı�ѹ�����ԵĲ���ʵ��Ŀ��() {
	bool f = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ��Ŀ��^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open�������ı�ѹ�����ԵĲ���ʵ��ԭ��() {
	bool f = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ��ԭ��^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open�������ı�ѹ�����ԵĲ���ʵ������() {
	bool f = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ������^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open�������ı�ѹ�����ԵĲ���ʵ������() {
	bool f = GetWindowsChild("�������ı�ѹ�����ԵĲ���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		�������ı�ѹ�����ԵĲ���ʵ������^ f = gcnew �������ı�ѹ�����ԵĲ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�������ı�ѹ�����ԵĲ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}




void ������::open�����ȱ�ʵ��ʵ��Ŀ��() {
	bool f = GetWindowsChild("�����ȱ�ʵ��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ��Ŀ��^ f = gcnew �����ȱ�ʵ��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open�����ȱ�ʵ��ʵ��ԭ��() {
	bool f = GetWindowsChild("�����ȱ�ʵ��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ��ԭ��^ f = gcnew �����ȱ�ʵ��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open�����ȱ�ʵ��ʵ������() {
	bool f = GetWindowsChild("�����ȱ�ʵ��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ������^ f = gcnew �����ȱ�ʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open�����ȱ�ʵ��ʵ������() {
	bool f = GetWindowsChild("�����ȱ�ʵ��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		�����ȱ�ʵ��ʵ������^ f = gcnew �����ȱ�ʵ��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�����ȱ�ʵ��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}




void ������::open���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��() {
	bool f = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��() {
	bool f = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open���ཻ����·��ѹ�����Ĳ���ʵ������() {
	bool f = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ������^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open���ཻ����·��ѹ�����Ĳ���ʵ������() {
	bool f = GetWindowsChild("���ཻ����·��ѹ�����Ĳ���ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		���ཻ����·��ѹ�����Ĳ���ʵ������^ f = gcnew ���ཻ����·��ѹ�����Ĳ���ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "���ཻ����·��ѹ�����Ĳ���ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


void ������::open�չ�ƹ������������ʵ��Ŀ��() {
	bool f = GetWindowsChild("�չ�ƹ������������ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ��Ŀ��^ f = gcnew �չ�ƹ������������ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open�չ�ƹ������������ʵ��ԭ��() {
	bool f = GetWindowsChild("�չ�ƹ������������ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ��ԭ��^ f = gcnew �չ�ƹ������������ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open�չ�ƹ������������ʵ������() {
	bool f = GetWindowsChild("�չ�ƹ������������ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ������^ f = gcnew �չ�ƹ������������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open�չ�ƹ������������ʵ������() {
	bool f = GetWindowsChild("�չ�ƹ������������ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		�չ�ƹ������������ʵ������^ f = gcnew �չ�ƹ������������ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "�չ�ƹ������������ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


void ������::open��ת��ʵ��Ŀ��() {
	bool f = GetWindowsChild("��ת��ʵ��Ŀ��");
	showʵ��Ŀ��F();
	if (!f) {
		CloseAllMidchild();
		��ת��ʵ��Ŀ��^ f = gcnew ��ת��ʵ��Ŀ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ��Ŀ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open��ת��ʵ��ԭ��() {
	bool f = GetWindowsChild("��ת��ʵ��ԭ��");
	showʵ��ԭ��F();
	if (!f) {
		CloseAllMidchild();
		��ת��ʵ��ԭ��^ f = gcnew ��ת��ʵ��ԭ��;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void ������::open��ת��ʵ������() {
	bool f = GetWindowsChild("��ת��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��ת��ʵ������^ f = gcnew ��ת��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void ������::open��ת��ʵ������() {
	bool f = GetWindowsChild("��ת��ʵ������");
	showʵ������F();
	if (!f) {
		CloseAllMidchild();
		��ת��ʵ������^ f = gcnew ��ת��ʵ������;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "��ת��ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}