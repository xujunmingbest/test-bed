#ifndef _DSOCOM_API_COMMON_DEF_H_201212281614
#define _DSOCOM_API_COMMON_DEF_H_201212281614

#include "dso_base.h"

#ifdef __cplusplus
namespace comApi
{
	using namespace comAPICommon;
#endif
	//����λ����
#ifdef __cplusplus
	namespace Units
	{
#endif
		const int UNIT_NULL = 0;    //add by yzz
		const int UNIT_PS = 1;    //add by yzz
		const int UNIT_NS = 2;
		const int UNIT_US = 3;
		const int UNIT_MS = 4;
		const int UNIT_S = 5;
		const int UNIT_KS = 6;

		const int UNIT_nVS = 7;
		const int UNIT_uVS = 8;
		const int UNIT_mVS = 9 ;

		const int UNIT_PER = 10;

		const int UNIT_UV = 11;
		const int UNIT_MV = 12;
		const int UNIT_V = 13;
		const int UNIT_KV = 14;

		const int UNIT_pHZ = 18;
		const int UNIT_nHZ = 19;
		const int UNIT_uHZ =20;
		const int UNIT_mHZ = 21;
		const int UNIT_HZ = 22;
		const int UNIT_KHZ = 23;
		const int UNIT_MHZ = 24;
		const int UNIT_GHZ = 25;

		//const int UNIT_VV = 52; //2014��5��23��11:56:55�޸�
		const int UNIT_mVV = 52;
		const int UNIT_VV = 53;
		const int UNIT_KVV = 54;

		const int UNIT_mDB = 80;           // add by yzz
		const int UNIT_DB = 81;
		const int UNIT_KDB = 82;          // add by yzz
#ifdef __cplusplus
	}
#endif

#pragma region �����
	enum DataCMD
	{
		Invalid_Data_CMD = -1,
		//get data cmd
		GET_DISPLAY_DATA = 150,		//get ch1, ch2, math, ref a/b data
		GET_CH1_DISPLAY_DATA,		//get ch1 display data: 
		GET_CH1_ORIGIN_DATA,		//get ch1 original data
		GET_CH2_DISPLAY_DATA,		//get ch2 display data
		GET_CH2_ORIGIN_DATA,		//get ch2 original data
		GET_CH3_DISPLAY_DATA,
		GET_CH3_ORIGIN_DATA,
		GET_CH4_DISPLAY_DATA,
		GET_CH4_ORIGIN_DATA,
		
		GET_MATH_DATA = 200,		//get math data
		GET_REF_A_DATA,				//get ref A data
		GET_REF_B_DATA,				//get ref B data

		//[Notice]  Get_Data_CMD_END  ָ�� DataCMD �����һ������
		Get_Data_CMD_END = GET_REF_B_DATA,
	};

