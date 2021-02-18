#pragma once
#include "element.h"

class ConcreteElementA :
	public Element
{
public:
	ConcreteElementA(void);
	~ConcreteElementA(void);
	void Accept(Visitor *pVisitor);
};
