#include "主窗体.h"
#include "实验汇总头文件.h"
using namespace 电工电路试验台;






void 主窗体::open元件伏安特性的测试实验目的() {
	String ^name = "元件伏安特性的测试实验目的";
	Control^ wndf= GetWindowsChild(name);
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		元件伏安特性的测试实验目的^ f = gcnew 元件伏安特性的测试实验目的;
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

void 主窗体::open元件伏安特性的测试实验原理() {
	String ^name = "元件伏安特性的测试实验原理";
	Control^ wndf = GetWindowsChild(name);
	show实验原理F();
	if (wndf == nullptr  ) {
		CloseAllMidchild();
		元件伏安特性的测试实验原理^ f = gcnew 元件伏安特性的测试实验原理;
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

void 主窗体::open元件伏安特性的测试实验器件() {
	String ^name = "元件伏安特性的测试实验器件";
	Control^ wndf = GetWindowsChild(name);
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		元件伏安特性的测试实验器件^ f = gcnew 元件伏安特性的测试实验器件;
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



void 主窗体::open元件伏安特性的测试实验内容() {
	String ^name = "元件伏安特性的测试实验内容";
	Control^ wndf = GetWindowsChild(name);
	show实验内容F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		元件伏安特性的测试实验内容^ f = gcnew 元件伏安特性的测试实验内容;
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

void 主窗体::open基尔霍夫定律实验目的() {
	String ^name = "基尔霍夫定律实验目的";
	Control^ wndf = GetWindowsChild(name);
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基尔霍夫定律实验目的^ f = gcnew 基尔霍夫定律实验目的;
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
void 主窗体::open基尔霍夫定律实验原理() {
	Control^ wndf = GetWindowsChild("基尔霍夫定律实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基尔霍夫定律实验原理^ f = gcnew 基尔霍夫定律实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open基尔霍夫定律实验器件() {
	Control^ wndf = GetWindowsChild("基尔霍夫定律实验设备");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基尔霍夫定律实验设备^ f = gcnew 基尔霍夫定律实验设备;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验设备";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open基尔霍夫定律实验内容() {
	Control^ wndf = GetWindowsChild("基尔霍夫定律实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基尔霍夫定律实验内容^ f = gcnew 基尔霍夫定律实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "基尔霍夫定律实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open叠加原理实验目的() {
	Control^ wndf = GetWindowsChild("叠加原理实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		叠加原理实验目的^ f = gcnew 叠加原理实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open叠加原理实验原理() {
	Control^ wndf = GetWindowsChild("叠加原理实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		叠加原理实验原理^ f = gcnew 叠加原理实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open叠加原理实验器件() {
	Control^ wndf = GetWindowsChild("叠加原理实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		叠加原理实验器件^ f = gcnew 叠加原理实验器件;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open叠加原理实验内容() {
	Control^ wndf = GetWindowsChild("叠加原理实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		叠加原理实验内容^ f = gcnew 叠加原理实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "叠加原理实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open戴维南定理实验目的() {
	Control^ wndf = GetWindowsChild("戴维南定理实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		戴维南定理实验目的^ f = gcnew 戴维南定理实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open戴维南定理实验原理() {
	Control^ wndf = GetWindowsChild("戴维南定理实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		戴维南定理实验原理^ f = gcnew 戴维南定理实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open戴维南定理实验器件() {
	Control^ wndf = GetWindowsChild("戴维南定理实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		戴维南定理实验器件^ f = gcnew 戴维南定理实验器件;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open戴维南定理实验内容() {
	Control^ wndf = GetWindowsChild("戴维南定理实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		戴维南定理实验内容^ f = gcnew 戴维南定理实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open电压源与电流源的等效变换实验目的() {
	Control^ wndf = GetWindowsChild("电压源与电流源的等效变换实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验目的^ f = gcnew 电压源与电流源的等效变换实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open电压源与电流源的等效变换实验原理() {
	Control^ wndf = GetWindowsChild("电压源与电流源的等效变换实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验原理^ f = gcnew 电压源与电流源的等效变换实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open电压源与电流源的等效变换实验器件() {
	Control^ wndf = GetWindowsChild("电压源与电流源的等效变换实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验器件^ f = gcnew 电压源与电流源的等效变换实验器件;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open电压源与电流源的等效变换实验内容() {
	Control^ wndf = GetWindowsChild("电压源与电流源的等效变换实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验内容^ f = gcnew 电压源与电流源的等效变换实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


/*
void 主窗体::实验报告click(int index) {
	Control^ wndf = GetWindowsChild("元件伏安特性的测试实验报告");
	show实验报告F();
	if (wndf == nullptr) {
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
	Control^ wndf = GetWindowsChild("一阶电路的响应测试实验目的");
	show实验目的F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		一阶电路的响应测试实验目的^ f = gcnew 一阶电路的响应测试实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}

void 主窗体::open一阶电路的响应测试实验原理() {
	Control^ wndf = GetWindowsChild("一阶电路的响应测试实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		一阶电路的响应测试实验原理^ f = gcnew 一阶电路的响应测试实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open一阶电路的响应测试实验器件() {
	Control^ wndf = GetWindowsChild("一阶电路的响应测试实验器件");
	show实验器件F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		一阶电路的响应测试实验器件^ f = gcnew 一阶电路的响应测试实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void 主窗体::open一阶电路的响应测试实验内容() {
	Control^ wndf = GetWindowsChild("一阶电路的响应测试实验内容");
	show实验内容F();
	if (wndf == nullptr ) {
		CloseAllMidchild();
		一阶电路的响应测试实验内容^ f = gcnew 一阶电路的响应测试实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "一阶电路的响应测试实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}


void 主窗体::open二阶动态电路响应的研究实验目的() {
	Control^ wndf = GetWindowsChild("二阶动态电路响应的研究实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验目的^ f = gcnew 二阶动态电路响应的研究实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}

void 主窗体::open二阶动态电路响应的研究实验原理() {
	Control^ wndf = GetWindowsChild("二阶动态电路响应的研究实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验原理^ f = gcnew 二阶动态电路响应的研究实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open二阶动态电路响应的研究实验器件() {
	Control^ wndf = GetWindowsChild("二阶动态电路响应的研究实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验器件^ f = gcnew 二阶动态电路响应的研究实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void 主窗体::open二阶动态电路响应的研究实验内容() {
	Control^ wndf = GetWindowsChild("二阶动态电路响应的研究实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验内容^ f = gcnew 二阶动态电路响应的研究实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}


void 主窗体::openVCVS实验实验目的() {
	Control^ wndf = GetWindowsChild("VCVS实验实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVS实验实验目的^ f = gcnew VCVS实验实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openVCVS实验实验原理() {
	Control^ wndf = GetWindowsChild("VCVS实验实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVS实验实验原理^ f = gcnew VCVS实验实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openVCVS实验实验器件() {
	Control^ wndf = GetWindowsChild("VCVS实验实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVS实验实验器件^ f = gcnew VCVS实验实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::openVCVS实验实验内容() {
	Control^ wndf = GetWindowsChild("VCVS实验实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		VCVS实验实验内容^ f = gcnew VCVS实验实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}


}


void 主窗体::open二端口网络的研究实验目的() {
	Control^ wndf = GetWindowsChild("二端口网络的研究实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二端口网络的研究实验目的^ f = gcnew 二端口网络的研究实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open二端口网络的研究实验原理() {
	Control^ wndf = GetWindowsChild("二端口网络的研究实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二端口网络的研究实验原理^ f = gcnew 二端口网络的研究实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open二端口网络的研究实验器件() {
	Control^ wndf = GetWindowsChild("二端口网络的研究实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二端口网络的研究实验器件^ f = gcnew 二端口网络的研究实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open二端口网络的研究实验内容() {
	Control^ wndf = GetWindowsChild("二端口网络的研究实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		二端口网络的研究实验内容^ f = gcnew 二端口网络的研究实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}



void 主窗体::open最大功率传输条件的测定实验目的() {
	Control^ wndf = GetWindowsChild("最大功率传输条件的测定实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		最大功率传输条件的测定实验目的^ f = gcnew 最大功率传输条件的测定实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open最大功率传输条件的测定实验原理() {
	Control^ wndf = GetWindowsChild("最大功率传输条件的测定实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		最大功率传输条件的测定实验原理^ f = gcnew 最大功率传输条件的测定实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open最大功率传输条件的测定实验器件() {
	Control^ wndf = GetWindowsChild("最大功率传输条件的测定实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		最大功率传输条件的测定实验器件^ f = gcnew 最大功率传输条件的测定实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open最大功率传输条件的测定实验内容() {
	Control^ wndf = GetWindowsChild("最大功率传输条件的测定实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		最大功率传输条件的测定实验内容^ f = gcnew 最大功率传输条件的测定实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}


}





void 主窗体::open电路状态轨迹的观测实验目的() {
	Control^ wndf = GetWindowsChild("电路状态轨迹的观测实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电路状态轨迹的观测实验目的^ f = gcnew 电路状态轨迹的观测实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open电路状态轨迹的观测实验原理() {
	Control^ wndf = GetWindowsChild("电路状态轨迹的观测实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电路状态轨迹的观测实验原理^ f = gcnew 电路状态轨迹的观测实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open电路状态轨迹的观测实验器件() {
	Control^ wndf = GetWindowsChild("电路状态轨迹的观测实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电路状态轨迹的观测实验器件^ f = gcnew 电路状态轨迹的观测实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open电路状态轨迹的观测实验内容() {
	Control^ wndf = GetWindowsChild("电路状态轨迹的观测实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		电路状态轨迹的观测实验内容^ f = gcnew 电路状态轨迹的观测实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}





void 主窗体::openRLC元件阻抗特性的测定实验目的() {
	Control^ wndf = GetWindowsChild("RLC元件阻抗特性的测定实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验目的^ f = gcnew RLC元件阻抗特性的测定实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openRLC元件阻抗特性的测定实验原理() {
	Control^ wndf = GetWindowsChild("RLC元件阻抗特性的测定实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验原理^ f = gcnew RLC元件阻抗特性的测定实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openRLC元件阻抗特性的测定实验器件() {
	Control^ wndf = GetWindowsChild("RLC元件阻抗特性的测定实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验器件^ f = gcnew RLC元件阻抗特性的测定实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::openRLC元件阻抗特性的测定实验内容() {
	Control^ wndf = GetWindowsChild("RLC元件阻抗特性的测定实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验内容^ f = gcnew RLC元件阻抗特性的测定实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}


}

void 主窗体::openRLC串联谐振电路的研究实验目的() {
	Control^ wndf = GetWindowsChild("RLC串联谐振电路的研究实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验目的^ f = gcnew RLC串联谐振电路的研究实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::openRLC串联谐振电路的研究实验原理() {
	Control^ wndf = GetWindowsChild("RLC串联谐振电路的研究实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验原理^ f = gcnew RLC串联谐振电路的研究实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openRLC串联谐振电路的研究实验器件() {
	Control^ wndf = GetWindowsChild("RLC串联谐振电路的研究实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验器件^ f = gcnew RLC串联谐振电路的研究实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::openRLC串联谐振电路的研究实验内容() {
	Control^ wndf = GetWindowsChild("RLC串联谐振电路的研究实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验内容^ f = gcnew RLC串联谐振电路的研究实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void 主窗体::open单相铁心变压器特性的测试实验目的() {
	Control^ wndf = GetWindowsChild("单相铁心变压器特性的测试实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验目的^ f = gcnew 单相铁心变压器特性的测试实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open单相铁心变压器特性的测试实验原理() {
	Control^ wndf = GetWindowsChild("单相铁心变压器特性的测试实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验原理^ f = gcnew 单相铁心变压器特性的测试实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open单相铁心变压器特性的测试实验器件() {
	Control^ wndf = GetWindowsChild("单相铁心变压器特性的测试实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验器件^ f = gcnew 单相铁心变压器特性的测试实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open单相铁心变压器特性的测试实验内容() {
	Control^ wndf = GetWindowsChild("单相铁心变压器特性的测试实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验内容^ f = gcnew 单相铁心变压器特性的测试实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void 主窗体::open单相电度表实验实验目的() {
	Control^ wndf = GetWindowsChild("单相电度表实验实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相电度表实验实验目的^ f = gcnew 单相电度表实验实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open单相电度表实验实验原理() {
	Control^ wndf = GetWindowsChild("单相电度表实验实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相电度表实验实验原理^ f = gcnew 单相电度表实验实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open单相电度表实验实验器件() {
	Control^ wndf = GetWindowsChild("单相电度表实验实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相电度表实验实验器件^ f = gcnew 单相电度表实验实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open单相电度表实验实验内容() {
	Control^ wndf = GetWindowsChild("单相电度表实验实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		单相电度表实验实验内容^ f = gcnew 单相电度表实验实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void 主窗体::open三相交流电路电压电流的测量实验目的() {
	Control^ wndf = GetWindowsChild("三相交流电路电压电流的测量实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验目的^ f = gcnew 三相交流电路电压电流的测量实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open三相交流电路电压电流的测量实验原理() {
	Control^ wndf = GetWindowsChild("三相交流电路电压电流的测量实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验原理^ f = gcnew 三相交流电路电压电流的测量实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open三相交流电路电压电流的测量实验器件() {
	Control^ wndf = GetWindowsChild("三相交流电路电压电流的测量实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验器件^ f = gcnew 三相交流电路电压电流的测量实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open三相交流电路电压电流的测量实验内容() {
	Control^ wndf = GetWindowsChild("三相交流电路电压电流的测量实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验内容^ f = gcnew 三相交流电路电压电流的测量实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void 主窗体::open日光灯功率因数的提高实验目的() {
	Control^ wndf = GetWindowsChild("日光灯功率因数的提高实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		日光灯功率因数的提高实验目的^ f = gcnew 日光灯功率因数的提高实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验目的";
		f->BringToFront();
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open日光灯功率因数的提高实验原理() {
	Control^ wndf = GetWindowsChild("日光灯功率因数的提高实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		日光灯功率因数的提高实验原理^ f = gcnew 日光灯功率因数的提高实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open日光灯功率因数的提高实验器件() {
	Control^ wndf = GetWindowsChild("日光灯功率因数的提高实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		日光灯功率因数的提高实验器件^ f = gcnew 日光灯功率因数的提高实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open日光灯功率因数的提高实验内容() {
	Control^ wndf = GetWindowsChild("日光灯功率因数的提高实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		日光灯功率因数的提高实验内容^ f = gcnew 日光灯功率因数的提高实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void 主窗体::open回转器实验目的() {
	Control^ wndf = GetWindowsChild("回转器实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		回转器实验目的^ f = gcnew 回转器实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open回转器实验原理() {
	Control^ wndf = GetWindowsChild("回转器实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		回转器实验原理^ f = gcnew 回转器实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open回转器实验器件() {
	Control^ wndf = GetWindowsChild("回转器实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		回转器实验器件^ f = gcnew 回转器实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open回转器实验内容() {
	Control^ wndf = GetWindowsChild("回转器实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		回转器实验内容^ f = gcnew 回转器实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void 主窗体::open三相电路功率的测量实验目的() {
	Control^ wndf = GetWindowsChild("三相电路功率的测量实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相电路功率的测量实验目的^ f = gcnew 三相电路功率的测量实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相电路功率的测量实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open三相电路功率的测量实验原理() {
	Control^ wndf = GetWindowsChild("三相电路功率的测量实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相电路功率的测量实验原理^ f = gcnew 三相电路功率的测量实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相电路功率的测量实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open三相电路功率的测量实验器件() {
	Control^ wndf = GetWindowsChild("三相电路功率的测量实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相电路功率的测量实验器件^ f = gcnew 三相电路功率的测量实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相电路功率的测量实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open三相电路功率的测量实验内容() {
	Control^ wndf = GetWindowsChild("三相电路功率的测量实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		三相电路功率的测量实验内容^ f = gcnew 三相电路功率的测量实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相电路功率的测量实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void 主窗体::open负阻抗变换器实验目的() {
	Control^ wndf = GetWindowsChild("负阻抗变换器实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		负阻抗变换器实验目的^ f = gcnew 负阻抗变换器实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "负阻抗变换器实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open负阻抗变换器实验原理() {
	Control^ wndf = GetWindowsChild("负阻抗变换器实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		负阻抗变换器实验原理^ f = gcnew 负阻抗变换器实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "负阻抗变换器实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open负阻抗变换器实验器件() {
	Control^ wndf = GetWindowsChild("负阻抗变换器实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		负阻抗变换器实验器件^ f = gcnew 负阻抗变换器实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "负阻抗变换器实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open负阻抗变换器实验内容() {
	Control^ wndf = GetWindowsChild("负阻抗变换器实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		负阻抗变换器实验内容^ f = gcnew 负阻抗变换器实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "负阻抗变换器实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void 主窗体::openRC网络的频率特性实验目的() {
	Control^ wndf = GetWindowsChild("RC网络的频率特性实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC网络的频率特性实验目的^ f = gcnew RC网络的频率特性实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC网络的频率特性实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openRC网络的频率特性实验原理() {
	Control^ wndf = GetWindowsChild("RC网络的频率特性实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC网络的频率特性实验原理^ f = gcnew RC网络的频率特性实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC网络的频率特性实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::openRC网络的频率特性实验器件() {
	Control^ wndf = GetWindowsChild("RC网络的频率特性实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC网络的频率特性实验器件^ f = gcnew RC网络的频率特性实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC网络的频率特性实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::openRC网络的频率特性实验内容() {
	Control^ wndf = GetWindowsChild("RC网络的频率特性实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		RC网络的频率特性实验内容^ f = gcnew RC网络的频率特性实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RC网络的频率特性实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void 主窗体::open仪表量程的扩展实验目的() {
	Control^ wndf = GetWindowsChild("仪表量程的扩展实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		仪表量程的扩展实验目的^ f = gcnew 仪表量程的扩展实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "仪表量程的扩展实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open仪表量程的扩展实验原理() {
	Control^ wndf = GetWindowsChild("仪表量程的扩展实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		仪表量程的扩展实验原理^ f = gcnew 仪表量程的扩展实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "仪表量程的扩展实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open仪表量程的扩展实验器件() {
	Control^ wndf = GetWindowsChild("仪表量程的扩展实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		仪表量程的扩展实验器件^ f = gcnew 仪表量程的扩展实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "仪表量程的扩展实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open仪表量程的扩展实验内容() {
	Control^ wndf = GetWindowsChild("仪表量程的扩展实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		仪表量程的扩展实验内容^ f = gcnew 仪表量程的扩展实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "仪表量程的扩展实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}


void 主窗体::open基本电工仪表的使用与测量误差的计算实验目的() {
	Control^ wndf = GetWindowsChild("基本电工仪表的使用与测量误差的计算实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基本电工仪表的使用与测量误差的计算实验目的^ f = gcnew 基本电工仪表的使用与测量误差的计算实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "基本电工仪表的使用与测量误差的计算实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
void 主窗体::open基本电工仪表的使用与测量误差的计算实验原理() {
	Control^ wndf = GetWindowsChild("基本电工仪表的使用与测量误差的计算实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基本电工仪表的使用与测量误差的计算实验原理^ f = gcnew 基本电工仪表的使用与测量误差的计算实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "基本电工仪表的使用与测量误差的计算实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open基本电工仪表的使用与测量误差的计算实验器件() {
	Control^ wndf = GetWindowsChild("基本电工仪表的使用与测量误差的计算实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基本电工仪表的使用与测量误差的计算实验器件^ f = gcnew 基本电工仪表的使用与测量误差的计算实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "基本电工仪表的使用与测量误差的计算实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open基本电工仪表的使用与测量误差的计算实验内容() {
	Control^ wndf = GetWindowsChild("基本电工仪表的使用与测量误差的计算实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		基本电工仪表的使用与测量误差的计算实验内容^ f = gcnew 基本电工仪表的使用与测量误差的计算实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "基本电工仪表的使用与测量误差的计算实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}



void 主窗体::open功率因数及相序的测量实验目的() {
	Control^ wndf = GetWindowsChild("功率因数及相序的测量实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		功率因数及相序的测量实验目的^ f = gcnew 功率因数及相序的测量实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "功率因数及相序的测量实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open功率因数及相序的测量实验原理() {
	Control^ wndf = GetWindowsChild("功率因数及相序的测量实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		功率因数及相序的测量实验原理^ f = gcnew 功率因数及相序的测量实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "功率因数及相序的测量实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open功率因数及相序的测量实验器件() {
	Control^ wndf = GetWindowsChild("功率因数及相序的测量实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		功率因数及相序的测量实验器件^ f = gcnew 功率因数及相序的测量实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "功率因数及相序的测量实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open功率因数及相序的测量实验内容() {
	Control^ wndf = GetWindowsChild("功率因数及相序的测量实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		功率因数及相序的测量实验内容^ f = gcnew 功率因数及相序的测量实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "功率因数及相序的测量实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}




void 主窗体::open互感器实验目的() {
	Control^ wndf = GetWindowsChild("互感器实验目的");
	show实验目的F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		互感器实验目的^ f = gcnew 互感器实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "互感器实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open互感器实验原理() {
	Control^ wndf = GetWindowsChild("互感器实验原理");
	show实验原理F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		互感器实验原理^ f = gcnew 互感器实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "互感器实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}

}
void 主窗体::open互感器实验器件() {
	Control^ wndf = GetWindowsChild("互感器实验器件");
	show实验器件F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		互感器实验器件^ f = gcnew 互感器实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "互感器实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}

void 主窗体::open互感器实验内容() {
	Control^ wndf = GetWindowsChild("互感器实验内容");
	show实验内容F();
	if (wndf == nullptr) {
		CloseAllMidchild();
		互感器实验内容^ f = gcnew 互感器实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "互感器实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		wndf->BringToFront();
		return;
	}
}
