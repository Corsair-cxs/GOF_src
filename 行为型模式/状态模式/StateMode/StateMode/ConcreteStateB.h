#pragma once
#include "state.h"

class ConcreteStateB :
	public State
{
public:
	ConcreteStateB(void);
	~ConcreteStateB(void);
	void Handle(Context *pContext); 
};
