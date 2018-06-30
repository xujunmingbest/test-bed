/*!
 * \created : 2016/12/28
 * \author  : M.Yang
 * \purpose : ��ģ�����UTD2000M\UTD4000M\UTD2000CEX-EDUϵ�л���ʹ�õ�ѡ���Ͳ�����ѡ����붨�塣
 */
#ifndef ItemCode_COMVer2_h__
#define ItemCode_COMVer2_h__

#ifdef __cplusplus
namespace comApiEx
{
#endif

enum E_SWITCH_STATE 
{
	SWITCH_OFF,
	SWITCH_ON,
};

#pragma region Channel
typedef enum{
	CH_Invalid_ID = -1,
	CH_1_ID = 0,
	CH_2_ID,
	CH_MATH_ID,
	CH_REF_A_ID,
	CH_REF_B_ID,
	CH_MAX_CNT,
}E_CHANNEL_ID;

enum E_REF_SRC
{
	REF_A = 0,
	REF_B,
};

enum E_CH_COUPLING_TYPE
{
	CH_COUPLING_DC = 0,
	CH_COUPLING_AC,
	CH_COUPLING_GND,
};

enum E_CH_BANDLIMIT
{
	CH_BANDLIMIT_FULL,
	CH_BANDLIMIT_HALF,
	CH_BANDLIMIT_20MHZ,
};

typedef enum {
	CH_PROBE_1X = 0,
	CH_PROBE_10X,
	CH_PROBE_100X,
	CH_PROBE_1000X,
}CH_PROBE;

#pragma endregion Channel

#pragma region Trigger
////////////////////////////Trigger///////////////////////////////////
enum E_TRIG_TYPE
{
	TRIG_TYPE_EDGE = 0,		//��������: ����
	TRIG_TYPE_PLUSE_WIDTH,		//��������: ����
	TRIG_TYPE_VIDEO,			//��������: ��Ƶ
	TRIG_TYPE_SLOPE,			//��������: б��
};

enum E_TRIG_SOURCE
{
	TRIG_CH1 = CH_1_ID,
	TRIG_CH2 = CH_2_ID,
	TRIG_EXT,
	TRIG_EXT_5,					//EXT/5
	TRIG_AC_LINE = 4,
	TRIG_ALTER,
};

enum E_TIRG_COUPLING
{
	TIRG_COUPLING_DC = 0,
	TIRG_COUPLING_AC,
	TIRG_COUPLING_L_RESTRAIN,	//trigger coupling low frequency restrain
	TIRG_COUPLING_H_RESTRAIN,	//trigger coupling high frequency restrain
};

enum E_TRIG_MODE
{
	TRIG_MODE_AUTO = 0,
	TRIG_MODE_NORMAL,
	TRIG_MODE_SINGLE,
};

enum E_TRIG_EDGE_SLOPE
{
	TRIG_EDGE_SLOP_RISE = 0,
	TRIG_EDGE_SLOP_FALL,
	TRIG_EDGE_SLOP_RISE_FALL,
};

enum E_PULSE_POLAR
{
	PULSE_POLAR_N = 0,
	PULSE_POLAR_P ,
};

enum E_PULSE_CONDITION
{
	PULSE_CONDITION_LT = 0,			//pulse condition less than
	PULSE_CONDITION_GT,		//pulse condition greater than
	PULSE_CONDITION_ET,			//pulse condition equal to

