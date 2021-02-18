#pragma once
#include "pizzastore.h"

class ChinaStore :
	public PizzaStore
{
public:
	ChinaStore(void);
	~ChinaStore(void);
protected:
	Pizza * CreatePizza(string sType);
};
