#pragma once

//��ģʽ���������࣬ͨ��public�̳л�ýӿڼ̳е�Ч����ͨ��private�̳л��ʵ�ּ̳е�Ч��
#include "Target.h"
#include "Adaptee.h"
 
class Adapter_1 : public Target, private Adaptee
{
public:
	Adapter_1(void);
	~Adapter_1(void);
	 void Request();//ʵ��Target�����Request�ӿ�
};
