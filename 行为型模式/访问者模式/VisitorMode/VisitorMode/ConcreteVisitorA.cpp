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
	cout << "������A_����AԪ��" <<endl;
}

void ConcreteVisitorA::VisitConcreteElementB(ConcreteElementB *pConcreteElementB)
{
	cout << "������A_����BԪ��" <<endl;
}