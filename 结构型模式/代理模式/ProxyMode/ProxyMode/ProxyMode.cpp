//����: 
//Ϊ���������ṩһ�ִ����Կ��ƶ��������ķ��ʡ� 
//
//�������: 
//Subject:������Proxy��RealSubject�Ĺ��нӿ�,�����Ϳ������κ���Ҫ
//ʹ�õ�RealSubject�ĵط���ʹ��Proxy. 
//
//����: 
//Proxy��ʵ�ǻ�������һ��ʱ��ʹ�õ��ļ���-ĳ������ֱ����������ʹ�õ���
//ʱ��ű���ʼ��,��û��ʹ�õ���ʱ�����ʱ��Proxy��һ��ռλ��.���ģʽ
//ʵ�ֵ�Ҫ�����Proxy��RealSubject���̳���Subject,������֤��������
//�ӿڶ���һ�µ�. 

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Subject.h"
#include "Proxy.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Subject *pSubject = new Proxy;
	pSubject->Request();

	delete pSubject;

	system("pause");
	return 0;
}

