#pragma once
/*
 Component抽象基类，为组合中的对象声明接口,声明了类共有接口的缺省行为(如这里的Add,Remove,GetChild函数),
声明一个接口函数可以访问Component的子组件.
*/
#include <vector>
#include <iostream>
 
using namespace std;

class Component
{
public:
	//纯虚函数，只提供接口，没有默认的实现
	virtual void Operation() = 0;    
	// 虚函数,提供接口,有默认的实现就是什么都不做
	virtual void Add(Component*);
	virtual void Remove(Component*);
	virtual Component* GetChild(int index);
	virtual ~Component();
protected:
	Component();
};
