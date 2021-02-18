#pragma once

class Visitor;

class Element
{
public:
	Element(void);
	virtual ~Element(void);
	virtual void Accept(Visitor *pVisitor) = 0;
};
