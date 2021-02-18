#pragma once
#include "prototype.h"

class ConcretePrototype1 :
	public Prototype
{
public:
	ConcretePrototype1(void);
	ConcretePrototype1(const ConcretePrototype1 &t);
	~ConcretePrototype1(void);
	Prototype* Clone();
};
