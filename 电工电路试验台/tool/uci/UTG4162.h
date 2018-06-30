/********************************************************************
	created:	2015/01/14
	author:		M.Yang
	purpose:	��UCI������ʹ�õ��й�UTG4000&UTG8000�Ķ���
	*********************************************************************/
#ifndef UTG4162_h__
#define UTG4162_h__

#ifdef __cplusplus
namespace uci {
	namespace utg4162 {	
#endif // __cplusplus		
		
		/////////////////////////////////Key Define/////////////////////////////

		//@brief : UTG4000&UTG8000ϵ�л��͵���尴����ֵ���塣
		//@remark:
		typedef enum _SGKeys {
			Key_F1 = 0,
			Key_F2,
			Key_F3,
			Key_F4,
			Key_F5,
			Key_F6,
			Key_0 = '0',
			Key_1,
			Key_2,
			Key_3,
			Key_4,
			Key_5,
			Key_6,
			Key_7,
			Key_8,
			Key_9,
			Key_Dot,
			Key_Symbol,
			Key_Right,
			Key_Left,
			Key_Ok,
			Key_Up,
			Key_Down,
			//
			Key_User,
			Key_Digital,
			Key_Counter,
			Key_Mod,
			Key_Sweep,
			Key_Bst,
			Key_Sine,
			Key_Noise,
			Key_Square,
			Key_Ramp,
			Key_Pulse,
			Key_Arb,
			Key_Harmonic,
			Key_DC,
			Key_Ch1,
			Key_Ch2,
			Key_Trigger,
			Key_SwapCh,
			Key_OtherPage,
			Key_Preset,
			Key_Storge,
			Key_StorgeL,
			Key_Utility,
			Key_Help,
			Key_HelpL,
			Key_Esc,
			Key_PrScreen,
			Key_Null = 0xff
		}SGKeys;

		inline int GetKeyIndex(SGKeys _code) {
			return (_code >= Key_F1 && _code < Key_F6) ? _code : _code - '0' + 6;
		};


		//@brief       : �жϰ����Ƿ�����
		//@param _code : ��ֵ
		//@param _v    : ��ǰ�������״̬��64bit������ʹ��ָ�"lock?"��ȡ��
		//@return      : == 0 δ����������������
		//@remarks     : 
		inline int IsKeyLocked(SGKeys _code, long long _v) {
			return _v & ((long long)1 << GetKeyIndex(_code));
		};

		//@brief   : ��LED��״̬
		//@remarks : 0 ��ʾ������ 1 ��ʾ����
		typedef struct _LEDStatus {
			char Noise;
			char UTILTY;
			char STORGE;
			char RAMP;
			char PULSE;
			char COUNTER;
			char USER;
			char DIGTAL;
			char HARMONIC;
			char DC;
			char TRGGER;
			char CH2;
			char SWAPCH;
			char ARB;
			char CH1;
			char SINE;
			char SQUARE;
		}LEDStatus;


		/////////////////////////////////File Load/////////////////////////////
		//@brief   : ���Ⲩ�ļ��ط�ʽ
		typedef enum _ARBWriteMode {
			//@brief   : ���ز���ʽ����	
			ARB_MODE_CARRIER = 0,
			//@brief   : �Ե��Ʋ���ʽ����	
			ARB_MODE_MOD,
		}ARBWriteMode;

		//@brief   : ���ص��ļ���Ž���
		typedef enum _FileMedium {
			//@brief   : ��ŵ�RAM
			FM_RAM = 0,
			//@brief   : ��ŵ�ROM
			FM_ROM,
			//@brief   : ��ŵ�TF��
			FM_TF,
			//@brief   : ��ŵ�U��
			FM_UDISK
		}FileMedium;


