//������һ�������е��㷨�ĹǼܣ��������ֲ����ʵ������������ɡ�
//ģ�巽��ģʽʹ��������Բ��ı�һ���㷨�Ľṹ�����ض�����㷨��ĳЩ�ض����衣

//ģ�巽��ģʽ��һ�ֻ��ڼ̳еĴ��븴�ü���������һ������Ϊ��ģʽ��
//ģ�巽��ģʽ�ǽṹ��򵥵���Ϊ�����ģʽ������ṹ��ֻ���ڸ���������֮��ļ̳й�ϵ��
//ͨ��ʹ��ģ�巽��ģʽ�����Խ�һЩ�������̵�ʵ�ֲ����װ��һϵ�л��������У�
//�ڳ��������ṩһ����֮Ϊģ�巽���ķ�����������Щ����������ִ�д��򣬶�ͨ��������������ĳЩ���裬
//�Ӷ�ʹ����ͬ���㷨��ܿ����в�ͬ��ִ�н����ģ�巽��ģʽ�ṩ��һ��ģ�巽���������㷨��ܣ���ĳЩ���岽���ʵ�ֿ���������������ɡ�

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "AbstractClass.h"
#include "ConcreteClass_1.h"
#include "ConcreteClass_2.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//ʹ�õ�һ���㷨����ConcreteClass_1
	AbstractClass *pClass_1 = new ConcreteClass_1;
	pClass_1->TemplateMethod();

	cout << endl;

	//ʹ�õڶ����㷨����ConcreteClass_2
	AbstractClass *pClass_2 = new ConcreteClass_2;
	pClass_2->TemplateMethod();
 
	system("pause");
	return 0;
}

