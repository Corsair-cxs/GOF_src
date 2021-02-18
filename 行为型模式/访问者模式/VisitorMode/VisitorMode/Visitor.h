#pragma once

#include <iostream>

class ConcreteElementA;
class ConcreteElementB;

using namespace std;
 
class Visitor
{
public:
	Visitor(void);
	~Visitor(void);
	virtual void VisitConcreteElementA(ConcreteElementA *pConcreteElementA) = 0;
	virtual void VisitConcreteElementB(ConcreteElementB *pConcreteElementB) = 0;
};
