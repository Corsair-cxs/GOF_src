#pragma once

//对象模式，适配器类，继承Target类，采用组合的方式实现Adaptee的复用

#include "target.h"

class Adaptee;

class Adapter_2 :
	public Target
{
public:
	Adapter_2();
	Adapter_2(Adaptee* pAdaptee);
	~Adapter_2(void);
	virtual void Request();//实现Target定义的Request接口
private:
	 Adaptee *_pAdaptee;
};
