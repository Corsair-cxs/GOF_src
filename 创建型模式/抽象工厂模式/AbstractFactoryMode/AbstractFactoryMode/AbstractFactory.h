#pragma once

#include <iostream>

using namespace std;

//�����ĳ���������ƷA�Ͳ�ƷB
class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	AbstractFactory(void);
	virtual ~AbstractFactory(void);
	virtual AbstractProductA * CreateProductA() = 0;
	virtual AbstractProductB * CreateProductB() = 0;
};
