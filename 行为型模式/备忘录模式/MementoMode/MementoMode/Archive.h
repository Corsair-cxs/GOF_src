#pragma once

#include <vector>
#include "Memento.h"

using namespace std;

class Archive
{
public:
	Archive(void);
	~Archive(void);

	void AddArchive(Memento m)
	{
		_vecArchive.push_back(m);
	}

	Memento LoadArchive(unsigned int n)
	{
		if(n < _vecArchive.size())
		{
			return _vecArchive[n];
		}
		else
		{
			return Memento("", "0", "");
		}
	}

private:
	vector<Memento> _vecArchive;
};
