#include "StdAfx.h"
#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(void)
{
	cout << "����ConcretePrototype2" << endl;
}

ConcretePrototype2::~ConcretePrototype2(void)
{
	cout << "ɾ��ConcretePrototype2" << endl;
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2 &t)
{
	cout << "����ConcretePrototype2" << endl;
}

Prototype* ConcretePrototype2::Clone()
{
	return new ConcretePrototype2(*this);
}