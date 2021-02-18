#include "StdAfx.h"
#include "Subject.h"
#include <algorithm>


Subject::Subject(void)
{
}

Subject::~Subject(void)
{
}

void Subject::AddObserver(Observer *p)
{
	cout << "添加观察者：" << p << endl;
	_lsObserver.push_back( p );
}
void Subject::DelObserver(Observer *p)
{
	list<Observer*>::iterator Iter;
	Iter = std::find( _lsObserver.begin(), _lsObserver.end(), p );
	if( Iter != _lsObserver.end() )
	{
		cout << "移除观察者：" << *Iter<< endl;
		_lsObserver.erase( Iter );
	}
}
 
void Subject::ClearObserver()
{
	list<Observer*>::iterator Iter = _lsObserver.begin();
	while ( Iter != _lsObserver.end() )
	{
		cout << "移除观察者：" << *Iter<< endl;
		delete *Iter;
		(*Iter) = NULL;
		++Iter;
	}
	_lsObserver.clear();
}