#include "StdAfx.h"
#include "Majordomo.h"

Majordomo::Majordomo(string sName, Manager *pManager) : Manager(sName, pManager)
{
}

Majordomo::~Majordomo(void)
{
	cout << "ɾ����" << _sName <<endl;
	delete _pManager;
	_pManager = NULL;
}

void Majordomo::GetRequest(string sName, int nRequestMoney)
{
	if(nRequestMoney < 1000)
	{
		cout << "�ܼ�ͬ�����" << sName << "�ǹ��ʣ�" << nRequestMoney << endl;
	}
	else
	{
		cout << "�����ߣ��ܼ���Ȩ�ǹ��ʣ�ת������һ��" << endl;
		if(NULL != _pManager)
		{
			_pManager->GetRequest(sName, nRequestMoney);
		}
	}
}