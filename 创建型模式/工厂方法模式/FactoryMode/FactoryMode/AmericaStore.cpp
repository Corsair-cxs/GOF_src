#include "StdAfx.h"
#include "AmericaStore.h"
#include "AmericaPizza.h"
#include "ChinaPizza.h"

AmericaStore::AmericaStore(void)
{
	cout << "����������������" << endl;
}

AmericaStore::~AmericaStore(void)
{
	cout << "����������������" << endl;
}

Pizza * AmericaStore::CreatePizza(string sType)
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