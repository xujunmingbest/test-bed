#include "主窗体.h"
#include "实验汇总头文件.h"
using namespace 电工电路试验台;






void 主窗体::open元件伏安特性的测试实验目的() {
	bool f= GetWindowsChild("元件伏安特性的测试实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		元件伏安特性的测试实验目的^ f = gcnew 元件伏安特性的测试实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "元件伏安特性的测试实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open元件伏安特性的测试实验原理() {
	bool f = GetWindowsChild("元件伏安特性的测试实验原理");
	show实验原理F();
	if (!f  ) {
		CloseAllMidchild();
		元件伏安特性的测试实验原理^ f = gcnew 元件伏安特性的测试实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "元件伏安特性的测试实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open元件伏安特性的测试实验器件() {
	bool f = GetWindowsChild("元件伏安特性的测试实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		元件伏安特性的测试实验器件^ f = gcnew 元件伏安特性的测试实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "元件伏安特性的测试实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void 主窗体::open元件伏安特性的测试实验内容() {
	bool f = GetWindowsChild("元件伏安特性的测试实验内容");
	show实验内容F();
	if (!f ) {
		CloseAllMidchild();
		元件伏安特性的测试实验内容^ f = gcnew 元件伏安特性的测试实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "元件伏安特性的测试实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open基尔霍夫定律实验目的() {
	bool f = GetWindowsChild("基尔霍夫定律实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		基尔霍夫定律实验目的^ f = gcnew 基尔霍夫定律实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open基尔霍夫定律实验原理() {
	bool f = GetWindowsChild("基尔霍夫定律实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		基尔霍夫定律实验原理^ f = gcnew 基尔霍夫定律实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open基尔霍夫定律实验器件() {
	bool f = GetWindowsChild("基尔霍夫定律实验设备");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		基尔霍夫定律实验设备^ f = gcnew 基尔霍夫定律实验设备;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验设备";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open基尔霍夫定律实验内容() {
	bool f = GetWindowsChild("基尔霍夫定律实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		基尔霍夫定律实验内容^ f = gcnew 基尔霍夫定律实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open叠加原理实验目的() {
	bool f = GetWindowsChild("叠加原理实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		叠加原理实验目的^ f = gcnew 叠加原理实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open叠加原理实验原理() {
	bool f = GetWindowsChild("叠加原理实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		叠加原理实验原理^ f = gcnew 叠加原理实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open叠加原理实验器件() {
	bool f = GetWindowsChild("叠加原理实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		叠加原理实验器件^ f = gcnew 叠加原理实验器件;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open叠加原理实验内容() {
	bool f = GetWindowsChild("叠加原理实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		叠加原理实验内容^ f = gcnew 叠加原理实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


/*
void 主窗体::实验报告click(int index) {
	bool f = GetWindowsChild("元件伏安特性的测试实验报告");
	show实验报告F();
	if (!f) {
		CloseAllMidchild();
		元件伏安特性的测试实验报告^ f = gcnew 元件伏安特性的测试实验报告;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "元件伏安特性的测试实验报告";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

*/





void 主窗体::open一阶电路的响应测试实验目的() {
	bool f = GetWindowsChild("一阶电路的响应测试实验目的");
	show实验目的F();
	if (!f ) {
		CloseAllMidchild();
		一阶电路的响应测试实验目的^ f = gcnew 一阶电路的响应测试实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}

void 主窗体::open一阶电路的响应测试实验原理() {
	bool f = GetWindowsChild("一阶电路的响应测试实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		一阶电路的响应测试实验原理^ f = gcnew 一阶电路的响应测试实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open一阶电路的响应测试实验器件() {
	bool f = GetWindowsChild("一阶电路的响应测试实验器件");
	show实验器件F();
	if (!f ) {
		CloseAllMidchild();
		一阶电路的响应测试实验器件^ f = gcnew 一阶电路的响应测试实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void 主窗体::open一阶电路的响应测试实验内容() {
	bool f = GetWindowsChild("一阶电路的响应测试实验内容");
	show实验内容F();
	if (!f ) {
		CloseAllMidchild();
		一阶电路的响应测试实验内容^ f = gcnew 一阶电路的响应测试实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
