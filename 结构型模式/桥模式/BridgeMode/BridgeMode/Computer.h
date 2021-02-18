#pragma once

class OS;

class Computer
{
public:
	Computer(void);
	virtual ~Computer(void);
	virtual void Install(OS *pOS) = 0;

protected:
	OS *_pOS;
};
