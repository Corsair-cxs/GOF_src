#pragma once

class QuackBehavior;

class Duck
{
public:
	Duck(void);
	~Duck(void);
	 void Quack(); //Ñ¼×Ó½Ð
	 void SetQuack(QuackBehavior *pQuack); //¸Ä±ä½ÐÉù
protected:
	QuackBehavior *_pQuackBehavior;

};
