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
	cout << "������B_����AԪ��" <<endl;
}

void ConcreteVisitorB::VisitConcreteElementB(ConcreteElementB *pConcreteElementB)
{
	cout << "������B_����BԪ��" <<endl;
}