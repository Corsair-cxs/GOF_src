#pragma once
#include "observer.h"
 
class ShiDuDisplay :
	public Observer
{
public:
	ShiDuDisplay(WeatherData *pWeatherData);
	~ShiDuDisplay(void);
	virtual void Update(string sWenDu, string sShiDu); //���������֪ͨ
	void Display();	//��ʾʪ��
	void GetShiDu(); //��ȡʪ��
private:
	string _sShiDu; //����ʪ��
};
