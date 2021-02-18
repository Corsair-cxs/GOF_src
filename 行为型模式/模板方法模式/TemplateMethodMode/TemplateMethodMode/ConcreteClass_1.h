#pragma once
#include "abstractclass.h"

class ConcreteClass_1 :
	public AbstractClass
{
public:
	ConcreteClass_1(void);
	~ConcreteClass_1(void);
protected:
	 void PrimitiveOperation_1();
	 void PrimitiveOperation_2();
};
