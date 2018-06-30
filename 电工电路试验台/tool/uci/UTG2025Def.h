/********************************************************************
	created:	2015/04/08
	author:		M.Yang
	purpose:	�ṩ��UTG2000A&UTG7000�ź�Դ����ض���
	*********************************************************************/

#ifndef UTG2025Def_h__
#define UTG2025Def_h__

#ifdef __cplusplus
namespace SG62_25A {
#endif
	//@brief : UTG2000A&UTG7000�ź�Դ����������
	typedef enum _ParamNo {
		Invalid_Cmd = -1,
		//@brief : ��ǰ����ģʽ
		CurMode = 6,
		//@brief : ���Ⲩ����ģʽ
		ArbPlayMode = 7,
		//@brief : ��������
		WaveType = 8,
		//@brief : Ƶ��
		Freq = 9,
		//@brief : ����
		Period = 10,
		//@brief : ����-���ֵ
		AmpVpp = 11,
		//@brief : ����-��Чֵ
		AmpVrms = 12,
		//@brief : ����-����
		AmpDbm = 13,
		//@brief : ֱ��ƫ��
		DCOffset = 14,
		//@brief : �ߵ�ƽ
		High = 15,
		//@brief : �͵�ƽ
		Low = 16,
		//@brief : ��λ
		Phase = 17,
		//@brief : ռ�ձ�
		DutyCycle = 18,
		//@brief : �Գƶ�
		Symmetry = 19,
		//@brief : 
		PulseWidth = 20,
		//@brief : ������ʱ��
		PulseRisingTime = 21,
		//@brief : �½���ʱ��
		PulseFallingTime = 22,
		//@brief : 
		ArbSampleRate = 23,
		//@brief : ARB�ļ���
		ArbName = 24,
		//@brief : 
		ArbLength = 25,


		//@brief : ��������
		ModulateType = 40,
		//@brief : ����Ƶ��
		ModulateFreq = 28,
		//@brief : ����Դ
		ModulateSource = 29,
		//@brief : ���Ʋ�
		ModulateShape = 30,
		//@brief : 
		ModulateOnOff = 31,
		//@brief : �������
		ModulateAMDeepth = 32,
		//@brief : Ƶƫ
		ModulateFMFreqDev = 33,
		//@brief : ��ƫ
		ModulatePMPhaseDev = 34,
		//@brief : ��ԾƵ��
		ModulateFSK_HopFreq = 35,
		//@brief : ����
		ModulateFSKRate = 36,
		//@brief : ���Ƽ���-��λ
		ModulatePSKPhase = 37,
		//@brief : Ƶ�Ƽ���-�ز�Ƶ��
		ModulateFSK_CarrierFreq = 38,
		//@brief : �������-ռ�ձ�ƫ��
		ModulatePWM_DutyDev = 39,

		//@brief : ɨƵ-��ʼƵ��
		SweepStartFreq = 47,
		//@brief : ɨƵ-ֹͣƵ��
		SweepStopFreq = 48,
		//@brief : ɨƵ-ɨ��ʱ��
		SweepTime = 49,
		//@brief : ɨƵ-����
		SweepType = 50,

		//@brief : �л�Ƶ�����÷�ʽ-Ƶ�ʻ�������	
		Wave_Freq_Or_Period = 51,
		//@brief : �л��������÷�ʽ-���Ȼ��߸ߵ͵�ƽ
		Wave_Amp_Or_HighLow = 52,	
		//@brief : �л���ͬ�ķ�����ʾ��λ
		Wave_Amp_Unit = 53,

		//@brief : ���崮 - ��ʼ��λ
		BurstStartPhase = 57,
		//@brief : ���崮 - ⧷�����
		BurstPeriod = 58,
		//@brief : ���崮 - ѭ����
		BurstCycleCount = 59,
		//@brief : ���崮 - �ſ�-����
		BurstPolarity = 60,
		//@brief : ���崮 - ����
		BurstType = 61,

		//@brief : ����Դ
		TriggerSource = 68,
		//@brief : 
		SyncType = 69,
		//@brief : 
		TriggerEdge = 70,
		//@brief : 
		TriggerOnOff = 71,

		//@brief : CH1 ͨ��ʹ��
		OutputEnable = 77,
		//@brief : CH2 ͨ��ʹ��
		OutputEnable2 = 78,
		//@brief : ����
		Invert = 79,
		//@brief : ����迹
		OutputExtRes = 80, 
		//@brief : ��������
		OutputLimit = 81,
		//@brief : ��������
		OutputLimitHigh = 82,
		//@brief : ��������
		OutputLimitLow = 83,
		//@brief : ͬ�����
		SyncOut = 84,
		//@brief : 
		Couple = 85,
		//@brief : IP��ַ����
		IPAddrType = 101,
		//@brief : IP��ַ
		IPAddr = 102,
		//@brief : ��������
		IPSubnetMask = 103,
		//@brief : ����
		IPGateway = 104,
		//@brief : DNS
		IPDns = 105,
		//@brief : MAC��ַ
		Mac = 106,
		//@brief : ����
		Language = 107,
		//@brief : ʱ��Դ
		ClkSource = 108,
		//@brief : 
		PowerOnParam = 109,
		//@brief : ����������
		BeepOnOff = 110,
		//@brief : ���ַָ���
		CharDivideInt = 111,
		//@brief : ��������
		LoadSettting = 112,
		//@brief : ��������
		SaveSetting = 113,
		//@brief : �������
		Backlight = 114,
		//@brief : ����		
		About = 115,
		//@brief : ʱ�����
		ClkOut = 116
	}ParamNo;

#ifdef __cplusplus
}
#endif


#endif // UTG2025Def_h__
