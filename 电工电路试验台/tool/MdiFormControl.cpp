#include "tool.h"

void CloseAllMidchild(Form ^Parent) {
	for each(Form^ f in Parent->MdiChildren)
	{
		f->Close();
	}
}

/**
����:���ݴ������ֻ�ȡ�����ǲ����Ѿ���

*/
Form^ GetWindowsChild(String ^FormName, Form ^Parent) {
	for each(Form^ f in Parent->MdiChildren)
	{
		if (f->Name == FormName)
		{
			return f;
		}
	}
	return nullptr;
}