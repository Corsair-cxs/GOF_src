#include "StdAfx.h"
#include "Context.h"
#include "State.h"
#include "ConcreteStateA.h"

Context::Context()
{
	_pState = new ConcreteStateA;
}

Context::~Context(void)
{
	delete _pState;
	_pState = NULL;
}

void Context::Request()
{
	if(NULL != _pState)
	{
		_pState->Handle(this);
	}
}

void Context::ChangeState(State *pState)
{
	if(NULL != _pState)
	{
		delete _pState;
		_pState = NULL;
	}
	_pState = pState;
}