	/* Command Type */
	typedef enum _control_cmd{
		Invalid_Control_CMD = -1,

		CMD_GET_DSO_TYPE = 0,

		//special function cmd
		LOCK_DSO_KEYPAD,		//lock dso keypad: if set this cmd, the dso's keypad will not work
		UNLOCK_DSO_KEYPAD,			//unlock dso keypad: if set this cmd, the dso's keypad will work normally
		SET_PROCSTATE,				//PROC_STATE: control run/stop
		GET_PROCSTATE,				//PROC_STATE: get run/stop state 
		SET_AUTOSET,				//set dso to do auto set
		SET_TRIG_FORCE, 			//set dso to be force trigger state
		SET_SINGLE,
		SET_COARSE,
		SET_PRTSC,					//set dso to do print screen
		GET_BITMAP_FILENAME,
		GET_BITMAP_FILEDATA,
		
		//@brief   : ��������ָ��
		SET_KEY = 20,
		//@brief   : ������ѯָ��
		GET_KEY,
		//@brief   : ��ȡѹ�������Ļ��������
		GET_SCREEN_SHOT,
		//@brief   : ����������
		GET_DEV_CONFIG,
		//@brief   : д��������
		SET_DEV_CONFIG,
		//@brief :    ��ѯ�豸��ʾ��
		GET_IDN,
		//@brief : ��ȡЭ��汾�� 
		//@remark:
		GET_CVER,
		
		GET_SCREEN_INFO = 50,		//SCREEN_INFO
		GET_USB_CONNECTION_STATE,	//short 1: usb connection state is ok; other: usb connection state is not ok
		GET_CYMOMETER_VALUE,		//SignalFreq
		GET_CURRENT_ACTIVE_CHANNEL, //short 0:	CH1; 1: CH2; 2: MATH; 3: RefA; 4: RefB; -1:other
		GET_CURRENT_ACTIVE_MENU,	//short 0: CH1 menu; 1: CH2 menu; 2: MATH or FFT menu; -1: other menu
		GET_CURRENT_MENU_SHOW_STATE,//x short 0: current menu is not display; 1: current menu is display
		GET_SAMPLE,					//get sample

		SET_TO_ZERO = 100,			//set dso to zero state
		SET_CH1_VPOS_TO_ZERO,
		SET_CH2_VPOS_TO_ZERO,
		SET_CH3_VPOS_TO_ZERO,
		SET_CH4_VPOS_TO_ZERO,
		SET_HPOS_TO_ZERO,
		SET_TRIG_TO_ZERO,

		GET_CH1_MEASURE_PARAM = 250,//get ch1 measure parameters
		GET_CH2_MEASURE_PARAM,		//get ch2 measure parameters
		GET_CH3_MEASURE_PARAM,
		GET_CH4_MEASURE_PARAM,
		GET_MATH_MEASURE_PARAM,		//get math measure parameters
		
		//set/get channel param cmd
		SET_CH1_SWITCH = 300,		//ChannelSwitch
		GET_CH1_SWITCH,				//ChannelSwitch
		SET_CH1_ATTRIBUTE,			//ChannelAttribute
		GET_CH1_ATTRIBUTE,			//ChannelAttribute
		SET_CH1_VPOS,				//ChannelVPos
		GET_CH1_VPOS,				//ChannelVPos
		SET_CH1_VLEVEL,				//ChannelVLevel
		GET_CH1_VLEVEL,				//ChannelVLevel
		SET_CH1_TIMEBASE,			//ChannelTimeBase���ر���
		GET_CH1_TIMEBASE,			//ChannelTimeBase
		SET_CH1_TRIG_LEVEL,			//ChannelTLevel
		GET_CH1_TRIG_LEVEL,			//ChannelTLevel
		SET_CH1_TRIG_POS,			//ChannelTPos
		GET_CH1_TRIG_POS,			//ChannelTPos

		SET_CH2_SWITCH = 350, 		//ChannelSwitch
		GET_CH2_SWITCH, 			//ChannelSwitch
		SET_CH2_ATTRIBUTE,			//ChannelAttribute
		GET_CH2_ATTRIBUTE,			//ChannelAttribute
		SET_CH2_VPOS,				//ChannelVPos
		GET_CH2_VPOS,				//ChannelVPos
		SET_CH2_VLEVEL,				//ChannelVLevel
		GET_CH2_VLEVEL,				//ChannelVLevel
		SET_CH2_TIMEBASE,			//ChannelTimeBase
		GET_CH2_TIMEBASE,			//ChannelTimeBase ���ر���
		SET_CH2_TRIG_LEVEL,			//ChannelTLevel
		GET_CH2_TRIG_LEVEL,			//ChannelTLevel
		SET_CH2_TRIG_POS,			//ChannelTPos
		GET_CH2_TRIG_POS,			//ChannelTPos

		//math
		SET_MATH_SWITCH = 800,		//ChannelSwitch
		GET_MATH_SWITCH,			//ChannelSwitch
		SET_MATH_VPOS,				//ChannelVPos
		GET_MATH_VPOS,				//ChannelVPos
		SET_MATH_VLEVEL,			//ChannelVLevel
		GET_MATH_VLEVEL,			//ChannelVLevel
		SET_FFT_FREQ,				//by change timebase
		GET_FFT_FREQ,				//SignalFreq
		SET_MATH_TYPE,				//MathType
		GET_MATH_TYPE,				//MathType
		SET_MATH_CONFIG,			//MathConfig
		GET_MATH_CONFIG,			//MathConfig
		SET_FFT_CONFIG,				//FFTConfig
		GET_FFT_CONFIG,				//FFTConfig
		SET_FILTER_CONFIG,			//FilterConfig
		GET_FILTER_CONFIG,			//FilterConfig

		//acquire
		SET_ACQUIRE_CONFIG = 850,	//AcquireConfig
		GET_ACQUIRE_CONFIG,			//AcquireConfig

		//trig menu
		SET_TRIG_EDGE_CONFIG = 900,	//EdgeTrig
		GET_TRIG_EDGE_CONFIG,		//EdgeTrig
		SET_TRIG_PULSE_CONFIG,		//PulseTrig
		GET_TRIG_PULSE_CONFIG,		//PulseTrig
		SET_TRIG_VIDEO_CONFIG,		//VideoTrig
		GET_TRIG_VIDEO_CONFIG,		//VideoTrig
		SET_TRIG_SLOPE_CONFIG,		//SlopeTrig
		GET_TRIG_SLOPE_CONFIG,		//SlopeTrig

		//display menu
		SET_DISPLAY_CONFIG = 950,	//DisplayConfig
		GET_DISPLAY_CONFIG,			//DisplayConfig

		//measure menu
		SET_MEASURE_SOURCE = 1000,	//MeasureSrc
		GET_MEASURE_SOURCE,			//MeasureSrc
		SET_MEASURE_ALL_CONFIG,		//MeasureAllConfig
		GET_MEASURE_ALL_CONFIG,		//MeasureAllConfig
		SET_MEASUER_PART_CONFIG,	//MeasurePartConfig
		GET_MEASURE_PART_CONFIG,	//MeasurePartConfig
		
		//cursor menu
		SET_CURSOR_CONFIG = 1050,	//CursorConfig
		GET_CURSOR_CONFIG,			//CursorConfig
		GET_CURSOR_MEASURE_RESULT,	//CurSorMeasureResult	

		//storage config
		SET_STORAGE_SETTING = 1100,	//StorageSetting
		GET_STORAGE_SETTING,		//StorageSetting
		SET_STORAGE_WAVE,			//StorageWave
		GET_STORAGE_WAVE,			//StorageWave
		SET_STORAGE_BITMAP,
		GET_STORAGE_BITMAP,

		//reference config
		SET_REF_A_SWITCH = 1200,		//ChannelSwitch
		GET_REF_A_SWITCH,			//ChannelSwitch
		SET_REF_B_SWITCH,			//ChannelSwitch
		GET_REF_B_SWITCH,			//ChannelSwitch
		SET_REF_A_VPOS,				//ChannelVPos
		GET_REF_A_VPOS,				//ChannelVPos
		SET_REF_A_VLEVEL,			//ChannelVLevel
		GET_REF_A_VLEVEL,			//ChannelVLevel
		SET_REF_A_TRIG_POS,			//ChannelTPos
		GET_REF_A_TRIG_POS,			//ChannelTPos
		SET_REF_B_VPOS,				//ChannelVPos
		GET_REF_B_VPOS,				//ChannelVPos
		SET_REF_B_VLEVEL,			//ChannelVLevel
		GET_REF_B_VLEVEL,			//ChannelVLevel
		SET_REF_B_TRIG_POS,			//ChannelTPos
		GET_REF_B_TRIG_POS,			//ChannelTPos
		GET_REF_A_TIMEBASE,			//ChannelTimeBase
		GET_REF_B_TIMEBASE,			//ChannelTimeBase
		SET_REF_CONFIG,				//RefConfig
		GET_REF_A_CONFIG,			//RefConfig
		GET_REF_B_CONFIG,			//RefConfig
		GET_REFWAVE_EXIST,			//short 0:not exist; 1:exist
		GET_REFSETTING_EXIST,		//short 0:not exist; 1:exist

		//horizon menu
		SET_HORIZON_CONFIG = 1300,	//HorizonConfig
		GET_HORIZON_CONFIG,			//HorizonConfig

		//utility
		SET_UTILITY_CONFIG = 1400,	//UtilityConfig
		GET_UTILITY_CONFIG,			//UtilityConfig

		//record
		SET_RECORD_CONFIG = 1500,	//RecordConfig
		GET_RECORD_CONFIG,			//RecordConfig

		//auto calibrate
		SET_SELF_CALIBRATE = 1600, 	//set dso to be self-calibrate
		//product config	
		SET_RESET_CONFIG = 1700,	//set dso config to product config

		//select cursor
// 		SET_CURSOR_INDEX = 2000,
// 		GET_CURSOR_INDEX,
	}CONTROL_CMD;
#pragma endregion �����

#pragma region ö��ֵ�����
	//״̬�Ļ�ȡ��������ͨ��֡���ݰ����棬���ַ�������ʽ��ȡ��
	typedef enum{
		PROC_STOP = 0,
		PROC_RUN,
		PROC_ARMED = PROC_RUN,
		PROC_READY,
		PROC_TRIGED,
		PROC_AUTO,
		PROC_SCAN,
		PROC_OVER,

		PROC_RESET, // Add by yzz, for UTD2102CEX
	}E_PROC_STATE;

