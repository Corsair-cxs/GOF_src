#include "StdAfx.h"
#include "ConcreteClass_2.h"

ConcreteClass_2::ConcreteClass_2(void)
{
}

ConcreteClass_2::~ConcreteClass_2(void)
{
}

void ConcreteClass_2::PrimitiveOperation_1()
{
	cout << "����2���㷨1" <<endl;
}

void ConcreteClass_2::PrimitiveOperation_2()
{
	cout << "����2���㷨2" <<endl;
}

bool ConcreteClass_2::HookMethod()
{
	return false;
}