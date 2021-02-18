#include "StdAfx.h"
#include "ShiDuDisplay.h"
#include "WeatherData.h"

ShiDuDisplay::ShiDuDisplay(WeatherData *pWeatherData): _sShiDu("")
{
	_pWeatherData = pWeatherData;
}

ShiDuDisplay::~ShiDuDisplay(void)
{
}

void ShiDuDisplay::Update(string sWenDu, string sShiDu)
{
	_sShiDu = sShiDu;
	Display();
}

void ShiDuDisplay::Display()
{
	cout << _sShiDu << endl;
}
 
void ShiDuDisplay::GetShiDu()
{
	_sShiDu = _pWeatherData->GetShiDu();
	Display();
}
