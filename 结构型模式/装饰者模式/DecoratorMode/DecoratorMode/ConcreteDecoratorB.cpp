#include "StdAfx.h"
#include "ConcreteDecoratorB.h"

ConcreteDecoratorB::ConcreteDecoratorB(Component *pComponent) : Decorator(pComponent)
{
}

ConcreteDecoratorB::~ConcreteDecoratorB(void)
{
}

void ConcreteDecoratorB::Operation()
{
	_pComponent->Operation();
	F();
}

void ConcreteDecoratorB::F()
{
	cout << "BµÄÐÂ²Ù×÷" << endl;
}
