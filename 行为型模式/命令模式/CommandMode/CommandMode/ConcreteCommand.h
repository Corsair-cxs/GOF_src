#pragma once
#include "command.h"

class Receiver;

class ConcreteCommand :
	public Command
{
public:
	ConcreteCommand(Receiver *pReceiver);
	~ConcreteCommand(void);
	void Execute();
private:
	Receiver *_pReceiver;
};
