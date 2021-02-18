#pragma once
#include "component.h"

class Decorator :
	public Component
{
public:
	Decorator(Component *pComponent);
	virtual ~Decorator(void);
	void Operation() = 0;
protected:
	Component *_pComponent;
};
