#pragma once

//����ͬ����
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
	Mediator *_pMediator; //����һ����ͣ�߶���
};
