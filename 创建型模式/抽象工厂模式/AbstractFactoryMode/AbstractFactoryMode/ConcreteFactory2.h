#pragma once
#include "abstractfactory.h"

class ConcreteFactory2 :
	public AbstractFactory
{
public:
	ConcreteFactory2(void);
	~ConcreteFactory2(void);
	AbstractProductA * CreateProductA();
	AbstractProductB * CreateProductB();
};