	typedef enum{
		CH_Invalid_ID = -1,
		CH_1_ID = 0,
		CH_2_ID,
		CH_MATH_ID,
		CH_REF_A_ID,
		CH_REF_B_ID,
		CH_MAX_CNT,
	}E_CHANNEL_ID;

	/**********************************************
	****************Channel Attribute*****************
	***********************************************/
	typedef enum{
		CH_COUPLING_DC = 0,
		CH_COUPLING_AC,
		CH_COUPLING_GND,
	}CH_ATTR_COUPLING;


	typedef enum{
		SWITCH_OFF = 0,
		SWITCH_ON,
	}SWITCH_STATE;

	typedef enum
	{
		CH_VOLT_SCALE_COARSE = 0,
		CH_VOLT_SCALE_FINE,
	}CH_VOLT_SCALE;


	typedef enum{
		CH_PROBE_1X = 0,
		CH_PROBE_10X,
		CH_PROBE_100X,
		CH_PROBE_1000X,
	}CH_PROBE;

	//ö��ֵ��̽ͷ���ԣ�������0�������ࣨ1��
	enum ChannelPolarity
	{
		CH_Polar_Normal = 0,
		CH_Polar_Invert,
	};

	/***********************************************/
	/********** vertical system: channel position *********/
	/***********************************************/
	typedef enum{
		CH_VPOS_TOP = 378,
		CH_VPOS_BOT = -122,
	}E_CH_VPOS_LIMIT;

