#include "StdAfx.h"
#include "HP.h"
#include "OS.h"

HP::HP(void)
{
}

HP::~HP(void)
{
	cout << "HP_É¾³ý_OS" << endl;
	delete _pOS;
	_pOS = NULL;
}

void HP::Install(OS *pOS)
{
	if(NULL == pOS)
	{
		return;
	}

	if(NULL != _pOS)
	{
		delete _pOS;
		_pOS = NULL;
	}
	else
	{
		_pOS = pOS;
	}
	cout << "HP_Computer" << endl;
	_pOS->Run();
}