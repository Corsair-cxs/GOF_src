#pragma once
#include <iostream>

using namespace std;

class Pizza
{
public:
	Pizza(void);
	virtual ~Pizza(void);
	virtual void Prepare() = 0; //×¼±¸
	virtual void Bake() = 0;  //¿¾
	virtual void Box() = 0; //×°ºÐ
};
