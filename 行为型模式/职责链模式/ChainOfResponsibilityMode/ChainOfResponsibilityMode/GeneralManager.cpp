#include "StdAfx.h"
#include "GeneralManager.h"

GeneralManager::GeneralManager(string sName, Manager *pManager) : Manager(sName, pManager)
{
}

GeneralManager::~GeneralManager(void)
{
	cout << "ɾ����" << _sName <<endl;
}

void GeneralManager::GetRequest(string sName, int nRequestMoney)
{
	cout << "�ܾ���ͬ�����" << sName << "�ǹ��ʣ�" << nRequestMoney << endl;
}