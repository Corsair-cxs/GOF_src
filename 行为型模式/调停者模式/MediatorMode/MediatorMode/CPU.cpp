#include "StdAfx.h"
#include "CPU.h"
#include "Mediator.h"

CPU::CPU(Mediator *pMediator) : Colleague(pMediator), _sVideoData(""), _sSoundData("")
{
}

CPU::~CPU(void)
{
}

string CPU::GetVideoData()
{
	return _sVideoData;
}

string CPU::GetSoundData()
{
	return _sSoundData;
}

void CPU::ParseData(string sData)
{
	int nPos = sData.find(',');
	_sVideoData =sData.substr(0, nPos);
	_sSoundData = sData.substr(nPos+1);
	//通知主板，CPU完成工作
	_pMediator->Change(this);
}