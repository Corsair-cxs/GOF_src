#pragma once
#include <string>
#include <iostream>

using namespace std;

class Flyweight
{
public:
	Flyweight(void);
	virtual ~Flyweight(void);
	//执行对这个对象的操作时，可以将这个对象需要的参数(外部状态)传递进来
	virtual void Operator(const string& extrinsicState) = 0; 
	string GetIntrinsicState();
protected:
	string _intrinsicState;
};
