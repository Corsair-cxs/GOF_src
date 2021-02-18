#pragma once
#include "observer.h"
 
class ShiDuDisplay :
	public Observer
{
public:
	ShiDuDisplay(WeatherData *pWeatherData);
	~ShiDuDisplay(void);
	virtual void Update(string sWenDu, string sShiDu); //接收主题的通知
	void Display();	//显示湿度
	void GetShiDu(); //获取湿度
private:
	string _sShiDu; //保存湿度
};
