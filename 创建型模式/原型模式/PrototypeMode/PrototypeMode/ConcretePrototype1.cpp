#include "StdAfx.h"
#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(void)
{
	cout << "����ConcretePrototype1" << endl;
}

ConcretePrototype1::~ConcretePrototype1(void)
{
	cout << "ɾ��ConcretePrototype1" << endl;
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1 &t)
{
	cout << "����ConcretePrototype1" << endl;
}

Prototype* ConcretePrototype1::Clone()
{
	return new ConcretePrototype1(*this);
}