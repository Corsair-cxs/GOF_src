#pragma once

class QuackBehavior;

class Duck
{
public:
	Duck(void);
	~Duck(void);
	 void Quack(); //Ѽ�ӽ�
	 void SetQuack(QuackBehavior *pQuack); //�ı����
protected:
	QuackBehavior *_pQuackBehavior;

};
