#include "xml.h"

ConfigXml configXml;

//����xml�ļ�  
bool readXmlConfigFile(ConfigXml &configXml)
{
	TiXmlDocument mydoc("pz.xml");//xml�ĵ�����  
	bool loadOk = mydoc.LoadFile();//�����ĵ�  
	if (!loadOk)
	{
		cout << "could not load the test file.Error:" << mydoc.ErrorDesc() << endl;
		return false;
	}

	TiXmlElement *RootElement = mydoc.RootElement();  //��Ԫ��, Info  
	TiXmlElement *pEle = RootElement;

	//�����ý��  
	for (TiXmlElement *CldElement = pEle->FirstChildElement();//��һ����Ԫ��  
		CldElement != NULL;
		CldElement = CldElement->NextSiblingElement())//��һ���ֵ�Ԫ��  
	{
		// StuElement->Value() �ڵ�����  
		string zd(CldElement->Value());
		string value(CldElement->FirstChild()->Value());
		if (zd == "DesMac") {
			configXml.DesMac = value;
		}
		else if (zd == "RepeaterPort") {
			configXml.RepeaterPort = value;
		}
		else if (zd == "RepeaterIp") {
			configXml.RepeaterIp = value;
		}
		else if (zd == "SerialHandle") {
			configXml.SerialHandle = value;
		}
		else if (zd == "SerialControlSource") {
			configXml.SerialControlSource = value;
		}
		else if (zd == "GradeIp") {
			configXml.GradeIp = value;
		}
		else if (zd == "GradePort") {
			configXml.GradePort = value;
		}
	}
	return true;
}


bool writeXmlConfigFile(ConfigXml &configXml) {

	TiXmlDocument *writeDoc = new TiXmlDocument; //xml�ĵ�ָ��  

												 //�ĵ���ʽ����  
	TiXmlDeclaration *decl = new TiXmlDeclaration("1.0", "gb2312", "yes");
	writeDoc->LinkEndChild(decl); //д���ĵ�  
	TiXmlElement *RootElement = new TiXmlElement("Info");//��Ԫ��  													
	writeDoc->LinkEndChild(RootElement);

	/******����ֶκ�ֵ******/
	//TiXmlElement *pz1 = new TiXmlElement("LangDuNvPath");
	//RootElement->LinkEndChild(pz1);//���ڵ�д���ĵ�  
	//TiXmlText *pz1Text = new TiXmlText(configXml.LangDuNvPath.c_str());//Stu  //��������  
	//pz1->LinkEndChild(pz1Text);


	writeDoc->SaveFile("pz.xml");
	delete writeDoc;
	return true;
}

