#pragma once
#include "visitor.h"

class ConcreteVisitorB :
	public Visitor
{
public:
	ConcreteVisitorB(void);
	~ConcreteVisitorB(void);
	void VisitConcreteElementA(ConcreteElementA *pConcreteElementA);
	void VisitConcreteElementB(ConcreteElementB *pConcreteElementB);
};
