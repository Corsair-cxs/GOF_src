#pragma once
#include "colleague.h"

//ͬ���ࡪ������

class Driver :
	public Colleague
{
public:
	Driver(Mediator *pMediator);
	~Driver(void);
	//��ȡ���̶�����������
	string GetData(); 
	//��ȡ����
	void ReadDVD();
private:
	string _sData; //�ӹ��̶�����������
};
