#pragma once
#include "builder.h"

class FatBuilder :
	public Builder
{
public:
	FatBuilder(void);
	~FatBuilder(void);

	void BuildHead() { cout<<"build fat body"<<endl; }  
	void BuildBody() { cout<<"build fat head"<<endl; }  
	void BuildLeftArm() { cout<<"build fat leftarm"<<endl; }  
	void BuildRightArm() { cout<<"build fat rightarm"<<endl; }  
	void BuildLeftLeg() { cout<<"build fat leftleg"<<endl; }  
	void BuildRightLeg() { cout<<"build fat rightleg"<<endl; } 

};
