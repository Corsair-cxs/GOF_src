#include "StdAfx.h"
#include "ConcreteCommand.h"
#include "Receiver.h"

ConcreteCommand::ConcreteCommand(Receiver *pReceiver) : _pReceiver(pReceiver)
{
}

ConcreteCommand::~ConcreteCommand(void)
{
	delete _pReceiver;
	_pReceiver = NULL;
}

void ConcreteCommand::Execute()
{
	if( NULL != _pReceiver)
	{
		_pReceiver->Action();
	}
}