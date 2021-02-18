#pragma once

class Singleton
{
public:
	~Singleton(void);
	static Singleton * GetInstance();
private:
	Singleton(void);
	//�Ѹ��ƹ��캯����=������Ҳ��Ϊ˽��,��ֹ������
	Singleton(const Singleton &s);
	Singleton& operator=(const Singleton &s);

};