	/***********************************************/
	/******** vertical system: channel voltage level *******/
	/***********************************************/
	typedef enum{
		ADJUST_DECREASE = -1,
		ADJUST_INCREASE = 1,
	}E_ADJUST_DIR;

	/*****************************************************************/
	/* horizontal system: channel horizontal position ,ie channel pre-trigger depth */
	/*****************************************************************/
	typedef enum{
		CH_TPOS_LEFT = 0,
		CH_TPOS_RIGHT = 700,
	}E_CH_TPOS_LIMIT;

	enum E_CH_TriggerLevel_Limit
	{
		CH_TriggerLevel_Min = -327,
		CH_TriggerLevel_Max = 375,
	};

	/***********************************************/
	/***************** math/fft config *****************/
	/***********************************************/
	enum E_MATH_TYPE
	{
		MATH_TYPE_MATH = 0,
		MATH_TYPE_FFT,

		MATH_TYPE_FILTER,   //add by yzz
	};

	typedef enum{
		OP_SIGN_ADD = 0,
		OP_SIGN_SUB,
		OP_SIGN_MULTIPLY,
		OP_SIGN_DIVIDE,
	}E_MATH_OP_SIGN;

	typedef enum{
		FFT_WIN_RECTANGLE = 0,
		FFT_WIN_HANNING,	
		FFT_WIN_HAMMING,
		FFT_WIN_BLACKMAN,
	}E_FFT_WINDOW;

	typedef enum{
		FFT_UNIT_VRMS = 0,
		FFT_UNIT_DBVRMS,
	}E_FFT_UNIT;

	/***********************************************/
	/***************** acquire config *****************/
	/***********************************************/
	enum E_ACQ_MODE
	{
		ACQ_MODE_NORMAL = 0,
		ACQ_MODE_PEAK,
		ACQ_MODE_AVERAGE,
	};

	enum E_SAMPLE_MODE
	{
		SAMPLE_REAL = 0,
		SAMPLE_EQUIVALENT,

