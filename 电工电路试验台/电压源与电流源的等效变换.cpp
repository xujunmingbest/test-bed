#include "电压源与电流源的等效变换实验内容.h"
#include "data_transf.h"
using namespace 电工电路试验台;


void 电压源与电流源的等效变换实验内容::SendData() {
	int TrialCode = 5;
	ST_电压源与电流源的等效变换 s;
	memset(&s, 0x00, sizeof(ST_电压源与电流源的等效变换));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_电压源与电流源的等效变换)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");
}

ST_电压源与电流源的等效变换 电压源与电流源的等效变换实验内容::Load_Grade_data() {
	ST_电压源与电流源的等效变换 d;
	memset(&d, 0x00, sizeof(ST_电压源与电流源的等效变换));

	snprintf(d.summing_up, 100, "%s", textBox结论->Text);

	snprintf(d.Trial11UP1, 10, "%s", textBoxTrial11UP1->Text);
	snprintf(d.Trial11UP2, 10, "%s", textBoxTrial11UP2->Text);
	snprintf(d.Trial2Is, 10, "%s", textBoxTrial2Is->Text);

	snprintf(d.Trial11I1, 10, "%s", labelTrial11I1->Text);
	snprintf(d.Trial11I2, 10, "%s", labelTrial11I2->Text);
	snprintf(d.Trial11I3, 10, "%s", labelTrial11I3->Text);
	snprintf(d.Trial11I4, 10, "%s", labelTrial11I4->Text);
	snprintf(d.Trial11I5, 10, "%s", labelTrial11I5->Text);
	snprintf(d.Trial11I6, 10, "%s", labelTrial11I6->Text);
	snprintf(d.Trial11I7, 10, "%s", labelTrial11I7->Text);
	snprintf(d.Trial11I8, 10, "%s", labelTrial11I8->Text);
	snprintf(d.Trial11I9, 10, "%s", labelTrial11I9->Text);
	snprintf(d.Trial11I10, 10, "%s", labelTrial11I10->Text);
	
	snprintf(d.Trial11U1, 10, "%s", labelTrial11U1->Text);
	snprintf(d.Trial11U2, 10, "%s", labelTrial11U2->Text);
	snprintf(d.Trial11U3, 10, "%s", labelTrial11U3->Text);
	snprintf(d.Trial11U4, 10, "%s", labelTrial11U4->Text);
	snprintf(d.Trial11U5, 10, "%s", labelTrial11U5->Text);
	snprintf(d.Trial11U6, 10, "%s", labelTrial11U6->Text);
	snprintf(d.Trial11U7, 10, "%s", labelTrial11U7->Text);
	snprintf(d.Trial11U8, 10, "%s", labelTrial11U8->Text);
	snprintf(d.Trial11U9, 10, "%s", labelTrial11U9->Text);
	snprintf(d.Trial11U10, 10, "%s", labelTrial11U10->Text);

	snprintf(d.Trial11Load1, 10, "%s", textBoxTrial11Load1->Text);
	snprintf(d.Trial11Load2, 10, "%s", textBoxTrial11Load2->Text);
	snprintf(d.Trial11Load3, 10, "%s", textBoxTrial11Load3->Text);
	snprintf(d.Trial11Load4, 10, "%s", textBoxTrial11Load4->Text);
	snprintf(d.Trial11Load5, 10, "%s", textBoxTrial11Load5->Text);
	snprintf(d.Trial11Load6, 10, "%s", textBoxTrial11Load6->Text);
	snprintf(d.Trial11Load7, 10, "%s", textBoxTrial11Load7->Text);
	snprintf(d.Trial11Load8, 10, "%s", textBoxTrial11Load8->Text);
	snprintf(d.Trial11Load9, 10, "%s", textBoxTrial11Load9->Text);
	snprintf(d.Trial11Load10, 10, "%s", textBoxTrial11Load10->Text);


	snprintf(d.Trial12I1, 10, "%s", labelTrial12I1->Text);
	snprintf(d.Trial12I2, 10, "%s", labelTrial12I2->Text);
	snprintf(d.Trial12I3, 10, "%s", labelTrial12I3->Text);
	snprintf(d.Trial12I4, 10, "%s", labelTrial12I4->Text);
	snprintf(d.Trial12I5, 10, "%s", labelTrial12I5->Text);
	snprintf(d.Trial12I6, 10, "%s", labelTrial12I6->Text);
	snprintf(d.Trial12I7, 10, "%s", labelTrial12I7->Text);
	snprintf(d.Trial12I8, 10, "%s", labelTrial12I8->Text);
	snprintf(d.Trial12I9, 10, "%s", labelTrial12I9->Text);
	snprintf(d.Trial12I10, 10, "%s", labelTrial12I10->Text);

	snprintf(d.Trial12U1, 10, "%s", labelTrial12U1->Text);
	snprintf(d.Trial12U2, 10, "%s", labelTrial12U2->Text);
	snprintf(d.Trial12U3, 10, "%s", labelTrial12U3->Text);
	snprintf(d.Trial12U4, 10, "%s", labelTrial12U4->Text);
	snprintf(d.Trial12U5, 10, "%s", labelTrial12U5->Text);
	snprintf(d.Trial12U6, 10, "%s", labelTrial12U6->Text);
	snprintf(d.Trial12U7, 10, "%s", labelTrial12U7->Text);
	snprintf(d.Trial12U8, 10, "%s", labelTrial12U8->Text);
	snprintf(d.Trial12U9, 10, "%s", labelTrial12U9->Text);
	snprintf(d.Trial12U10, 10, "%s", labelTrial12U10->Text);

	snprintf(d.Trial12Load1, 10, "%s", textBoxTrial12Load1->Text);
	snprintf(d.Trial12Load2, 10, "%s", textBoxTrial12Load2->Text);
	snprintf(d.Trial12Load3, 10, "%s", textBoxTrial12Load3->Text);
	snprintf(d.Trial12Load4, 10, "%s", textBoxTrial12Load4->Text);
	snprintf(d.Trial12Load5, 10, "%s", textBoxTrial12Load5->Text);
	snprintf(d.Trial12Load6, 10, "%s", textBoxTrial12Load6->Text);
	snprintf(d.Trial12Load7, 10, "%s", textBoxTrial12Load7->Text);
	snprintf(d.Trial12Load8, 10, "%s", textBoxTrial12Load8->Text);
	snprintf(d.Trial12Load9, 10, "%s", textBoxTrial12Load9->Text);
	snprintf(d.Trial12Load10, 10, "%s", textBoxTrial12Load10->Text);



	snprintf(d.Trial2I1, 10, "%s", labelTrial2I1->Text);
	snprintf(d.Trial2I2, 10, "%s", labelTrial2I2->Text);
	snprintf(d.Trial2I3, 10, "%s", labelTrial2I3->Text);
	snprintf(d.Trial2I4, 10, "%s", labelTrial2I4->Text);
	snprintf(d.Trial2I5, 10, "%s", labelTrial2I5->Text);
	snprintf(d.Trial2I6, 10, "%s", labelTrial2I6->Text);
	snprintf(d.Trial2I7, 10, "%s", labelTrial2I7->Text);
	snprintf(d.Trial2I8, 10, "%s", labelTrial2I8->Text);
	snprintf(d.Trial2I9, 10, "%s", labelTrial2I9->Text);
	snprintf(d.Trial2I10, 10, "%s", labelTrial2I10->Text);

	snprintf(d.Trial2Load1, 10, "%s", textBoxTrial2Load1->Text);
	snprintf(d.Trial2Load2, 10, "%s", textBoxTrial2Load2->Text);
	snprintf(d.Trial2Load3, 10, "%s", textBoxTrial2Load3->Text);
	snprintf(d.Trial2Load4, 10, "%s", textBoxTrial2Load4->Text);
	snprintf(d.Trial2Load5, 10, "%s", textBoxTrial2Load5->Text);
	snprintf(d.Trial2Load6, 10, "%s", textBoxTrial2Load6->Text);
	snprintf(d.Trial2Load7, 10, "%s", textBoxTrial2Load7->Text);
	snprintf(d.Trial2Load8, 10, "%s", textBoxTrial2Load8->Text);
	snprintf(d.Trial2Load9, 10, "%s", textBoxTrial2Load9->Text);
	snprintf(d.Trial2Load10, 10, "%s", textBoxTrial2Load10->Text);
	return d;
}
