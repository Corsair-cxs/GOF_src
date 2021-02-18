#pragma once
#include "component.h"

class Composite :
	public Component
{
public:
	Composite();
	~Composite();
	//实现所有接口
	void Operation();
	void Add(Component*);
	void Remove(Component*);
	Component* GetChild(int index);
private:
	//这里采用vector来保存子组件
	vector<Component*> _vecCom;  
};
