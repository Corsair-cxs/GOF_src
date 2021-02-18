#include "StdAfx.h"
#include "RealSubject.h"

RealSubject::RealSubject(void)
{
}

RealSubject::~RealSubject(void)
{
	cout << "删除RealSubject" << endl;
}

void RealSubject::Request()
{
	cout << "实际的请求" << endl;
}