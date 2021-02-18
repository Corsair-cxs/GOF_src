#include "StdAfx.h"
#include "AbstractClass.h"

AbstractClass::AbstractClass(void)
{
}

AbstractClass::~AbstractClass(void)
{
}

void AbstractClass::TemplateMethod()
{
	PrimitiveOperation_1();
	if( HookMethod() )
	{
		PrimitiveOperation_2();
	}
}

bool AbstractClass::HookMethod()
{
	return true;
}