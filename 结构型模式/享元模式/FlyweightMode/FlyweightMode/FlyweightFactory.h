#pragma once
#include <vector>
#include <string>
#include <iostream>

class Flyweight;

using namespace std;

class FlyweightFactory
{
public:
	FlyweightFactory(void);
	~FlyweightFactory(void);
	//���һ�������Flyweight����
	Flyweight* GetFlyweight(string key);
	//��ȡ�����д洢�Ķ�������
	void GetFlyweightCount();
private:
	//�����ڲ�״̬���������
	vector<Flyweight*> _vecFly;
};
