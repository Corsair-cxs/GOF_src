//提供一种方法顺序访问一个聚合对象中各个元素，而又不暴露该对象的内部表示。
//当你需要访问一个聚集对象，而且不管这些对象是什么都需要遍 历的时候，就应该考虑用迭代器模式。
//同时需要对聚集有多种方式遍历时，可以考虑用迭代器模式。
//为遍历不同的聚集结构提供如开始、下一个、是否结束、当前哪 一项等统一接口。
//迭代器模式就是分离了集合对象的遍历行为，抽象出一个迭代器类来负责，这样既可以做到不暴露集合的内部结构，又可让外部代码透明地访问集合内部的数据。

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Iterator.h"
#include "ConcreteAggregate.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//创建容器并添加数据
	ConcreteAggregate *pName = new ConcreteAggregate();
	pName->Push("hello");
	pName->Push("word");
	pName->Push("cxue");

	//创建迭代器读取数据
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