		SAMPLE_SCAN //add by yzz
	};

	/***********************************************/
	/***************** trigger config *****************/
	/***********************************************/
	typedef enum{
		TRIG_TYPE_EDGE = 0,		//��������: ����
		TRIG_TYPE_NTSC,			//��������: ��Ƶ
		TRIG_TYPE_WIDTH,		//��������: ����
	}E_TRIG_TYPE;

	typedef enum{
		TRIG_CH1 = CH_1_ID,
		TRIG_CH2 = CH_2_ID,
		TRIG_EXT,
		TRIG_EXT_5,					//EXT/5
		TRIG_AC_LINE = 4,
		TRIG_ALTER,
	}E_TRIG_SOURCE;

	typedef enum{
		TRIG_EDGE_RISE = 0,
		TRIG_EDGE_FALL,
		TRIG_EDGE_RISE_FALL,
	}E_TRIG_SLOPE;

	typedef enum{
		TRIG_MODE_AUTO = 0,
		TRIG_MODE_NORMAL,
		TRIG_MODE_SINGLE,
	}E_TRIG_MODE;

	typedef enum{
		TIRG_COUPLING_DC = 0,
		TIRG_COUPLING_AC,
		TIRG_COUPLING_H_RESTRAIN,	//trigger coupling high frequency restrain
		TIRG_COUPLING_L_RESTRAIN,	//trigger coupling low frequency restrain
	}E_TIRG_COUPLING;

	typedef enum{
		PULSE_CONDITION_GT = 0,		//pulse condition greater than
		PULSE_CONDITION_LT,			//pulse condition less than
		PULSE_CONDITION_ET,			//pulse condition equal to

		PULSE_CONDITION_NO_EQUAL,			//pulse not equal to , add by yzz   [RESERVE]
	}E_PULSE_CONDITION;

	typedef enum{
		PULSE_POLAR_P = 0,
		PULSE_POLAR_N,
	}E_PULSE_POLAR;

	enum TriggerType_Video_Standard
	{
		TRIG_Video_PAL = 0,
		TRIG_Video_NTSC,
	};

	//��Ƶ����-ͬ����ʽ��������(0)��ż����(1)��������(2)��ָ����(3)
	enum TriggerType_Video_SyncMode
	{
		TRIG_Video_SyncMode_Odd = 0,
		TRIG_Video_SyncMode_Even,
		TRIG_Video_SyncMode_ALL,
		TRIG_Video_SyncMode_Specified,
	};

	/***********************************************/
	/***************** display config *****************/
	/***********************************************/
	typedef enum{
		DISPLAY_TYPE_VECTOR = 0,
		DISPLAY_TYPE_DOT,
	}E_DISPLAY_TYPE;


	typedef enum{
		FORMAT_YT = 0,
		FORMAT_XY,
	}E_FORMAT;

	typedef enum{
		DISPLAY_TIME_CLOSED = 0,
		DISPLAY_TIME_1S,
		DISPLAY_TIME_2S,
		DISPLAY_TIME_5S,
		DISPLAY_TIME_INFINITE,
	}E_DISPLAY_TIME;

	/***********************************************/
	/***************** horizon config *****************/
	/***********************************************/
	typedef enum{
		WIN_TYPE_MAIN = 0,
		WIN_TYPE_WINDOW,
	}E_WIN_TYPE;

	/***********************************************/
	/***************** utility config *****************/
	/***********************************************/
	typedef enum{
		MENU_DISPLAY_T5S = 0,
		MENU_DISPLAY_T10S,
		MENU_DISPLAY_T15S,
		MENU_DISPLAY_TMANUAL,
	}E_MENU_DISPLAY_TIME;

	typedef enum{
		LANGUAGE_ZHCN,				//��������
		LANGUAGE_ZHTW,				//��������
		LANGUAGE_ENGLISH,			//Ӣ��
		LANGUAGE_ESPANOL,			//��������
		LANGUAGE_PORTUGUESE,		//��������
		LANGUAGE_FRENCH,			//����
		LANGUAGE_GERMAN,			//����
		LANGUAGE_DUTCH,				//������
		LANGUAGE_RUSSIANS,			//����
		LANGUAGE_Korean,			//����
	}E_LANGUAGE;

