#pragma once
#include "flyweight.h"

class ConcreteFlyweight :
	public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState);
	~ConcreteFlyweight(void);
	void Operator(const string& extrinsicState);
};
