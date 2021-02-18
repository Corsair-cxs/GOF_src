#pragma once
#include "abstractproducta.h"

//代表产品A的第一种实现

class ConcreteProductA1 :
	public AbstractProductA
{
public:
	ConcreteProductA1(void);
	~ConcreteProductA1(void);
};
