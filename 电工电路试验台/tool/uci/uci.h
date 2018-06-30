/********************************************************************
	created:	2014/12/22	
	author:		M.Yang
	purpose:	UCI(united communicate interface)
*********************************************************************/

#ifndef uci_h__
#define uci_h__

#include "ucidef.h"

//////////////////////////////////////////////////////////////////////////
// ���ڽӿڷ��ص�״ֵ̬��
//    < 0 : ��ʾ���� 
//    �������Ӧ�Ĵ�����Ϣ����ͨ��uci_GetLastError��ȡ,������Ķ�����ucidef.h�ļ��С�
//    ���� < UCI_ERR�Ĵ�����Ϊlibusb�Ĵ����롣
//////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
namespace uci {
extern "C"{
#endif
	//@brief : ִ�������Ự�޹صĲ�ѯ����
	//@param PRParams _params  : ��ѯ�����Ĳ���
	//@param u_byte * _data    : ������ݵĻ�������ַ
	//@param u_size _dataCount : ������ݵĻ�������С��Bytes��
	//@return u_status :  �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : 
	u_status _UCIAPI uci_Query(_in_out PRParams _params, _in_out u_byte* _data, _in u_size _dataCount);

	//@brief : ��ѯ��������������ͨ�Žڵ�
	//@param _in const QParams * _params : ��ѯ���� 
	//@param _out Node * _outBuf         : ��Ų�ѯ���Ľڵ�����
	//@param _in_out u_size * _nodeCnt   : ���ΪҪ���ȡ�Ľڵ�����������Ϊʵ�ʶ�ȡ���Ľڵ�������
	//@param _in u_size _timeOut         : ��ѯ��ʱ
	//@return u_status  : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks :	
	u_status _UCIAPI uci_QueryNodes(_in const QParams* _params, _out Node* _outBuf, 
									_in_out u_size* _nodeCnt, _in u_size _timeOut);

	//@brief : ��ѯ��������������ͨ�Žڵ�
	//@param _msg        :  ��ѯ�ַ�������ʽ�磺  "LAN:4162,5000;USB:0x1234&0x5345,0x7777&0x5345;"
	//@param _nodes      :  ��Ų�ѯ���Ľڵ�����
	//@param _node_count :  Ҫ��ѯ�Ľڵ������
	//@param _timeout    :	��ѯ��ʱ
	//@return  : < 0 �����룻 >=0 ��ѯ���Ľڵ㣨�豸��������
	//@remarks : 
	u_status _UCIAPI uci_QueryNodesX(u_cstring _msg, Node* _nodes, u_size _node_count, _in u_size _timeout);

	/*21-7-2017 15:51 by M.J Created <�򻯰汾��ѯͨѶ�ڵ㲢����ͨ�ŵ�ַ>*/
	//@brief : ��ѯ��������������ͨ�Žڵ�
	//@param _msg        :	��ѯ�ַ�������ʽ�磺  "LAN:4162,5000;USB:0x1234&0x5345,0x7777&0x5345;"
	//@param _timeout    :	��ѯ��ʱ
	//@return  : < 0 �����룻 >=0 ��ѯ���Ľڵ㣨�豸��������
	//@remarks : 
	u_status _UCIAPI uci_QueryNodesX_Simple(u_tchar* _addr_msg, u_size _addr_msg_len, u_size _node_type, _in u_size _timeout);

	//@brief : ���豸��������
	//@param u_cstring _addr      : �豸�����ַ����� ��'\0'��β
	//@param u_session * _session : �����ѽ����ĻỰID.
	//@param u_uint32 _timeOut    : ���ӳ�ʱʱ�� ms
	//@return u_status : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	// UCI_SUCCESSu_tchar
	// UCI_ERR_ARGS_WRONG; 
	// UCI_ERR_RES_INIT_ERROR; 
	// UCI_ERR_CONNECT_ADDR_WRONG;
	// UCI_ERR_CONNECT_FAILED;
	// UCI_ERR_CONNECT_TIMEOUT]
	//@remarks : ���ĵ�
	u_status _UCIAPI uci_Open(u_cstring _addr, u_session* _session, u_uint32 _timeOut);

	//@brief          : ���豸��������
	//@param _addr    : �豸�����ַ����� ��'\0'��β
	//@param _timeOut : ���ӳ�ʱʱ�� ms
	//@return :  < 0 �����룻 >=0 �ỰID
	//@remarks : ���ӿ���uci_Open�ļ򻯰汾��
	u_status _UCIAPI uci_OpenX(u_cstring _addr, u_uint32 _timeOut);

	//@brief : ִ������
	//@param u_session _session : �ỰID
	//@param PCommandParams _params : �������
	//@return u_status : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : 
	u_status _UCIAPI uci_SendCommand(u_session _session, PCommandParams _params);

	//@brief : ���UCI���¼�����
	//@param uciNotify _pNotify : ��ӦUCI�¼��Ļص�����
	//@return u_status _UCIAPI  :  �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : 
	u_status _UCIAPI uci_SetNotify(UCIMSGProc _pNotify);
	
	//@brief          : ��������
	//@param _msg     : �����ַ���
	//@param _obj     : �������ݻ�������ַ
	//@param _objSize : �������ݻ�������С
	//@return         : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����s
	//@remarks        : Ŀǰֻ֧���л������������԰汾�Ͷ����豸����ͷ������ĵ��¼���������鿴�ĵ���
	u_status _UCIAPI uci_SetAttribute(u_session _sesn, u_cstring _msg, const u_object* _obj, u_size _objSize);
	
	//@brief                   : ��ѯ����
	//@param u_session _sesn   : 
	//@param u_attr _name      : 
	//@param u_attr_v * _value : 
	//@return u_status _UCIAPI : 
	//@remarks : 	
	u_status _UCIAPI uci_GetAttribute(u_session _sesn, u_cstring _msg, u_object* _obj, u_size _objSize);

	//@brief : д����
	//@param u_session _session   : �ỰID
	//@param PWParam _params      : д��������
	//@param const u_byte * _data : Ҫд������ݻ�������ַ�� ����ΪNULL
	//@param u_size _len          : Ҫд������ݻ������ĳ��ȣ� ���_buf == NULL,��_len�ᱻ���Կ���Ϊ�κ�ֵ
	//@return u_status : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks :  ��_dataΪnull����ʾ_params.CMDString���Ѿ�������Ҫд��������ֶ��ˣ������������ʹ��uci_FormatWrite�ӿڣ�
	//            ���_data != NULL���������ַ���_params.CMDStringֻ�ܰ���һ��������䡣
	u_status _UCIAPI uci_Write(u_session _session, PWParams _params, const u_byte* _data, u_size _len);

	//@brief          :  д����
	//@param _session :  �ỰID
	//@param _msg     :  �����ַ�������'\0'��β. �����ʽ���ĵ���
	//@param _timeout :  д��ʱ(��λ��ms)
	//@param _data    :  Ҫд������ݻ�������ַ�� ����ΪNULL
	//@param _len     :  Ҫд������ݻ������ĳ��ȣ� ���_buf == NULL,��_len�ᱻ���Կ���Ϊ�κ�ֵ
	//@return         :  �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks        :  ��_dataΪnull����ʾ_msg���Ѿ�������Ҫд��������ֶ��ˣ�
	//                   ���_data != NULL���������ַ���_msgֻ�ܰ���һ��������䡣
	u_status _UCIAPI uci_WriteX(u_session _session, u_cstring _msg, 
		u_uint32 _timeout, const u_byte* _data, u_size _len);

	//@brief          : ֻдָ���ַ�����дָ��ӿ�
	//@param _session : �ỰID
	//@param _msg     : �����ַ�������'\0'��β. �����ʽ���ĵ���
	//@param _timeout : д��ʱ(��λ��ms)
	//@return         : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����	
	//@remarks        : 
	u_status _UCIAPI uci_WriteSimple(u_session _session, u_cstring _msg, u_uint32 _timeout);

	//@brief : ��ʽ��д������
	//@param u_session _sesn        : �ỰID
	//@param u_uint32 _timeOut      : д��ʱ(��λ��ms)
	//@param const u_tchar * format : �����ַ�������'\0'��β. �����ʽ���ĵ���
	//@param ... : 
	//@return u_status              : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : 
	u_status _UCIAPI uci_FormatWrite(u_session _sesn, u_uint32 _timeOut, const u_tchar *format, ...);

	//@brief : ��ȡ����
	//@param u_session _session : �ỰID
	//@param PRParams _params   : ���������������
	//@param u_byte * _data     : �������ݵĻ�����
	//@param u_size _dataLen    : �������ݵĻ�������С����С��Э�������
	//@return u_status :    �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : ����ʹ��uci_ReadX�汾��
	u_status _UCIAPI uci_Read(u_session _session, PRParams _params, u_byte* _data, u_size _dataLen);

	//@brief          : ��ȡ����
	//@param _session : �ỰID
	//@param _msg     : �����ַ�������'\0'��β. �����ʽ���ĵ���
	//@param _timeout : ��ȡ��ʱ��
	//@param _data    : ���ն�ȡ�������ݵĻ�������ַ��
	//@param _dataLen : _dataָ��Ļ��������ȣ�Bytes��
	//@return : 	�鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : ���ӿ���uci_Read�ļ򻯰汾
	u_status _UCIAPI uci_ReadX(u_session _session, u_cstring _msg, 
		u_uint32 _timeout, u_byte* _data, u_size _dataLen);

	//@brief : д�ļ�
	//@param u_session _session  : �ỰID
	//@param WFileParams * _info : �ļ���Ϣ��
	//@return u_status : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : 
	u_status _UCIAPI uci_WriteFromFile(u_session _session, WFileParams* _info);

	//@brief           : д�ļ�
	//@param _session  : �ỰID
	//@param _msg      : �����ַ�������'\0'��β. �����ʽ���ĵ���
	//@param _filePath : Ҫд����ļ�·���������ļ�����
	//@param _timeout  : д��ʱ(��λ��ms)
	//@return : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : ���ӿ���uci_WriteFromFile�ļ򻯰汾��
	u_status _UCIAPI uci_WriteFromFileX(u_session _session, u_cstring _msg,
		u_cstring _filePath, u_uint32 _timeout);

	//@brief : Read data synchronously and store the transferred data in a file.
	//@param u_session _session  : �ỰID
	//@param RFileParams _params :  Ҫ������ݵ��ļ���·��
	//@return u_status  : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : 
	u_status _UCIAPI uci_ReadToFile(u_session _session, RFileParams* _params);

	//@brief : ��ȡ�ļ�������������
	//@param _session   : �ỰID.
	//@param _msg       : �����ַ�������'\0'��β. �����ʽ���ĵ���
	//@param _filePath  : �������ݵ����ش��̵��ļ�·�����������ļ����ͺ�׺��
	//�����Ǿ���·��Ҳ���������·������������·������ͨ��_filePathFinal��ȡ����·����
	//@param _timeout   : ��ʱ��
	//@param _filePathFinal       : ������嵽���ص��ļ��ľ���·��
	//@param _filePathFinalLength : _filePathFinal�ĳ��ȣ����ַ�������
	//@return : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	//@remarks : ���ӿ���uci_ReadToFile�ķǷ�װ�汾��
	u_status _UCIAPI uci_ReadToFileX(u_session _session, u_cstring _msg,
		u_cstring _filePath, u_uint32 _timeout, 
		u_tchar *_filePathFinal, u_int32 _filePathFinalLength);

	//@brief : �رջỰ
	//@param u_session _session : ��Ҫ�رյĻỰID
	//@return u_status  : �鿴���ļ��еġ����ڽӿڷ��ص�״ֵ̬��˵����
	u_status _UCIAPI uci_Close(u_session _session);

	//@brief : �������һ�β�����Ӧ�Ĵ���״̬��Ϣ
	//@return u_cstring : ����������Ϣ
	//@remarks : ����ͨ��uci_SetAttribute���ô���������Ϣ�����԰汾��
	u_cstring _UCIAPI uci_GetLastError(void);

	//@brief   : �˳�UCIʵ��ʱ���á�		
	//@remarks : �������������˳�ʱ���ã����ͷ��ڲ���Դ��  
	// ���ӿڲ�����һ��Ҫʹ�á� ֻ����.NET���йܻ����£�
	// ��ͨ��uci_SetAttribute�� uci_SetNotify�����ӿ�
	// �������豸������Ƴ��¼�ʱ�����˳�������ʱʹ�á�
	void _UCIAPI uci_ExInstance();
#ifdef __cplusplus
}

}
#endif
#endif // uci_h__