	typedef enum{
		SKIN_GREYISH_GREEN = 0,		//ǳ��ɫ
		SKIN_BLUE,					//��ɫ
		SKIN_RED,					//��ɫ
		SKIN_BOTTLE_GREEN,			//����ɫ
	}E_SKIN;

	/***********************************************/
	/***************** storage config *****************/
	/***********************************************/
	typedef enum{
		STORAGE_TYPE_WAVE = 0,
		STORAGE_TYPE_SETTING,	
	}E_STORAGE_TYPE;

	typedef enum{
		STORAGE_MEDIUM_DSO = 0,
		STORAGE_MEDIUM_USB,
	}E_STORAGE_MEDIUM;

	typedef enum{
		SAVSRC_CH1 = CH_1_ID,
		SAVSRC_CH2 = CH_2_ID,
		SAVSRC_ALL,
	}E_STORAGE_WAVE_SRC_CH;

	typedef enum{
		STORAGE_DEPTH_NORMAL = 0,		//��ͨ�洢
		STORAGE_DEPTH_LONG,				//���洢
	}E_STORAGE_DEPTH;

	/***********************************************/
	/**************** reference config *****************/
	/***********************************************/
	typedef enum{
		REF_A = 0,
		REF_B,
	}E_REF_SRC;

	/***********************************************/
	/***************** Cursor config *****************/
	/***********************************************/
	typedef enum{
		CURSOR_TYPE_VOLTAGE = 0,
		CURSOR_TYPE_TIME,
		CURSOR_TYPE_TRACK,
		CURSOR_TYPE_CLOSED,
	}E_CURSOR_TYPE;

	typedef enum{
		CURSOR_ID_1 = 0,
		CURSOR_ID_2,
		CURSOR_ID_MAX,
	}E_CURSOR_ID;

	enum Cursor_Measure_Limit
	{
		Screen_Scale_H_Min = 50,
		Screen_Scale_H_Max = 749,

		Screen_Scale_V_Min = 28,
		Screen_Scale_V_Max = 228,
	};
#pragma endregion ö��ֵ�����

#pragma region ���ݽṹ�����
	//���������Ļ���
	typedef struct _measure_param_packet
	{
		MeasureParam freq;
		MeasureParam period;
		MeasureParam risetime;
		MeasureParam falltime;
		MeasureParam pwidth;
		MeasureParam nwidth;
		MeasureParam overshoot;
		MeasureParam preshoot;
		MeasureParam pduty;
		MeasureParam nduty;
		MeasureParam vmean;
		MeasureParam vpp;
		MeasureParam vrms;
		MeasureParam vtop;
		MeasureParam vbase;
		MeasureParam vmid;
		MeasureParam vmax;
		MeasureParam vmin;
		MeasureParam vamp;
	}MeasureParamPacket;

	//
	typedef struct 
	{
		MeasureParam freq;
		MeasureParam period;
		MeasureParam risetime;
		MeasureParam falltime;
		MeasureParam pwidth;
		MeasureParam nwidth;
		MeasureParam overshoot;
		MeasureParam preshoot;
		MeasureParam pduty;
		MeasureParam nduty;
		MeasureParam vmean;
		MeasureParam vpp;
		MeasureParam vrms;
		MeasureParam vtop;
		MeasureParam vbase;
		MeasureParam vmid;
		MeasureParam vmax;
		MeasureParam vmin;
		MeasureParam vamp;

		//
		char         Reserve[24];
	}MeasureParamPacket_UTD2000CEX;

	//
	typedef struct 
	{
		MeasureParam freq;			//
		MeasureParam period;		//
		MeasureParam risetime;		//
		MeasureParam falltime;		//
		MeasureParam pwidth;		//
		MeasureParam nwidth;		//
		MeasureParam overshoot;		//	
		MeasureParam preshoot;		//
		MeasureParam pduty;			//
		MeasureParam nduty;			//
		MeasureParam vmean;			//
		MeasureParam vpp;			//
		MeasureParam vrms;			//
		MeasureParam vtop;			//
		MeasureParam vbase;			//
		MeasureParam vmid;			//	
		MeasureParam vmax;			//	
		MeasureParam vmin;			//
		MeasureParam vamp;			//

		//
		MeasureParam area;			//���
		MeasureParam cycleArea;     //�������
		MeasureParam cycleMean;     //����ƽ��ֵ
		MeasureParam cycleRms;      //���ھ���ֵ
		MeasureParam burstWidth;    //ͻ������
	} MeasureParamPacket_UTD2102CM;

