#include "seriesPort.h"
#include "log.h"
#include "�ײ�.h"
#include "SysLog.h"
using namespace �繤��·����̨;



uint TwoByteTouInt(char *buff);

bool SerialControl::serialPortOpen(String ^ PortName) {

	int count = 0;
	serialPort1->Close();
	try {
		serialPort1->PortName = PortName;
		serialPort1->ReceivedBytesThreshold = 1;
		serialPort1->DataBits = 8;
		serialPort1->Parity = System::IO::Ports::Parity::None; //����żУ��λ
		serialPort1->ReadTimeout = 500;											   //serialPort1->StopBits = System::IO::Ports::StopBits::One;//����ֹͣλΪ1

		serialPort1->Open(); //���ڴ�
	}
	catch (System::Exception ^e) {
		SYS_LOG_ERROR("�򿪴���ʧ��", T_to_string(PortName));
		return false;
	}
	SYS_LOG_INF("�򿪴��ڳɹ�", T_to_string(PortName));
	return true;
}

void SerialControl::serialPort1Close() {
	serialPort1->Close();
}

bool SerialControl::Send(string &s) {

	int alen = s.length();
	cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen+2);
	for (int i = 0; i < alen; i++)
	{
		buffer[i] = s[i];
	}
	try {

		uint Yu = 0xff;
		uint r = crc16((uchar*)s.c_str(), s.length());
		uchar buffr[2];
		buffr[0] = (r &0xffff) >> 8;
		buffr[1] = r & 0xff;
		buffer[alen] = buffr[1];
		buffer[alen+1] = buffr[0];

		serialPort1->Write(buffer, 0, alen+2);//����ָ��0x55
		if (alen == 0) {
			throw"����0�ֽ�";
		}
	}
	catch (System::Exception ^e) {
		return false;
	}
	return true;
}

bool SerialControl::SendNoCrc(string &s) {
	int alen = s.length();
	cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen);
	for (int i = 0; i < alen; i++)
	{
		buffer[i] = s[i];
	}
	try {
		serialPort1->Write(buffer, 0, alen);//����ָ��0x55
		if (alen == 0) {
			throw"����0�ֽ�";
		}
	}
	catch (System::Exception ^e) {
		return false;
	}
	return true;
}

string SerialControl::Recv(int len) {
	string out;
	cli::array<unsigned char>^ rbuff = gcnew cli::array<unsigned char>(len);
	try {
		int actrecvlen = 0;
		cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(100);
		while (actrecvlen < len) {
			int recvlen = serialPort1->Read(buff, 0, len - actrecvlen);// �����ǿ��Է��� �ַ����� ��ȡ����
			Array::Copy(buff, 0, rbuff, actrecvlen, recvlen);
			cli::pin_ptr<unsigned char> c = &rbuff[actrecvlen];
			char *pinp = (char *)c;
			out += string(pinp, recvlen);
			actrecvlen += recvlen;
			if (recvlen <= 0) {
				MessageBox::Show("�����˳�");
				throw "�����˳�";
			}
		}
	}
	catch (System::Exception ^e) {


		return "";
	}

	//crc16����
	if (!check_crc16(out)) 
		return "";
	
	return out;
}
string SerialControl::RecvNoCrc(int len)
{
	string out;
	cli::array<unsigned char>^ rbuff = gcnew cli::array<unsigned char>(len);
	try {
		int actrecvlen = 0;
		cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(100);
		while (actrecvlen < len) {
			int recvlen = serialPort1->Read(buff, 0, len - actrecvlen);// �����ǿ��Է��� �ַ����� ��ȡ����
			Array::Copy(buff, 0, rbuff, actrecvlen, recvlen);
			cli::pin_ptr<unsigned char> c = &rbuff[actrecvlen];
			char *pinp = (char *)c;
			out += string(pinp, recvlen);
			actrecvlen += recvlen;
			if (recvlen <= 0) {
				MessageBox::Show("�����˳�");
				throw "�����˳�";
			}
		}
	}
	catch (System::Exception ^e) {

		cout << "�����˳�" << endl;
		return "";
	}

	return out;
}
//�����ݰ����
string HTOA(string &h) {
	int a;
	string out;
	for (int i = 0; i < h.length(); i += 2) {
		sscanf_s(h.c_str() + i, "%2X", &a);
		out += a;
	}
	return out;
}

