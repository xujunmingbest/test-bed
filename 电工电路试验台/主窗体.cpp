
#include "������.h"

using namespace �繤��·����̨;

void ������::showʵ��Ŀ��F() {
	showBlackF();
	label2->ForeColor = Color::Yellow;

}
void ������::showʵ��ԭ��F() {
	showBlackF();
	label3->ForeColor = Color::Yellow;

}
void ������::showʵ������F() {
	showBlackF();
	label4->ForeColor = Color::Yellow;

}

void ������::showʵ������F() {
	showBlackF();
	label6->ForeColor = Color::Yellow;

}

void ������::showʵ�鱨��F() {
	showBlackF();

}


void ������::showBlackF() {
	label2->ForeColor = Color::Green;
	label3->ForeColor = Color::Green;
	label4->ForeColor = Color::Green;

	label6->ForeColor = Color::Green;

}


void ������::listViewForeBlack() {
	for each(ListViewItem ^l in listView1->Items) {
		l->ForeColor = Color::Black;
	}
}

void ������::SelectWindows(int index) {
	switch (index) {
	case 1: openԪ���������ԵĲ���ʵ��Ŀ��(); break;
	case 2: open����������ʵ��Ŀ��(); break;
	case 3: open����ԭ��ʵ��Ŀ��(); break;
	case 4: open��ά�϶���ʵ��Ŀ��(); break;
	case 5: open��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��(); break;
	case 6: openһ�׵�·����Ӧ����ʵ��Ŀ��(); break;
	case 7: open���׶�̬��·��Ӧ���о�ʵ��Ŀ��(); break;
	case 8: openVCVSʵ��ʵ��Ŀ��(); break;
	case 9: open���˿�������о�ʵ��Ŀ��(); break;
	case 10: open����ʴ��������Ĳⶨʵ��Ŀ��(); break;
	case 11: open��·״̬�켣�Ĺ۲�ʵ��Ŀ��(); break;
	case 12: openRLCԪ���迹���ԵĲⶨʵ��Ŀ��(); break;
	case 13: openRLC����г���·���о�ʵ��Ŀ��(); break;
	case 14: open�������ı�ѹ�����ԵĲ���ʵ��Ŀ��(); break;
	case 15: open�����ȱ�ʵ��ʵ��Ŀ��(); break;
	case 16: open���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��(); break;
	case 17: open�չ�ƹ������������ʵ��Ŀ��(); break;
	case 18: open��ת��ʵ��Ŀ��(); break;
	case 19: open�����·���ʵĲ���ʵ��Ŀ��(); break;
	case 20: open���迹�任��ʵ��Ŀ��(); break;
	case 21: openRC�����Ƶ������ʵ��Ŀ��(); break;
	case 22: open�Ǳ����̵���չʵ��Ŀ��(); break;
	}
}




void ������::CloseAllMidchild() {
	panel4->Controls->Clear();
	for each(Form^ f in MdiChildren)
	{
		f->Close();
	}
}

bool ������::GetWindowsChild(String ^FormName) {
	for each(Form^ f in MdiChildren)
	{
		if (f->Name == FormName)
		{
			return true;
		}
	}
	for each(Control^ f in this->panel4->Controls)
	{
		if (f->Name == FormName)
		{
			return true;
		}
	}

	return false;
}


void  ������::ʵ��Ŀ��click(int index) {
	switch (index) {
	case 1:openԪ���������ԵĲ���ʵ��Ŀ��(); break;
	case 2:open����������ʵ��Ŀ��(); break;
	case 3:open����ԭ��ʵ��Ŀ��(); break;
	case 4:open��ά�϶���ʵ��Ŀ��(); break;
	case 5:open��ѹԴ�����Դ�ĵ�Ч�任ʵ��Ŀ��(); break;
	case 6:openһ�׵�·����Ӧ����ʵ��Ŀ��(); break;
	case 7:open���׶�̬��·��Ӧ���о�ʵ��Ŀ��(); break;
	case 8: openVCVSʵ��ʵ��Ŀ��(); break;
	case 9: open���˿�������о�ʵ��Ŀ��(); break;
	case 10: open����ʴ��������Ĳⶨʵ��Ŀ��(); break;
	case 11: open��·״̬�켣�Ĺ۲�ʵ��Ŀ��(); break;
	case 12: openRLCԪ���迹���ԵĲⶨʵ��Ŀ��(); break;
	case 13: openRLC����г���·���о�ʵ��Ŀ��(); break;
	case 14: open�������ı�ѹ�����ԵĲ���ʵ��Ŀ��(); break;
	case 15: open�����ȱ�ʵ��ʵ��Ŀ��(); break;
	case 16: open���ཻ����·��ѹ�����Ĳ���ʵ��Ŀ��(); break;
	case 17: open�չ�ƹ������������ʵ��Ŀ��(); break;
	case 18: open��ת��ʵ��Ŀ��(); break;
	case 19: open�����·���ʵĲ���ʵ��Ŀ��(); break;
	case 20: open���迹�任��ʵ��Ŀ��(); break;
	case 21: openRC�����Ƶ������ʵ��Ŀ��(); break;
	case 22: open�Ǳ����̵���չʵ��Ŀ��(); break;
	}

}

