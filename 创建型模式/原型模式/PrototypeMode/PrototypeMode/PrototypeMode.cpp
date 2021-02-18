//解析： 
//Prototype模式其实就是常说的"虚拟构造函数"一个实现,C++的实现机制中并没有支持这个特性, 
//但是通过不同派生类实现的Clone接口函数可以完成与"虚拟构造函数"同样的效果.举一个例子来 
//解释这个模式的作用,假设有一家店铺是配钥匙的,他对外提供配制钥匙的服务(提供Clone接口函数),
//你需要配什么钥匙它不知道只是提供这种服务,具体需要配什么钥匙只有到了真正看到钥匙的原型才能配好.
//也就是说,需要一个提供这个服务的对象,同时还需要一个原型(Prototype),不然不知道该配什么样的钥匙. 


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Prototype *p1 = new ConcretePrototype1;
	Prototype *p2 = p1->Clone();
	delete p1;
	delete p2;

	cout << endl;

	Prototype *p3 = new ConcretePrototype2;
	Prototype *p4 = p3->Clone();
	delete p3;
	delete p4;

	system("pause");
	return 0;
}

