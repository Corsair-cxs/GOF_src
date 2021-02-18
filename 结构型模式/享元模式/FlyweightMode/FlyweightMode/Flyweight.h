#pragma once
#include <string>
#include <iostream>

using namespace std;

class Flyweight
{
public:
	Flyweight(void);
	virtual ~Flyweight(void);
	//ִ�ж��������Ĳ���ʱ�����Խ����������Ҫ�Ĳ���(�ⲿ״̬)���ݽ���
	virtual void Operator(const string& extrinsicState) = 0; 
	string GetIntrinsicState();
protected:
	string _intrinsicState;
};
