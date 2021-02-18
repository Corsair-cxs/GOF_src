#include "StdAfx.h"
#include "GeneralManager.h"

GeneralManager::GeneralManager(string sName, Manager *pManager) : Manager(sName, pManager)
{
}

GeneralManager::~GeneralManager(void)
{
	cout << "删除：" << _sName <<endl;
}

void GeneralManager::GetRequest(string sName, int nRequestMoney)
{
	cout << "总经理同意给：" << sName << "涨工资：" << nRequestMoney << endl;
}