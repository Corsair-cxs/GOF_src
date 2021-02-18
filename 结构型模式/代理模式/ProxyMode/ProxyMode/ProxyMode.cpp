//作用: 
//为其他对象提供一种代理以控制对这个对象的访问。 
//
//抽象基类: 
//Subject:定义了Proxy和RealSubject的公有接口,这样就可以在任何需要
//使用到RealSubject的地方都使用Proxy. 
//
//解析: 
//Proxy其实是基于这样一种时常使用到的技术-某个对象直到它真正被使用到的
//时候才被初始化,在没有使用到的时候就暂时用Proxy作一个占位符.这个模式
//实现的要点就是Proxy和RealSubject都继承自Subject,这样保证了两个的
//接口都是一致的. 

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Subject.h"
#include "Proxy.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Subject *pSubject = new Proxy;
	pSubject->Request();

	delete pSubject;

	system("pause");
	return 0;
}

