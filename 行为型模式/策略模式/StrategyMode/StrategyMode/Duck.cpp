#include "StdAfx.h"
#include "Duck.h"
#include "QuackBehavior.h"

Duck::Duck(void): _pQuackBehavior(NULL)
{
}

Duck::~Duck(void)
{
	delete _pQuackBehavior;
	_pQuackBehavior = NULL;
}

void Duck::Quack()
{
	_pQuackBehavior->Quack();
}

void Duck::SetQuack(QuackBehavior *pQuack)
{
	if( _pQuackBehavior )
	{
		delete _pQuackBehavior;
		_pQuackBehavior = pQuack;
	}
}