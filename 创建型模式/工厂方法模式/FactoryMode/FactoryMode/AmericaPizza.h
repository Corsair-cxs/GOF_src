#pragma once
#include "pizza.h"

class AmericaPizza :
	public Pizza
{
public:
	AmericaPizza(void);
	~AmericaPizza(void);
	void Prepare(); //×¼±¸
	void Bake();  //¿¾
	void Box(); //×°ºÐ
};
