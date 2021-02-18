#pragma once
#include "state.h"

class ConcreteStateA :
	public State
{
public:
	ConcreteStateA(void);
	~ConcreteStateA(void);
	void Handle(Context *pContext); 
};
