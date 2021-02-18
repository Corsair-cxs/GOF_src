#include "StdAfx.h"
#include "ConcreteFactory1.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

ConcreteFactory1::ConcreteFactory1(void)
{
	cout << "��������1" << endl;
}

ConcreteFactory1::~ConcreteFactory1(void)
{
	cout << "���ٹ���1" << endl;
}

AbstractProductA * ConcreteFactory1::CreateProductA()
{
	return new ConcreteProductA1;
}

AbstractProductB * ConcreteFactory1::CreateProductB()
{
	return new ConcreteProductB1;
}