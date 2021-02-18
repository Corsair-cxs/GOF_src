#include "StdAfx.h"
#include "ConcreteFlyweight.h"

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState)
{
	_intrinsicState = intrinsicState;
}

ConcreteFlyweight::~ConcreteFlyweight(void)
{
}

void ConcreteFlyweight::Operator(const string& extrinsicState)
{
	cout << "内部状态：" << _intrinsicState << "外部状态：" << extrinsicState << endl;
}