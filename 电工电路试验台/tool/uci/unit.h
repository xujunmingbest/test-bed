/*!
* \created : 2016/10/10
* \author  : M.Yang
* \purpose : �ṩ����λ�ı�׼������
* \remarks : ���е�λ�Ķ��嶼���Ա�׼��λΪ0��С�ڱ�׼��λ��Ϊ����ݼ������ڱ�׼��λʱΪ���������
*			  �������ĺô��ǣ����Ա�֤�Ա�׼��λΪ��׼����������չ��
*/

#ifndef Unit_h__
#define Unit_h__

#ifdef __cplusplus
namespace unit {
	extern "C"{
#endif
#ifdef __cplusplus
		typedef enum _EScale : char {
#else
		typedef enum _EScale  {
#endif // DEBUG
			SCALE_p = -4,
			SCALE_n,
			SCALE_u,
			SCALE_m,
			SCALE_STD = 0,
			SCALE_K,
			SCALE_M,
			SCALE_G,
			SCALE_T,
		}EScale;

#ifdef __cplusplus
		typedef enum _EType : char{
#else
		typedef enum _EType {
#endif // __cplusplus
			TYPE_INVALID = -1,
			TYPE_FREQ,
			TYPE_TIME,
			TYPE_AREA,   //���(Vs)
			TYPE_SAMPLERATE,//�����ʣ�Sa/s��
			TYPE_POINT,  //������Sa��
			TYPE_VPP,    //���ֵ
			TYPE_VOLTAGE,//��ѹ
			TYPE_CURRENT,//����
			TYPE_DB,     //DB
			TYPE_VV,     //
			TYPE_PERCENT,//�ٷֱ�
			TYPE_DEGREE, //����
			TYPE_WATT,   //���أ�����
			TYPE_UNKNOWN,// δ֪��λ
		}EType;

		typedef struct _CodeName {
			char Code;
			char Name[5];
		}CodeName;

		static const CodeName ScaleTabel[] = {
			{ SCALE_p, "p" },
			{ SCALE_n, "n" },
			{ SCALE_u, "u" },
			{ SCALE_m, "m" },
			{ SCALE_STD,"" },
			{ SCALE_K, "K" },
			{ SCALE_M, "M" },
			{ SCALE_G, "G" },
			{ SCALE_T, "T" }
		};

		static const CodeName TypeTabel[] = {
			{ TYPE_FREQ, "Hz" },
			{ TYPE_TIME, "s" },
			{ TYPE_AREA, "Vs" },
			{ TYPE_SAMPLERATE, "Sa/s" },
			{ TYPE_POINT, "Sa" },
			{ TYPE_VPP, "Vpp" },
			{ TYPE_VOLTAGE, "V" },
			{ TYPE_CURRENT, "A" },
			{ TYPE_DB, "dB" },
			{ TYPE_VV, "VV" },
			{ TYPE_PERCENT, "%" },
			{ TYPE_DEGREE, "��" },
			{ TYPE_WATT, "W" },
			{ TYPE_UNKNOWN, "U" },
		};

		const char* _UCIAPI uci_UnitFindTypeName(char _code);

		const char* _UCIAPI uci_UnitFindScaleName(char _code);
		//@brief : ����ǰ��λ����ֵת����ָ���ĵ�λ��
		//@param _cur_value : ��ǰ��ֵ
		//@param _cur_unit  : ��ǰ��λ����
		//@param _des_unit  : Ҫת�����ĵ�λ����
		//@param _scale     : ���ƣ�һ��Ϊ1000������Ƶ�ʵĽ�����1000
		//@return : ����ת�������ֵ������2.3KHz ת��ΪHz����2300Hz
		//@remarks : ע�ⵥλ���������EScale����ģ���������������
		double _UCIAPI uci_UnitConvertTo(double _cur_value, int _cur_unit, int _des_unit, double _scale);
		
		typedef struct _UVale {
			double Value;
			long long Unit;
		}UVale;

		//@brief : ����ǰ��λ����ֵ�Զ�ת�������ʵĵ�λ���ͣ���ʹ��ֵС�ڽ��ơ�����2300Hz��ת�������2.3KHzs
		//@param _value : ��ǰ��ֵ
		//@param _unit  : ��ǰ��λ����
		//@param _scale : ���ƣ�һ��Ϊ1000������Ƶ�ʵĽ�����1000
		//@remarks :  ע�ⵥλ���������EScale����ģ���������������
		UVale _UCIAPI uci_UnitRefresh(double _value, char _unit, double _scale);

#ifdef __cplusplus
	}
}
#endif

#endif // Unit_h__