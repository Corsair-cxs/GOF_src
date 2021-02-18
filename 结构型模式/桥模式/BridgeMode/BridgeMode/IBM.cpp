#include "StdAfx.h"
#include "IBM.h"
#include "OS.h"

IBM::IBM(void)
{
}

IBM::~IBM(void)
{
	cout << "IBM_É¾³ý_OS" << endl;
	delete _pOS;
	_pOS = NULL;
}

void IBM::Install(OS *pOS)
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
	cout << "IBM_Computer" << endl;
	_pOS->Run();
}