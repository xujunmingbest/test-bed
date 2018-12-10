#include "һ�׵�·����Ӧ����ʵ������.h"
#include "data_transf.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#pragma comment(lib,"E:/c++/libfilesql/Release/libfilesql.lib")

using namespace �繤��·����̨;

void һ�׵�·����Ӧ����ʵ������::SendData() {
	int TrialCode = 6;
	ST_һ�׵�·����Ӧ���� s;
	memset(&s, 0x00, sizeof(ST_һ�׵�·����Ӧ����));
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
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	if (!d.SendGrade(H, string((char*)&s, sizeof(ST_һ�׵�·����Ӧ����)))) {
		MessageBox::Show("TCP����ʧ��");
		return;
	}
	d.RecvHandle(true);
	d.close();
	lcc.SendComputerInfo(Grades[TrialCode] + "�ѽ���");


}

ST_һ�׵�·����Ӧ���� һ�׵�·����Ӧ����ʵ������::Load_Grade_data() {
	ST_һ�׵�·����Ӧ���� d;
	memset(&d, 0x00, sizeof(ST_һ�׵�·����Ӧ����));
	snprintf(d.��, 10, "%s", textBoxtrial��->Text);
	fileSql f;

	string trial1bmp_in = f.Readfile( T_to_string(trial1Path_in) );
	if(trial1bmp_in.length() == sizeof(d.Trial1Bmp_in))
		memcpy(d.Trial1Bmp_in, trial1bmp_in.c_str(), sizeof(d.Trial1Bmp_in));

	string trial2bmp_in = f.Readfile(T_to_string(trial2Path_in));
	if (trial2bmp_in.length() == sizeof(d.Trial2Bmp_in))
		memcpy(d.Trial2Bmp_in, trial2bmp_in.c_str(), sizeof(d.Trial2Bmp_in));

	string trial3bmp_in = f.Readfile(T_to_string(trial3Path_in));
	if (trial3bmp_in.length() == sizeof(d.Trial3Bmp_in))
		memcpy(d.Trial3Bmp_in, trial3bmp_in.c_str(), sizeof(d.Trial3Bmp_in));

	snprintf(d.summing_up, 100, "%s", textBox����->Text);
	return d;
}