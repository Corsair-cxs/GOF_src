#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Iterator
{
public:
	Iterator(void);
	~Iterator(void);

	virtual string First() = 0;
	virtual string Next() = 0;
	virtual string GetCur() = 0;
	virtual bool IsEnd() = 0;
};
