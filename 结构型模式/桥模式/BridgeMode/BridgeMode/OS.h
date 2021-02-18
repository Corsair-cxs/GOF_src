#pragma once

#include <iostream>

using namespace std;

class OS
{
public:
	OS(void);
	virtual ~OS(void);
	virtual void Run() = 0;
};