	PULSE_CONDITION_NO_EQUAL,			//pulse not equal to , add by yzz   [RESERVE]
};

enum E_TRIG_VIDEO_STANDARD
{
	TRIG_Video_NTSC = 0,
	TRIG_Video_PAL,
};

//��Ƶ����-ͬ����ʽ��������(0)��ż����(1)��������(2)��ָ����(3)
enum E_TRIG_VIDEO_SYNC_MODE
{
	TRIG_Video_SyncMode_Odd = 0,
	TRIG_Video_SyncMode_Even,
	TRIG_Video_SyncMode_ALL,
	TRIG_Video_SyncMode_Specified,
};

enum E_SLOP_POLARITY
{
	SLOP_POLAR_FALL = 0,
	SLOP_POLAR_RISE,
};

enum E_SLOP_WHEN
{
	SLOP_WHEN_LT = 0,
	SLOP_WHEN_GT,
	SLOP_WHEN_Equal,
};

enum E_SLOP_THRESHOLD
{
	SLOP_THRESHOLD_LOW = 0,
	SLOP_THRESHOLD_HIGH,
	SLOP_THRESHOLD_LOW_HIGH,
};
#pragma endregion Trigger

#pragma region Math
/////////////////////////////Math//////////////////////////////////////
enum E_MATH_TYPE
{
	MATH_TYPE_MATH = 0,
	MATH_TYPE_FFT,
	MATH_TYPE_FILTER,
};

enum E_MATH_OP_SIGN
{
	OP_SIGN_ADD = 0,
	OP_SIGN_SUB,
	OP_SIGN_MULTIPLY,
	OP_SIGN_DIVIDE,
};

enum E_FFT_WINDOW
{
	FFT_WIN_HAMMING = 0,
	FFT_WIN_BLACKMAN,
	FFT_WIN_RECTANGLE,
	FFT_WIN_HANNING
};

enum E_FFT_UNIT
{
	FFT_UNIT_VRMS = 0,
	FFT_UNIT_DBVRMS,
};

enum E_FILTER_TYPE
{
	FILTER_LOW = 0,
	FILTER_HIGH,
	FILTER_BAND,
};

enum E_MATH_ZOOM_RATE
{
	ZOOM_RATE_DIV_1,
	ZOOM_RATE_DIV_10,
	ZOOM_RATE_DIV_100,
	ZOOM_RATE_DIV_1000,
};
#pragma endregion Math

#pragma region Acquire
////////////////////////////Acquire//////////////////////////////////
enum E_ACQ_MODE
{
	ACQ_MODE_NORMAL = 0,
	ACQ_MODE_PEAK,
	ACQ_MODE_AVERAGE,
};

enum E_SAMPLE_MODE
{
	ACQ_SAMPLE_EQUIVALENT = 0,
	ACQ_SAMPLE_REAL,
	ACQ_SAMPLE_SCAN,
};

enum E_ACQ_SAV_DEPTH
{
	ACQ_DEPTH_NORMAL = 0,
	ACQ_DEPTH_DEPTH,
};
#pragma endregion Acquire

#pragma region Display
////////////////////////////Display//////////////////////////////////
enum E_DISPLAY_TYPE
{
	DISPLAY_TYPE_YT = 0,
	DISPLAY_TYPE_XY,
};

enum E_DISPLAY_FORMAT
{
	DISPLAY_FORMAT_VECTOR = 0,
	DISPLAY_FORMAT_DOT,
};

enum E_Display_Graticule
{
	Display_Graticule_Full,
	Display_Graticule_Grid,
	Display_Graticule_CrossHair,
	Display_Graticule_Frame,
};

enum E_Dislay_PersistTime
{
	Display_PersistTime_Auto,
	Display_PersistTime_Short,
	Display_PersistTime_Long,
	Display_PersistTime_Unlimited,
};
#pragma endregion Display

#pragma region Utility
////////////////////////////Utility//////////////////////////////////
enum E_Utility_Skin
{
	UTILITY_SKIN_CLASSIC,
	UTILITY_SKIN_TRADITIONAL,
	UTILITY_SKIN_MODERN,
};

enum E_Utility_Menu_Display_Time
{
	UTILITY_MENU_DISPLAY_T5S,
	UTILITY_MENU_DISPLAY_T10S,
	UTILITY_MENU_DISPLAY_T20S,
	UTILITY_MENU_DISPLAY_TMANUAL,
};

enum E_Utility_Language
{
	UTILITY_LANG_ZHCN,				//��������
	UTILITY_LANG_ZHTW,				//��������
	UTILITY_LANG_ENGLISH,			//Ӣ��
	UTILITY_LANG_GERMAN,			//����
	UTILITY_LANG_RUSSIANS,			//����

	UTILITY_LANG_ESPANOL,			//��������
	UTILITY_LANG_PORTUGUESE,		//��������
	UTILITY_LANG_FRENCH,			//����
	UTILITY_LANG_DUTCH,				//������
};

enum E_Utility_AutoSet
{
	UTILITY_AUTOSET_LOCK_ON,
	UTILITY_AUTOSET_LOCK_OFF,
};

enum E_Utility_PassFail_AllowTesting
{
	UTILITY_PF_ALLOWTEST_COLSE,
	UTILITY_PF_ALLOWTEST_OPEN,
};

enum E_Utility_PassFail_Output
{
	UTILITY_PF_OUTPUT_PASS,
	UTILITY_PF_OUTPUT_FAIL,
};

enum E_Utility_PassFail_DisplayInfo
{
	UTILITY_PF_DISPLAYINFO_OPEN,
	UTILITY_PF_DISPLAYINFO_CLOSE,
};

enum E_Utility_PassFail_Operation
{
	UTILITY_PF_OPERATION_PLAY,
	UTILITY_PF_OPERATION_STOP,
};

enum E_Utility_PassFail_StopSet_Type
{
	UTILITY_PF_STOPSET_TYPE_PASSTIMES,
	UTILITY_PF_STOPSET_TYPE_FAILTIME,
};

enum E_Utility_PassFail_StopSet_Condition
{
	UTILITY_PF_STOPSET_CONDITION_GT_EQU,
	UTILITY_PF_STOPSET_CONDITION_LT_EQU,
};
#pragma endregion Utility

#pragma region Storage
////////////////////////////Storage//////////////////////////////////
enum E_STORAGE_TYPE
{
	STORAGE_TYPE_SETTING,
	STORAGE_TYPE_WAVE,
	STORAGE_TYPE_BITMAP,
};


enum E_STORAGE_REFWAVE_FILE_FORMAT
{
	STORAGE_REFWAVE_FILE_FMT_CSV,
	STORAGE_REFWAVE_FILE_FMT_INNER,
};

#pragma endregion Storage

#pragma region Cursor
enum E_CURSOR_TYPE
{
	CURSOR_TYPE_TIME,
	CURSOR_TYPE_VOLTAGE,
	CURSOR_TYPE_TRACK,
	CURSOR_TYPE_DUMP,
	CURSOR_TYPE_CLOSED,
};

enum E_CURSOR_MODE
{
	CURSOR_MODE_INDEPENDENT,
	CURSOR_MODE_TRACK,
};

enum E_CURSOR_H_UNIT
{
	CURSOR_UNIT_H_BASE,
	CURSOR_UNIT_H_PERCENT,
};

enum E_CURSOR_V_UNIT
{
	CURSOR_UNIT_V_SECOND,
	CURSOR_UNIT_V_HERTZ,
	CURSOR_UNIT_V_PERCENT,
	CURSOR_UNIT_V_DEGREE,
};

enum E_CURSOR_POS
{
	CURSOR_POS_CURRENT = 3,
	CURSOR_POS_6DIV,
};
#pragma endregion Cursor

enum E_Measure_Edge
{
	Measure_Edge_Fall,
	Measure_Edge_Rise,
};


#ifdef __cplusplus
}
#endif


#endif // ItemCode_COMVer2_h__