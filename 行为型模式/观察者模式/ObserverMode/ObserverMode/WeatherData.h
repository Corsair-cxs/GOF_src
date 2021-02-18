#pragma once
#include "subject.h"
#include <string>

class WeatherData :
	public Subject
{
public:
	WeatherData(void);
	~WeatherData(void);
	string GetWenDu(); //获取温度
	string GetShiDu(); //获取湿度
	void Notify();
	void SetData(string sWenDu, string sShiDu);

private:
	string _sWenDu;
	string _sShiDu;
};
