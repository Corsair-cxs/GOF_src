//观察者模式：
//观察者模式定义了一种一对多的依赖关系，让多个观察者对象同时监听某一个主题对象。
//这个主题对象在状态上发生变化时，会通知所有观察者对象，让它们能够自动更新自己。
//
//观察者模式的组成：
//抽象主题角色：把所有对观察者对象的引用保存在一个集合中，每个抽象主题角色都可以有任意数量的观察者。抽象主题提供一个接口，可以增加和删除观察者角色。一般用一个抽象类和接口来实现。
//抽象观察者角色：为所有具体的观察者定义一个接口，在得到主题的通知时更新自己。
//具体主题角色：在具体主题内部状态改变时，给所有登记过的观察者发出通知。具体主题角色通常用一个子类实现。
//具体观察者角色：该角色实现抽象观察者角色所要求的更新接口，以便使本身的状态与主题的状态相协调。
//通常用一个子类实现。如果需要，具体观察者角色可以保存一个指向具体主题角色的引用。

#include "stdafx.h"
#include <stdlib.h>

#include "WeatherData.h"
#include "Observer.h"
#include "WenDuDisplay.h"
#include "ShiDuDisplay.h"

int _tmain(int argc, _TCHAR* argv[])
{
	WeatherData *pWeatherData = new WeatherData;
	WenDuDisplay *pWenDu = new WenDuDisplay( pWeatherData );
	ShiDuDisplay *pShiDu = new ShiDuDisplay( pWeatherData );

	pWeatherData->AddObserver( pWenDu );
	pWeatherData->AddObserver( pShiDu );

	cout << "设置温度30，湿度10，主题通知观察者" << endl;
	pWeatherData->SetData( "30", "10" );
	pWeatherData->Notify();

	cout << "设置温度20湿度5" <<endl;
	pWeatherData->SetData( "20", "5" );

	cout << "温度面板主动获取温度" << endl;
	pWenDu->GetWenDu();

	cout << "湿度面板主动获取湿度" << endl;
	pShiDu->GetShiDu();

	cout << "湿度观察者退出观察" << endl;
	pShiDu->ExitObserver();

	cout << "设置温度26湿度8，主题通知观察者" <<endl;
	pWeatherData->SetData( "26", "8" );
	pWeatherData->Notify();

	cout << "删除主题" <<endl;
	delete pWeatherData;
	pWeatherData = NULL;

	system("pause");
	return 0;
}

