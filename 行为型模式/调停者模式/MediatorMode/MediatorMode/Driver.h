#pragma once
#include "colleague.h"

//同事类——光驱

class Driver :
	public Colleague
{
public:
	Driver(Mediator *pMediator);
	~Driver(void);
	//获取光盘读出来的数据
	string GetData(); 
	//读取光盘
	void ReadDVD();
private:
	string _sData; //从光盘读出来的数据
};
