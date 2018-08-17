#include "三相交流电路电压电流的测量实验内容.h"
#include "data_transf.h"


using namespace 电工电路试验台;

void 三相交流电路电压电流的测量实验内容::SendData() {
	int TrialCode = 16;
	ST_三相交流电路电压电流的测量 s;
	memset(&s, 0x00, sizeof(ST_三相交流电路电压电流的测量));
	s = Load_Grade_data();
	s.ti = trialInfo;
	s.ti.TrialCode = TrialCode;
	s.ti.totalscore = -1;
	snprintf(s.ti.TrialName, sizeof(s.ti.TrialName), "%s", Grades[TrialCode].c_str());
	snprintf(s.ti.date, sizeof(s.ti.TrialName), "%s", DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
	snprintf(s.ti.SeriaNumber, sizeof(s.ti.SeriaNumber), "%s", GenerateOrderNumber());
	data_transf d;
	GradesHead H;
	H.TrialCode = TrialCode;
	snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[TrialCode].c_str());
	snprintf(H.MsgType, sizeof(H.MsgType), "GRADE");
	if (!d.open()) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_三相交流电路电压电流的测量)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_三相交流电路电压电流的测量 三相交流电路电压电流的测量实验内容::Load_Grade_data() {
	ST_三相交流电路电压电流的测量 d;
	memset(&d, 0x00, sizeof(ST_三相交流电路电压电流的测量));

	snprintf(d.Trial1_Line1_IA,10, "%s", labelTrial1_Line1_IA->Text);
	snprintf(d.Trial1_Line2_IA,10, "%s", labelTrial1_Line2_IA->Text);
	snprintf(d.Trial1_Line3_IA,10, "%s", labelTrial1_Line3_IA->Text);
	snprintf(d.Trial1_Line4_IA,10, "%s", labelTrial1_Line4_IA->Text);
	snprintf(d.Trial1_Line5_IA,10, "%s", labelTrial1_Line5_IA->Text);

	snprintf(d.Trial1_Line1_IB,10, "%s", labelTrial1_Line1_IB->Text);
	snprintf(d.Trial1_Line2_IB,10, "%s", labelTrial1_Line2_IB->Text);
	snprintf(d.Trial1_Line3_IB,10, "%s", labelTrial1_Line3_IB->Text);
	snprintf(d.Trial1_Line4_IB,10, "%s", labelTrial1_Line4_IB->Text);
	snprintf(d.Trial1_Line5_IB,10, "%s", labelTrial1_Line5_IB->Text);

	snprintf(d.Trial1_Line1_IC,10, "%s", labelTrial1_Line1_IC->Text);
	snprintf(d.Trial1_Line2_IC,10, "%s", labelTrial1_Line2_IC->Text);
	snprintf(d.Trial1_Line3_IC,10, "%s", labelTrial1_Line3_IC->Text);
	snprintf(d.Trial1_Line4_IC,10, "%s", labelTrial1_Line4_IC->Text);
	snprintf(d.Trial1_Line5_IC,10, "%s", labelTrial1_Line5_IC->Text);

	snprintf(d.Trial1_Line1_UAB,10, "%s", labelTrial1_Line1_UAB->Text);
	snprintf(d.Trial1_Line2_UAB,10, "%s", labelTrial1_Line2_UAB->Text);
	snprintf(d.Trial1_Line3_UAB,10, "%s", labelTrial1_Line3_UAB->Text);
	snprintf(d.Trial1_Line4_UAB,10, "%s", labelTrial1_Line4_UAB->Text);
	snprintf(d.Trial1_Line5_UAB,10, "%s", labelTrial1_Line5_UAB->Text);

	snprintf(d.Trial1_Line1_UBC,10, "%s", labelTrial1_Line1_UBC->Text);
	snprintf(d.Trial1_Line2_UBC,10, "%s", labelTrial1_Line2_UBC->Text);
	snprintf(d.Trial1_Line3_UBC,10, "%s", labelTrial1_Line3_UBC->Text);
	snprintf(d.Trial1_Line4_UBC,10, "%s", labelTrial1_Line4_UBC->Text);
	snprintf(d.Trial1_Line5_UBC,10, "%s", labelTrial1_Line5_UBC->Text);

	snprintf(d.Trial1_Line1_UCA,10, "%s", labelTrial1_Line1_UCA->Text);
	snprintf(d.Trial1_Line2_UCA,10, "%s", labelTrial1_Line2_UCA->Text);
	snprintf(d.Trial1_Line3_UCA,10, "%s", labelTrial1_Line3_UCA->Text);
	snprintf(d.Trial1_Line4_UCA,10, "%s", labelTrial1_Line4_UCA->Text);
	snprintf(d.Trial1_Line5_UCA,10, "%s", labelTrial1_Line5_UCA->Text);

	snprintf(d.Trial1_Line1_UAO,10, "%s", labelTrial1_Line1_UAO->Text);
	snprintf(d.Trial1_Line2_UAO,10, "%s", labelTrial1_Line2_UAO->Text);
	snprintf(d.Trial1_Line3_UAO,10, "%s", labelTrial1_Line3_UAO->Text);
	snprintf(d.Trial1_Line4_UAO,10, "%s", labelTrial1_Line4_UAO->Text);
	snprintf(d.Trial1_Line5_UAO,10, "%s", labelTrial1_Line5_UAO->Text);

	snprintf(d.Trial1_Line1_UBO,10, "%s", labelTrial1_Line1_UBO->Text);
	snprintf(d.Trial1_Line2_UBO,10, "%s", labelTrial1_Line2_UBO->Text);
	snprintf(d.Trial1_Line3_UBO,10, "%s", labelTrial1_Line3_UBO->Text);
	snprintf(d.Trial1_Line4_UBO,10, "%s", labelTrial1_Line4_UBO->Text);
	snprintf(d.Trial1_Line5_UBO,10, "%s", labelTrial1_Line5_UBO->Text);

	snprintf(d.Trial1_Line1_UCO,10, "%s", labelTrial1_Line1_UCO->Text);
	snprintf(d.Trial1_Line2_UCO,10, "%s", labelTrial1_Line2_UCO->Text);
	snprintf(d.Trial1_Line3_UCO,10, "%s", labelTrial1_Line3_UCO->Text);
	snprintf(d.Trial1_Line4_UCO,10, "%s", labelTrial1_Line4_UCO->Text);
	snprintf(d.Trial1_Line5_UCO,10, "%s", labelTrial1_Line5_UCO->Text);

	snprintf(d.Trial1_Line1_IO,10, "%s", labelTrial1_Line1_IO->Text);
	snprintf(d.Trial1_Line2_IO,10, "%s", labelTrial1_Line2_IO->Text);
	snprintf(d.Trial1_Line3_IO,10, "%s", labelTrial1_Line3_IO->Text);
	snprintf(d.Trial1_Line4_IO,10, "%s", labelTrial1_Line4_IO->Text);
	snprintf(d.Trial1_Line5_IO,10, "%s", labelTrial1_Line5_IO->Text);

	snprintf(d.lTrial1_Line1_UNO,10, "%s", labelTrial1_Line1_UNO->Text);
	snprintf(d.lTrial1_Line2_UNO,10, "%s", labelTrial1_Line2_UNO->Text);
	snprintf(d.lTrial1_Line3_UNO,10, "%s", labelTrial1_Line3_UNO->Text);
	snprintf(d.lTrial1_Line4_UNO,10, "%s", labelTrial1_Line4_UNO->Text);
	snprintf(d.lTrial1_Line5_UNO,10, "%s", labelTrial1_Line5_UNO->Text);

	snprintf(d.Trial2_Line1_UAB,10, "%s", labelTrial2_Line1_UAB->Text);
	snprintf(d.Trial2_Line2_UAB,10, "%s", labelTrial2_Line2_UAB->Text);

	snprintf(d.Trial2_Line1_UBC,10, "%s", labelTrial2_Line1_UBC->Text);
	snprintf(d.Trial2_Line2_UBC,10, "%s", labelTrial2_Line2_UBC->Text);

	snprintf(d.Trial2_Line1_UCA,10, "%s", labelTrial2_Line1_UCA->Text);
	snprintf(d.Trial2_Line2_UCA,10, "%s", labelTrial2_Line2_UCA->Text);

	snprintf(d.Trial2_Line1_IA,10, "%s", labelTrial2_Line1_IA->Text);
	snprintf(d.Trial2_Line2_IA,10, "%s", labelTrial2_Line2_IA->Text);

	snprintf(d.Trial2_Line1_IB,10, "%s", labelTrial2_Line1_IB->Text);
	snprintf(d.Trial2_Line2_IB,10, "%s", labelTrial2_Line2_IB->Text);

	snprintf(d.Trial2_Line1_IC,10, "%s", labelTrial2_Line1_IC->Text);
	snprintf(d.Trial2_Line2_IC,10, "%s", labelTrial2_Line2_IC->Text);

	snprintf(d.Trial2_Line1_IAB,10, "%s", labelTrial2_Line1_IAB->Text);
	snprintf(d.Trial2_Line2_IAB,10, "%s", labelTrial2_Line2_IAB->Text);

	snprintf(d.Trial2_Line1_IBC,10, "%s", labelTrial2_Line1_IBC->Text);
	snprintf(d.Trial2_Line2_IBC,10, "%s", labelTrial2_Line2_IBC->Text);

	snprintf(d.Trial2_Line1_ICA,10, "%s", labelTrial2_Line1_ICA->Text);
	snprintf(d.Trial2_Line2_ICA,10, "%s", labelTrial2_Line2_ICA->Text);
	return d;
}


