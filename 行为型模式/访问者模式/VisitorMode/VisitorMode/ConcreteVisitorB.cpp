#include "StdAfx.h"
#include "ConcreteVisitorB.h"

ConcreteVisitorB::ConcreteVisitorB(void)
{
}

ConcreteVisitorB::~ConcreteVisitorB(void)
{
}

void ConcreteVisitorB::VisitConcreteElementA(ConcreteElementA *pConcreteElementA)
{
	cout << "访问者B_访问A元素" <<endl;
}

void ConcreteVisitorB::VisitConcreteElementB(ConcreteElementB *pConcreteElementB)
{
	cout << "访问者B_访问B元素" <<endl;
}