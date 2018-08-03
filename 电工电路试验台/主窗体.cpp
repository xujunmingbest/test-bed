
#include "主窗体.h"

using namespace 电工电路试验台;

void 主窗体::show实验目的F() {
	showBlackF();
	label2->ForeColor = Color::Yellow;

}
void 主窗体::show实验原理F() {
	showBlackF();
	label3->ForeColor = Color::Yellow;

}
void 主窗体::show实验器件F() {
	showBlackF();
	label4->ForeColor = Color::Yellow;

}

void 主窗体::show实验内容F() {
	showBlackF();
	label6->ForeColor = Color::Yellow;

}

void 主窗体::show实验报告F() {
	showBlackF();

}


void 主窗体::showBlackF() {
	label2->ForeColor = Color::Green;
	label3->ForeColor = Color::Green;
	label4->ForeColor = Color::Green;

	label6->ForeColor = Color::Green;

}


void 主窗体::listViewForeBlack() {
	for each(ListViewItem ^l in listView1->Items) {
		l->ForeColor = Color::Black;
	}
}

void 主窗体::SelectWindows(int index) {
	switch (index) {
	case 1: open元件伏安特性的测试实验目的(); break;
	case 2: open基尔霍夫定律实验目的(); break;
	case 3: open叠加原理实验目的(); break;
	case 4: open戴维南定理实验目的(); break;
	case 5: open电压源与电流源的等效变换实验目的(); break;
	case 6: open一阶电路的响应测试实验目的(); break;
	case 7: open二阶动态电路响应的研究实验目的(); break;
	case 8: openVCVS实验实验目的(); break;
	case 9: open二端口网络的研究实验目的(); break;
	case 10: open最大功率传输条件的测定实验目的(); break;
	}
}




void 主窗体::CloseAllMidchild() {
	panel4->Controls->Clear();
	for each(Form^ f in MdiChildren)
	{
		f->Close();
	}
}

bool 主窗体::GetWindowsChild(String ^FormName) {
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


void  主窗体::实验目的click(int index) {
	switch (index) {
	case 1:open元件伏安特性的测试实验目的(); break;
	case 2:open基尔霍夫定律实验目的(); break;
	case 3:open叠加原理实验目的(); break;
	case 4:open戴维南定理实验目的(); break;
	case 5:open电压源与电流源的等效变换实验目的(); break;
	case 6:open一阶电路的响应测试实验目的(); break;
	case 7:open二阶动态电路响应的研究实验目的(); break;
	case 8: openVCVS实验实验目的(); break;
	case 9: open二端口网络的研究实验目的(); break;
	case 10: open最大功率传输条件的测定实验目的(); break;
	}

}
void  主窗体::实验原理click(int index) {
	switch (index) {
	case 1:open元件伏安特性的测试实验原理(); break;
	case 2:open基尔霍夫定律实验原理(); break;
	case 3:open叠加原理实验原理(); break;
	case 4:open戴维南定理实验原理(); break;
	case 5:open电压源与电流源的等效变换实验原理(); break;
	case 6:open一阶电路的响应测试实验原理(); break;
	case 7:open二阶动态电路响应的研究实验原理(); break;
	case 8: openVCVS实验实验原理(); break;
	case 9: open二端口网络的研究实验原理(); break;
	case 10: open最大功率传输条件的测定实验原理(); break;
	}
}

void  主窗体::实验器件click(int index) {
	switch (index) {
	case 1:open元件伏安特性的测试实验器件(); break;
	case 2:open基尔霍夫定律实验器件(); break;
	case 3:open叠加原理实验器件(); break;
	case 4:open戴维南定理实验器件(); break;
	case 5:open电压源与电流源的等效变换实验器件(); break;
	case 6:open一阶电路的响应测试实验器件(); break;
	case 7:open二阶动态电路响应的研究实验器件(); break;
	case 8:openVCVS实验实验器件(); break;
	case 9: open二端口网络的研究实验器件(); break;
	case 10: open最大功率传输条件的测定实验器件(); break;
	}
}


void  主窗体::实验内容click(int index) {
	switch (index) {
	case 1:open元件伏安特性的测试实验内容(); break;
	case 2:open基尔霍夫定律实验内容(); break;
	case 3:open叠加原理实验内容(); break;
	case 4:open戴维南定理实验内容(); break;
	case 5:open电压源与电流源的等效变换实验内容(); break;
	case 6:open一阶电路的响应测试实验内容(); break;
	case 7:open二阶动态电路响应的研究实验内容(); break;
	case 8:openVCVS实验实验内容(); break;
	case 9: open二端口网络的研究实验内容(); break;
	case 10: open最大功率传输条件的测定实验内容(); break;
	}

}




