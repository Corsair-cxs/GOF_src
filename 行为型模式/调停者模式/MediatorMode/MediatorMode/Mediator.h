#pragma once

//�����ͣ����

class Colleague;

class Mediator
{
public:
	Mediator(void);
	~Mediator(void);

    //ͬ�¶���������ı��ʱ����֪ͨ��ͣ�߷���
    //�õ�ͣ��ȥ������Ӧ��������ͬ�¶���Ľ���
	virtual void Change(Colleague *pColleague) = 0;
};
