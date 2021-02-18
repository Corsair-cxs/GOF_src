#pragma once
#include "observer.h"

class WenDuDisplay :
	public Observer
{
public:
	WenDuDisplay(WeatherData *pWeatherData);
	~WenDuDisplay(void);
	virtual void Update(string sWenDu, string sShiDu);  //���������֪ͨ
	void Display(); //��ʾ�¶�
	void GetWenDu(); //��ȡ�¶�
private:
	string _sWenDu; //�����¶�
};