		/////////////////////////////////Parameters Address Define/////////////////////////////
		//����ģʽ
		typedef enum _EWorkMode : long long {
			//@brief : ����ģʽ
			WM_BASE = 0,
			//@brief : ���Ʋ�ģʽ
			WM_MODE,
			//@brief : ɨƵģʽ
			WM_SWEEP,
			//@brief : ⧷�
			WM_BURST,
		}EWorkMode;

		//��������
		typedef enum _EBaseWave : long long {
			//@brief : ���Ҳ�
			BASE_SINE = 0,
			//@brief : ����
			BASE_SQUARE = 1,
			//@brief : б��
			BASE_RAMP = 3,
			//@brief : ���岨
			BASE_PULSE = 4,
			//@brief : ����
			BASE_NOISE = 5,
			//@brief : ���Ⲩ
			BASE_ARB = 6,
			//@brief : г��
			BASE_HARMONIC = 7,
			//@brief : ֱ��
			BASE_DC = 8
		}EBaseWave;

		typedef enum _EModeType : long long {
			MT_AM = 0,
			MT_FM = 1,
			MT_PM = 2,
			MT_ASK = 3,
			MT_FSK = 4,
			MT_PSK = 5,
			MT_BPSK = 6,
			MT_QPSK = 7,
			MT_OSK = 8,
			MT_QAM = 9,
			MT_PWM = 10,
			MT_SUM = 11,
		}EModeType;

		//���Ʋ���
		typedef enum _EModeWaveType : long long {
			MOD_WAVE_SINE = 0,
			MOD_WAVE_SQUARE = 1,
			MOD_WAVE_UPRAMP = 2,
			MOD_WAVE_DNRAMP = 3,
			MOD_WAVE_NOISE = 4,
			MOD_WAVE_ARB = 5,
		}EModeWaveType;

