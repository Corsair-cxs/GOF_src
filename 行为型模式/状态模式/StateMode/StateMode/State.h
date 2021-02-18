#pragma once

#include <iostream>

using namespace std;

class Context;

class State
{
public:
	State(void);
	virtual ~State(void);
	virtual void Handle(Context *pContext) = 0;  
  
};
