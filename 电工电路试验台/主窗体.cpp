
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
	case 23: open������ʵ��Ŀ��(); break;
	case 24: open�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��(); break;
	case 25: open��������������Ĳ���ʵ��Ŀ��(); break;
	}
}
#include "ʵ�����ͷ�ļ�.h"



void ������::CloseAllMidchild() {
	//for each(Control^ f in this->panel4->Controls)
	//{
	//	if (f->Name == "��ά�϶���ʵ������")
	//	{
	//		��ά�϶���ʵ������^ ��ά�϶���ʵ������Wnd = (��ά�϶���ʵ������^)f;
	//		��ά�϶���ʵ������Wnd->Close();
	//	}
	//}
	//panel4->Controls->Clear();
	//for each(Form^ f in MdiChildren)
	//{
	//	f->Close();
	//}
}

Control^ ������::GetWindowsChild(String ^FormName) {
	//for each(Form^ f in MdiChildren)
	//{
	//	if (f->Name == FormName)
	//	{
	//		return true;
	//	}
	//}
	for each(Control^ f in this->panel4->Controls)
	{
		if (f->Name == FormName)
		{
			return f;
		}
	}
	return nullptr;
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
	case 23: open������ʵ��Ŀ��(); break;
	case 24: open�����繤�Ǳ��ʹ����������ļ���ʵ��Ŀ��(); break;
	case 25: open��������������Ĳ���ʵ��Ŀ��(); break;
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
	case 23: open������ʵ��ԭ��(); break;
	case 24: open�����繤�Ǳ��ʹ����������ļ���ʵ��ԭ��(); break;
	case 25: open��������������Ĳ���ʵ��ԭ��(); break;
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
	case 23: open������ʵ������(); break;
	case 24: open�����繤�Ǳ��ʹ����������ļ���ʵ������(); break;
	case 25: open��������������Ĳ���ʵ������(); break;
	}
}


void  ������::ʵ������click(int index) {
	switch (index) {
	case 1: {
		openԪ���������ԵĲ���ʵ������(); 
		lcc.SendComputerInfo(Grades[1] + "����ʵ����");
		NowTrial::NowTrailCode = 1;
		break;
	}
	case 2: {
		open����������ʵ������();
		lcc.SendComputerInfo(Grades[2] + "����ʵ����");
		NowTrial::NowTrailCode = 2;
		break;
	}
	case 3: {
		open����ԭ��ʵ������();
		lcc.SendComputerInfo(Grades[3] + "����ʵ����");
		NowTrial::NowTrailCode = 3;
		break;
	}
	case 4: {
		lcc.SendComputerInfo(Grades[4] + "����ʵ����");
		NowTrial::NowTrailCode = 4;
		open��ά�϶���ʵ������();
		break;
	}
	case 5: {
		open��ѹԴ�����Դ�ĵ�Ч�任ʵ������();
		lcc.SendComputerInfo(Grades[5] + "����ʵ����");
		NowTrial::NowTrailCode = 5;
		break;
	}
	case 6: {
		openһ�׵�·����Ӧ����ʵ������();
		lcc.SendComputerInfo(Grades[6] + "����ʵ����");
		NowTrial::NowTrailCode = 6;
		break;
	}
	case 7: {
		open���׶�̬��·��Ӧ���о�ʵ������();
		lcc.SendComputerInfo(Grades[7] + "����ʵ����");
		NowTrial::NowTrailCode = 7;
		break;
	}
	case 8: {
		openVCVSʵ��ʵ������();
		lcc.SendComputerInfo(Grades[8] + "����ʵ����");
		NowTrial::NowTrailCode = 8;
		break;
	}
	case 9: {
		open���˿�������о�ʵ������();
		lcc.SendComputerInfo(Grades[9] + "����ʵ����");
		NowTrial::NowTrailCode = 9;
		break;
	}
	case 10: {
		open����ʴ��������Ĳⶨʵ������();
		lcc.SendComputerInfo(Grades[10] + "����ʵ����");
		NowTrial::NowTrailCode = 10;
		break;
	}
	case 11: {
		open��·״̬�켣�Ĺ۲�ʵ������();
		lcc.SendComputerInfo(Grades[11] + "����ʵ����");
		NowTrial::NowTrailCode = 11;
		break;
	}
	case 12: {
		openRLCԪ���迹���ԵĲⶨʵ������();
		lcc.SendComputerInfo(Grades[12] + "����ʵ����");
		NowTrial::NowTrailCode = 12;
		break;
	}
	case 13: {
		openRLC����г���·���о�ʵ������(); 
		lcc.SendComputerInfo(Grades[13] + "����ʵ����");
		NowTrial::NowTrailCode = 13;
		break;
	}
	case 14: {
		open�������ı�ѹ�����ԵĲ���ʵ������();
		lcc.SendComputerInfo(Grades[14] + "����ʵ����");
		NowTrial::NowTrailCode = 14;
		break;
	}
	case 15: {
		open�����ȱ�ʵ��ʵ������();
		lcc.SendComputerInfo(Grades[15] + "����ʵ����");
		NowTrial::NowTrailCode = 15;
		break;
	}
	case 16: {
		open���ཻ����·��ѹ�����Ĳ���ʵ������();
		lcc.SendComputerInfo(Grades[16] + "����ʵ����");
		NowTrial::NowTrailCode = 16;
		break;
	}
	case 17: {
		open�չ�ƹ������������ʵ������();
		lcc.SendComputerInfo(Grades[17] + "����ʵ����");
		NowTrial::NowTrailCode = 17;
		break;
	}
	case 18: {
		open��ת��ʵ������();
		lcc.SendComputerInfo(Grades[18] + "����ʵ����");
		NowTrial::NowTrailCode = 18;
		break;
	}
	case 19: {
		open�����·���ʵĲ���ʵ������();
		lcc.SendComputerInfo(Grades[19] + "����ʵ����");
		NowTrial::NowTrailCode = 19;
		break;
	}
	case 20: {
		open���迹�任��ʵ������();
		lcc.SendComputerInfo(Grades[20] + "����ʵ����");
		NowTrial::NowTrailCode = 20;
		break;
	}
	case 21: {
		openRC�����Ƶ������ʵ������();
		lcc.SendComputerInfo(Grades[21] + "����ʵ����");
		NowTrial::NowTrailCode = 21;
		break;
	}
	case 22: {
		open�Ǳ����̵���չʵ������();
		lcc.SendComputerInfo(Grades[22] + "����ʵ����");
		NowTrial::NowTrailCode = 22;
		break;
	}
	case 23: {
		open������ʵ������();
		lcc.SendComputerInfo(Grades[23] + "����ʵ����");
		NowTrial::NowTrailCode = 23;
		break;
	}
	case 24: {
		open�����繤�Ǳ��ʹ����������ļ���ʵ������();
		lcc.SendComputerInfo(Grades[24] + "����ʵ����");
		NowTrial::NowTrailCode = 24;
		break;
	}
	case 25: {
		open��������������Ĳ���ʵ������();
		lcc.SendComputerInfo(Grades[25] + "����ʵ����");
		NowTrial::NowTrailCode = 25;
		break;
	}
	}

}
