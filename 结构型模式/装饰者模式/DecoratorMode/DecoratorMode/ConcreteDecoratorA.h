#pragma once
#include "decorator.h"

class ConcreteDecoratorA :
	public Decorator
{
public:
	ConcreteDecoratorA(Component *pComponent);
	~ConcreteDecoratorA(void);
	void Operation();
	void F();
};
