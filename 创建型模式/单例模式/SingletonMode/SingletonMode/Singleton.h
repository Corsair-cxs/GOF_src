#pragma once

class Singleton
{
public:
	~Singleton(void);
	static Singleton * GetInstance();
private:
	Singleton(void);
	//把复制构造函数和=操作符也设为私有,防止被复制
	Singleton(const Singleton &s);
	Singleton& operator=(const Singleton &s);

};
