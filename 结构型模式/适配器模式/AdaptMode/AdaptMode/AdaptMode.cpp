//������
//��һ����Ľӿ�ת���ɿͻ�ϣ��������һ���ӿڡ�Adapterģʽʹ��ԭ�����ڽӿڲ����ݶ�����һ��������Щ�������һ������
//
//��������⣺
//��Adapterģʽʹ��ԭ�����ڽӿڲ����ݶ�����һ��������Щ�������һ������
//
//ģʽ�еĽ�ɫ��
//1 Ŀ��ӿڣ�Target�����ͻ����ڴ��Ľӿڡ�Ŀ������Ǿ���Ļ������࣬Ҳ�����ǽӿڡ�
//2 ��Ҫ������ࣨAdaptee������Ҫ���������������ࡣ
//3 ��������Adapter����ͨ����װһ����Ҫ����Ķ��󣬰�ԭ�ӿ�ת����Ŀ��ӿڡ�

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Target.h"
#include "Adapter_1.h"
#include "Adapter_2.h"
#include "Adaptee.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//��ģʽAdapter
	cout << "��ģʽAdapter_1" << endl;
	Target* pTarget = new Adapter_1();
	pTarget->Request();

	//����ģʽAdapter1
	cout << "����ģʽAdapter_2" << endl;
	Adaptee* ade = new Adaptee();
	Target* pTarget1= new Adapter_2(ade);
	pTarget1->Request();

	//����ģʽAdapter2
	cout << "����ģʽAdapter_2" << endl;
	Target* pTarget2 = new Adapter_2();
	pTarget2->Request();
	system("pause");
	return 0;
}

