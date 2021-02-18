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
	void AddObserver(Observer *p);	//��ӹ۲���
	void DelObserver(Observer *p);	//ɾ���۲���
	void ClearObserver();			//��չ۲���
	virtual void Notify() = 0;		//����֪ͨ
	
protected:
	list<Observer*> _lsObserver;

};
