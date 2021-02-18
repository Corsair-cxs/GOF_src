#pragma once
#include "component.h"

class Composite :
	public Component
{
public:
	Composite();
	~Composite();
	//ʵ�����нӿ�
	void Operation();
	void Add(Component*);
	void Remove(Component*);
	Component* GetChild(int index);
private:
	//�������vector�����������
	vector<Component*> _vecCom;  
};
