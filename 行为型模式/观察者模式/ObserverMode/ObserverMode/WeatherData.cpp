#include "StdAfx.h"
#include "WeatherData.h"
#include "Observer.h"

WeatherData::WeatherData(void)
{
}

WeatherData::~WeatherData(void)
{
	ClearObserver();
}

void WeatherData::Notify()
{
	list<Observer*>::iterator Iter = _lsObserver.begin();
	while ( Iter != _lsObserver.end() )
	{
		(*Iter)->Update( _sWenDu, _sShiDu );
		++Iter;
	}
}

void WeatherData::SetData(string sWenDu, string sShiDu)
{
	_sWenDu = sWenDu;
	_sShiDu = sShiDu;
}

string WeatherData::GetWenDu()
{
	return "�¶ȣ�" + _sWenDu;
}

string WeatherData::GetShiDu()
{
	return "ʪ�ȣ�" + _sShiDu;
}
 
