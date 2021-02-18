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
	cout << "��ӹ۲��ߣ�" << p << endl;
	_lsObserver.push_back( p );
}
void Subject::DelObserver(Observer *p)
{
	list<Observer*>::iterator Iter;
	Iter = std::find( _lsObserver.begin(), _lsObserver.end(), p );
	if( Iter != _lsObserver.end() )
	{
		cout << "�Ƴ��۲��ߣ�" << *Iter<< endl;
		_lsObserver.erase( Iter );
	}
}
 
void Subject::ClearObserver()
{
	list<Observer*>::iterator Iter = _lsObserver.begin();
	while ( Iter != _lsObserver.end() )
	{
		cout << "�Ƴ��۲��ߣ�" << *Iter<< endl;
		delete *Iter;
		(*Iter) = NULL;
		++Iter;
	}
	_lsObserver.clear();
}