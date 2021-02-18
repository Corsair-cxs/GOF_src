#include "StdAfx.h"
#include "Decorator.h"

Decorator::Decorator(Component *pComponent)
{
	_pComponent = pComponent;
}

Decorator::~Decorator(void)
{
	delete _pComponent;
	_pComponent = NULL;
}
