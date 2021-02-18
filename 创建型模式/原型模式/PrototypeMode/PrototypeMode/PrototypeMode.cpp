//������ 
//Prototypeģʽ��ʵ���ǳ�˵��"���⹹�캯��"һ��ʵ��,C++��ʵ�ֻ����в�û��֧���������, 
//����ͨ����ͬ������ʵ�ֵ�Clone�ӿں������������"���⹹�캯��"ͬ����Ч��.��һ�������� 
//�������ģʽ������,������һ�ҵ�������Կ�׵�,�������ṩ����Կ�׵ķ���(�ṩClone�ӿں���),
//����Ҫ��ʲôԿ������֪��ֻ���ṩ���ַ���,������Ҫ��ʲôԿ��ֻ�е�����������Կ�׵�ԭ�Ͳ������.
//Ҳ����˵,��Ҫһ���ṩ�������Ķ���,ͬʱ����Ҫһ��ԭ��(Prototype),��Ȼ��֪������ʲô����Կ��. 


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Prototype *p1 = new ConcretePrototype1;
	Prototype *p2 = p1->Clone();
	delete p1;
	delete p2;

	cout << endl;

	Prototype *p3 = new ConcretePrototype2;
	Prototype *p4 = p3->Clone();
	delete p3;
	delete p4;

	system("pause");
	return 0;
}

