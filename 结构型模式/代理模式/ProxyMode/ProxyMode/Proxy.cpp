#include "StdAfx.h"
#include "Proxy.h"
#include "RealSubject.h"

Proxy::Proxy(void) : _pRealSubject(NULL)
{
}

Proxy::~Proxy(void)
{
	cout << "删除Proxy" << endl;
	delete _pRealSubject;
	_pRealSubject = NULL;
}

void Proxy::Request()
{
	if(NULL == _pRealSubject)
	{
		_pRealSubject = new RealSubject;
	}
	cout << "代理调用请求" <<endl;
	_pRealSubject->Request();
}