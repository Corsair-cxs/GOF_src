#pragma once
#include "computer.h"

class HP :
	public Computer
{
public:
	HP(void);
	~HP(void);
	void Install(OS *pOS);
};
