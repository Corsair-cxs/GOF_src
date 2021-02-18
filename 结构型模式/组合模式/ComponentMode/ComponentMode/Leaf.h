#pragma once
#include "component.h"

//Leaf是叶子结点,也就是不含有子组件的结点类，所以不用实现Add、Remove、GetChild等方法

class Leaf :
	public Component
{
public:
	Leaf(void);
	~Leaf(void);
	//只实现Operation接口
	void Operation();  
};
