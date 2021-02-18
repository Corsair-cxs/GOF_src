#pragma once
#include <list>
#include <iostream>

class Observer;

using namespace std;

class Subject
{
public:
	Subject(void);
	~Subject(void);
	void AddObserver(Observer *p);	//添加观察者
	void DelObserver(Observer *p);	//删除观察者
	void ClearObserver();			//清空观察者
	virtual void Notify() = 0;		//发送通知
	
protected:
	list<Observer*> _lsObserver;

};
