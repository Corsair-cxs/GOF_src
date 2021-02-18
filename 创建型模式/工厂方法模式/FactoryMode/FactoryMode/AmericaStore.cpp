#include "StdAfx.h"
#include "AmericaStore.h"
#include "AmericaPizza.h"
#include "ChinaPizza.h"

AmericaStore::AmericaStore(void)
{
	cout << "创建美国比萨工厂" << endl;
}

AmericaStore::~AmericaStore(void)
{
	cout << "销毁美国比萨工厂" << endl;
}

Pizza * AmericaStore::CreatePizza(string sType)
{
	if( sType == "中国比萨" )
	{
		return new ChinaPizza();
	}
	else if( sType == "美国比萨" )
	{
		return new AmericaPizza();
	}
	return 0;
}