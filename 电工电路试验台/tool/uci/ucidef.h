/********************************************************************
	created:	2014/12/23
	author:		M.Yang
	purpose:	UCI���ȫ�ֶ����ļ�
	modify:
	*********************************************************************/
#ifndef ucidef_h__
#define ucidef_h__

#if (defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)) && !defined(_NI_mswin16_)
#define _UCIAPI   __stdcall
#define _UCICallBack   __stdcall
#endif

#define _in
#define _out
#define _in_out

#ifdef __cplusplus
namespace uci {
#endif // __cplusplus

#ifdef _CVI_
#define u_inline static
#else
#define u_inline inline
#endif // _CVI_

#ifndef MAX_PATH
#define MAX_PATH          260
#endif // !MAX_PATH

	//////////////////////////////////////////////////////////////////////////
	//{                       �����������Ͷ���
#ifdef _UNICODE
	//@brief :   ��ʾһ�� Unicode �ַ���
#define u_tchar       wchar_t
#else
	//@brief :   ��ʾһ�� ASCII �ַ���
#define u_tchar       char
#endif // _UNICODE

#if defined(_WIN64)
	typedef unsigned __int64 u_unit_ptr;
	typedef __int64 u_long_ptr;
#else
	typedef unsigned int u_unit_ptr;
	typedef long u_long_ptr;
#endif   

	//@brief : Boolean��
#define u_bool       bool
	//@brief : 8λ�޷�������
#define u_byte       unsigned char
	//@brief : 8λ�з�������
#define u_char       char
	//@brief : ��ָ���������͵Ļ�����ָ��
#define u_buf        void*
	//@brief : �������͵ĳ�������
#define u_object     void
	//@brief : ��ʾ 16 λ�з���������
#define u_short      short
	//@brief : ��ʾ 16 λ�޷���������
#define u_ushort     unsigned short
	//@brief : ��ʾ 16 λ�з���������
#define u_int16      u_short
	//@brief : ��ʾ 16 λ�޷���������
#define u_uint16     u_ushort
	//@brief : ��ʾ 32 λ�з���������
#define u_int32      int
	//@brief : ��ʾ 32 λ�޷���������
#define u_uint32     unsigned int
	//@brief : ��ʾUCI�ӿڷ��ص�״ֵ̬(32λ�з�����)
#define u_status     u_int32
	//@brief : ��ʾ��С��32λ�޷�����
#define u_size       u_uint32
	//@brief : ��ʾ�ỰID��32λ�޷�����
#define u_session    u_uint32
	//@brief : ��ʾ�ַ�������
#define u_string     u_tchar*
	//@brief : ��ʾֻ���ַ�������
#define u_cstring    const u_tchar*
	//@brief : ��ʾ����ID���ͣ�32λ�޷�����
#define u_attr       u_int32
	//@brief : ��ʾ����ֵ���ͣ�32λ�޷�����
#define u_attr_v     u_int32
	//@brief : ��ʾһ��16λ�޷������͵ĵ���
#define u_word       u_ushort
	//@brief : ��ʾһ��32λ�޷������͵�˫��
#define u_dword      u_uint32
	//@brief : ��Ϣ����
#define u_wparam     u_unit_ptr
	//@brief : ��Ϣ����
#define u_lparam     u_long_ptr
	//}

	//////////////////////////////////////////////////////////////////////////
	//{                       �ӿڷ���״ֵ̬����
	//@brief : �����ɹ�
#define UCI_SUCCESS                  (0)
	//@brief : ������������ʼֵ
#define UCI_ERR                      (-1000)
	//@brief : �жϵ�ǰ�ӿ��Ƿ�ִ��ʧ��
	//@brief : �жϵ�ǰ�ӿ��Ƿ�ִ�гɹ�
#define UCIERR(r)                    (r < 0)
#define UCISUCCESS(r)                (!UCIERR(r))

