#pragma once
#include "pizza.h"

class AmericaPizza :
	public Pizza
{
public:
	AmericaPizza(void);
	~AmericaPizza(void);
	void Prepare(); //׼��
	void Bake();  //��
	void Box(); //װ��
};
