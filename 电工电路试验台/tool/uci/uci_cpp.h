/*!
 * \created : 2017/3/17
 * \author  : M.Yang
 * \purpose : �ṩUCI��C++�汾�ӿ�
 */
#ifndef uci_cpp_h__
#define uci_cpp_h__
#include "uci.h"

namespace uci {
	class Session;
}

//@brief : UCI �Ự��
//@remark: ��uci_ǰ׺��C���Թ淶�Ľӿ����򵥷�װ�������ĺô��ǣ�
// 1����Session��������ʱ�����Զ��رջỰ�ǣ�ʹ�õ�ʹ��ʱ����עʹ���߼������Ǵ������߼���
// 2����ÿһ���ӿ��ϣ�����ʡȥһ��Session ID����Σ��ҿ����趨�βε�Ĭ��ֵ����ĳЩC���Ա�������֧�֣���ʹ�ýӿڸ��򵥣�
// ��ע�⣺
//	���಻��ȫ���ӿڵ����䣬������Ҫ�������������䡣
class uci::Session {
public:
	Session() : m_Session(INVALID_SESSION) {}
	virtual ~Session() {
		if (m_Session != INVALID_SESSION) {
			uci_Close(m_Session);
			m_Session = INVALID_SESSION;
		}
	}

	u_status Open(u_cstring _addr, u_uint32 _timeout = 2000) {
		u_status r = uci_OpenX(_addr, _timeout);
		if (UCISUCCESS(r))
			m_Session = (u_session)r;
		return r;
	}

	u_status Write(u_cstring _msg,u_uint32 _timeout = 1000, const u_byte* _data = NULL, u_size _len = 0) {
		return uci_WriteX(m_Session, _msg, _timeout, _data, _len);
	}

	u_status Read(u_cstring _msg,u_uint32 _timeout, u_byte* _data, u_size _dataLen) {
		return uci_ReadX(m_Session, _msg, _timeout, _data, _dataLen);
	}

	u_status WriteFromFile(u_cstring _msg, u_cstring _filePath, u_uint32 _timeout) {
		return uci_WriteFromFileX(m_Session, _msg, _filePath, _timeout);
	}

	u_status ReadToFile(u_cstring _msg, u_cstring _filePath, u_uint32 _timeout,
		u_tchar *_filePathFinal, u_int32 _filePathFinalLength) {
		return uci_ReadToFileX(m_Session, _msg, _filePath, _timeout, _filePathFinal, _filePathFinalLength);
	}

	u_status Close() { return uci_Close(m_Session); }
	u_session GetSession() const { return m_Session; }
protected:
	u_session m_Session;
};

#endif // uci_cpp_h__
