//���壺Ϊ����һ����ػ��໥�����Ķ����ṩһ���ӿڣ���������ָ�����ǵľ����ࡣ
//����
//��������ģʽ��
//һ�������Ʒ�࣬������������������Ʒ�ࡣ   
//һ�����󹤳��࣬����������������幤���ࡣ   
//ÿ�����幤����ֻ�ܴ���һ�������Ʒ���ʵ����
//���󹤳�ģʽ��
//��������Ʒ�࣬ÿ�������Ʒ�������������������Ʒ�ࡣ   
//һ�����󹤳��࣬����������������幤���ࡣ   
//ÿ�����幤������Դ�����������Ʒ���ʵ����   
//����
//��������ģʽֻ��һ�������Ʒ�࣬�����󹤳�ģʽ�ж����   
//��������ģʽ�ľ��幤����ֻ�ܴ���һ�������Ʒ���ʵ���������󹤳�ģʽ���Դ��������

//���磬�������������ֲ�ƷA��B������ƷA��B�ֱ�����������1��2�������������������ǰѲ�ͬ�ĳ���1������2���Ϊ����1������2��
//��ô����1������A1��B1������2����A2��B2��
//��ʱ����ͬ�ĳ��̿϶�Ҫ�����Լ��Ĳ�Ʒ����A1��B1����ÿ�����̶����Լ���һϵ�в�Ʒ�������������󹤳�ģʽ�����������ˡ�

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//��������1��������ƷA��B�ĵ�һ��ʵ��
	AbstractFactory *pFactory1 = new ConcreteFactory1;
	AbstractProductA *pProductA1 = pFactory1->CreateProductA();
	AbstractProductB *pProductB1 = pFactory1->CreateProductB();
	
	cout << endl;

	//��������2��������ƷA��B�ĵڶ���ʵ��
	AbstractFactory *pFactory2 = new ConcreteFactory2;
	AbstractProductA *pProductA2 = pFactory2->CreateProductA();
	AbstractProductB *pProductB2 = pFactory2->CreateProductB();

	cout << endl;

	delete pFactory1;
	pFactory1 = NULL;

	delete pFactory2;
	pFactory2 = NULL;

	delete pProductA1;
	pProductA1 = NULL;

	delete pProductB1;
	pProductB1 = NULL;

	delete pProductA2;
	pProductA2 = NULL;

	delete pProductB2;
	pProductB2 = NULL;

	system("pause");
	return 0;
}

