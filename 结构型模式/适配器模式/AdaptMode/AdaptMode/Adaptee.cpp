#include "StdAfx.h"
#include "Adaptee.h"
#include <iostream>

using namespace std;

Adaptee::Adaptee(void)
{
}

Adaptee::~Adaptee(void)
{
}

void Adaptee::SpecificRequest()
{
	cout << "Adaptee::SpecificRequest()" << endl;
}