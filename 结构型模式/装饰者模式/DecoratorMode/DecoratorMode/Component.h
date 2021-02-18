#pragma once
#include <iostream>
using namespace std;

class Component
{
public:
	Component(void);
	virtual ~Component(void);
	virtual void Operation() = 0;
};
