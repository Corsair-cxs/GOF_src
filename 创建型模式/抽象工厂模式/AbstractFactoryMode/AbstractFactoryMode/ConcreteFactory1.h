#pragma once
#include "abstractfactory.h"

//������ƷA�Ͳ�ƷB�ĵ�һ��ʵ��

class ConcreteFactory1 :
	public AbstractFactory
{
public:
	ConcreteFactory1(void);
	~ConcreteFactory1(void);
	AbstractProductA * CreateProductA();
	AbstractProductB * CreateProductB();
};
