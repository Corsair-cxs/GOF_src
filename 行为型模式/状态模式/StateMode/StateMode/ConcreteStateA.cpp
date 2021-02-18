#include "StdAfx.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"

ConcreteStateA::ConcreteStateA(void)
{
}

ConcreteStateA::~ConcreteStateA(void)
{
}

void ConcreteStateA::Handle(Context *pContext)
{
	cout << "×´Ì¬A²Ù×÷£¬×Ô¶¯ÇÐ»»µ½×´Ì¬B" << endl;
	if(NULL != pContext)
	{
		pContext->ChangeState(new ConcreteStateB);
	}
}