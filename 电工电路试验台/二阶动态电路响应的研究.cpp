#include "二阶动态电路响应的研究实验内容.h"
#include "data_transf.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#pragma comment(lib,"E:/c++/libfilesql/Release/libfilesql.lib")

using namespace 电工电路试验台;

void 二阶动态电路响应的研究实验内容::SendData() {
	int TrialCode = 7;
	ST_二阶动态电路响应的研究 s;
	memset(&s, 0x00, sizeof(ST_二阶动态电路响应的研究));
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
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_二阶动态电路响应的研究)))) {
		MessageBox::Show("TCP连接失败");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "已交卷");


}

ST_二阶动态电路响应的研究 二阶动态电路响应的研究实验内容::Load_Grade_data() {
	ST_二阶动态电路响应的研究 d;
	memset(&d, 0x00, sizeof(ST_二阶动态电路响应的研究));

	fileSql f;
	snprintf(d.trial2_α, 10, "%s", textBoxtrial2_α->Text);
	snprintf(d.trial2_w, 10, "%s", textBoxtrial2_w->Text);
	snprintf(d.trial3_1α, 10, "%s", textBoxTrial3_1α->Text);
	snprintf(d.trial3_1w, 10, "%s", textBoxTrial3_1w->Text);
	snprintf(d.trial3_2α, 10, "%s", textBoxTrial3_2α->Text);
	snprintf(d.trial3_2w, 10, "%s", textBoxTrial3_2w->Text);
	snprintf(d.trial3_3α, 10, "%s", textBoxTrial3_3α->Text);
	snprintf(d.trial3_3w, 10, "%s", textBoxTrial3_3w->Text);
	snprintf(d.trial3_4α, 10, "%s", textBoxTrial3_4α->Text);
	snprintf(d.trial3_4w, 10, "%s", textBoxTrial3_4w->Text);
	snprintf(d.summing_up, 100, "%s", textBox结论->Text);

	string trial1bmp = f.Readfile(T_to_string(Trial1_1PT_name));
	if (trial1bmp.length() == sizeof(d.Trial1_1Bmp))
		memcpy(d.Trial1_1Bmp, trial1bmp.c_str(), sizeof(d.Trial1_1Bmp));

	string trial1_2bmp = f.Readfile(T_to_string(Trial1_2PT_name));
	if (trial1_2bmp.length() == sizeof(d.Trial1_2Bmp))
		memcpy(d.Trial1_2Bmp, trial1_2bmp.c_str(), sizeof(d.Trial1_2Bmp));

	string trial1_3bmp = f.Readfile(T_to_string(Trial1_3PT_name));
	if (trial1_3bmp.length() == sizeof(d.Trial1_3Bmp))
		memcpy(d.Trial1_3Bmp, trial1_3bmp.c_str(), sizeof(d.Trial1_3Bmp));

	string trial2_1bmp = f.Readfile(T_to_string(Trial2_1PT_name));
	if (trial2_1bmp.length() == sizeof(d.Trial2_1Bmp))
		memcpy(d.Trial2_1Bmp, trial2_1bmp.c_str(), sizeof(d.Trial2_1Bmp));

	string trial3_1bmp = f.Readfile(T_to_string(Trial3_1PT_name));
	if (trial3_1bmp.length() == sizeof(d.Trial3_1Bmp))
		memcpy(d.Trial3_1Bmp, trial3_1bmp.c_str(), sizeof(d.Trial3_1Bmp));

	string trial3_2bmp = f.Readfile(T_to_string(Trial3_2PT_name));
	if (trial3_2bmp.length() == sizeof(d.Trial3_2Bmp))
		memcpy(d.Trial3_2Bmp, trial3_2bmp.c_str(), sizeof(d.Trial3_2Bmp));

	string trial3_3bmp = f.Readfile(T_to_string(Trial3_3PT_name));
	if (trial3_3bmp.length() == sizeof(d.Trial3_3Bmp))
		memcpy(d.Trial3_3Bmp, trial3_3bmp.c_str(), sizeof(d.Trial3_3Bmp));

	string trial3_4bmp = f.Readfile(T_to_string(Trial3_4PT_name));
	if (trial3_4bmp.length() == sizeof(d.Trial3_4Bmp))
		memcpy(d.Trial3_4Bmp, trial3_4bmp.c_str(), sizeof(d.Trial3_4Bmp));

	return d;
}