#include "StdAfx.h"
#include "CommonManager.h"

CommonManager::CommonManager(string sName, Manager *pManager) : Manager(sName, pManager)
{
}

CommonManager::~CommonManager(void)
{
	cout << "删除：" << _sName <<endl;
	delete _pManager;
	_pManager = NULL;
}

void CommonManager::GetRequest(string sName, int nRequestMoney)
{
	if(nRequestMoney < 500)
	{
		cout << "经理同意给：" << sName << "涨工资：" << nRequestMoney << endl;
 	}
	else
	{
		cout << "金额过高，经理无权涨工资，转交给上一级" << endl;
		if(NULL != _pManager)
		{
			_pManager->GetRequest(sName, nRequestMoney);
		}
	}
}