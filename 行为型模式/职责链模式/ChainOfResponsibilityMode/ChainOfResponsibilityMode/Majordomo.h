#pragma once
#include "manager.h"

//�ܼ�

class Majordomo :
	public Manager
{
public:
	Majordomo(string sName, Manager *pManager = NULL);
	~Majordomo(void);
	void GetRequest(string sName, int nRequestMoney);
};
