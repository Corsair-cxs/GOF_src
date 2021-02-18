#pragma once
#include "decorator.h"

class ConcreteDecoratorB :
	public Decorator
{
public:
	ConcreteDecoratorB(Component *pComponent);
	~ConcreteDecoratorB(void);
	void Operation();
	void F();
};
