/*!
 * \created : 2016/12/27
 * \author  : M.Yang
 * \purpose : �ṩ���UCI�ӿ�ʹ�õģ�DSOͨ�ö��塣
 */
#ifndef dso_base_h__
#define dso_base_h__

#ifdef __cplusplus
namespace comAPICommon {
#endif
	//ʱ����λ�������л���һ�£���������˲�ͬ�ı�����Ե�������
#ifdef __cplusplus
	typedef enum : short {
#else
	typedef enum {
#endif // __cplusplus
		TLEVEL_1NS = 0,
		TLEVEL_2NS,
		TLEVEL_5NS,
		TLEVEL_10NS,
		TLEVEL_20NS,
		TLEVEL_50NS,
		TLEVEL_100NS,
		TLEVEL_200NS,
		TLEVEL_500NS,
		TLEVEL_1US,
		TLEVEL_2US,
		TLEVEL_5US,
		TLEVEL_10US,
		TLEVEL_20US,
		TLEVEL_50US,
		TLEVEL_100US,
		TLEVEL_200US,
		TLEVEL_500US,
		TLEVEL_1MS,
		TLEVEL_2MS,
		TLEVEL_5MS,
		TLEVEL_10MS,
		TLEVEL_20MS,
		TLEVEL_50MS,
		TLEVEL_100MS,
		TLEVEL_200MS,
		TLEVEL_500MS,
		TLEVEL_1S,
		TLEVEL_2S,
		TLEVEL_5S,
		TLEVEL_10S,
		TLEVEL_20S,
		TLEVEL_50S,
		TLEVEL_100S,
		TLEVEL_200S,
	}E_TIMEBASE_LEVEL;

#ifdef __cplusplus
	typedef enum : short {
#else
	typedef enum {
#endif // __cplusplus
		VLEVEL_1MV = 0,
		VLEVEL_2MV,
		VLEVEL_5MV,

		VLEVEL_10MV,
		VLEVEL_20MV,
		VLEVEL_50MV,

		VLEVEL_100MV,
		VLEVEL_200MV,
		VLEVEL_500MV,

		VLEVEL_1V,
		VLEVEL_2V,
		VLEVEL_5V,

		VLEVEL_10V,
		VLEVEL_20V,
	} E_VOLTAGEBASE_LEVEL;

	typedef struct _measure_param {
		float value;
		int unit;
	}MeasureParam;

	typedef struct _time {
		unsigned short Year;
		unsigned short Month;
		unsigned short Day;
		unsigned short Hour;
		unsigned short Minute;
		unsigned short Second;
	}Time;

	typedef struct _UnitParam {
		char Type;      //��λ���ͣ�����Time��Freq�ȡ����嶨����ĵ���
		char Scale;     //����������k��n��p��M�ȡ����嶨����ĵ���
	}UnitParam;

	//@brief : ��������ֵ 
	//@remark: 4Byte align -> 8Bytes
	typedef struct _MeaValue {
		float      Value;
		UnitParam  Unit;
		char       IsValid;   //�Ƿ���Ч��  0 ��ʾ��Ч�� 1��ʾ��Ч��
		char       IsExist;   //�Ƿ���ڡ�  0 ��ʾ�����ڣ� 1��ʾ���ڡ�
	}MeaValue;

	//@brief : �����������ݰ���ͨ�ö��塣 
	//@remark: 
	typedef enum _EMeaParam {
		MP_MAX = 0, //���ֵ		
		MP_MIN,     //��Сֵ		
		MP_HIGH,    //High(Top)-�ߵ�ƽ(����ֵ)		
		MP_MIDDLE,  //Middle-�м�ֵ		
		MP_LOW,     //Low(Bottom) - �͵�ƽ(�׶�ֵ)	

		MP_PKPK,    //VPP-���ֵ		
		MP_AMP,     //��Сֵ	
		MP_MEAN,    //ƽ��ֵ		
		MP_CYCMEAN, //		
		MP_RMS,     //������

		MP_CYCRMS,   //���ھ���ֵ		
		MP_AREA,     //���		
		MP_CYCAREA,  //�������		
		MP_OVERSHOOT,//����		
		MP_PRESHOOT, //Ԥ��

		MP_PERIOD,   //����		
		MP_FREQ,     //Ƶ��	
		MP_RISE_TIME,//����ʱ��	
		MP_FALL_TIME,//�½�ʱ��		
		MP_PWIDTH,   //������

		MP_NWIDTH,   //������
		MP_PDUTY,    //��ռ�ձ�		
		MP_NDUTY,    //��ռ�ձ�		
		MP_RISEDELAY,//������ʱ		
		MP_FALLDELAY,//������ʱ

		MP_PHASE,	 //��λ		
		MP_FRR,	     //
		MP_FRF,
		MP_FFR,
		MP_FFF,

		MP_LRF,
		MP_LRR,
		MP_LFR,
		MP_LFF,

		MP_BURST_WIDTH, //ͻ������

		//
		//reserve section  
		//   �²������׷��
		//
		// 
		//�̶�λ50������
		MP_MAX_COUNT = 50,
	}EMeaParam;

#ifdef __cplusplus
	}
	namespace uci {
		using namespace comAPICommon;
		namespace cb = comAPICommon;//comAPICommon alias
	}
#endif

#endif // dso_base_h__
