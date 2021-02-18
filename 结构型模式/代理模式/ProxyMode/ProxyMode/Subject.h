#pragma once

#include <iostream>

using namespace std;

class Subject
{
public:
	Subject(void);
	virtual ~Subject(void);
	virtual void Request() = 0;
};
