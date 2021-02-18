#pragma once
#include "observer.h"

class WenDuDisplay :
	public Observer
{
public:
	WenDuDisplay(WeatherData *pWeatherData);
	~WenDuDisplay(void);
	virtual void Update(string sWenDu, string sShiDu);  //接收主题的通知
	void Display(); //显示温度
	void GetWenDu(); //获取温度
private:
	string _sWenDu; //保存温度
};