	//cmd: GET_PROCSTATE, SET_PROCSTATE
	typedef struct _proc_state{
		//0, PROC_STOP; 1, PROC_RUN; 1, PROC_ARMED; 2, PROC_READY; 3, PROC_TRIGED; 4, PROC_AUTO; 5, PROC_SCAN; 6, PROC_OVER;
		short procState;			
	}PROC_STATE;

	//////////////////////////////////////////////////////////////////////////
	// ��������ϵ��
	// ͨ��GET_CH1_DISPLAY_DATA��GET_DISPLAY_DATA��������ȡ���Ĳ������ݵ�����ϵ��
	// X�� �� ����������ֵ��0��ʼ����Χ���ǵ���
	// Y�� �� ����ȡ����ADC��Χֵ��[0,255]�� UTD2102CEX ������ײ���28��������228����ΧΪ200
	////////////////////////////////////////////////////////////////////////// 
	//cmd: GET_SCREEN_INFO
	typedef struct _screen_info{
		short screen_width;       //��Ļ��ȣ�����ֵ
		short screen_height;      //��Ļ�߶ȣ�����ֵ
		short x_grid_count;       //��������� ����
		short y_grid_count;       //��������� ����
		short x_grid_pixels;      //��Ԫ�����������
		short y_grid_pixels;      //��Ԫ������������
		short y_min;              //��������ϵ��y���귶Χ[y_min�� y_max]
		short t_min;              //��������ϵ��x���귶Χ[t_min�� t_max]����0��ʼ
		short y_max;              //��������ϵ��y���귶Χ[y_min�� y_max]
		short t_max;              //��������ϵ��x���귶Χ[t_min�� t_max]����0��ʼ
	}ScreenInfo;

	/**********************************************
	*************** Channel Switch ******************
	***********************************************/
	typedef struct _channel_switch{
		short ch_switch;
	}ChannelSwitch;

	/* channel attribute configuration : cmd = SET_CH1_ATTRIBUTE, GET_CH1_ATTRIBUTE */
	typedef struct _channel_attribute{
		short coupling;			//CH_COUPLING
		short bwlimited;		//SWITCH_STATE
		short voltscale;		//CH_VOLT_SCALE
		short probe;			//CH_PROBE
		short inverted;			//SWITCH_STATE
	}ChannelAttribute;

	/* channel attribute configuration : cmd = SET_CH1_ATTRIBUTE, GET_CH1_ATTRIBUTE */
	typedef struct _pre_offset_volt{
		short preOffsetSwitch;		//0, STATE_CLOSED; 1, STATE_OPEN
		short coarseValue;			//
		short fineValue;			//
		short toZero;				//0, don't set to zero; 1, set to zero
	}PreOffsetVolt;

	typedef struct _channel_vpos{
		short vpos;				//[(TOP: 378),  (Middle: 128), (BOTTOM: -122)]
	}ChannelVPos;

	typedef struct _channel_volt_level{
		short voltLevel;	//when set cmd, para: 1 or -1, when get cmd, voltage level value 
		float voltValue;    //��ȡ����̽ͷ����ΪX1�ǵķ���ֵ
		short voltUnit;
		short IsLimit;
	}ChannelVLevel;

	/***********************************************/
	/******** horizontal system: channel time base *******/
	/***********************************************/
	typedef struct _channel_timebase{
		short timeBase;
	}ChannelTimeBase;

	typedef struct _channel_tpos{
		short tpos;				//[(Left: 0), (Middle: 350), (Right: 700)]
	}ChannelTPos;

	/***********************************************/
	/******** tigger system: channel trigger position ******/
	/***********************************************/
	typedef struct _channel_trig_level{
		short trigLevel;		//[-375, 0(middle), 375]
		float trigValue;
		short trigUnit;
		short isLimited;
	}ChannelTLevel;

	typedef struct _math_type{
		int mathType;
	}MathType;

