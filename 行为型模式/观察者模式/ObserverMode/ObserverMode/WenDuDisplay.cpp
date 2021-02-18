#include "StdAfx.h"
#include "WenDuDisplay.h"
#include "WeatherData.h"

WenDuDisplay::WenDuDisplay(WeatherData *pWeatherData):_sWenDu("")
{
	_pWeatherData = pWeatherData;
}

WenDuDisplay::~WenDuDisplay(void)
{
}

void WenDuDisplay::Update(string sWenDu, string sShiDu)
{
	_sWenDu = sWenDu;
	Display();
}

void WenDuDisplay::Display()
{
	cout << _sWenDu <<endl;
}

void WenDuDisplay::GetWenDu()
{
	_sWenDu = _pWeatherData->GetWenDu();
	Display();
}