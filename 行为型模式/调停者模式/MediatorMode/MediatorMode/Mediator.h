#pragma once

//抽象调停者类

class Colleague;

class Mediator
{
public:
	Mediator(void);
	~Mediator(void);

    //同事对象在自身改变的时候来通知调停者方法
    //让调停者去负责相应的与其他同事对象的交互
	virtual void Change(Colleague *pColleague) = 0;
};