	//@brief : ���������
	typedef enum _UCIErr {
		NoError = 0,

		//@brief : ��Դ��ʼ������
		InitResourceError = UCI_ERR - 20,
		//@brief : ��Ч�ĻỰ
		Invalid_Session,
		//@brief : ������ʱ 
		Timeout,
		//@brief : ����ʧ��
		Failed,
		//@brief : ��֧�ֵĲ���
		Unsupported,
		//@brief : �ڴ�ռ䲻��
		Insufficient_Memory,
		//@brief : ϵͳ��æ���޷���Ӧ
		Busy,
		//@brief : ͨ���쳣�������棡
		COMExpection,
		//@brief : ͨ��δ�򿪣�
		ChannelNotOpened,

		//@brief : δ֪�Ĵ���
		Unknown = UCI_ERR - 40 - 1,

		//@brief : �������ӵ��ַ�����ַ��ʽ����
		Connect_InvalidAddress = UCI_ERR - 40,
		//@brief : ���ӻ�δ����
		Connect_NotBuild,
		//@brief : �����ѶϿ�
		Connect_Break,
		//@brief   : ��֧�ֵ�ͨ�ŷ�ʽ
		Connect_Unsupported_COMType,

		//@brief : δ����ָ�����豸
		Device_NoFound = UCI_ERR - 60,
		//@brief : ��֧�ֵ��豸
		Device_Unsupported,
		//@brief : ��Ҫ��ִ�в�ѯ�豸�Ĳ���
		Device_QueryFirst,
		//@brief : ���Ͳ�ƥ��
		Device_NotMatch,

		//@brief : ��ѯ�����豸ʧ��
		Query_LANNodesFailed,

		//@brief : USB�豸��ַֻ��ִ�в�ѯ�豸���������Ч��
		//@remarks : ��UCI�⵼����USB�豸��ַ��ֻ��һ���б������������������豸��ַ��
		AddrValid_AfterQueryDeviceOper,

		//@brief   : δ����U�̽���
		UDisk_NotFound,
		//@brief   : �����Ѿ�����
		Key_Locked,

		//@brief : �����ַ�����ʽ����
		CMD_Invalid_StringFormat = UCI_ERR - 80,
		//@brief : ֻ֧�ֵ�������
		CMD_OnlySupportSingle,
		//@brief : һ������ֻ֧��һ������
		CMD_OnlySupportSingleAttr,
		//@brief : ��֧�ֵ�����
		CMD_Unsupported,
		//@brief : ��������ʧ��
		CMD_SendFailed,
		//@brief : Э�����ݸ�ʽ����
		CMD_Invalid_ProtocolFormat,
		//@brief : �豸��д�ļ���flashʧ�ܣ�
		CMD_WriteFileToFlash_Failed,
		//@brief   : δ������Ч�Ļظ�����
		CMD_NoFound_Valid_Reply_Data,
		//@brief   : ������Ϣ������鿴��������Ƿ����Э��
		CMD_Error_Message,
		//@brief   : ��Ч�ı��ʽ
		CMD_Invalid_Expression,

		//@brief : ��������
		Args_Invalid = UCI_ERR - 100,
		//@brief : �����ṩ�Ŀռ�̫С
		Args_MemoryTooSmall,
		//@brief : ���ṩ���ļ���̫��(�50���ֽ�)
		Args_FileNameTooLong,
		//@brief : �������������ݴ�С��Э�鲻ƥ��(��ֹ���ݴ���)
		Args_DataLenNotMatch,

		//@brief : �������
		Data_Overflow = UCI_ERR - 120,
		//@brief : ������Χ
		Data_OutRange,
		//@brief : ����δȫ����ȡ��
		Data_NotReadEnoughLenth,
		//@brief : ����У��ʧ��
		Data_ECC_Failed,
		//@brief   : ��Ч������
		Data_Invalid,
		//@brief   : ����ѹ��ʧ��
		Data_Zip_Error,
		//@brief   : ���ݽ�ѹ��ʧ��
		Data_UnZip_Error,
		//@brief   : ���ݴ���ʧ��
		Data_Transfer_Error, 
		//@brief   : ���ݴ���ʧ��
		Data_Transfer_Break,
		//@brief   : ����Ч���ݿɶ�ȡ
		Data_No_Data_Incoming,
		
		//@brief : 
		File_AccessDenied = UCI_ERR - 140,
		//@brief : An unspecified error occurred.
		File_GenericException,
		//@brief : The file could not be located.	
		File_NotFound,
		//@brief : All or part of the path is invalid.
		File_BadPath,
		//@brief : The permitted number of open files was exceeded.
		File_TooManyOpenFiles,
		//@brief : There was an attempt to use an invalid file handle 
		//      or The file format is unsupported!
		//      or The file data is error!
		File_InvalidFile,
		//@brief : The current working directory cannot be removed
		File_RemoveCurrentDir,
		//@brief : There are no more directory entries
		File_DirectoryFull,
		//@brief : There was an error trying to set the file pointer
		File_BadSeek,
		//@brief : There was a hardware error
		File_HardIO,
		//@brief : SHARE.EXE was not loaded, or a shared region was locked
		File_SharingViolation,
		//@brief : There was an attempt to lock a region that was already locked
		File_LockViolation,
		//@brief : The disk is full 
		File_DiskFull,
		//@brief : The end of file was reached
		File_EndOfFile,
		//@brief : д�ļ�������ʧ��
		File_SaveToDiskFailed,
	}UErr;
	//}
	//////////////////////////////////////////////////////////////////////////

