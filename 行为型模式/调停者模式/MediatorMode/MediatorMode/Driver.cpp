#include "StdAfx.h"
#include "Driver.h"
#include "Mediator.h"

Driver::Driver(Mediator *pMediator) : Colleague(pMediator), _sData("")
{
}

Driver::~Driver(void)
{
}

string Driver::GetData()
{
	return _sData;
}

void Driver::ReadDVD()
{
	//逗号前是视频显示的数据，逗号后是声音
	_sData = "变形金刚变身,叽叽咔咔喳喳";
	//通知主板，自己的状态发生了改变
	_pMediator->Change(this);

}