#include "StdAfx.h"
#include "GreenDuck.h"
#include "GaGa.h"
#include "GuaGua.h"

GreenDuck::GreenDuck(void)
{
	_pQuackBehavior = new GuaGua;
}

GreenDuck::~GreenDuck(void)
{
}
