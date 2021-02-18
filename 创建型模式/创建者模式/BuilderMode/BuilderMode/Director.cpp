#include "StdAfx.h"
#include "Director.h"
#include "Builder.h"

Director::Director(Builder *pBuilder) : _pBuilder(pBuilder)
{
}

Director::~Director(void)
{
	delete _pBuilder;
	_pBuilder = NULL;
}

void Director::Create()
{  
	_pBuilder->BuildHead();  
	_pBuilder->BuildBody();  
	_pBuilder->BuildLeftArm();  
	_pBuilder->BuildRightArm();  
	_pBuilder->BuildLeftLeg();  
	_pBuilder->BuildRightLeg();  
}  

