#include "StdAfx.h"
#include "ChinaStore.h"
#include "AmericaPizza.h"
#include "ChinaPizza.h"

ChinaStore::ChinaStore(void)
{
	cout << "�����й���������" << endl;
}

ChinaStore::~ChinaStore(void)
{
	cout << "�����й���������" << endl;
}
 
Pizza * ChinaStore::CreatePizza(string sType)
{
	if( sType == "�й�����" )
	{
		return new ChinaPizza();
	}
	else if( sType == "��������" )
	{
		return new AmericaPizza();
	}
	return 0;
}