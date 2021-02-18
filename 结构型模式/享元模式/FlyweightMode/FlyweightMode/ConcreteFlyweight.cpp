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
	cout << "�ڲ�״̬��" << _intrinsicState << "�ⲿ״̬��" << extrinsicState << endl;
}