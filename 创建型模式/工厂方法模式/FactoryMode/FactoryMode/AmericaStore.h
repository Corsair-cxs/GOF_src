#pragma once
#include "pizzastore.h"

class AmericaStore :
	public PizzaStore
{
public:
	AmericaStore(void);
	~AmericaStore(void);
protected:
	Pizza * CreatePizza(string sType);
};
