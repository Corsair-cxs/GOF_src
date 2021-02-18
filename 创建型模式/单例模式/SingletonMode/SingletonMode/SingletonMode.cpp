//单例模式有以下特点：
//1、单例类只能有一个实例。
//2、单例类必须自己创建自己的唯一实例。
//3、单例类必须给所有其他对象提供这一实例。
//单例模式确保某个类只有一个实例，而且自行实例化并向整个系统提供这个实例。
//在计算机系统中，线程池、缓存、日志对象、对话框、打印机、显卡的驱动程序对象常被设计成单例。
//这些应用都或多或少具有资源管理器的功能。
//每台计算机可以有若干个打印机，但只能有一个Printer Spooler，以避免两个打印作业同时输出到打印机中。
//每台计算机可以有若干通信端口，系统应当集中管理这些通信端口，以避免一个通信端口同时被两个请求同时调用。
//总之，选择单例模式就是为了避免不一致状态，避免政出多头。

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Singleton.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Singleton * p1 = Singleton::GetInstance();
	Singleton * p2 = Singleton::GetInstance();

	if( p1 == p2 )
	{
		cout << "返回的是同一个实例" << endl;
	}
	else
	{
		cout << "返回的不是同一个实例" << endl;
	}

	system("pause");
	return 0;
}

