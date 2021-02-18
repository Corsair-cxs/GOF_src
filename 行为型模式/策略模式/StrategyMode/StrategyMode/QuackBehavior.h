#pragma once
#include <iostream>

using namespace std;

class QuackBehavior
{
public:
	QuackBehavior(void);
	~QuackBehavior(void);
	virtual void Quack() = 0; //Ñ¼×Ó½ÐÉù
};
