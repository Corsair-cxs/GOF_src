#pragma once
#include "manager.h"

//×Ü¾­Àí

class GeneralManager :
	public Manager
{
public:
	GeneralManager(string sName, Manager *pManager = NULL);
	~GeneralManager(void);
	void GetRequest(string sName, int nRequestMoney);
};

