#include "StdAfx.h"
#include "ConcreteDecoratorA.h"

ConcreteDecoratorA::ConcreteDecoratorA(Component *pComponent) : Decorator(pComponent)
{
}

ConcreteDecoratorA::~ConcreteDecoratorA(void)
{
}

void ConcreteDecoratorA::Operation()
{
	_pComponent->Operation();
	F();
}

void ConcreteDecoratorA::F()
{
	cout << "AµÄÐÂ²Ù×÷" << endl;
}