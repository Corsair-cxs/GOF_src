#pragma once
#include "manager.h"

//æ≠¿Ì

class CommonManager :
	public Manager
{
public:
	CommonManager(string sName, Manager *pManager = NULL);
	~CommonManager(void);
	void GetRequest(string sName, int nRequestMoney);
};