void  ������::ʵ��ԭ��click(int index) {
	switch (index) {
	case 1:openԪ���������ԵĲ���ʵ��ԭ��(); break;
	case 2:open����������ʵ��ԭ��(); break;
	case 3:open����ԭ��ʵ��ԭ��(); break;
	case 4:open��ά�϶���ʵ��ԭ��(); break;
	case 5:open��ѹԴ�����Դ�ĵ�Ч�任ʵ��ԭ��(); break;
	case 6:openһ�׵�·����Ӧ����ʵ��ԭ��(); break;
	case 7:open���׶�̬��·��Ӧ���о�ʵ��ԭ��(); break;
	case 8: openVCVSʵ��ʵ��ԭ��(); break;
	case 9: open���˿�������о�ʵ��ԭ��(); break;
	case 10: open����ʴ��������Ĳⶨʵ��ԭ��(); break;
	case 11: open��·״̬�켣�Ĺ۲�ʵ��ԭ��(); break;
	case 12: openRLCԪ���迹���ԵĲⶨʵ��ԭ��(); break;
	case 13: openRLC����г���·���о�ʵ��ԭ��(); break;
	case 14: open�������ı�ѹ�����ԵĲ���ʵ��ԭ��(); break;
	case 15: open�����ȱ�ʵ��ʵ��ԭ��(); break;
	case 16: open���ཻ����·��ѹ�����Ĳ���ʵ��ԭ��(); break;
	case 17: open�չ�ƹ������������ʵ��ԭ��(); break;
	case 18: open��ת��ʵ��ԭ��(); break;
	case 19: open�����·���ʵĲ���ʵ��ԭ��(); break;
	case 20: open���迹�任��ʵ��ԭ��(); break;
	case 21: openRC�����Ƶ������ʵ��ԭ��(); break;
	case 22: open�Ǳ����̵���չʵ��ԭ��(); break;
	}
}

void  ������::ʵ������click(int index) {
	switch (index) {
	case 1:openԪ���������ԵĲ���ʵ������(); break;
	case 2:open����������ʵ������(); break;
	case 3:open����ԭ��ʵ������(); break;
	case 4:open��ά�϶���ʵ������(); break;
	case 5:open��ѹԴ�����Դ�ĵ�Ч�任ʵ������(); break;
	case 6:openһ�׵�·����Ӧ����ʵ������(); break;
	case 7:open���׶�̬��·��Ӧ���о�ʵ������(); break;
	case 8:openVCVSʵ��ʵ������(); break;
	case 9: open���˿�������о�ʵ������(); break;
	case 10: open����ʴ��������Ĳⶨʵ������(); break;
	case 11: open��·״̬�켣�Ĺ۲�ʵ������(); break;
	case 12: openRLCԪ���迹���ԵĲⶨʵ������(); break;
	case 13: openRLC����г���·���о�ʵ������(); break;
	case 14: open�������ı�ѹ�����ԵĲ���ʵ������(); break;
	case 15: open�����ȱ�ʵ��ʵ������(); break;
	case 16: open���ཻ����·��ѹ�����Ĳ���ʵ������(); break;
	case 17: open�չ�ƹ������������ʵ������(); break;
	case 18: open��ת��ʵ������(); break;
	case 19: open�����·���ʵĲ���ʵ������(); break;
	case 20: open���迹�任��ʵ������(); break;
	case 21: openRC�����Ƶ������ʵ������(); break;
	case 22: open�Ǳ����̵���չʵ������(); break;
	}
}


void  ������::ʵ������click(int index) {
	switch (index) {
	case 1:openԪ���������ԵĲ���ʵ������(); break;
	case 2:open����������ʵ������(); break;
	case 3:open����ԭ��ʵ������(); break;
	case 4:open��ά�϶���ʵ������(); break;
	case 5:open��ѹԴ�����Դ�ĵ�Ч�任ʵ������(); break;
	case 6:openһ�׵�·����Ӧ����ʵ������(); break;
	case 7:open���׶�̬��·��Ӧ���о�ʵ������(); break;
	case 8:openVCVSʵ��ʵ������(); break;
	case 9: open���˿�������о�ʵ������(); break;
	case 10: open����ʴ��������Ĳⶨʵ������(); break;
	case 11: open��·״̬�켣�Ĺ۲�ʵ������(); break;
	case 12: openRLCԪ���迹���ԵĲⶨʵ������(); break;
	case 13: openRLC����г���·���о�ʵ������(); break;
	case 14: open�������ı�ѹ�����ԵĲ���ʵ������(); break;
	case 15: open�����ȱ�ʵ��ʵ������(); break;
	case 16: open���ཻ����·��ѹ�����Ĳ���ʵ������(); break;
	case 17: open�չ�ƹ������������ʵ������(); break;
	case 18: open��ת��ʵ������(); break;
	case 19: open�����·���ʵĲ���ʵ������(); break;
	case 20: open���迹�任��ʵ������(); break;
	case 21: openRC�����Ƶ������ʵ������(); break;
	case 22: open�Ǳ����̵���չʵ������(); break;
	}

}
