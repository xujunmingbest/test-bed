/*!
 * \created : 2016/12/28
 * \author  : M.Yang
 * \purpose : ����ʹ����UTD2000M\UTD4000M\UTD2000CEX-EDU��ϵ�л���ʹ�õ�ָ��塣
 * �������ʹ�ã���鿴��Ӧ���͵�Э���ĵ���
 */
#ifndef CMD_COMVer2_h__
#define CMD_COMVer2_h__

#ifdef __cplusplus
namespace comApiEx {
#endif
	static const int Invalid_CMD = -1;

#ifdef __cplusplus
	static bool IsCMDValid(short cmd) {
		return (cmd != Invalid_CMD);
	}
#else
	static int IsCMDValid(short cmd)
	{
		return (cmd == Invalid_CMD) ? 0 : 1;
	}
#endif
	
	//@brief   : ͨ������
	//@remarks : �ӿڲ���CH������Ϊ-1���������ΪEnum�����ݣ���Ӧ�Ķ���shot(2Bytes)���ͽ��ж�д.
	typedef enum _commom_cmd {
		//@brief   : ��ȡ�豸���ͱ���
		//@remarks : {IO:R}{DATA<Enum>:comAPICommon::E_DSO_TYPE}
		CMD_GET_DSO_TYPE = 0,	
		//@brief   : ���ü�����
		//@remarks :  {IO:W}{DATA:null}
		CMD_LOCK_KEYPAD,
		//@brief   : ���ü��̽���
		//@remarks :  {IO:W}{DATA:null}
		CMD_UNLOCK_KEYPAD,		
		//@brief   : ��ȡ�豸����״̬
		//@remarks : {IO:R}{DATA<Enum>:comApi::E_PROC_STATE from <comApiDef.h>}
		CMD_PROCSTATE,
		//@brief   : ִ��AUTOSET����
		//@remarks :  {IO:W}{DATA:null}
		CMD_AUTOSET,				
		//@brief   : ִ��ǿ�ƴ�����FORCE��
		//@remarks :  {IO:W}{DATA:null}
		CMD_TRIG_FORCE,
		//@brief   : ִ�е��δ�����SINGLE��
		//@remarks :  {IO:W}{DATA:null}
		CMD_SINGLE,	
		//@brief   : ִ��COARSE����
		//@remarks :  {IO:W}{DATA:null}
		CMD_COARSE,	
		//@brief   : ִ�а���PRTSC����
		//@remarks :  {IO:W}{DATA:null}
		CMD_PRTSC,
		//@brief   :  
		CMD_GET_BITMAP_FILENAME,
		//@brief   : ��ȡ��ͼ����
		//@remarks : {IO:R}{DATA: 2000M/4000M��768512Bytes}
		CMD_GET_BITMAP_FILEDATA,

		//@brief   : ����ָ��
		//@remarks : {IO:WR}{DATA<8Bytes>:comAPICommon::Key from <comApiCommon.h>}
		CMD_KEY,
		//@brief   : ��ȡѹ�������Ļ��������
		CMD_CAPTURE_SCREEN, 
		//@brief   : ��д��������
		CMD_DEV_CONFIG,
		//@brief   : ��ѯ�豸��ʾ����
		CMD_IDN,
		//@brief   : ��ѯЭ��汾�š�
		CMD_CVER,

		//@brief   : ��ȡ��Ļ��Ϣ 
		//@remarks : {IO:R}{DATA<8Bytes>:comApiEx::SCREEN_INFO from <Model_UTD2102CM.h>}
		CMD_GET_SCREEN_INFO = 50,		//SCREEN_INFO	
		//@brief   : short 1: usb connection state is ok; other: usb connection state is not ok		(ok)
		//@remarks : 
		CMD_GET_USB_CONNECTION_STATE,
		//@brief   : �õ���ǰƵ�ʼ�ֵ
		//@remarks :  {IO:R}{DATA:comApiEx::SignalFreq from <Model_UTD2102CM.h>}
		CMD_GET_CYMOMETER_VALUE,
		//@brief   : �õ���ǰѡ�е�ͨ��
		//@remarks : short 0:	CH1; 1: CH2; 2: MATH; 3: RefA; 4: RefB; -1:other				(ok)
		CMD_GET_CURRENT_ACTIVE_CHANNEL, //short 0:	CH1; 1: CH2; 2: MATH; 3: RefA; 4: RefB; -1:other				(ok)
		//@brief   : �õ��豸�˵�ǰ�в�������Ĳ˵�
		//@remarks : short 0: CH1 menu; 1: CH2 menu; 2: MATH or FFT menu; -1: other menu	(ok)
		CMD_GET_CURRENT_ACTIVE_MENU,	
		//@brief   : ��ȡ��ǰ�˵��Ƿ���ʾ
		//@remarks : short 0: current menu is not display; 1: current menu is display			(ok)
		CMD_GET_CURRENT_MENU_SHOW_STATE,
		CMD_GET_SAMPLE,
		//@brief   : ���U���Ƿ����
		//@remarks : {IO:R}{DATA<Enum>: 0 δ���룻 1 ����}
		CMD_GET_USBDISK_STATE,

		//{acquire
		//@brief   : �ɼ�ģʽ 
		//@remarks : {IO:WR}{DATA<Enum>:comApiEx::E_ACQ_MODE from <ItemCode_COMVer2.h>}
		CMD_ACQ_MODE = 400,	
		//@brief   : ƽ������
		//@remarks : {IO:WR}{DATA<short>: averageNum}
		//ʵ�ʴ��������ù�ʽ<2^(averageNum + 1)>����, ����: {(0: 2), (1: 4), (2: 8), (3: 16), (4: 32), (5: 64), (6: 128), (7: 256)}
		CMD_ACQ_AVERAGE_NUM,
		//@brief   : ������ʽ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_SAMPLE_MODE from <ItemCode_COMVer2.h>}
		CMD_ACQ_SAMPLING,				
		//@brief   : �������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_ACQ_SAV_DEPTH from <ItemCode_COMVer2.h>}
		CMD_ACQ_DEPTH,				
		//@brief   : ���ٲɼ�
		//@remarks : {IO:WR}{DATA<Enum>: 0 �ر� �� 1 ��}
		CMD_ACQ_FAST,
		//}

		//{trigger		
		//@brief   : ��������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TRIG_TYPE from <ItemCode_COMVer2.h>}
		CMD_TRIG_TYPE = 500,
		//@brief   : ������Դ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TRIG_SOURCE from <ItemCode_COMVer2.h>}
		CMD_TRIG_SOURCE,
		//@brief   : �������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TIRG_COUPLING from <ItemCode_COMVer2.h>}
		CMD_TRIG_COUPLING,	
		//@brief   : ������ʽ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TRIG_MODE from <ItemCode_COMVer2.h>}
		CMD_TRIG_METHOD,
		//@brief   : ���ش�����б�ʴ���-б������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TRIG_EDGE_SLOPE from <ItemCode_COMVer2.h>}
		CMD_TRIG_SLOPE_TYPE,	
		//@brief   : ������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_PULSE_POLAR from <ItemCode_COMVer2.h>}
		CMD_TRIG_PULSE_POLAR,
		//@brief   : ��������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_PULSE_CONDITION from <ItemCode_COMVer2.h>}
		CMD_TRIG_PULSE_COND,
		//@brief   : ����ʱ��
		//@remarks : {IO:WR}{DATA<UINT>: ����ֵstep, ���㹫ʽ(t = K * step), һ��K = 4}
		CMD_TRIG_PULSE_TIME,		
		//@brief   : ��Ƶ����-��Ƶ��ʽ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TRIG_VIDEO_STANDARD from <ItemCode_COMVer2.h>}
		CMD_TRIG_VIDEO_STD,		
		//@brief   : ��Ƶ����-ͬ��
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_TRIG_VIDEO_SYNC_MODE from <ItemCode_COMVer2.h>}
		CMD_TRIG_VIDEO_SYNC,	
		//@brief   : ��Ƶ����-ָ������
		//@remarks : {IO:WR}{DATA<short>:���� }
		CMD_TRIG_VIDEO_LINE_NUMBER,
		//@brief   : б�ʴ���-б������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_SLOP_WHEN from <ItemCode_COMVer2.h>}
		CMD_TRIG_SLOPE_COND,
		//@brief   : б�ʴ���-ʱ������
		//@remarks : {IO:WR}{DATA<UINT>: ����ֵ�� ���㹫ʽΪt = K * step, һ��K = 4;}
		CMD_TRIG_SLOPE_TIME,	
		//@brief   : б�ʴ���-��ֵ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_SLOP_THRESHOLD from <ItemCode_COMVer2.h>}
		CMD_TRIG_SLOPE_THRESHOLD,
		//@brief   : б�ʴ���-ѹ����
		//@remarks : {IO:R}{DATA<char[16]>: ���ַ�����ʽ��ȡ}
		CMD_TRIG_SLOPE_VT,
		//}

