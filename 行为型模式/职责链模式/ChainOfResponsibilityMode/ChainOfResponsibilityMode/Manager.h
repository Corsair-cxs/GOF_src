#pragma once

#include <iostream>
#include <string>

using namespace std;


class Manager
{
public:
	Manager(string sName, Manager *pManager = NULL);
	virtual ~Manager(void);
	virtual void GetRequest(string sName, int nRequestMoney) = 0;  
protected:
	Manager * _pManager;  
    string _sName; 

};
