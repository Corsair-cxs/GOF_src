#include "StdAfx.h"
#include "Singleton.h"  

Singleton::Singleton(void)
{
	
}

Singleton::~Singleton(void)
{

}

Singleton * Singleton::GetInstance()
{
	static Singleton s;
	return &s;
}
