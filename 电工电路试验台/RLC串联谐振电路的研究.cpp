#include "RLC串联谐振电路的研究实验内容.h"

#include "data_transf.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#pragma comment(lib,"E:/c++/libfilesql/Release/libfilesql.lib")
using namespace System::Windows::Forms::DataVisualization::Charting;

using namespace 电工电路试验台;

void RLC串联谐振电路的研究实验内容::SendData() {
	int TrialCode = 13;
	ST_RLC串联谐振电路的研究 s;
	memset(&s, 0x00, sizeof(ST_RLC串联谐振电路的研究));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_RLC串联谐振电路的研究)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_RLC串联谐振电路的研究 RLC串联谐振电路的研究实验内容::Load_Grade_data() {
	ST_RLC串联谐振电路的研究 d;
	memset(&d, 0x00, sizeof(ST_RLC串联谐振电路的研究));
	fileSql f;

	string trial1bmp = f.Readfile(T_to_string(Trial1PT_name));
	if (trial1bmp.length() == sizeof(d.Trial1Bmp))
		memcpy(d.Trial1Bmp, trial1bmp.c_str(), sizeof(d.Trial1Bmp));
	snprintf(d.summing_up, 100, "%s", textBox结论->Text);

	snprintf(d.Trial2_F, 10, "%s", textBoxTrial2_F->Text);
	snprintf(d. Trial2_Uc, 10, "%s", textBoxTrial2_F->Text);
	snprintf(d. Trial2_UL, 10, "%s", textBoxTrial2_F->Text);

	snprintf(d.Trial3_F1,10,"%s", textBoxTrial5_F1->Text);
	snprintf(d.Trial3_F2,10,"%s", textBoxTrial5_F2->Text);
	snprintf(d.Trial3_F3,10,"%s", textBoxTrial5_F3->Text);
	snprintf(d.Trial3_F4,10,"%s", textBoxTrial5_F4->Text);
	snprintf(d.Trial3_F5,10,"%s", textBoxTrial5_F5->Text);
	snprintf(d.Trial3_F6,10,"%s", textBoxTrial5_F6->Text);
	snprintf(d.Trial3_F7,10,"%s", textBoxTrial5_F7->Text);
	snprintf(d.Trial3_F8,10,"%s", textBoxTrial5_F8->Text);

	snprintf(d.Trial3_U0_1,10,"%s",labelTrial3_U0_1->Text);
	snprintf(d.Trial3_U0_2,10,"%s", labelTrial3_U0_2->Text);
	snprintf(d.Trial3_U0_3,10,"%s", labelTrial3_U0_3->Text);
	snprintf(d.Trial3_U0_4,10,"%s", labelTrial3_U0_4->Text);
	snprintf(d.Trial3_U0_5,10,"%s", labelTrial3_U0_5->Text);
	snprintf(d.Trial3_U0_6,10,"%s", labelTrial3_U0_6->Text);
	snprintf(d.Trial3_U0_7,10,"%s", labelTrial3_U0_7->Text);
	snprintf(d.Trial3_U0_8,10,"%s", labelTrial3_U0_8->Text);


	snprintf(d.Trial3_UL_1,10,"%s",labelTrial3_UL_1->Text);
	snprintf(d.Trial3_UL_2,10,"%s", labelTrial3_UL_2->Text);
	snprintf(d.Trial3_UL_3,10,"%s", labelTrial3_UL_3->Text);
	snprintf(d.Trial3_UL_4,10,"%s", labelTrial3_UL_4->Text);
	snprintf(d.Trial3_UL_5,10,"%s", labelTrial3_UL_5->Text);
	snprintf(d.Trial3_UL_6,10,"%s", labelTrial3_UL_6->Text);
	snprintf(d.Trial3_UL_7,10,"%s", labelTrial3_UL_7->Text);
	snprintf(d.Trial3_UL_8,10,"%s", labelTrial3_UL_8->Text);


	snprintf(d.Trial3_Uc_1,10,"%s",labelTrial3_Uc_1->Text);
	snprintf(d.Trial3_Uc_2,10,"%s", labelTrial3_Uc_2->Text);
	snprintf(d.Trial3_Uc_3,10,"%s", labelTrial3_Uc_3->Text);
	snprintf(d.Trial3_Uc_4,10,"%s", labelTrial3_Uc_4->Text);
	snprintf(d.Trial3_Uc_5,10,"%s", labelTrial3_Uc_5->Text);
	snprintf(d.Trial3_Uc_6,10,"%s", labelTrial3_Uc_6->Text);
	snprintf(d.Trial3_Uc_7,10,"%s", labelTrial3_Uc_7->Text);
	snprintf(d.Trial3_Uc_8,10,"%s", labelTrial3_Uc_8->Text);

	snprintf(d.Trial3_Fo,10,"%s", textBoxTrial3_Fo->Text);
	snprintf(d.Trial3_Q,10,"%s", textBoxTrial3_Q->Text);
	snprintf(d.Trial3F2_F1,10,"%s", textBoxTrial3F2_F1->Text);

	snprintf(d.Trial4_F ,10,"%s", textBoxTrial4_F->Text);
	snprintf(d.Trial4_Uc,10,"%s",labelTrial4_Uc->Text);
	snprintf(d.Trial4_UL,10,"%s",labelTrial4_UL->Text);


	snprintf(d.Trial5_F1,10,"%s",textBoxTrial5_F1->Text);
	snprintf(d.Trial5_F2,10,"%s", textBoxTrial5_F2->Text);
	snprintf(d.Trial5_F3,10,"%s", textBoxTrial5_F3->Text);
	snprintf(d.Trial5_F4,10,"%s", textBoxTrial5_F4->Text);
	snprintf(d.Trial5_F5,10,"%s", textBoxTrial5_F5->Text);
	snprintf(d.Trial5_F6,10,"%s", textBoxTrial5_F6->Text);
	snprintf(d.Trial5_F7,10,"%s", textBoxTrial5_F7->Text);
	snprintf(d.Trial5_F8,10,"%s", textBoxTrial5_F8->Text);

	snprintf(d.Trial5_U0_1,10,"%s",labelTrial5_U0_1->Text);
	snprintf(d.Trial5_U0_2,10,"%s", labelTrial5_U0_2->Text);
	snprintf(d.Trial5_U0_3,10,"%s", labelTrial5_U0_3->Text);
	snprintf(d.Trial5_U0_4,10,"%s", labelTrial5_U0_4->Text);
	snprintf(d.Trial5_U0_5,10,"%s", labelTrial5_U0_5->Text);
	snprintf(d.Trial5_U0_6,10,"%s", labelTrial5_U0_6->Text);
	snprintf(d.Trial5_U0_7,10,"%s", labelTrial5_U0_7->Text);
	snprintf(d.Trial5_U0_8,10,"%s", labelTrial5_U0_8->Text);

	snprintf(d.Trial5_UL_1,10,"%s",labelTrial5_UL_1->Text);
	snprintf(d.Trial5_UL_2,10,"%s", labelTrial5_UL_2->Text);
	snprintf(d.Trial5_UL_3,10,"%s", labelTrial5_UL_3->Text);
	snprintf(d.Trial5_UL_4,10,"%s", labelTrial5_UL_4->Text);
	snprintf(d.Trial5_UL_5,10,"%s", labelTrial5_UL_5->Text);
	snprintf(d.Trial5_UL_6,10,"%s", labelTrial5_UL_6->Text);
	snprintf(d.Trial5_UL_7,10,"%s", labelTrial5_UL_7->Text);
	snprintf(d.Trial5_UL_8,10,"%s", labelTrial5_UL_8->Text);


	snprintf(d.Trial5_Uc_1,10,"%s",labelTrial5_Uc_1->Text);
	snprintf(d.Trial5_Uc_2,10,"%s", labelTrial5_Uc_2->Text);
	snprintf(d.Trial5_Uc_3,10,"%s", labelTrial5_Uc_3->Text);
	snprintf(d.Trial5_Uc_4,10,"%s", labelTrial5_Uc_4->Text);
	snprintf(d.Trial5_Uc_5,10,"%s", labelTrial5_Uc_5->Text);
	snprintf(d.Trial5_Uc_6,10,"%s", labelTrial5_Uc_6->Text);
	snprintf(d.Trial5_Uc_7,10,"%s", labelTrial5_Uc_7->Text);
	snprintf(d.Trial5_Uc_8,10,"%s", labelTrial5_Uc_8->Text);

	snprintf(d.Trial5_Fo,10,"%s",textBoxTrial5_Fo->Text);
	snprintf(d.Trial5_Q,10,"%s", textBoxTrial5_Q->Text);
	snprintf(d.Trial5F2_F1,10,"%s", textBoxTrial5F2_F1->Text);
	return d;
}

