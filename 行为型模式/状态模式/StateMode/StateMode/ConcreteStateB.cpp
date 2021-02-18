#include "StdAfx.h"
#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"

ConcreteStateB::ConcreteStateB(void)
{
}

ConcreteStateB::~ConcreteStateB(void)
{
}

void ConcreteStateB::Handle(Context *pContext)
{
	cout << "״̬B�������Զ��л���״̬A" << endl;
	if(NULL != pContext)
	{
		pContext->ChangeState(new ConcreteStateA);
	}
}