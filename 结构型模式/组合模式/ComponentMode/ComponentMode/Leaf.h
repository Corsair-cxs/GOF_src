#pragma once
#include "component.h"

//Leaf��Ҷ�ӽ��,Ҳ���ǲ�����������Ľ���࣬���Բ���ʵ��Add��Remove��GetChild�ȷ���

class Leaf :
	public Component
{
public:
	Leaf(void);
	~Leaf(void);
	//ֻʵ��Operation�ӿ�
	void Operation();  
};
