#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pizza;

class PizzaStore
{
public:
	PizzaStore(void);
	virtual ~PizzaStore(void);
	void OrderPizza(string sType);
protected:
	virtual Pizza * CreatePizza(string sType) = 0;
};
