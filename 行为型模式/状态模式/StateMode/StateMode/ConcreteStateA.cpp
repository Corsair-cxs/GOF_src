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
	cout << "״̬A�������Զ��л���״̬B" << endl;
	if(NULL != pContext)
	{
		pContext->ChangeState(new ConcreteStateB);
	}
}