	//@brief : ����ĻỰID
#define INVALID_SESSION  ((u_uint32)(-1))

	////////////////////////////////////////////////////////////////////////// 
	//{                        ����
	//�л���Ӣ�ģ�   "lang:zh-hans" or "lang:en-us"
	//ʹ��USB�豸�Ƴ������Ӽ����� �� "devchange:1"
//}


#define CACHE_LINE  1
#define CACHE_ALIGN   __declspec(align(CACHE_LINE))

	//@brief : ���ýṹ��Ķ��뷽ʽ
#define PACK_ALIGN(n) __declspec(align(n))


#ifdef __cplusplus
	extern "C"{
#endif // __cplusplus

		//one Word is 2 bytes
		u_inline u_word UCI_HIWORD(u_dword _dw) { return ((u_word)((_dw >> 16) & 0xffff)); }
		u_inline u_word UCI_LOWORD(u_dword _dw) { return ((u_word)(_dw & 0xffff)); }

		//#pragma pack(show)// C4810
		//ensure byte-packed structures��1�ֽڶ��룩
#include <PshPack1.h>//������뻷����û�и��ļ������滻Ϊ��ǰƽ̨���ֽڶ�����䡣

		//@brief : �����ݽӿڵĲ�����
		//@remarks : ��ͨ�����������ͨ��uci_CreateRParams�ӿڴ���
		typedef struct _RParams {
			//@brief : �����ַ�������'\0'��β. �����ʽ������Э���ĵ���	
			u_cstring CMDString;
			//@brief : Ҫ���ص������������������Ӿ������������ͨ����Ҫ��ȡ\��ѯ�������Ƕ�Ӧ�ģ�	
			u_uint32  RetCount;
			//@brief : ����ʱ		
			u_uint32  Timeout;
			//@brief : ��������
			//@remarks : ��ͨ������ʹ�ã��ɿ���;�ڲ�ѯ�豸ʱ�õ���
			//��������ΪQParams���������ĵ�Ϊ׼��
			u_buf     ExtraData; //reserve		
			//@brief : �������ݵĳ���	
			u_size    ExtraDataLen;
		}RParams, *PRParams;

#ifdef __cplusplus
		inline RParams* uci_CreateRParams(RParams& _p, u_cstring _cmd,
										  u_uint32 _timeout, u_buf _ExtraData,
										  u_size _ExtraDataLen) {
			memset(&_p, 0, sizeof(_p));
			_p.CMDString = _cmd;
			_p.Timeout = _timeout;
			_p.ExtraData = _ExtraData;
			_p.ExtraDataLen = _ExtraDataLen;
			return &_p;
		}
#else
		u_inline RParams* uci_CreateRParams(RParams* _p, u_cstring _cmd,
			u_uint32 _timeout, u_buf _ExtraData,
			u_size _ExtraDataLen) {
			memset(_p, 0, sizeof(*_p));
			_p->CMDString = _cmd;
			_p->Timeout = _timeout;
			_p->ExtraData = _ExtraData;
			_p->ExtraDataLen = _ExtraDataLen;
			return _p;
		}
#endif

		typedef struct _DeviceIOParams {
			u_int32  Count;
			u_int32* Data;
		}DeviceIOParams;

		typedef struct _QParams {
			//@brief : Ҫ��ѯ��ͨ�Žڵ�����
			//@remarks : ��enum NodeType ȡֵ�� ͨ����־λ�������ֵ
			//@eg �� NodeType::USB | NodeType::LAN
			u_int32   Type;
			//@brief : �˿ڼ��˿�����
			u_int32   PortCount;
			//@brief : �˿ڼ�		
			u_int32*  Ports;
			//@brief : PVID����PVID�ĸ���
			//@remarks : 
			u_int32   PVIDCount;
			//@brief : PID �� VID��
			//@remarks : ʹ��MakePVID������GetPID��GetVID��ȡ
			u_int32*  PVID;
			//@brief : ��ѯ�ַ�����nullptrʱ��ʾ��ѯ�����豸�������ѯָ���豸�����豸��
			u_cstring Msg;
		}QParams, *PQParams;//@brief : ��ѯ�豸ʱ�����ò���

		u_inline u_int32 MakePVID(u_ushort _pid, u_ushort _vid) { return ((_pid << 16) | (_vid)); };

		u_inline u_ushort GetPID(u_int32 _pvid) { return UCI_HIWORD(_pvid); }

		u_inline u_ushort GetVID(u_int32 _pvid) { return UCI_LOWORD(_pvid); }

#ifdef __cplusplus
		inline QParams* UCI_CreateQParam(QParams& _qp, u_int32 _type,
										 u_int32* _ports, u_int32 _port_cnt,
										 u_int32* _pvid, u_int32 _pvid_cnt, u_cstring _msg) {
			memset(&_qp, 0, sizeof(_qp));
			_qp.Type = _type;
			_qp.Ports = _ports;
			_qp.PortCount = _port_cnt;
			_qp.PVID = _pvid;
			_qp.PVIDCount = _pvid_cnt;
			_qp.Msg = _msg;
			return &_qp;
		}
#else
		u_inline QParams* UCI_CreateQParam(QParams* _qp, u_int32 _type,
			u_int32* _ports, u_int32 _port_cnt,
			u_int32* _pvid, u_int32 _pvid_cnt, u_cstring _msg) {
			memset(_qp, 0, sizeof(*_qp));
			_qp->Type = _type;
			_qp->Ports = _ports;
			_qp->PortCount = _port_cnt;
			_qp->PVID = _pvid;
			_qp->PVIDCount = _pvid_cnt;
			_qp->Msg = _msg;
			return _qp;
		}
#endif
		//@brief : д���ݽӿڲ�����
		//@remarks : ��ͨ���ӿ�uci_CreateWParams����
		typedef struct _WParams {
			//@brief : �����ַ�������'\0'��β. �����ʽ���ĵ���	
			u_cstring CMDString;
			//@brief : ���ص����������ݣ����������Ӿ������������	
			u_uint32  RetCount;
			//@brief : ����ʱ		
			u_uint32  Timeout;
		}WParams, *PWParams;

#ifdef __cplusplus
		u_inline WParams* uci_CreateWParams(WParams& _p, u_cstring _cmd, u_uint32 _timeout) {
			memset(&_p, 0, sizeof(_p));
			_p.CMDString = _cmd;
			_p.Timeout = _timeout;
			return &_p;
		}
#else
		u_inline WParams* uci_CreateWParams(WParams* _p, u_cstring _cmd, u_uint32 _timeout) {
			memset(_p, 0, sizeof(*_p));
			_p->CMDString = _cmd;
			_p->Timeout = _timeout;
			return _p;
		}
#endif
		typedef struct _CommandParams {
			//@brief : �����ַ�������'\0'��β. �����ʽ���ĵ���	
			u_cstring CMDString;
			//@brief : �������1
			u_uint32  Param1;
			//@brief : �������1
			u_uint32  Param2;
			//@brief : ��ʱ		
			u_uint32  Timeout;
		}CommandParams, *PCommandParams;

		//@brief : д�ļ������Ĳ�����
		typedef struct _WFileParams {
			//@brief : �����ַ�������'\0'��β. �����ʽ���ĵ���	
			u_cstring  CMDString;
			//@brief : Ҫд����ļ�·���������ļ�����
			u_cstring  FilePath;
			//@brief : д��ʱ(��λ��ms)
			u_uint32   Timeout;
		}WFileParams, *PWFileParams;

		//@brief : ���ļ��ӿڵĲ�����
		typedef struct _RFileParams {
			//@brief : �����ַ�������'\0'��β. �����ʽ���ĵ���	
			u_cstring   CMDString;
			//@brief : �������ݵ����ش��̵��ļ�·�����������ļ����ͺ�׺��
			u_cstring   FilePath;
			//@brief : ����ʱ(��λ��ms)
			u_uint32    Timeout;
			//@brief : ��������ļ���·��
			u_tchar     FilePathFinal[MAX_PATH];
		}RFileParams, *PRFileParams;

		//@brief : ͨ�Žڵ�����
		//@remarks : ��QParams���ǰ�λ�룬��Node��ȡ����enumֵ��
		typedef enum _NodeType{
			LAN = 0x0001,
			USB = 0x0010,
		}NodeType;

		//@brief : USB�豸��������
		//@remarks : 
		typedef struct _USBDescriptor {
			//@brief : PID
			u_ushort  PID;
			//@brief : VID
			u_ushort  VID;
			//@brief : ��ַ	
			u_ushort  Addr;
		}USBDescriptor;

		//@brief : IP��ַ
		//@remarks : ���˳��Ϊ f1(192).f2(168).f3(1).f4(253) - С��ģʽ
		typedef union _IPAddr {
			struct { u_byte f1, f2, f3, f4; } Field;
			u_int32 Addr;
		}u_IPAddr;

		//@brief : LAN��ͨ�ŵ��豸������
		//@remarks : 
		typedef struct _LANDescriptor {
			//@brief : IP��ַ���ַ������ͣ�		
			u_tchar    IP[16];
			//@brief : IP��ַ
			u_IPAddr   Addr;
			//@brief : ����˿�
			//@remarks : TCPIP�����õĶ˿ں�
			u_ushort   Port;
		}LANDescriptor;

		//@brief : ��ѯ�����豸�ڵ�Ĳ���
		//@remarks : 
		typedef struct _Node {
			//@brief : ͨ�Žӿڷ�ʽ
			NodeType Type;
			//@brief : �豸��(������)
			//@remarks : �ڱ�UCI�⵼��ʱ��������ΪUCI��Э��һ�µ����ƣ�
			//			 ���ѳ�������δͳһ������������ʱ��UCI���ڲ��Զ�ƥ��ΪUCIЭ�����õ����֣�
			u_tchar   Name[50];
			//@brief : �豸����
			//@remarks : �ź�Դ = SG, ʾ���� = DSO;
			u_tchar   DevType[10];
			//@brief : LAN�ڲ���		
			LANDescriptor LAN;
			//@brief : USB�ӿڲ���		
			USBDescriptor USB;
			//@brief : �����ַ���
			u_tchar   UCIAddr[256];
			//@brief : ���к�
			u_tchar   SN[50];
			//@brief : �豸״̬
			u_status  Status;
			//@brief : �豸ʵ����ʾ����
			u_tchar   IDN[20];
		}Node, *PNode;


		//@brief : ��ѯ�����豸�ڵ�Ĳ���
		//@remarks : 
		typedef struct _NodeEx {
			//@brief : ͨ�Žӿڷ�ʽ
			NodeType Type;
			//@brief : �豸��(������)
			//@remarks : �ڱ�UCI�⵼��ʱ��������ΪUCI��Э��һ�µ����ơ�
			u_tchar   Name[50];
			//@brief : �豸����
			//@remarks : �ź�Դ = SG, ʾ���� = DSO;
			u_tchar   DevType[10];
			//@brief : LAN�ڲ���		
			LANDescriptor LAN;
			//@brief : USB�ӿڲ���		
			USBDescriptor USB;
			//@brief : �����ַ���
			u_tchar   UCIAddr[256];
			//@brief : ���к�
			u_tchar   SN[50];
			//@brief : �豸״̬
			u_status  Status;
			//@brief : �豸ʵ����ʾ����
			u_tchar   IDN[20];
		}NodeEx, *PNodeEx;

		typedef struct _UCIMSG {
			u_session   Session;
			u_uint32    Message;
			u_wparam    wParams;
			u_lparam    lParams;
			u_byte      Reserved[240];
		}UCIMSG;//256Bytes

		//////////////////////////////////////////////////////////////////////////	
		typedef enum _uci_msg {
			//@brief   : ���豸�����������Ѿ��Ͽ�
			//@remarks : Ŀǰֻ֧��LAN�ڷ��ʵ����ӵ����
			// wParams LAN : �˿ں�(ʮ����)��
			// Reserved LAN : IP ��ַ
			UMSG_CONNECT_CLOSED = 1,
			//@brief   : �ļ�������Ϣ
			//@remarks :  
			// wParams ��֡���� 
			// lParams ֡������ -1 �� ��ʼ���䣻 [0,wParams)�����У� ����wParams�������
			//-> UCIMSGProc return -1 �� ��ʾ�жϴ���.
			UMSG_FILE_TRANSFER = 2,
			//@brief   : USB�����Ϣ
			//@remarks :  
			// wParams : ʹ�õ�16λ�����У���8λΪpid����8λΪvid��
			// lParams : �¼����ͣ� �Ƴ� = 0�� ���� = 1��
			UMSG_DEVICE_NOTIFY = 3,
		}EUCIMSG;

		typedef int(__stdcall *UCIMSGProc)(UCIMSG* _msg);
#include <poppack.h>

#ifdef __cplusplus
	}
#endif//__cplusplus

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // ucidef_h__