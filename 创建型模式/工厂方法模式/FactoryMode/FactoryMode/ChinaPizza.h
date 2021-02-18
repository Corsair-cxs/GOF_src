#pragma once
#include "pizza.h"

class ChinaPizza :
	public Pizza
{
public:
	ChinaPizza(void);
	~ChinaPizza(void);
	void Prepare(); //×¼±¸
	void Bake();  //¿¾
	void Box(); //×°ºÐ
};
