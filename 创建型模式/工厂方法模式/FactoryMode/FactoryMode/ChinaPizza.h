#pragma once
#include "pizza.h"

class ChinaPizza :
	public Pizza
{
public:
	ChinaPizza(void);
	~ChinaPizza(void);
	void Prepare(); //׼��
	void Bake();  //��
	void Box(); //װ��
};
