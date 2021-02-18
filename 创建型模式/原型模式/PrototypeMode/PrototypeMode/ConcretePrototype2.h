#pragma once
#include "prototype.h"

class ConcretePrototype2 :
	public Prototype
{
public:
	ConcretePrototype2(void);
	ConcretePrototype2(const ConcretePrototype2 &t);
	~ConcretePrototype2(void);
	Prototype* Clone();
};
