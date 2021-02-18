#pragma once
#include "computer.h"

class IBM :
	public Computer
{
public:
	IBM(void);
	~IBM(void);
	void Install(OS *pOS);
};
