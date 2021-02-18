#pragma once

#include <iostream>

using namespace std;

class AbstractClass
{
public:
	AbstractClass(void);
	~AbstractClass(void);
	void TemplateMethod();
protected:
	virtual void PrimitiveOperation_1() = 0;
	virtual void PrimitiveOperation_2() = 0;
	virtual bool HookMethod();  //hook����������ĳЩ�㷨�����Ƿ�ҹ����㷨����
};
