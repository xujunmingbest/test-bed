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
void 主窗体::open戴维南定理实验目的() {
	bool f = GetWindowsChild("戴维南定理实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		戴维南定理实验目的^ f = gcnew 戴维南定理实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open戴维南定理实验原理() {
	bool f = GetWindowsChild("戴维南定理实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		戴维南定理实验原理^ f = gcnew 戴维南定理实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open戴维南定理实验器件() {
	bool f = GetWindowsChild("戴维南定理实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		戴维南定理实验器件^ f = gcnew 戴维南定理实验器件;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open戴维南定理实验内容() {
	bool f = GetWindowsChild("戴维南定理实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		戴维南定理实验内容^ f = gcnew 戴维南定理实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "戴维南定理实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open电压源与电流源的等效变换实验目的() {
	bool f = GetWindowsChild("电压源与电流源的等效变换实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验目的^ f = gcnew 电压源与电流源的等效变换实验目的;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open电压源与电流源的等效变换实验原理() {
	bool f = GetWindowsChild("电压源与电流源的等效变换实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验原理^ f = gcnew 电压源与电流源的等效变换实验原理;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open电压源与电流源的等效变换实验器件() {
	bool f = GetWindowsChild("电压源与电流源的等效变换实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验器件^ f = gcnew 电压源与电流源的等效变换实验器件;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open电压源与电流源的等效变换实验内容() {
	bool f = GetWindowsChild("电压源与电流源的等效变换实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		电压源与电流源的等效变换实验内容^ f = gcnew 电压源与电流源的等效变换实验内容;
		f->MdiParent = this;

		f->Parent = this->panel4;
		f->Name = "电压源与电流源的等效变换实验内容";
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


void 主窗体::open二阶动态电路响应的研究实验目的() {
	bool f = GetWindowsChild("二阶动态电路响应的研究实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验目的^ f = gcnew 二阶动态电路响应的研究实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}

void 主窗体::open二阶动态电路响应的研究实验原理() {
	bool f = GetWindowsChild("二阶动态电路响应的研究实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验原理^ f = gcnew 二阶动态电路响应的研究实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open二阶动态电路响应的研究实验器件() {
	bool f = GetWindowsChild("二阶动态电路响应的研究实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验器件^ f = gcnew 二阶动态电路响应的研究实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void 主窗体::open二阶动态电路响应的研究实验内容() {
	bool f = GetWindowsChild("二阶动态电路响应的研究实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		二阶动态电路响应的研究实验内容^ f = gcnew 二阶动态电路响应的研究实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二阶动态电路响应的研究实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}


void 主窗体::openVCVS实验实验目的() {
	bool f = GetWindowsChild("VCVS实验实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		VCVS实验实验目的^ f = gcnew VCVS实验实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::openVCVS实验实验原理() {
	bool f = GetWindowsChild("VCVS实验实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		VCVS实验实验原理^ f = gcnew VCVS实验实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::openVCVS实验实验器件() {
	bool f = GetWindowsChild("VCVS实验实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		VCVS实验实验器件^ f = gcnew VCVS实验实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::openVCVS实验实验内容() {
	bool f = GetWindowsChild("VCVS实验实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		VCVS实验实验内容^ f = gcnew VCVS实验实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "VCVS实验实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}


void 主窗体::open二端口网络的研究实验目的() {
	bool f = GetWindowsChild("二端口网络的研究实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		二端口网络的研究实验目的^ f = gcnew 二端口网络的研究实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open二端口网络的研究实验原理() {
	bool f = GetWindowsChild("二端口网络的研究实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		二端口网络的研究实验原理^ f = gcnew 二端口网络的研究实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open二端口网络的研究实验器件() {
	bool f = GetWindowsChild("二端口网络的研究实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		二端口网络的研究实验器件^ f = gcnew 二端口网络的研究实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open二端口网络的研究实验内容() {
	bool f = GetWindowsChild("二端口网络的研究实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		二端口网络的研究实验内容^ f = gcnew 二端口网络的研究实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "二端口网络的研究实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}



void 主窗体::open最大功率传输条件的测定实验目的() {
	bool f = GetWindowsChild("最大功率传输条件的测定实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		最大功率传输条件的测定实验目的^ f = gcnew 最大功率传输条件的测定实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open最大功率传输条件的测定实验原理() {
	bool f = GetWindowsChild("最大功率传输条件的测定实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		最大功率传输条件的测定实验原理^ f = gcnew 最大功率传输条件的测定实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open最大功率传输条件的测定实验器件() {
	bool f = GetWindowsChild("最大功率传输条件的测定实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		最大功率传输条件的测定实验器件^ f = gcnew 最大功率传输条件的测定实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open最大功率传输条件的测定实验内容() {
	bool f = GetWindowsChild("最大功率传输条件的测定实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		最大功率传输条件的测定实验内容^ f = gcnew 最大功率传输条件的测定实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "最大功率传输条件的测定实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}





void 主窗体::open电路状态轨迹的观测实验目的() {
	bool f = GetWindowsChild("电路状态轨迹的观测实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		电路状态轨迹的观测实验目的^ f = gcnew 电路状态轨迹的观测实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open电路状态轨迹的观测实验原理() {
	bool f = GetWindowsChild("电路状态轨迹的观测实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		电路状态轨迹的观测实验原理^ f = gcnew 电路状态轨迹的观测实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open电路状态轨迹的观测实验器件() {
	bool f = GetWindowsChild("电路状态轨迹的观测实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		电路状态轨迹的观测实验器件^ f = gcnew 电路状态轨迹的观测实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::open电路状态轨迹的观测实验内容() {
	bool f = GetWindowsChild("电路状态轨迹的观测实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		电路状态轨迹的观测实验内容^ f = gcnew 电路状态轨迹的观测实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "电路状态轨迹的观测实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}





void 主窗体::openRLC元件阻抗特性的测定实验目的() {
	bool f = GetWindowsChild("RLC元件阻抗特性的测定实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验目的^ f = gcnew RLC元件阻抗特性的测定实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::openRLC元件阻抗特性的测定实验原理() {
	bool f = GetWindowsChild("RLC元件阻抗特性的测定实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验原理^ f = gcnew RLC元件阻抗特性的测定实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::openRLC元件阻抗特性的测定实验器件() {
	bool f = GetWindowsChild("RLC元件阻抗特性的测定实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验器件^ f = gcnew RLC元件阻抗特性的测定实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void 主窗体::openRLC元件阻抗特性的测定实验内容() {
	bool f = GetWindowsChild("RLC元件阻抗特性的测定实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		RLC元件阻抗特性的测定实验内容^ f = gcnew RLC元件阻抗特性的测定实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC元件阻抗特性的测定实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}


}

void 主窗体::openRLC串联谐振电路的研究实验目的() {
	bool f = GetWindowsChild("RLC串联谐振电路的研究实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验目的^ f = gcnew RLC串联谐振电路的研究实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::openRLC串联谐振电路的研究实验原理() {
	bool f = GetWindowsChild("RLC串联谐振电路的研究实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验原理^ f = gcnew RLC串联谐振电路的研究实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::openRLC串联谐振电路的研究实验器件() {
	bool f = GetWindowsChild("RLC串联谐振电路的研究实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验器件^ f = gcnew RLC串联谐振电路的研究实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::openRLC串联谐振电路的研究实验内容() {
	bool f = GetWindowsChild("RLC串联谐振电路的研究实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		RLC串联谐振电路的研究实验内容^ f = gcnew RLC串联谐振电路的研究实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "RLC串联谐振电路的研究实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}



void 主窗体::open单相铁心变压器特性的测试实验目的() {
	bool f = GetWindowsChild("单相铁心变压器特性的测试实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验目的^ f = gcnew 单相铁心变压器特性的测试实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open单相铁心变压器特性的测试实验原理() {
	bool f = GetWindowsChild("单相铁心变压器特性的测试实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验原理^ f = gcnew 单相铁心变压器特性的测试实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open单相铁心变压器特性的测试实验器件() {
	bool f = GetWindowsChild("单相铁心变压器特性的测试实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验器件^ f = gcnew 单相铁心变压器特性的测试实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open单相铁心变压器特性的测试实验内容() {
	bool f = GetWindowsChild("单相铁心变压器特性的测试实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		单相铁心变压器特性的测试实验内容^ f = gcnew 单相铁心变压器特性的测试实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相铁心变压器特性的测试实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}




void 主窗体::open单相电度表实验实验目的() {
	bool f = GetWindowsChild("单相电度表实验实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		单相电度表实验实验目的^ f = gcnew 单相电度表实验实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open单相电度表实验实验原理() {
	bool f = GetWindowsChild("单相电度表实验实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		单相电度表实验实验原理^ f = gcnew 单相电度表实验实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open单相电度表实验实验器件() {
	bool f = GetWindowsChild("单相电度表实验实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		单相电度表实验实验器件^ f = gcnew 单相电度表实验实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open单相电度表实验实验内容() {
	bool f = GetWindowsChild("单相电度表实验实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		单相电度表实验实验内容^ f = gcnew 单相电度表实验实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "单相电度表实验实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}




void 主窗体::open三相交流电路电压电流的测量实验目的() {
	bool f = GetWindowsChild("三相交流电路电压电流的测量实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验目的^ f = gcnew 三相交流电路电压电流的测量实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open三相交流电路电压电流的测量实验原理() {
	bool f = GetWindowsChild("三相交流电路电压电流的测量实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验原理^ f = gcnew 三相交流电路电压电流的测量实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open三相交流电路电压电流的测量实验器件() {
	bool f = GetWindowsChild("三相交流电路电压电流的测量实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验器件^ f = gcnew 三相交流电路电压电流的测量实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open三相交流电路电压电流的测量实验内容() {
	bool f = GetWindowsChild("三相交流电路电压电流的测量实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		三相交流电路电压电流的测量实验内容^ f = gcnew 三相交流电路电压电流的测量实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "三相交流电路电压电流的测量实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


void 主窗体::open日光灯功率因数的提高实验目的() {
	bool f = GetWindowsChild("日光灯功率因数的提高实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		日光灯功率因数的提高实验目的^ f = gcnew 日光灯功率因数的提高实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open日光灯功率因数的提高实验原理() {
	bool f = GetWindowsChild("日光灯功率因数的提高实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		日光灯功率因数的提高实验原理^ f = gcnew 日光灯功率因数的提高实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open日光灯功率因数的提高实验器件() {
	bool f = GetWindowsChild("日光灯功率因数的提高实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		日光灯功率因数的提高实验器件^ f = gcnew 日光灯功率因数的提高实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open日光灯功率因数的提高实验内容() {
	bool f = GetWindowsChild("日光灯功率因数的提高实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		日光灯功率因数的提高实验内容^ f = gcnew 日光灯功率因数的提高实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "日光灯功率因数的提高实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


void 主窗体::open回转器实验目的() {
	bool f = GetWindowsChild("回转器实验目的");
	show实验目的F();
	if (!f) {
		CloseAllMidchild();
		回转器实验目的^ f = gcnew 回转器实验目的;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验目的";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open回转器实验原理() {
	bool f = GetWindowsChild("回转器实验原理");
	show实验原理F();
	if (!f) {
		CloseAllMidchild();
		回转器实验原理^ f = gcnew 回转器实验原理;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}
void 主窗体::open回转器实验器件() {
	bool f = GetWindowsChild("回转器实验器件");
	show实验器件F();
	if (!f) {
		CloseAllMidchild();
		回转器实验器件^ f = gcnew 回转器实验器件;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}

void 主窗体::open回转器实验内容() {
	bool f = GetWindowsChild("回转器实验内容");
	show实验内容F();
	if (!f) {
		CloseAllMidchild();
		回转器实验内容^ f = gcnew 回转器实验内容;
		f->MdiParent = this;
		f->Parent = this->panel4;
		f->Name = "回转器实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}