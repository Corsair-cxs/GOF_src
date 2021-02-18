#pragma once

//目标接口类，客户需要的接口

#include <iostream>

using namespace std;

class Target
{
public:
	Target(void);
	virtual ~Target(void);
	virtual void Request(); //定义标准接口

};