	typedef struct _fft_freq{
		float freqValue;
		int freqUnit;
		int IsLimit;  // == 1,yes; =0, no! 
	}SignalFreq;

	typedef struct _math_config{
		short mathOpA;
		short mathOpB;
		short mathOpSign;
	}MathConfig;

	typedef struct _fft_config{
		short fftSource;
		short fftWindow;
		short fftUnit;
	}FFTConfig;

	typedef struct _acquire_config{
		short acquireMode;
		short averageNum;		//2^(averageNum + 1), ie: {(0: 2), (1: 4), (2: 8), (3: 16), (4: 32), (5: 64), (6: 128), (7: 256)}
		short sampleMode;
		short fastAcquire;
	}AcquireConfig;

	typedef struct _trig_config{
		short trigType;
		short trigSource;
		short trigMode;
		short trigCoupling;
	}TriggerConfig;

	typedef struct _trig_edge_config{	
		TriggerConfig trigConfig;
		short trigSlope;
	}TrigEdgeConfig;

	typedef struct _trig_pulse_config{
		TriggerConfig trigConfig;
		short pulseCondition;
		UINT pulseWidth;
		short pulsePolar;	
	}TrigPulseConfig;

	typedef struct _display_config{
		short displayType;
		short displayFormat;
		short displayTime;
		short displayLum;
	}DisplayConfig;

	typedef struct _horizon_config{
		short windowType;			//E_WIN_TYPE
		unsigned int holdOff;				//[10, 187500000]
	}HorizonConfig;

	typedef struct _utility_config{
		short autoCalibrate;		//0, not do auto calibrate; 1, do auto calibrate
		short menuDisplayTime;		//E_MENU_DISPLAY_TIME
		short language;				//E_LANGUAGE
		short defaultSetting;		//0, not do default setting; 1 do default setting
		short skin;					//E_SKIN
		short gridBrightness;		//[1, 100]
		short sysInfo;				//0, not display system info; 1, display system info; 
		short cymometer;			//0: close; 1: open
	}UtilityConfig;

	typedef struct _storage_setting{
		short saveType;		//STORAGE_TYPE_SETTING
		short savePos;		//[1, 20]

		short save;			//1, save, 0, not save
		short recall;		//1, recall, 0, not recall
	}StorageSetting;

	typedef struct _storage_wave{
		short saveType;		//STORAGE_TYPE_WAVE
		short saveSource;
		short savePos;
		short saveMedium;
		short saveDepth;
		short save;
	}StorageWave;

	/***********************************************/
	/***************** measure config *****************/
	/***********************************************/
	typedef struct _measure_config{
		short measureSrc;
	}MeasureConfig;

	typedef struct _ref_timebase{
		float ref_TValue;
		int ref_Tunit;
	}RefTimeBase;


	typedef struct _ref_config
	{
		short refSrc;		//REF_A, REF_B
		short pos;			//[1, 20]
		short medium;		//MEDIUM_DSO, MEDIUM_USB

		short onoff;		//1, on; 0, off; 
	}RefConfig;

	typedef struct _cursor_measure_result{
		MeasureParam Va;
		MeasureParam Vb;
		MeasureParam deltaV;
		MeasureParam TaFa;// when ch1, ch2, Ta; when math channel, Fa;
		MeasureParam TbFb;// when ch1, ch2, Tb; when math channel, Fb;
		MeasureParam deltaT;
		MeasureParam deltaF;
		char         Reserve[56];
	}CursorMeasureResult;

	typedef struct _cursor_config{
		short cursorType;
		short iActiveCursor;
		//��Ҫ���ӻ����ʶ
		short voltCursorPos[CURSOR_ID_MAX];//[28(top), 428(bottom)]
		short timeCursorPos[CURSOR_ID_MAX];//[50(left), 749(right)]
		short autoCursorPos[CURSOR_ID_MAX];//[51(left), 749(right)]
	}CursorConfig;


	/***********************************************/
	/***************** measure config *****************/
	/***********************************************/
	typedef struct _measure_src
	{
		short measureSrc;
	}MeasureSrc;
#pragma endregion ���ݽṹ�����

#ifdef __cplusplus
}
#endif

#endif//end of #ifndef _DSOCOM_API_COMMON_DEF_H_201212281614