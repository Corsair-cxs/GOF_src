#include "StdAfx.h"
#include "FlyweightFactory.h"
#include "Flyweight.h"
#include "ConcreteFlyweight.h"

FlyweightFactory::FlyweightFactory(void)
{
}

FlyweightFactory::~FlyweightFactory(void)
{
	vector<Flyweight*>::iterator iter;
	for(iter = this->_vecFly.begin(); iter!= this->_vecFly.end(); ++iter)
	{
		delete *iter;
		*iter = NULL;
	}
	_vecFly.clear();
}

Flyweight* FlyweightFactory::GetFlyweight(string key)
{
	vector<Flyweight*>::iterator iter;
	for(iter = this->_vecFly.begin(); iter!= this->_vecFly.end(); ++iter)
	{
		if((*iter)->GetIntrinsicState() == key)
		{
			return *iter;
		}
	}
	Flyweight* fly = new ConcreteFlyweight(key);
	this->_vecFly.push_back(fly);
	return fly;
}
 
void FlyweightFactory::GetFlyweightCount()
{
	cout << "ÏíÔª¸öÊý£º" << _vecFly.size() << endl;
}