string ATOH(string &in) {
	char *H = new char[in.length() * 2 + 1];
	for (int i = 0; i < in.length(); i++) {
		snprintf(H + i * 2, 3, "%02X", uchar(in[i]));
	}
	string out(H, in.length() * 2);
	delete[]H;
	return out;
}

uint crc16(uchar *buf, uchar len);
//��λcrc�ĵ�ַ
bool SerialControl::check_crc16(string &in) {
	uint crcr = crc16((uchar*)in.c_str(), in.length()-2);
	uint actcrcr = 0;
	uchar temp[3];
	temp[0] = (uchar)in[in.length() - 1];
	temp[1] = (uchar)in[in.length() - 2];
	actcrcr = TwoByteTouInt((char*)temp);


	if (crcr == actcrcr) {
		return true;
	}
	return false;
}

uint calccrc(uchar crcbuf, uint crc)			//У���㷨
{
	uchar i;
	uchar chk;
	crc = crc ^ crcbuf;
	for (i = 0; i<8; i++)
	{
		chk = (uchar)(crc & 1);
		crc = crc >> 1;
		crc = crc & 0x7fff;
		if (chk == 1)
			crc = crc ^ 0xa001;
		crc = crc & 0xffff;
	}
	return crc;
}


uint crc16(uchar *buf, uchar len)			//У�麯�� ��λ��ǰ����λ�ں�
{
	uchar hi, lo, i;
	uint crc;
	crc = 0xFFFF;
	for (i = 0; i<len; i++)
	{
		crc = calccrc(*buf, crc);
		buf++;
	}
	hi = (uchar)(crc / 256);
	lo = (uchar)(crc % 256);
	crc = (((uint)(hi)) << 8) | lo;
	return crc;
}




bool SerialHandle::SerialHandleInit()
{
	return sc->serialPortOpen(gcnew String(configXml.SerialHandle.c_str()) );
}

bool SerialControlSource::SerialHandleInit()
{
	return sc->serialPortOpen(gcnew String(configXml.SerialControlSource.c_str()));
}

void SerialHandle::SerialHandleClose()
{
	sc->serialPort1Close();
}

void SerialControlSource::SerialHandleClose()
{
	sc->serialPort1Close();
}

uint SerialHandle::GetMonitorTesterId() {
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x03;
	buff[2] = 0x00;
	buff[3] = 0x00;
	buff[4] = 0x00;
	buff[5] = 0x01;

	sc->Send(string(buff, 6));
	string r = sc->Recv(7);
	uint testerId;
	if (r.length() == 0) return 0;
	testerId = TwoByteTouInt(&r[3]);
	MessageBox::Show("��ص��豸��:" + testerId.ToString());
	return testerId;
} //д�豸��

void SerialHandle::MonitorTesterId(uint TesterId)
{
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x06;
	buff[2] = 0x00;
	buff[3] = 0x00;
	buff[4] = TesterId >> 8;
	buff[5] = TesterId & 0Xff;

	sc->Send(string(buff, 6));
	string r = sc->Recv(8);

}


