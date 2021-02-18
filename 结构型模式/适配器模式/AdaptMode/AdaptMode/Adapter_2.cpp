#include "StdAfx.h"
#include "Adapter_2.h"
#include "Adaptee.h"

Adapter_2::Adapter_2() : _pAdaptee(new Adaptee)
{
}

Adapter_2::Adapter_2(Adaptee* pAdaptee)
{
	this->_pAdaptee = pAdaptee;
}

Adapter_2::~Adapter_2(void)
{
}

void Adapter_2::Request()
{
	cout << "Adapter_2::Request()" << endl;
	_pAdaptee->SpecificRequest();
	cout << "----------------------------" <<endl;
}