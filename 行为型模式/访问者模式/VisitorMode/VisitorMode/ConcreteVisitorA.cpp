#include "StdAfx.h"
#include "ConcreteVisitorA.h"

ConcreteVisitorA::ConcreteVisitorA(void)
{
}

ConcreteVisitorA::~ConcreteVisitorA(void)
{
}

void ConcreteVisitorA::VisitConcreteElementA(ConcreteElementA *pConcreteElementA)
{
	cout << "访问者A_访问A元素" <<endl;
}

void ConcreteVisitorA::VisitConcreteElementB(ConcreteElementB *pConcreteElementB)
{
	cout << "访问者A_访问B元素" <<endl;
}