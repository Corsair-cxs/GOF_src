#pragma once
#include "abstractclass.h"

class ConcreteClass_2 :
	public AbstractClass
{
public:
	ConcreteClass_2(void);
	~ConcreteClass_2(void);
protected:
	void PrimitiveOperation_1();
	void PrimitiveOperation_2();

	bool HookMethod();
};
