#pragma once
#include "abstractfactory.h"

//生产产品A和产品B的第一种实现

class ConcreteFactory1 :
	public AbstractFactory
{
public:
	ConcreteFactory1(void);
	~ConcreteFactory1(void);
	AbstractProductA * CreateProductA();
	AbstractProductB * CreateProductB();
};
