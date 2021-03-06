
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
	case 11: open电路状态轨迹的观测实验目的(); break;
	case 12: openRLC元件阻抗特性的测定实验目的(); break;
	case 13: openRLC串联谐振电路的研究实验目的(); break;
	case 14: open单相铁心变压器特性的测试实验目的(); break;
	case 15: open单相电度表实验实验目的(); break;
	case 16: open三相交流电路电压电流的测量实验目的(); break;
	case 17: open日光灯功率因数的提高实验目的(); break;
	case 18: open回转器实验目的(); break;
	case 19: open三相电路功率的测量实验目的(); break;
	case 20: open负阻抗变换器实验目的(); break;
	case 21: openRC网络的频率特性实验目的(); break;
	case 22: open仪表量程的扩展实验目的(); break;
	case 23: open互感器实验目的(); break;
	case 24: open基本电工仪表的使用与测量误差的计算实验目的(); break;
	case 25: open功率因数及相序的测量实验目的(); break;
	}
}
#include "实验汇总头文件.h"



void 主窗体::CloseAllMidchild() {
	//for each(Control^ f in this->panel4->Controls)
	//{
	//	if (f->Name == "戴维南定理实验内容")
	//	{
	//		戴维南定理实验内容^ 戴维南定理实验内容Wnd = (戴维南定理实验内容^)f;
	//		戴维南定理实验内容Wnd->Close();
	//	}
	//}
	//panel4->Controls->Clear();
	//for each(Form^ f in MdiChildren)
	//{
	//	f->Close();
	//}
}

Control^ 主窗体::GetWindowsChild(String ^FormName) {
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
	case 11: open电路状态轨迹的观测实验目的(); break;
	case 12: openRLC元件阻抗特性的测定实验目的(); break;
	case 13: openRLC串联谐振电路的研究实验目的(); break;
	case 14: open单相铁心变压器特性的测试实验目的(); break;
	case 15: open单相电度表实验实验目的(); break;
	case 16: open三相交流电路电压电流的测量实验目的(); break;
	case 17: open日光灯功率因数的提高实验目的(); break;
	case 18: open回转器实验目的(); break;
	case 19: open三相电路功率的测量实验目的(); break;
	case 20: open负阻抗变换器实验目的(); break;
	case 21: openRC网络的频率特性实验目的(); break;
	case 22: open仪表量程的扩展实验目的(); break;
	case 23: open互感器实验目的(); break;
	case 24: open基本电工仪表的使用与测量误差的计算实验目的(); break;
	case 25: open功率因数及相序的测量实验目的(); break;
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
	case 11: open电路状态轨迹的观测实验原理(); break;
	case 12: openRLC元件阻抗特性的测定实验原理(); break;
	case 13: openRLC串联谐振电路的研究实验原理(); break;
	case 14: open单相铁心变压器特性的测试实验原理(); break;
	case 15: open单相电度表实验实验原理(); break;
	case 16: open三相交流电路电压电流的测量实验原理(); break;
	case 17: open日光灯功率因数的提高实验原理(); break;
	case 18: open回转器实验原理(); break;
	case 19: open三相电路功率的测量实验原理(); break;
	case 20: open负阻抗变换器实验原理(); break;
	case 21: openRC网络的频率特性实验原理(); break;
	case 22: open仪表量程的扩展实验原理(); break;
	case 23: open互感器实验原理(); break;
	case 24: open基本电工仪表的使用与测量误差的计算实验原理(); break;
	case 25: open功率因数及相序的测量实验原理(); break;
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
	case 11: open电路状态轨迹的观测实验器件(); break;
	case 12: openRLC元件阻抗特性的测定实验器件(); break;
	case 13: openRLC串联谐振电路的研究实验器件(); break;
	case 14: open单相铁心变压器特性的测试实验器件(); break;
	case 15: open单相电度表实验实验器件(); break;
	case 16: open三相交流电路电压电流的测量实验器件(); break;
	case 17: open日光灯功率因数的提高实验器件(); break;
	case 18: open回转器实验器件(); break;
	case 19: open三相电路功率的测量实验器件(); break;
	case 20: open负阻抗变换器实验器件(); break;
	case 21: openRC网络的频率特性实验器件(); break;
	case 22: open仪表量程的扩展实验器件(); break;
	case 23: open互感器实验器件(); break;
	case 24: open基本电工仪表的使用与测量误差的计算实验器件(); break;
	case 25: open功率因数及相序的测量实验器件(); break;
	}
}


