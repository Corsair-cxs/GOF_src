#include "StdAfx.h"
#include "PizzaStore.h"
#include "Pizza.h"

PizzaStore::PizzaStore(void)
{
}

PizzaStore::~PizzaStore(void)
{
}

void PizzaStore::OrderPizza(string sType)
{
	Pizza *p = CreatePizza( sType );
	p->Prepare(); //比萨准备阶段
	p->Bake();	//比萨烤阶段
	p->Box();	//比萨装盒阶段
	delete p;
	p = NULL;
}