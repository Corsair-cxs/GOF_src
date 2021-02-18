#pragma once
#include <string>
#include <iostream>

class WeatherData;

using namespace std;

class Observer
{
public:
	Observer(void);
	~Observer(void);
	virtual void Update(string sWenDu, string sShiDu) = 0;
	void ExitObserver(); //退出对主题的观察

protected:
	WeatherData *_pWeatherData; //保存主题的指针
};
