#include "StdAfx.h"
#include "CommonManager.h"

CommonManager::CommonManager(string sName, Manager *pManager) : Manager(sName, pManager)
{
}

CommonManager::~CommonManager(void)
{
	cout << "ɾ����" << _sName <<endl;
	delete _pManager;
	_pManager = NULL;
}

void CommonManager::GetRequest(string sName, int nRequestMoney)
{
	if(nRequestMoney < 500)
	{
		cout << "����ͬ�����" << sName << "�ǹ��ʣ�" << nRequestMoney << endl;
 	}
	else
	{
		cout << "�����ߣ�������Ȩ�ǹ��ʣ�ת������һ��" << endl;
		if(NULL != _pManager)
		{
			_pManager->GetRequest(sName, nRequestMoney);
		}
	}
}