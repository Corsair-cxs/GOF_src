#include "StdAfx.h"
#include "Sender.h"
#include "Command.h"

Sender::Sender(void) : _pCommand(NULL)
{
}

Sender::~Sender(void)
{
	if( _pCommand )
	{
		delete _pCommand;
		_pCommand = NULL;
	}
}

void Sender::SetCommand(Command *pCommand)
{
	if( NULL == _pCommand )
	{
		_pCommand = pCommand;
	}
}

void Sender::SendCommand()
{
	if( _pCommand )
	{
		_pCommand->Execute();
	}
}