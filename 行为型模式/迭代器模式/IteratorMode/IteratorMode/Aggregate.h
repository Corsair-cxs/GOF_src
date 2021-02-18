#pragma once

#include <vector>
#include <string>

class Iterator;

using namespace std;


class Aggregate
{
public:
	Aggregate(void);
	~Aggregate(void);

	virtual int Count() = 0;
	virtual void Push(const string& strValue) = 0;
	virtual string Pop(const int nIndex) = 0;
	virtual Iterator* CreateIterator() = 0;
};
