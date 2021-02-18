#pragma once
#include "element.h"

class ConcreteElementB :
	public Element
{
public:
	ConcreteElementB(void);
	~ConcreteElementB(void);
	void Accept(Visitor *pVisitor);
};
