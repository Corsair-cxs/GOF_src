#pragma once
#include "manager.h"

//�ܾ���

class GeneralManager :
	public Manager
{
public:
	GeneralManager(string sName, Manager *pManager = NULL);
	~GeneralManager(void);
	void GetRequest(string sName, int nRequestMoney);
};