		//@brief : �ź�Դ�������� 
		//@remark: ������ʹ��rpָ�д����ʹ��wpָ� 
		//@example: wp@ch:0@addr:0x8000@v:0;
		//          rp@ch:0@addr:0x8000;
		// ���в����Ķ�Ӧ����������8bytes��double����
		typedef enum _enumRemoteMessage {
			//@brief : ����ģʽ 
			//@remark: {IO:WR}{DATA:EWorkMode}
			RM_WORK_MODE = 0x8000,

			//{ ����
			//@brief : ͨ������ 
			//@remark: {IO:WR}{DATA: 0-OFF��1-ON}
			RM_CH_SW = 0x8001,
			//@brief : ͬ������ 
			//@remark: {IO:WR}{DATA: 0-OFF��1-ON��2-reverse}
			RM_CH_SYNC_SW,
			//@brief : ͨ������ 
			//@remark: {IO:WR}{DATA:  0��OFF��1��ON}
			RM_CH_REVERTSE,
			//@brief : ͨ�������迹 
			//@remark: {IO:WR}{DATA: 1~1000}
			RM_CH_LOAD,
			//@brief : ͨ���������ʹ�� 
			//@remark: {IO:WR}{DATA:   0��OFF��1��ON}
			RM_CH_OUTPUT_LIMIT_ENABLE,
			//@brief : ͨ�����������͵�ƽ  
			//@remark: {IO:WR}{DATA<?>:   -10V~MAX_LEVEL}
			RM_CH_OUTPUT_LIMIT_MIN_LEVEL,
			//@brief : ͨ�����������ߵ�ƽ 
			//@remark: {IO:WR}{DATA:   MIN_LEVEL~10V}
			RM_CH_OUTPUT_LIMIT_MAX_LEVEL,

			//@brief : �������� 
			//@remark: {IO:WR}{DATA:EBaseWave}
			RM_BASE_WAVE_TYPE = 0x8008,
			//@brief : ����Ƶ��(��λ��Hz)
			//@remark: {IO:WR}{DATA:	1uHz~��ǰ�������Ƶ��}
			RM_BASE_FREQ,
			//@brief : ������λ(��λ����)
			//@remark: {IO:WR}{DATA:-360~360}		
			RM_BASE_PHASE = 0x800A,
			//@brief : ��������(��λ��VPP)
			//@remark: {IO:WR}{DATA:	1mVpp~10Vpp��50ŷķ��}				
			RM_BASE_AMP_VPP,
			//@brief : ��������(��λ��VRMS)
			//@remark: {IO:WR}{DATA:	1mVRMS~5Vpp��50ŷķ��}	
			RM_BASE_AMP_VRMS,
			//@brief : ��������(��λ��VDBM)
			//@remark: {IO:WR}{DATA:	-53.010VDBM~26.99VDBM��50ŷķ��}		
			RM_BASE_AMP_VDBM,
			//@brief : ����ƫ��(��λ��V)
			//@remark: {IO:WR}{DATA:	-5VRMS~5Vpp��50ŷķ��}
			RM_BASE_OFFSET,
			//@brief : �����ߵ�ƽ(��λ��V)
			//@remark: {IO:WR}{DATA:	BASE_LOW~5Vpp��50ŷķ��}
			RM_BASE_HIGHT = 0x800F,
			//@brief : �����͵�ƽ(��λ��V)
			//@remark: {IO:WR}{DATA:	-5VRMS~BASE_HIGHT��50ŷķ��}
			RM_BASE_LOW = 0x8010,
			//@brief : ����ռ�ձȶԷ���ռ�ձȡ����岨ռ�ձȡ����ǲ��Գƶȹ���
			//@remark: {IO:WR}{DATA:	0~100}
			RM_BASE_DUTY,
			//@brief : ���岨����ʱ��(��λ��s)
			//@remark: {IO:WR}{DATA:	min ~ ����*0.4}
			RM_BASE_RISETIME,
			//@brief : ���岨�½�ʱ��(��λ��s)
			//@remark: {IO:WR}{DATA:	min ~ ����*0.4}
			RM_BASE_FALLTIME,
			//@brief : ���Ⲩ����ģʽ����
			//@remark: {IO:WR}{DATA:0��OFF��1��ON}
			RM_BASE_ARB_PLAY_ENABLE,
			//@brief : г�� - ����ģʽ
			//@remark: {IO:WR}
			//{DATA:
			//0:    ���,
			//1:    ż��, 
			//2:    ȫ��, 
			//3:    USER,�Զ���
			// }
			RM_BASE_HARMOIC_TYPE = 0x8080,
			//@brief :г������,��RM_BASE_HARMOIC_TYPE=USERʱ��Ч
			//@remark: {IO:WR}{DATA:BIT14��BIT0�ֱ��Ӧ2~16��г�����أ�BIT15��Ӧ����ǿ�ƿ���}
			RM_BASE_HARMONIC_ONOFF,
			//����N(2~16)��г��,���Կ��������ַ���:
			//EG:N=3(����г��),AMP = 1Vpp, PHASE = 90��
			//����1:
			//��1����ָ��г��������RM_HARMONIC_NUM = N(2~16),
			//��2�����趨г���ķ��Ⱥ���λ,
			//		RM_HARMONIC_SN_AMP_N = 1.0; RM_HARMONIC_SN_PHASE_N = 90.0;
			//����1:ֱ�����õ�����г���ķ��Ⱥ���λ
			//RM_HARMONIC_SN_AMP_3 = 1.0, RM_HARMONIC_SN_PHASE_3 = 90.0,	

			//@brief : г������
			//@remark: {IO:WR}{DATA:1~15}
			RM_HARMONIC_NUM,
			//@brief : г������Vpp
			//@remark: {IO:WR}{DATA:0~��������}
			RM_HARMONIC_SN_AMP_N,
			//@brief : г����λ(��λ����)
			//@remark: {IO:WR}{DATA:-360~360}
			RM_HARMONIC_SN_PHASE_N = 0x8084,
			//@brief : г������ ͬRM_HARMONIC_SN_AMP_N
			RM_HARMONIC_SN_AMP_2,
			RM_HARMONIC_SN_AMP_3,
			RM_HARMONIC_SN_AMP_4,
			RM_HARMONIC_SN_AMP_5,
			RM_HARMONIC_SN_AMP_6,
			RM_HARMONIC_SN_AMP_7 = 0x808A ,
			RM_HARMONIC_SN_AMP_8,
			RM_HARMONIC_SN_AMP_9,
			RM_HARMONIC_SN_AMP_10,
			RM_HARMONIC_SN_AMP_11,
			RM_HARMONIC_SN_AMP_12 = 0x808F,
			RM_HARMONIC_SN_AMP_13 = 0x8090,
			RM_HARMONIC_SN_AMP_14,
			RM_HARMONIC_SN_AMP_15,
			RM_HARMONIC_SN_AMP_16,
			//@brief : г����λ RM_HARMONIC_SN_PHASE_N
			RM_HARMONIC_SN_PHASE_2,
			RM_HARMONIC_SN_PHASE_3,
			RM_HARMONIC_SN_PHASE_4,
			RM_HARMONIC_SN_PHASE_5,
			RM_HARMONIC_SN_PHASE_6,
			RM_HARMONIC_SN_PHASE_7,
			RM_HARMONIC_SN_PHASE_8 = 0x809A,
			RM_HARMONIC_SN_PHASE_9,
			RM_HARMONIC_SN_PHASE_10,
			RM_HARMONIC_SN_PHASE_11,
			RM_HARMONIC_SN_PHASE_12,
			RM_HARMONIC_SN_PHASE_13 = 0x809F,
			RM_HARMONIC_SN_PHASE_14 = 0x80A0,
			RM_HARMONIC_SN_PHASE_15,
			RM_HARMONIC_SN_PHASE_16,
			//}

			//{MOD
			//@brief : ����ģʽ
			//@remark: {IO:WR}{DATA:EModeType}
			RM_MOD_TYPE = 0x8100,
			//���Ʋ���
			//0:  MOD_SINE,
			//1:  MOD_SQUARE,
			//2:  MOD_UPRAMP,
			//3:  MOD_DNRAMP,
			//4:  MOD_NOISE,
			//5:  MOD_ARB,
			//@brief : ���Ʋ���
			//@remark: {IO:WR}{DATA:EModeWaveType} 
			RM_MOD_WAVE,
			//@brief : ���Ʋ�Ƶ�ʣ���λ��Hz��
			//@remark: {IO:WR}{DATA: 1uHz~200KHz}
			RM_MOD_FREQ,
			//@brief : ���Ʋ����ʣ���λ��s��
			//@remark: {IO:WR}{DATA<double>: 2ms~1Ms}
			RM_MOD_RATE,
			//@brief : ������ȣ���λ��%��
			//@remark: {IO:WR}{DATA: 0~120}
			RM_MOD_SCOPE,
			//@brief : ����Դ
			//@remark: {IO:WR}{DATA: 0-Internal,1-External}
			RM_MOD_SOURCE,
			//@brief : FMƵ���λ��Hz��
			//@remark: {IO:WR}{DATA: 0~�ز���ǰƵ��}
			RM_MOD_FRE_DEV,
			//@brief : PM���	(��λ����)
			//@remark: {IO:WR}{DATA:-360~360}
			RM_MOD_PHASE_DEV,
			//@brief : FSK��Ƶ����λ��Hz��
			//@remark: {IO:WR}{DATA: 0~�ز����Ƶ��}
			RM_MOD_HOP_FREQ,
			//@brief : BPSK��������Դ
			//@remark: {IO:WR}
			//{DATA<double>: 
			//0:  PN7,
			//1:  PN9, 
			//2:  PN15, 
			//3:  PN21,
			//}
			RM_MOD_DATA_SOURCE = 0x8109,
			//@brief : BPSK��λ��QPSK��λ1,(��λ����)
			//@remark: {IO:WR}{DATA:	-360~360}}
			RM_MOD_PSK_PHASE1,
			//@brief : QPSK��λ2(��λ����)
			//@remark: {IO:WR}{DATA:-360~360}}
			RM_MOD_PSK_PHASE2,
			//@brief : QPSK��λ3(��λ����)
			//@remark: {IO:WR}{DATA:-360~360}
			RM_MOD_PSK_PHASE3,
			//@brief : OSK��ʱ��(��λ��s)
			//@remark: {IO:WR}{DATA: 8ns~200s}
			RM_MOD_OSC_TIME,
			//@brief : QAM����IQ MAM
			//@remark: {IO:WR}{DATA: 0-4QAM,1-8QAM,2-16QAM,3-32QAM,4-64QAM,5-128QAM,6-256QAM,}
			RM_MOD_IQ_MAP,
			//@brief : PWM����ռ�ձȲ�ֵ
			//@remark: {IO:WR}{DATA: 0~PULS DUTY}
			RM_MOD_DUTY_DEV,
			//}

			//{SWEEP			
			//@brief : ɨƵ����
			//@remark: {IO:WR}{DATA: 0�����ԣ�1������}
			RM_SWEEP_TYPE = 0x8200,
			//@brief : ɨƵ����Դ
			//@remark: {IO:WR}{DATA: 0���ڲ���1���ⲿ��2���ֶ�}
			RM_SWEEP_SOURCE,
			//@brief : ɨƵʱ��(��λ��s)
			//@remark: {IO:WR}{DATA: 1ms~500s}
			RM_SWEEP_TIME,
			//@brief : ɨƵ��ʼƵ�ʣ���λ��Hz��
			//@remark: {IO:WR}{DATA: 1uHz~����ز�Ƶ��}
			RM_SWEEP_START_FREQ,
			//@brief : ɨƵֹͣƵ�ʣ���λ��Hz��
			//@remark: {IO:WR}{DATA: 1uHz~����ز�Ƶ��}
			RM_SWEEP_STOP_FREQ,
			//@brief : ͬ���������Ƶ�ʣ���λ��Hz��
			//@remark: {IO:WR}{DATA: RM_SWEEP_START_FREQ~RM_SWEEP_STOP_FREQ}
			RM_SWEEP_SYNC_FREQ,
			//@brief : ɨƵ�������
			//@remark: {IO:WR}{DATA: 0-OFF��1-ON}
			RM_SWEEP_TIRG_OUT,
			//}

			//{BURST		
			//@brief : ⧷�����
			//@remark: {IO:WR}{DATA: 
			//0:  N����,
			//1:  ����,
			//2:  �ſ�			
			//}
			RM_BURST_TYPE = 0x8300,
			//@brief : ⧷�����Դ
			//@remark: {IO:WR}{DATA: 0���ڲ���1���ⲿ��2���ֶ�}
			RM_BURST_SOURCE,
			//@brief : �������
			//@remark: {IO:WR}{DATA: 0-OFF��1-ON}
			RM_BURST_TIRG_OUT,
			//@brief : ⧷����ڣ���λ��s��
			//@remark: {IO:WR}{DATA: 1~500}
			RM_BURST_PERIOD,
			//@brief : ⧷���λ(��λ����)
			//@remark: {IO:WR}{DATA:-360~360}
			RM_BURST_PHASE,
			//@brief : ⧷�����������λ������
			//@remark: {IO:WR}{DATA: 1~50000}
			RM_BURST_CYCLES,
			//@brief : ��������
			//@remark: {IO:WR}{DATA: 0-Rise��1-Fall}
			RM_BURST_TIRG_EDGE,
			//}
		}ERemoteMessage;


#ifdef __cplusplus
	}
}
#endif // __cplusplus

#endif // UTG4162_h__
