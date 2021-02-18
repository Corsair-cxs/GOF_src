//定义：为创建一组相关或相互依赖的对象提供一个接口，而且无需指定他们的具体类。
//区别：
//工厂方法模式：
//一个抽象产品类，可以派生出多个具体产品类。   
//一个抽象工厂类，可以派生出多个具体工厂类。   
//每个具体工厂类只能创建一个具体产品类的实例。
//抽象工厂模式：
//多个抽象产品类，每个抽象产品类可以派生出多个具体产品类。   
//一个抽象工厂类，可以派生出多个具体工厂类。   
//每个具体工厂类可以创建多个具体产品类的实例。   
//区别：
//工厂方法模式只有一个抽象产品类，而抽象工厂模式有多个。   
//工厂方法模式的具体工厂类只能创建一个具体产品类的实例，而抽象工厂模式可以创建多个。

//例如，我们现在有两种产品A和B，而产品A和B分别都有两个厂商1和2进行生产，在这里我们把不同的厂商1、厂商2理解为牌子1和牌子2，
//那么厂商1就生产A1、B1，厂商2生产A2、B2。
//此时，不同的厂商肯定要生产自己的产品（如A1、B1），每个厂商都有自己的一系列产品，这就与上面抽象工厂模式的描述类似了。

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//创建工厂1，生产产品A和B的第一种实现
	AbstractFactory *pFactory1 = new ConcreteFactory1;
	AbstractProductA *pProductA1 = pFactory1->CreateProductA();
	AbstractProductB *pProductB1 = pFactory1->CreateProductB();
	
	cout << endl;

	//创建工厂2，生产产品A和B的第二种实现
	AbstractFactory *pFactory2 = new ConcreteFactory2;
	AbstractProductA *pProductA2 = pFactory2->CreateProductA();
	AbstractProductB *pProductB2 = pFactory2->CreateProductB();

	cout << endl;

	delete pFactory1;
	pFactory1 = NULL;

	delete pFactory2;
	pFactory2 = NULL;

	delete pProductA1;
	pProductA1 = NULL;

	delete pProductB1;
	pProductB1 = NULL;

	delete pProductA2;
	pProductA2 = NULL;

	delete pProductB2;
	pProductB2 = NULL;

	system("pause");
	return 0;
}

