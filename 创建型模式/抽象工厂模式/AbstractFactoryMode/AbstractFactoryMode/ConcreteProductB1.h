#pragma once
#include "abstractproductb.h"

//代表产品B的第一种实现

class ConcreteProductB1 :
	public AbstractProductB
{
public:
	ConcreteProductB1(void);
	~ConcreteProductB1(void);
};
