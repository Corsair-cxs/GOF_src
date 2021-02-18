#pragma once
#include "subject.h"

class RealSubject;

class Proxy :
	public Subject
{
public:
	Proxy(void);
	~Proxy(void);
	void Request();

private:
	RealSubject *_pRealSubject;
};
