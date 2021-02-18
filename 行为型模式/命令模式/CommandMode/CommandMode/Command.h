#pragma once

class Command
{
public:
	Command(void);
	virtual ~Command(void);
	virtual void Execute() = 0;
};
