#pragma once
/*
 Component������࣬Ϊ����еĶ��������ӿ�,�������๲�нӿڵ�ȱʡ��Ϊ(�������Add,Remove,GetChild����),
����һ���ӿں������Է���Component�������.
*/
#include <vector>
#include <iostream>
 
using namespace std;

class Component
{
public:
	//���麯����ֻ�ṩ�ӿڣ�û��Ĭ�ϵ�ʵ��
	virtual void Operation() = 0;    
	// �麯��,�ṩ�ӿ�,��Ĭ�ϵ�ʵ�־���ʲô������
	virtual void Add(Component*);
	virtual void Remove(Component*);
	virtual Component* GetChild(int index);
	virtual ~Component();
protected:
	Component();
};
