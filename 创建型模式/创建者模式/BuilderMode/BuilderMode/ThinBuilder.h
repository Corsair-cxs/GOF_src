#pragma once
#include "builder.h"

class ThinBuilder :
	public Builder
{
public:
	ThinBuilder(void);
	~ThinBuilder(void);

	void BuildHead() { cout<<"build thin body"<<endl; }  
	void BuildBody() { cout<<"build thin head"<<endl; }  
	void BuildLeftArm() { cout<<"build thin leftarm"<<endl; }  
	void BuildRightArm() { cout<<"build thin rightarm"<<endl; }  
	void BuildLeftLeg() { cout<<"build thin leftleg"<<endl; }  
	void BuildRightLeg() { cout<<"build thin rightleg"<<endl; }  

};
