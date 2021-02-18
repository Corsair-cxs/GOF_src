#pragma once

//抽象同事类
#include <string>
#include <iostream>

using namespace std;

class Mediator;

class Colleague
{
public:
	Colleague(Mediator *pMediator);
	~Colleague(void);
 
protected:
	Mediator *_pMediator; //持有一个调停者对象
};
