//����: 
//��һ�����Ӷ���Ĺ��������ı�ʾ���룬ʹ��ͬ���Ĺ������̿��Դ�����ͬ�ı�ʾ�� 
//
//������ģʽ�Ķ��彫һ�����Ӷ���Ĺ��������ı�ʾ���룬ʹ��ͬ���Ĺ������̿��Դ�����ͬ�ı�ʾ��DP����
//���罨��С�ˣ�һ���轨��6�����֣�ͷ�������塢�����֡����ҽš��빤��ģʽ��ͬ��
//������ģʽ���ڵ����ߵĿ�����һ��һ�������Ʒ�ġ�����С�˾����ڿ�����һ������������ġ�
//������ģʽ�����ܸ���ϸ�Ŀ��ƹ������̣��Ӷ��ܸ���ϸ�Ŀ������ò�Ʒ���ڲ��ṹ��

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

#include "FatBuilder.h"
#include "ThinBuilder.h"
#include "Director.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//�����ݵ�С��
	Director *pD1 = new Director(new ThinBuilder);
	pD1->Create();
	delete pD1;
	pD1 = NULL;

	cout << endl;

	//�����ֵ�С��
    Director *pD2 = new Director(new FatBuilder);
	pD2->Create();
 
	delete pD2;
	pD2 = NULL;

	system("pause");
	return 0;
}

