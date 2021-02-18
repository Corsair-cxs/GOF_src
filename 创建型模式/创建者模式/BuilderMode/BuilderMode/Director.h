#pragma once

class Builder;

class Director
{
public:
	Director(Builder *pBuilder);
	~Director(void);
	void Create();
private:  
   Builder *_pBuilder;

};
