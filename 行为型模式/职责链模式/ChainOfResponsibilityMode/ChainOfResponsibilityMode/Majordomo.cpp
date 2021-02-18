#include "StdAfx.h"
#include "Majordomo.h"

Majordomo::Majordomo(string sName, Manager *pManager) : Manager(sName, pManager)
{
}

Majordomo::~Majordomo(void)
{
	cout << "删除：" << _sName <<endl;
	delete _pManager;
	_pManager = NULL;
}

void Majordomo::GetRequest(string sName, int nRequestMoney)
{
	if(nRequestMoney < 1000)
	{
		cout << "总监同意给：" << sName << "涨工资：" << nRequestMoney << endl;
	}
	else
	{
		cout << "金额过高，总监无权涨工资，转交给上一级" << endl;
		if(NULL != _pManager)
		{
			_pManager->GetRequest(sName, nRequestMoney);
		}
	}
}