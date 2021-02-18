#include "StdAfx.h"
#include "Driver.h"
#include "Mediator.h"

Driver::Driver(Mediator *pMediator) : Colleague(pMediator), _sData("")
{
}

Driver::~Driver(void)
{
}

string Driver::GetData()
{
	return _sData;
}

void Driver::ReadDVD()
{
	//����ǰ����Ƶ��ʾ�����ݣ����ź�������
	_sData = "���ν�ձ���,ߴߴ��������";
	//֪ͨ���壬�Լ���״̬�����˸ı�
	_pMediator->Change(this);

}