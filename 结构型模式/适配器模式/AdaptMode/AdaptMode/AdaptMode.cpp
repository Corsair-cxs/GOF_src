//概述：
//将一个类的接口转换成客户希望的另外一个接口。Adapter模式使得原本由于接口不兼容而不能一起工作的那些类可以在一起工作。
//
//解决的问题：
//即Adapter模式使得原本由于接口不兼容而不能一起工作的那些类可以在一起工作。
//
//模式中的角色：
//1 目标接口（Target）：客户所期待的接口。目标可以是具体的或抽象的类，也可以是接口。
//2 需要适配的类（Adaptee）：需要适配的类或适配者类。
//3 适配器（Adapter）：通过包装一个需要适配的对象，把原接口转换成目标接口。

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Target.h"
#include "Adapter_1.h"
#include "Adapter_2.h"
#include "Adaptee.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//类模式Adapter
	cout << "类模式Adapter_1" << endl;
	Target* pTarget = new Adapter_1();
	pTarget->Request();

	//对象模式Adapter1
	cout << "对象模式Adapter_2" << endl;
	Adaptee* ade = new Adaptee();
	Target* pTarget1= new Adapter_2(ade);
	pTarget1->Request();

	//对象模式Adapter2
	cout << "对象模式Adapter_2" << endl;
	Target* pTarget2 = new Adapter_2();
	pTarget2->Request();
	system("pause");
	return 0;
}

