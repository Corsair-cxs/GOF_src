#include "StdAfx.h"
#include "Composite.h"

Composite::Composite()
{
}

Composite::~Composite()
{
}

void Composite::Add(Component* pCom)
{
	this->_vecCom.push_back(pCom);
}

void Composite::Remove(Component* pCom)
{
	vector<Component*>::iterator Iter = _vecCom.begin();
	for(; Iter != _vecCom.end(); ++Iter)
	{
		if(*Iter == pCom)
		{
			cout << "remove com" << endl;
			this->_vecCom.erase(Iter);
			break;
		}
	}
}

void Composite::Operation()
{
	cout << "Composite::Operation" << endl;
	vector<Component*>::iterator iter = this->_vecCom.begin();
	for(; iter!= this->_vecCom.end(); ++iter)
	{
		(*iter)->Operation();
	}
}

Component* Composite::GetChild(int index)
{
	if(index < 0 || index > this->_vecCom.size())
	{
		return NULL;
	}
	return this->_vecCom[index];
}