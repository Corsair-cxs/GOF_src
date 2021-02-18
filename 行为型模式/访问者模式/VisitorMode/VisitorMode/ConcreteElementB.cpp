#include "StdAfx.h"
#include "ConcreteElementB.h"
#include "Visitor.h"

ConcreteElementB::ConcreteElementB(void)
{
}

ConcreteElementB::~ConcreteElementB(void)
{
}

void ConcreteElementB::Accept(Visitor *pVisitor)
{
	pVisitor->VisitConcreteElementB(this);
}