bool SerialHandle::GetliKongData(S_PLCRecv *pr)
{
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x03;
	buff[2] = 0x00;
	buff[3] = 0x01;
	buff[4] = 0x00;
	buff[5] = 0x07;

	if (!sc->Send(string(buff, 6))) {
		return false;
		LOG_ERROR("��ȡ���ذ�ʧ��");
	}
	string r = sc->Recv(19);
	if (r.length() == 0) return pr;

	pr->MId = r[0];
	pr->FunCode = r[1];
	pr->Bytes = r[2];

	pr->HeaderId = TwoByteTouInt(&r[3]);
	pr->U = TwoByteTouInt(&r[5]);
	pr->I = TwoByteTouInt(&r[7]);
	pr->P = TwoByteTouInt(&r[9]);
	pr->COS = TwoByteTouInt(&r[11]);
	pr->Fhz = TwoByteTouInt(&r[13]);
	pr->DCsymbol = TwoByteTouInt(&r[15]);
	return pr;
}//��ȡ


//���ֽ���ǰ ���ֽ��ں�
uint TwoByteTouInt(char *buff)
{
	uint t = 0;
	t = ((uint)buff[0]) & 0xff;
	t = t << 8;
	t += ((uint)buff[1]) & 0xff;
	return t;
}



bool SerialControlSource::SetDirectVoltage(int Voltage)
{
	int _Voltage = Voltage;
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x06;
	buff[2] = 0x00;
	buff[3] = 0x01;
	buff[4] = (_Voltage & 0xffff) >> 8;
	buff[5] = _Voltage & 0xff;
	
	if (!sc->Send(string(buff, 6))) {
		SYS_LOG_ERROR("���Ƶ�Դ����ֱ����ѹʧ��");
		return false;
	}
	return true; 
}

bool SerialControlSource::SetDirectCurrent(int Current)
{
	int _Current = Current;
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x06;
	buff[2] = 0x00; 
	buff[3] = 0x00;
	buff[4] = (_Current & 0xffff) >> 8;
	buff[5] = _Current & 0xff;

	if( !sc->Send(string(buff, 6)) ) {
		SYS_LOG_ERROR("���Ƶ�Դ����ֱ������ʧ��");
		return false;
	}
	return true;
	//string r = sc->Recv(8);
}

bool SerialControlSource::SetAlternatingVoltage(char Id, int Voltage)
{
	
	int i = Voltage % 100;
	int _Voltage = Voltage ;
	char buff[8];
	snprintf(buff + 5, 3, "%02d", i);
	buff[0] = 'A';
	buff[1] = 'C';
	buff[2] = '_';
	buff[3] = Id;
	buff[4] = 'u';
	buff[7] = 0x0A;

	if( !sc->SendNoCrc(string(buff, 8))) {
		SYS_LOG_ERROR("���Ƶ�Դ���ý�����ѹʧ��");
		return false;
	}
	return true;
}

bool SerialControlSource::OpenSource(int Id)
{
	char buff[3];
	buff[0] = Id + 0x80;
	buff[1] = 0x0D;
	buff[2] = 0x0A;
	if( !sc->SendNoCrc(string(buff, 3)) ){
		SYS_LOG_ERROR("���Ƶ�Դ�򿪵�Դʧ��");
		return false;
	}
	Sleep(5000);
	return true;
}

bool SerialControlSource::CloseSource(int Id)
{
	char buff[3];
	buff[0] = Id;
	buff[1] = 0x0D;
	buff[2] = 0x0A;
	if (!sc->SendNoCrc(string(buff, 3))) {
		SYS_LOG_ERROR("���Ƶ�Դ�رմ���ʧ��");
		return false;
	}
	Sleep(5000);
	return true;
}


/*******�����޷���ֵ*******/
bool SerialControlSource::SetWaveForm(int WaveType) {
	char buff[4];
	buff[0] = 'b';
	buff[1] = 'w';
	buff[3] = 0x0a;
	switch (WaveType) {
	case SINWAVE:
		buff[2] = '0'; break;
	case TRIANGULARWAVE:
		buff[2] = '1'; break;
	case SQUAREWAVE:
		buff[2] = '2'; break;
	}
	return sc->SendNoCrc(string(buff,4));
}

bool SerialControlSource::SetFrequency(int f) {
	char buff[10];
	snprintf(buff, 10,"%09d", f);
	
	return sc->SendNoCrc(string("bf")+ buff + "\r");
}