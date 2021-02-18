#include "StdAfx.h"
#include "Observer.h"
#include "WeatherData.h"

Observer::Observer(void): _pWeatherData(NULL)
{
}

Observer::~Observer(void)
{
}

void Observer::ExitObserver()
{
	if( _pWeatherData )
	{
		_pWeatherData->DelObserver( this );
	}
}