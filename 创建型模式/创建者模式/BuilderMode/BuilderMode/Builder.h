#pragma once

#include <iostream>

using namespace std;

class Builder
{
public:
	Builder(void);
	virtual ~Builder(void);

	virtual void BuildHead() = 0;
	virtual void BuildBody() = 0;
	virtual void BuildLeftArm() = 0; 
	virtual void BuildRightArm() = 0;
	virtual void BuildLeftLeg() = 0;
	virtual void BuildRightLeg() = 0;

};
