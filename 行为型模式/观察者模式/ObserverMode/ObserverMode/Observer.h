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
	void ExitObserver(); //�˳�������Ĺ۲�

protected:
	WeatherData *_pWeatherData; //���������ָ��
};
