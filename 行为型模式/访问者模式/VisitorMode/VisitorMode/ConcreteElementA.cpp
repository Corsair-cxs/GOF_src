#include "StdAfx.h"
#include "ConcreteElementA.h"
#include "Visitor.h"

ConcreteElementA::ConcreteElementA(void)
{
}

ConcreteElementA::~ConcreteElementA(void)
{
}

void ConcreteElementA::Accept(Visitor*pVisitor)
{
	pVisitor->VisitConcreteElementA(this);
}