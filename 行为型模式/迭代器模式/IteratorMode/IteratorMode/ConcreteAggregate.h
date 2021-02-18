#pragma once
#include "aggregate.h"
#include "ConcreteIterator.h"
 
class ConcreteAggregate :
	public Aggregate
{
public:
	ConcreteAggregate() : _pIterator(NULL)
	{
		_vecItems.clear();
	}

	~ConcreteAggregate()
	{
		if( NULL != _pIterator )
		{
			delete _pIterator;
			_pIterator = NULL;
		}
	}

	Iterator* CreateIterator()
	{
		if( NULL == _pIterator )
		{
			_pIterator = new ConcreteIterator(this);
		}
		return _pIterator;
	}

	int Count()
	{
		return _vecItems.size();
	}

	void Push(const string& strValue)
	{
		_vecItems.push_back( strValue );
	}

	string Pop(const int nIndex)
	{
		string strRet = "";
		if(nIndex < Count())
		{
			strRet = _vecItems[nIndex];
		}
		return strRet;
	}

private:
	vector<string> _vecItems;
	Iterator * _pIterator;
};
