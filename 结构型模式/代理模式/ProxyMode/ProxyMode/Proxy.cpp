#include "StdAfx.h"
#include "Proxy.h"
#include "RealSubject.h"

Proxy::Proxy(void) : _pRealSubject(NULL)
{
}

Proxy::~Proxy(void)
{
	cout << "ɾ��Proxy" << endl;
	delete _pRealSubject;
	_pRealSubject = NULL;
}

void Proxy::Request()
{
	if(NULL == _pRealSubject)
	{
		_pRealSubject = new RealSubject;
	}
	cout << "�����������" <<endl;
	_pRealSubject->Request();
}