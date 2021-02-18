//作用: 
//将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。 
//
//创建者模式的定义将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示（DP）。
//例如建造小人，一共需建造6个部分，头部、身体、左右手、左右脚。与工厂模式不同，
//创建者模式是在导向者的控制下一步一步构造产品的。建造小人就是在控制下一步步构造出来的。
//创建者模式可以能更精细的控制构建过程，从而能更精细的控制所得产品的内部结构。

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

#include "FatBuilder.h"
#include "ThinBuilder.h"
#include "Director.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//创建瘦的小人
	Director *pD1 = new Director(new ThinBuilder);
	pD1->Create();
	delete pD1;
	pD1 = NULL;

	cout << endl;

	//创建胖的小人
    Director *pD2 = new Director(new FatBuilder);
	pD2->Create();
 
	delete pD2;
	pD2 = NULL;

	system("pause");
	return 0;
}

