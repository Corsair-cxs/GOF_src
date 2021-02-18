#pragma once
#include "subject.h"
#include <string>

class WeatherData :
	public Subject
{
public:
	WeatherData(void);
	~WeatherData(void);
	string GetWenDu(); //��ȡ�¶�
	string GetShiDu(); //��ȡʪ��
	void Notify();
	void SetData(string sWenDu, string sShiDu);

private:
	string _sWenDu;
	string _sShiDu;
};
