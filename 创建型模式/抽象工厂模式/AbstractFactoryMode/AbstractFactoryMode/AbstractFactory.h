#pragma once

#include <iostream>

using namespace std;

//工厂的抽象，生产产品A和产品B
class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	AbstractFactory(void);
	virtual ~AbstractFactory(void);
	virtual AbstractProductA * CreateProductA() = 0;
	virtual AbstractProductB * CreateProductB() = 0;
};