		//{display
		//@brief   : DISPLAY ����
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_DISPLAY_TYPE from <ItemCode_COMVer2.h>}
		CMD_DISPLAY_TYPE = 600,
		//@brief   : DISPLAY ��ʽ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_DISPLAY_FORMAT from <ItemCode_COMVer2.h>}
		CMD_DISPLAY_FORMAT,
		//@brief   : DISPLAY դ��
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_Display_Graticule from <ItemCode_COMVer2.h>}
		CMD_DISPLAY_GRID,
		//@brief   : DISPLAY ���ʱ��
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_Dislay_PersistTime from <ItemCode_COMVer2.h>}
		CMD_DISPLAY_PERSIST,
		//@brief   : DISPLAY ��������
		//@remarks : {IO:WR}{DATA<short>: һ���� �� 1 - 100��  2000M��4000M�� step��[0,49]������ = curStep * 2 + 2}
		CMD_DISPLAY_WAVE_LUM,
		//}

		//{cursor
		//@brief   : Cursor ����
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_CURSOR_TYPE from <ItemCode_COMVer2.h>}
		CMD_CURSOR_TYPE,
		//@brief   : Cursor ģʽ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_CURSOR_MODE from <ItemCode_COMVer2.h>}
		CMD_CURSOR_MODE,
		//@brief   : Cursor ģʽ
		//@remarks : {IO:WR}{DATA<Enum>: ʱ����� �� comApiEx::E_CURSOR_V_UNIT  ��ѹ���� : comApiEx::E_CURSOR_H_UNIT from <ItemCode_COMVer2.h>}
		CMD_CURSOR_UNIT,
		//@brief   : Cursor ��׼
		//@remarks : {IO:WR}{DATA<Enum>: E_CURSOR_POS from <ItemCode_COMVer2.h>}
		CMD_CURSOR_BASE,
		//@brief   : Cursor �����Aλ�õ���
		//@remarks : {IO:WR}{DATA<short> : ˮƽ�ߣ�����Ϊ0��һ��Ϊ25����ֱ�ߣ�����Ϊ350��һ��Ϊ50}
		CMD_CURSOR_A_POS,
		//@brief   : Cursor �����Bλ�õ���
		//@remarks : {IO:WR}{DATA<short> : ˮƽ�ߣ�����Ϊ0��һ��Ϊ25����ֱ�ߣ�����Ϊ350��һ��Ϊ50 }
		CMD_CURSOR_B_POS,
		//}

		//{windows
		CMD_WIN_TYPE,					//												(ok)					
		CMD_WIN_HOLDOFF,				//			
		//}

		//{storage
		//@brief   : Storage ����
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_STORAGE_TYPE from <ItemCode_COMVer2.h>}
		CMD_STORAGE_TYPE = 700,
		//@brief   : Storage �ļ���
		//@remarks : {IO:WR}{DATA<char[8>: }
		CMD_STORAGE_FILE_NAME,
		//@brief   : Storage �ο�����-��Դ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_CHANNEL_ID from <ItemCode_COMVer2.h>}
		CMD_STORAGE_REFWAVE_SOURCE,
		//@brief   : Storage �ο�����-�ļ���ʽ
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_STORAGE_REFWAVE_FILE_FORMAT from <ItemCode_COMVer2.h>}
		CMD_STORAGE_REFWAVE_FILE_FORMAT,
		//@brief   : ��ȡ���ô洢���ļ��б�
		//@remarks :{IO:WR}{DATA<Struct>: comApiEx::FileList_Flash from <ItemCode_UTD2102CM.h>} 
		CMD_STORAGE_GET_FILE_LIST_FLASH,	//											(ok)
		//@brief   : ��ȡ���ô洢���ļ��б�
		//@remarks :{IO:WR}{DATA<Struct>: comApiEx::FileList_USB from <ItemCode_UTD2102CM.h>} 
		CMD_STORAGE_GET_FILE_LIST_USB,
		//@brief   : ִ��SAVE������浽����Flash.
		//@remarks :  {IO:W}{DATA<short> : �ļ��洢λ��}
		CMD_STORAGE_SAVE,
		//@brief   : ִ��LOAD���������Flash����.
		//@remarks :  {IO:W}{DATA<short> : �ļ��洢λ��}
		CMD_STORAGE_LOAD,
		//@brief   : ִ��Import���������U�̼���.
		//@remarks :  {IO:W}{DATA<short> : �ļ��洢λ��}
		CMD_STORAGE_IMPORT,
		//@brief   : ִ��Export����
		//@remarks :  {IO:W}{DATA<null>}
		CMD_STORAGE_EXPORT,	
		//@brief   : ��ѯ�Ƿ�����ѱ��������
		//@remarks :  {IO:R}{DATA<short> : 0 �����ڣ� 1 ����}
		CMD_STORAGE_REFSETTING_EXIST,
		//@brief   : �洢λ��
		//@remarks :  {IO:WR}{DATA<short> : λ������}
		CMD_STORAGE_POS,
		//}

		//{measure
		MEASURE_ALL = 800,
		MEASURE_CLEAR,
		MEASURE_CUSTOMIZE,
		MEASURE_INDICATOR,
		MEASURE_DELAY_FROM,
		MEASURE_DELAY_FEDGE,
		MEASURE_DELAY_TO,
		MEASURE_DELAY_TEGDE,
		MEASURE_DELAY_OK,
		MEASURE_PHASE_FROM,

		MEASURE_PHASE_TO,
		MEASURE_PHASE_OK,
		//}

		//for UTD2102CEX 
		CMD_MEASURE_SOURCE,
		CMD_MEASURE_STATISTICS,

		//{utility
		//@brief   : ִ����У������
		//@remarks :  {IO:W}{DATA<null>}
		CMD_UTILITY_SELF_CALIBRATE = 1000,
		CMD_UTILITY_SYSTEM_INFO,							//(ok)
		//@brief   : ִ��Clear����
		//@remarks :  {IO:W}{DATA<null>}
		CMD_UTILITY_CLEAR_INFO,	
		//@brief   : ִ�лָ�������������
		//@remarks :  {IO:W}{DATA<null>}
		CMD_UTILITY_RESET_TO_FACTORY,
		//@brief   : �Աȶ�
		//@remarks :  {IO:WR}{DATA<short>}
		CMD_UTILITY_CONTRAST,
		//@brief   : �����л�
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_Utility_Language from <ItemCode_COMVer2.h>}
		CMD_UTILITY_LANGUAGE,
		//@brief   : ������
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_Utility_Skin from <ItemCode_COMVer2.h>}
		CMD_UTILITY_SKIN,
		//@brief   : �˵���ʾʱ��
		//@remarks : {IO:WR}{DATA<Enum>: comApiEx::E_Utility_Menu_Display_Time from <ItemCode_COMVer2.h>}
		CMD_UTILITY_MENU_DISP,	
		//@brief   : ��������
		//@remarks :  {IO:WR}{DATA<short>}
		CMD_UTILITY_GRID_LUM,
		//@brief   : Ƶ�ʼƿ���
		//@remarks : {IO:WR}{DATA<Enum>:comApiEx:: E_SWITCH_STATE from <ItemCode_COMVer2.h>}
		CMD_UTILITY_CYMOMETER,

		CMD_UTILITY_AUTOSET_CHANNEL,
		CMD_UTILITY_AUTOSET_ACQUIRE,
		CMD_UTILITY_AUTOSET_TRIG,
		CMD_UTILITY_AUTOSET_SIGNAL,
		//}

		//{record
		CMD_DSO_RECORD_START,
		CMD_DSO_RECORD_STOP,
		CMD_DSO_RECORD_REPLAY,
		CMD_DSO_RECORD_CLEAR,
		//}
	
		//{
		CMD_UTILITY_SQUARE_WAVE,
		CMD_UTILITY_SLEEP_TIME,
		CMD_UTILITY_MEASURE_UNIT,
		//}

		//{
		CMD_SYS_TIME_SWITCH = 1100,
		CMD_SYS_TIME,
		//}

		//{pass fail
		CMD_PASS_FAIL_ALLOW_TEST,					
		CMD_PASS_FAIL_OUTPUT,						
		CMD_PASS_FAIL_SOURCE,						
		CMD_PASS_FAIL_DISP_INFO,					
		CMD_PASS_FAIL_OPERATION,					
		CMD_PASS_FAIL_STOP_TYPE,					
		CMD_PASS_FAIL_STOP_COND,					
		CMD_PASS_FAIL_STOP_THRESHOLD,				
		CMD_PASS_FAIL_TEMPLATE_WAVEREF,				
		CMD_PASS_FAIL_TEMPLATE_REFLOAD,				
		CMD_PASS_FAIL_TEMPLATE_HRANGE,				
		CMD_PASS_FAIL_TEMPLATE_VRANGE,				
		CMD_PASS_FAIL_TEMPLATE_CREATE,				
		//}

		//@brief   : ��ȡͨ�����ݰ�����ʽ���ĵ���
		//@remarks : 
		CMD_GET_DISPLAY_DATA = 1200,	//get ch1, ch2, math, ref a/b data ok
		//ͬ��DSO������״̬���������ͣ�DSOAttrState�����Ϳ�������Ͷ���ͬ��
		CMD_SYNC_DSO,
		
		//��ʱ���������������DSO�����������ݡ�
		CMD_PERIOD_MSG2DSO,

		//{CEX-EDUʹ��
		//CEX-EDUʹ�ã����ͽ�Ҫ��ȡREC�������ݵ�ͷ��׼�����
		CMD_DSO_RECORD_HEADER_READY = 1400,
		//CEX-EDUʹ�ã���ȡREC��������ͷ��
		CMD_DSO_RECORD_HEADER,		
		//CEX-EDUʹ�ã����ͽ�Ҫ��ȡREC��������׼�����
		CMD_DSO_RECORD_DATA_READY,
		//CEX-EDUʹ�ã���ȡREC�������ݿ顣
		CMD_DSO_RECORD_DATA,
		//CEX-EDUʹ�ã��жϵ�ǰREC�����Ƿ���Ч��
		CMD_DSO_RECORD_DATA_VALID,
		//}

		//{2000M-special
		CMD_VARDEPTH_SAMPLE_RATE = 1420,
		CMD_VARDEPTH_SAVE_DEPTH,
		CMD_VARDEPTH_PRE_TRIG_TIME,
		CMD_VARDEPTH_AUTO_TRIG_TIME,
		//}
	
		// 
		CMD_DUMP_BEGIN = 1440,
		CMD_DUMP_ID = CMD_DUMP_BEGIN,
		CMD_DUMP_END = 1500, //#TODO:�����Ҫ�ṩ������룬�ͽ�CEX��2000M�ı���������ô��������ṩͳһ��������롣
	}COMMON_CMD;
	
	//@brief   : ͨ������
	//@remarks : 
	typedef enum _channel_cmd
	{
		CH_Invalid_CMD = -1,	
		//@brief   : ͨ�����
		//@remarks : {IO:WR}{DATA<Enum>:E_CH_COUPLING_TYPE}
		CH_ATTR_COUPLING = 0,		
		//@brief :  ��������
		//@remarks : {IO:WR}{DATA<Enum>:E_CH_BANDLIMIT}
		CH_ATTR_BAND_WIDTH,
		//@brief   : 
		//@remarks : 
		CH_ATTR_VOLT_SCALE,
		//@brief   : �Ŵ���
		//@remarks : {IO:WR}{DATA<Enum>:CH_PROBE}
		CH_ATTR_PROBE,
		//@brief :  ����
		//@remarks : {IO:WR}{DATA<Enum>:E_SWITCH_STATE}
		CH_ATTR_INVERT,	
		//@brief   : ƫ�õ�ѹ����
		//@remarks : {IO:WR}{DATA<Enum>:E_SWITCH_STATE}
		CH_ATTR_PRE_BIAS_VOLT_SWITCH,      
		//@brief   : ƫ�õ�ѹֵ
		//@remarks : {IO:W}{DATA<Short>: +1 increase; -1 decrease;}
		CH_ATTR_PRE_BIAS_VOLT_VALUE,    	
		//@brief   : ƫ�õ�ѹ����
		//@remarks : {IO:W}{DATA:null}
		CH_ATTR_PRE_BIAS_VOLT_TOZERO,

		//@brief   : ͨ������
		//@remarks :  {IO:WR}{DATA<Enum>:E_SWITCH_STATE}
		CH_ATTR_CHANNEL_SWITCH = 100,   
		//@brief   : ��ֱλ��
		//@remarks : {IO:WR}{DATA<Short>: UTD2000M -> �ϵ���Ϊ [-100 , 100], CEX -> ���µ���[28,128]}
		CH_ATTR_VERTICAL_POS,	
		//@brief   : ��ֱλ�ù���
		//@remarks : {IO:W}{DATA:null}
		CH_ATTR_VERTICAL_POS_TOZERO,	
		//@brief   : Ԥ�������λ��
		//@remarks : {IO:WR}{DATA<Short>: UTD2000M -> ��Ļ�м�Ϊ350��һ��Ϊ50}
		CH_ATTR_TRIG_DEPTH,	
		//@brief   : Ԥ������ȹ���
		//@remarks : {IO:W}{DATA:null}
		CH_ATTR_TRIG_DEPTH_TOZERO,
		//@brief : ������ƽ��Ϣ
		//@remarks : {IO:R}{DATA:comApiEx::CellBaseValue}
		//      ��ͨ����ֻ��һ��������ƽ ����Ϊ comApiEx::CellBaseValues TrigVolt;
		//      б�ʴ���������������ƽ�� ����Ϊ comApiEx::CellBaseValues TrigVolt[2];
		CH_ATTR_TRIG_LEVEL,   
		//@brief : ������ƽλ��
		//@remarks : {IO:WR}{DATA<Short>: ��ͨ������Ϊ0�㣬�����¸���ÿ��25}
		CH_ATTR_TRIG_LEVEL_POS,	
		//@brief   : ������ƽλ�ù���
		//@remarks : {IO:WR}{DATA<Short>: ��ͨ������Ϊ0�㣬�����¸���ÿ��25}
		CH_ATTR_TRIG_LEVEL_TOZERO,
		//@brief   : ������Ϣ
		//@remarks : {IO:R}{DATA: CellBaseValue}
		CH_ATTR_VOLT_AMPLITUDE,      
		//���񵲵�λ������Ϊshort
		//@brief   : ���񵲵�λ
		//@remarks : {IO:WR}{DATA<short>: +1 increase; -1 decrease; other : code }
		CH_ATTR_VOLT_AMPLITUDE_LEVEL,   
		//ʱ������λ������Ϊshort��ֻ�����ã�
		//@brief   : ʱ������λ 
		//@remarks : {IO:W}{DATA<short>: E_TIMEBASE_LEVEL }
		CH_ATTR_TIME_BASE,      
		//@brief   : ��ȡʱ����ʱ��
		//@remarks : {IO:R}{DATA: CellBaseValue}
		CH_ATTR_TIME_BASE_VALUE,      
	
		//@brief   : MATH����
		//@remarks : {IO:WR}{DATA<Enum>: E_MATH_TYPE }
		CH_MATH_TYPE = 200,		
		//@brief   : MATH��Դ1
		//@remarks : {IO:WR}{DATA<Enum>: E_CHANNEL_ID }
		CH_MATH_OP1,	
		//MATH�������ͣ��������ͣ�short
		//@brief   : MATH��������
		//@remarks : {IO:WR}{DATA<Enum>: E_MATH_OP_SIGN }
		CH_MATH_OP,	
		//@brief   : MATH��Դ2
		//@remarks : {IO:WR}{DATA<Enum>: E_CHANNEL_ID }
		CH_MATH_OP2,
		//@brief   : FFT��Դ
		//@remarks : {IO:WR}{DATA<Enum>: E_CHANNEL_ID }
		CH_FFT_SRC,	
		//@brief   : FFT��
		//@remarks : {IO:WR}{DATA<Enum>: E_FFT_WINDOW }
		CH_FFT_WINDOW,		
		//@brief   : FFT��ֱ��λ
		//@remarks : {IO:WR}{DATA<Enum>: E_FFT_UNIT }
		CH_FFT_VSCALE,		
		//@brief   : ��ȡFFTƵ��ֵ
		//@remarks : {IO:R}{DATA: SignalFreq }
		CH_FFT_FREQ,
		//@brief   : �˲�����
		//@remarks : {IO:WR}{DATA<Enum>: E_FILTER_TYPE }
		CH_FILTER_TYPE,		
		//@brief   : Ƶ������
		//@remarks : {IO:WR}{DATA<LONGLONG>: ����ֵ��Ƶ��ֵҪ���м���}
		CH_FILTER_FREQ_LOW,
		//@brief   : Ƶ������
		//@remarks : {IO:WR}{DATA<LONGLONG>: ����ֵ��Ƶ��ֵҪ���м���}
		CH_FILTER_FREQ_HIGH,
		//@brief   : �˲���Դ
		//@remarks : {IO:WR}{DATA<Enum>: E_CHANNEL_ID }
		CH_FILTER_SRC,	
	
		//@brief   : REF�ص�����(����)
		//@remarks : {IO:W}{DATA<short>: Ϊ�洢λ��ֵ }
		CH_REF_LOAD_FROM_FLASH = 300,	
		//@brief   : REF���벨��(USB)
		//@remarks : {IO:W}{DATA<short>: Ϊ�洢λ��ֵ }
		CH_REF_LOAD_FROM_USB,	
		//@brief   : REF�洢λ�õ���
		//@remarks : {IO:W}{DATA<short>: Ϊ�洢λ��ֵ }
		CH_REF_POS,
		//@brief   : �ж�ĳһλ�ò����Ƿ���ڣ�λ����CH_REF_POS�������õģ�
		//@remarks : {IO:R}{DATA<short>: Ϊ�洢λ��ֵ }
		CH_REF_POS_WAVE_EXIST,	
		//@brief   : ������д洢����
		//@remarks : {IO:W}{DATA : null }
		CH_REF_CLEAR,

		//[����]
		CH_DISPLAY_DATA = 400,
		//[����]��ȡԭʼ�������ݣ�����CH_GET_SAV_DATA
		CH_ORIGIN_DATA,	

		//@brief   : ��ȡSAV�ļ����ݣ����ݸ�ʽ �� [4Bytes �ļ�����] + [�ļ�����]��
		//@remarks : ʹ�÷�ʽ����ĵ���ʾ����
		// UTD2102CM��UTD4000M ��Ӧ��������СΪ32768Bytes�� UTD2102CEX-EDU��Ӧ����32000Bytes
		CH_GET_SAV_DATA,

		//{2102CM-x
		CH_VARDEPTH_ENABLE = 500,
		CH_VARDEPTH_SAMPLE_RATE,

		CH_VARDEPTH_DATA_READY = 510,
		CH_VARDEPTH_DATA,

		CH_VOLT_AMPLITUDE_LEVEL,			//��ѹ��ֵ���ã�ֱ�ӽ�����0~15��λ
		CH_PRE_BIAS_VOLT_VALUE,			//ƫ�õ�ѹ���ã�ֱ�����õ�ѹ�����ȸ���ֵ

		CH_VARDEPTH_TRIG_READY,         //ͨ������������DSO��׽�źŵĻ���
		//}
	}CHAN_CMD;

#ifdef __cplusplus
}
#endif

#endif // CMD_COMVer2_h__
