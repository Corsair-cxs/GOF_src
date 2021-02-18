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
	//获得一个请求的Flyweight对象
	Flyweight* GetFlyweight(string key);
	//获取容器中存储的对象数量
	void GetFlyweightCount();
private:
	//保存内部状态对象的容器
	vector<Flyweight*> _vecFly;
};
