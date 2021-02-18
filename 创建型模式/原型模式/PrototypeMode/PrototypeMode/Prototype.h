#pragma once

#include <iostream>

using namespace std;

class Prototype
{
public:
	Prototype(void);
	virtual ~Prototype(void);
	virtual Prototype* Clone() = 0;
};
