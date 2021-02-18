#include "StdAfx.h"
#include "RedDuck.h"
#include "GaGa.h"
#include "GuaGua.h"

RedDuck::RedDuck(void)
{
	_pQuackBehavior = new GaGa;
}

RedDuck::~RedDuck(void)
{
}
