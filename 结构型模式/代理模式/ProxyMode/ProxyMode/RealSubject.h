#pragma once
#include "subject.h"

class RealSubject :
	public Subject
{
public:
	RealSubject(void);
	~RealSubject(void);
	void Request();
};
