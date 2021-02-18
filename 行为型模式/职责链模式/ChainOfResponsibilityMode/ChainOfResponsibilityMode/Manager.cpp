#include "StdAfx.h"
#include "Manager.h"

Manager::Manager(string sName, Manager *pManager) : _sName(sName), _pManager(pManager)
{
}

Manager::~Manager(void)
{

}
