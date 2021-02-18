#pragma once
#include "visitor.h"

class ConcreteVisitorA :
	public Visitor
{
public:
	ConcreteVisitorA(void);
	~ConcreteVisitorA(void);
	void VisitConcreteElementA(ConcreteElementA *pConcreteElementA);
	void VisitConcreteElementB(ConcreteElementB *pConcreteElementB);
};
