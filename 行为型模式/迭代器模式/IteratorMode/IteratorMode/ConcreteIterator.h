#pragma once
#include "iterator.h"
#include "Aggregate.h"

class ConcreteIterator :
	public Iterator
{
public:
	~ConcreteIterator(void)
	{

	}

	ConcreteIterator(Aggregate* pAggregate) : _nCurrent(0) ,Iterator()
	{
		_pAggregate = pAggregate;
	}

	string First()
	{
		return _pAggregate->Pop(0);
	}

	string Next()
	{
		string strRet;
		_nCurrent++;
		if(_nCurrent < _pAggregate->Count())
		{
			strRet = _pAggregate->Pop(_nCurrent);
		}
		return strRet;
	}

	string GetCur()
	{
		return _pAggregate->Pop(_nCurrent);
	}

	bool IsEnd()
	{
		return ( ( _nCurrent >= _pAggregate->Count() ) ? true: false );
	}

private:
	Aggregate *_pAggregate;
	int _nCurrent;
};