void  主窗体::实验内容click(int index) {
	switch (index) {
	case 1: {
		open元件伏安特性的测试实验内容(); 
		lcc.SendComputerInfo(Grades[1] + "正在实验中");
		NowTrial::NowTrailCode = 1;
		break;
	}
	case 2: {
		open基尔霍夫定律实验内容();
		lcc.SendComputerInfo(Grades[2] + "正在实验中");
		NowTrial::NowTrailCode = 2;
		break;
	}
	case 3: {
		open叠加原理实验内容();
		lcc.SendComputerInfo(Grades[3] + "正在实验中");
		NowTrial::NowTrailCode = 3;
		break;
	}
	case 4: {
		lcc.SendComputerInfo(Grades[4] + "正在实验中");
		NowTrial::NowTrailCode = 4;
		open戴维南定理实验内容();
		break;
	}
	case 5: {
		open电压源与电流源的等效变换实验内容();
		lcc.SendComputerInfo(Grades[5] + "正在实验中");
		NowTrial::NowTrailCode = 5;
		break;
	}
	case 6: {
		open一阶电路的响应测试实验内容();
		lcc.SendComputerInfo(Grades[6] + "正在实验中");
		NowTrial::NowTrailCode = 6;
		break;
	}
	case 7: {
		open二阶动态电路响应的研究实验内容();
		lcc.SendComputerInfo(Grades[7] + "正在实验中");
		NowTrial::NowTrailCode = 7;
		break;
	}
	case 8: {
		openVCVS实验实验内容();
		lcc.SendComputerInfo(Grades[8] + "正在实验中");
		NowTrial::NowTrailCode = 8;
		break;
	}
	case 9: {
		open二端口网络的研究实验内容();
		lcc.SendComputerInfo(Grades[9] + "正在实验中");
		NowTrial::NowTrailCode = 9;
		break;
	}
	case 10: {
		open最大功率传输条件的测定实验内容();
		lcc.SendComputerInfo(Grades[10] + "正在实验中");
		NowTrial::NowTrailCode = 10;
		break;
	}
	case 11: {
		open电路状态轨迹的观测实验内容();
		lcc.SendComputerInfo(Grades[11] + "正在实验中");
		NowTrial::NowTrailCode = 11;
		break;
	}
	case 12: {
		openRLC元件阻抗特性的测定实验内容();
		lcc.SendComputerInfo(Grades[12] + "正在实验中");
		NowTrial::NowTrailCode = 12;
		break;
	}
	case 13: {
		openRLC串联谐振电路的研究实验内容(); 
		lcc.SendComputerInfo(Grades[13] + "正在实验中");
		NowTrial::NowTrailCode = 13;
		break;
	}
	case 14: {
		open单相铁心变压器特性的测试实验内容();
		lcc.SendComputerInfo(Grades[14] + "正在实验中");
		NowTrial::NowTrailCode = 14;
		break;
	}
	case 15: {
		open单相电度表实验实验内容();
		lcc.SendComputerInfo(Grades[15] + "正在实验中");
		NowTrial::NowTrailCode = 15;
		break;
	}
	case 16: {
		open三相交流电路电压电流的测量实验内容();
		lcc.SendComputerInfo(Grades[16] + "正在实验中");
		NowTrial::NowTrailCode = 16;
		break;
	}
	case 17: {
		open日光灯功率因数的提高实验内容();
		lcc.SendComputerInfo(Grades[17] + "正在实验中");
		NowTrial::NowTrailCode = 17;
		break;
	}
	case 18: {
		open回转器实验内容();
		lcc.SendComputerInfo(Grades[18] + "正在实验中");
		NowTrial::NowTrailCode = 18;
		break;
	}
	case 19: {
		open三相电路功率的测量实验内容();
		lcc.SendComputerInfo(Grades[19] + "正在实验中");
		NowTrial::NowTrailCode = 19;
		break;
	}
	case 20: {
		open负阻抗变换器实验内容();
		lcc.SendComputerInfo(Grades[20] + "正在实验中");
		NowTrial::NowTrailCode = 20;
		break;
	}
	case 21: {
		openRC网络的频率特性实验内容();
		lcc.SendComputerInfo(Grades[21] + "正在实验中");
		NowTrial::NowTrailCode = 21;
		break;
	}
	case 22: {
		open仪表量程的扩展实验内容();
		lcc.SendComputerInfo(Grades[22] + "正在实验中");
		NowTrial::NowTrailCode = 22;
		break;
	}
	case 23: {
		open互感器实验内容();
		lcc.SendComputerInfo(Grades[23] + "正在实验中");
		NowTrial::NowTrailCode = 23;
		break;
	}
	case 24: {
		open基本电工仪表的使用与测量误差的计算实验内容();
		lcc.SendComputerInfo(Grades[24] + "正在实验中");
		NowTrial::NowTrailCode = 24;
		break;
	}
	case 25: {
		open功率因数及相序的测量实验内容();
		lcc.SendComputerInfo(Grades[25] + "正在实验中");
		NowTrial::NowTrailCode = 25;
		break;
	}
	}

}
