#pragma once

//����ģʽ���������࣬�̳�Target�࣬������ϵķ�ʽʵ��Adaptee�ĸ���

#include "target.h"

class Adaptee;

class Adapter_2 :
	public Target
{
public:
	Adapter_2();
	Adapter_2(Adaptee* pAdaptee);
	~Adapter_2(void);
	virtual void Request();//ʵ��Target�����Request�ӿ�
private:
	 Adaptee *_pAdaptee;
};
