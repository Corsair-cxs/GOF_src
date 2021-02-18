#include "StdAfx.h"
#include "ConcreteFactory2.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

ConcreteFactory2::ConcreteFactory2(void)
{
	cout << "��������2" << endl;
}

ConcreteFactory2::~ConcreteFactory2(void)
{
	cout << "���ٹ���2" << endl;
}

AbstractProductA * ConcreteFactory2::CreateProductA()
{
	return new ConcreteProductA2;
}

AbstractProductB * ConcreteFactory2::CreateProductB()
{
	return new ConcreteProductB2;
}