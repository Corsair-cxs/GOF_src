#include "StdAfx.h"
#include "Adapter_1.h"

Adapter_1::Adapter_1(void)
{
}

Adapter_1::~Adapter_1(void)
{
}

void Adapter_1::Request()
{
	cout << "Adapter_1::Request()" << endl;
	this->SpecificRequest();
	cout << "----------------------------" <<endl;
}