#include "StdAfx.h"
#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(void)
{
	cout << "´´½¨ConcretePrototype1" << endl;
}

ConcretePrototype1::~ConcretePrototype1(void)
{
	cout << "É¾³ýConcretePrototype1" << endl;
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1 &t)
{
	cout << "¿½±´ConcretePrototype1" << endl;
}

Prototype* ConcretePrototype1::Clone()
{
	return new ConcretePrototype1(*this);
}