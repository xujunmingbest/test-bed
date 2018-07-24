#include "capture.h"
#include "tool/xml/xml.h"
void Capture::Open() {
	try {
	//����һ�����ֽڼ���  ����3������(IP4ѰַЭ��,��ʽ����,TCPЭ��)
	socketClient = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);

	//��Ҫ��ȡ�ı����е�IP��ַ
	IPAddress^ ipaddress = IPAddress::Parse(gcnew String(configXml.TeacherIp.c_str()));
	//����ȡ��ip��ַ�Ͷ˿ںŰ󶨵�����ڵ�endpoint��
	IPEndPoint^ endpoint = gcnew IPEndPoint(ipaddress,atoi(configXml.CapturePort.c_str()));

	//����ͻ����׽������ӵ�����ڵ�(�����)�õķ�����Connect ������Bind
		socketClient->Connect(endpoint);
	}
	catch (Exception^e) {


	}
	Thread^ t = gcnew Thread(gcnew ThreadStart(this, &Capture::SendCapture));
	t->Start();
	Thread^ t1 = gcnew Thread(gcnew ThreadStart(this, &Capture::RecvAndClose));
	t1->Start();
}

void Capture::RecvAndClose() {
	cli::array<unsigned char> ^retClose = gcnew cli::array<unsigned char>(1);
	try {
		socketClient->Receive(retClose);
	}
	catch (Exception ^e) {
		
	}
	Connect = false;
}

void Capture::SendCapture() {
	try {
		while (Connect) {
			static int i = 0;
			Thread::Sleep(100);
			Drawing::Rectangle^ ScreenArea = System::Windows::Forms::Screen::GetBounds(this);
			int width1 = ScreenArea->Width; //��Ļ��� 
			int height1 = ScreenArea->Height; //��Ļ�߶�


			Bitmap ^bit = gcnew Bitmap(width1, height1);//��Ծ���������е���

			Graphics ^g = Graphics::FromImage(bit);

			//g.CopyFromScreen(this.Location,new Point(0, 0), bit.Size);//������������н�ͼ

			g->CopyFromScreen(Point::Empty, Point::Empty, bit->Size);
			MemoryStream ^ms = gcnew MemoryStream();
			bit->Save(ms, System::Drawing::Imaging::ImageFormat::Gif);
			unsigned int l = ms->Length;
			cli::array<unsigned char>^ arr = gcnew cli::array<unsigned char>(l);
			ms->Position = 0;
			ms->Read(arr, 0, l);
			Image^ image = Image::FromStream(ms);
			ms->Close();

			cli::array<unsigned char>^ arrlen = gcnew cli::array<unsigned char>(4);
			arrlen[0] = l >> 24;
			arrlen[1] = (l >> 16) & 0xff;
			arrlen[2] = (l >> 8) & 0xff;
			arrlen[3] = l & 0xff;
			cli::array<unsigned char>^ final = gcnew cli::array<unsigned char>(4 + l);
			arrlen->CopyTo(final, 0);
			Array::Copy(arr, 0, final, 4, l);
			int length = socketClient->Send(final);
			if (length <= 0) break;
		}
	}
	catch (Exception^e) {

	}
}