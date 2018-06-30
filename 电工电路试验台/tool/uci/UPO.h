/*!
 * \created : 2016/12/27
 * \author  : M.Yang
 * \purpose : �ṩʹ��UCI�ӿڵģ�����DSO����ض���
 */

#ifndef DSO_UPO_h__
#define DSO_UPO_h__

#ifdef __cplusplus
namespace upo2k {
#endif // __cplusplus
	//////////////////////////////////////////////////////////////////////////
	// UPO������λ���壺
	// 16bit��������8λΪ��λ���ͣ���8λΪ��λ����!
	// ��ȡ��ʽ�� ���� short unit��
	// char unit_code = unit & 0xff;
	// if((unit & UT_Time) == UT_Time) unit_code is ETime
	// else if((unit & UT_Freq) == UT_Freq) unit_code is EFreq
	//////////////////////////////////////////////////////////////////////////
	
	//@brief   : ��λ����
	//@remarks : ��8λΪ��λ���ͣ���8λΪ��λ����!
#ifdef __cplusplus
	typedef enum _UnitType : unsigned short {
#else
	typedef enum _UnitType  {
#endif // __cplusplus
		UT_Voltage = (0x0000),
		UT_Time = (0x0100),
		UT_Freq = (0x0200),
		UT_Percent = (0x0300),
		UT_Degree = (0x0400),
		UT_DB = (0x0500),
		UT_SamplePoint = (0x0600),
		//@brief   : ����
		UT_Current = (0x0700),
		//@brief   : ����
		UT_Watt = (0x0800),
		//@brief   : δ֪��λ
		UT_Unknown = (0x0900),

		UT_Invalid = (0x8000),
	}UnitType;

	enum EFreq {
		Hz = 0,
		KHz,
		MHz,
		GHz,
		THz,
	};

	enum ETime {
		s = 0,
		ms,
		��s,
		ns,
		ps,
	};

	enum EVoltage {
		��V = 0,
		mV,
		V,
		KV
	};

	enum ECurrent {
		��A = 0,
		mA,
		A,
		KA
	};

	enum EWatt {
		��W = 0,
		mW,
		W,
		KW
	};

	enum EUnknown {
		��U = 0,
		mU,
		U,
		KU
	};

	enum EDB {
		mdB = 0,
		dB,
		kdB
	};

	enum EPoint {
		Sa = 0,
		KSa,
		MSa,
		GSa,
	};

	enum EPercent {
		Percent = 0
	};

	enum EDegree {
		Degree = 0,
	};

	static inline char GetUnitType(short _v) { return (char)(_v >> 8); }
	static inline char GetUnitCode(short _v) { return _v & 0xff; }

	//@brief : �����������λ
	//@remark: ͨ��ָ���Lock?����ȡ��64bit������λ��ǡ�
	typedef enum _KeyFlagsPos {
		IKEY_F1,
		IKEY_F2,
		IKEY_F3,
		IKEY_F4,
		IKEY_F5,

		IKEY_CH1,
		IKEY_CH2,
		IKEY_CH3,
		IKEY_CH4,

		IKEY_MATH,
		IKEY_REF,
		IKEY_HORIZON,
		IKEY_TRIGGER,
		IKEY_FORCE,
		IKEY_HELP,
		IKEY_MEASURE,
		IKEY_CURSOR,
		IKEY_ACQUIRE,
		IKEY_DISPLAY,
		IKEY_STORAGE,
		IKEY_UTILITY,
		IKEY_DECODE,
		IKEY_DEFAULT,
		IKEY_AUTOSET,
		IKEY_RUNSTOP,
		IKEY_SINGLE,
		IKEY_CLEAR,
		IKEY_PRINTSCREEN,
		IKEY_MENU,

		IKEY_OFFSET_LEFT,
		IKEY_OFFSET_RIGHT,
		IKEY_OFFSET_OK,

		IKEY_PRETRIG_LEFT,
		IKEY_PRETRIG_RIGHT,
		IKEY_PRETRIG_OK,

		IKEY_TRIGLEVEL_LEFT,
		IKEY_TRIGLEVEL_RIGHT,
		IKEY_TRIGLEVEL_OK,

		IKEY_VOLTS_LEFT,
		IKEY_VOLTS_RIGHT,
		IKEY_VOLTS_OK,

		IKEY_TIMEBASE_LEFT,
		IKEY_TIMEBASE_RIGHT,
		IKEY_TIMEBASE_OK,

		IKEY_SELECT_LEFT,
		IKEY_SELECT_RIGHT,
		IKEY_SELECT,
	}KeyFlagsPos;

	typedef struct _CellBaseValue {
		float Value;
		short Unit;
		short IsLimit;  // == 1,yes; =0, no! 
	}CellBaseValue;

	typedef struct _time {
		unsigned short Year;
		unsigned short Month;
		unsigned short Day;
		unsigned short Hour;
		unsigned short Minute;
		unsigned short Second;
	}Time;

#include <PshPack1.h> //��1�ֽڶ���
	//@brief : ����λ������������ 
	//@remark:
	typedef struct _measure_param {
		float value; //��ЧʱֵΪ FLT_MAX
		//@brief : ����λ
		//@remark: ��λ�����UnitType
		short unit;  //��ЧʱֵΪ UT_Invalid = (0x8000)		
	}UValue;

	//@brief : ��ȡ����LED״̬ 
	//@remark: 1 - ������ 0 �� δ���� ��ָ���LED?�� ��ȡ��
	typedef struct _KeyLedStat {
		char CH1, CH2, CH3, CH4, MATH, REF, RUN_STOP, Single;
	}KeyLedStat;

	//@brief : ���������ݰ�
	typedef struct _CursorMeasurePack {
		UValue Ax;
		UValue Bx;
		UValue Bx_Ax;
		UValue Hz_Bx_Ax;
		UValue Ay;
		UValue By;
		UValue By_Ay;
		char   Reserver[8];
	}CursorMeasurePack;
#include <poppack.h>

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DSO_UPO_h__
