#pragma once

using namespace System::Drawing;
using namespace System::Threading;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System;
public ref class Capture:public System::Windows::Forms::Form {
	Socket^ socketClient;
public:
	void Open();
	void SendCapture();

};