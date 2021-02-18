#include "StdAfx.h"
#include "ChinaStore.h"
#include "AmericaPizza.h"
#include "ChinaPizza.h"

ChinaStore::ChinaStore(void)
{
	cout << "创建中国比萨工厂" << endl;
}

ChinaStore::~ChinaStore(void)
{
	cout << "销毁中国比萨工厂" << endl;
}
 
Pizza * ChinaStore::CreatePizza(string sType)
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