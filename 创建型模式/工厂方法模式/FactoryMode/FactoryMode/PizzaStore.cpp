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
	p->Prepare(); //����׼���׶�
	p->Bake();	//�������׶�
	p->Box();	//����װ�н׶�
	delete p;
	p = NULL;
}