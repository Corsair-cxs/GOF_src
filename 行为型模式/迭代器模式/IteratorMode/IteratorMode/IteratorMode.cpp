//�ṩһ�ַ���˳�����һ���ۺ϶����и���Ԫ�أ����ֲ���¶�ö�����ڲ���ʾ��
//������Ҫ����һ���ۼ����󣬶��Ҳ�����Щ������ʲô����Ҫ�� ����ʱ�򣬾�Ӧ�ÿ����õ�����ģʽ��
//ͬʱ��Ҫ�Ծۼ��ж��ַ�ʽ����ʱ�����Կ����õ�����ģʽ��
//Ϊ������ͬ�ľۼ��ṹ�ṩ�翪ʼ����һ�����Ƿ��������ǰ�� һ���ͳһ�ӿڡ�
//������ģʽ���Ƿ����˼��϶���ı�����Ϊ�������һ���������������������ȿ�����������¶���ϵ��ڲ��ṹ���ֿ����ⲿ����͸���ط��ʼ����ڲ������ݡ�

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Iterator.h"
#include "ConcreteAggregate.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//�����������������
	ConcreteAggregate *pName = new ConcreteAggregate();
	pName->Push("hello");
	pName->Push("word");
	pName->Push("cxue");

	//������������ȡ����
	Iterator *iter = pName->CreateIterator();
	if( NULL != iter )
	{
		string strItem = iter->First();
		while( !iter->IsEnd() )
		{
			cout << iter->GetCur() << " is ok" << endl;
			iter->Next();
		}
	}
	system("pause");
	return 0;
}

