//解决方案:
//策略模式：定义一系列的算法,把每一个算法封装起来, 并且使它们可相互替换。本模式使得算法可独立于使用它的客户而变化。也称为政策模式(Policy)。
//策略模式把对象本身和运算规则区分开来，其功能非常强大，因为这个设计模式本身的核心思想就是面向对象编程的多形性的思想。
//
//适用性:
//当存在以下情况时使用Strategy模式
//1）许多相关的类仅仅是行为有异。 “策略”提供了一种用多个行为中的一个行为来配置一个类的方法。即一个系统需要动态地在几种算法中选择一种。
//2）需要使用一个算法的不同变体。例如，你可能会定义一些反映不同的空间 /时间权衡的算法。当这些变体实现为一个算法的类层次时 ,可以使用策略模式。
//3）算法使用客户不应该知道的数据。可使用策略模式以避免暴露复杂的、与算法相关的数据结构。
//4）一个类定义了多种行为 , 并且这些行为在这个类的操作中以多个条件语句的形式出现。将相关的条件分支移入它们各自的Strategy类中以代替这些条件语句。

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "RedDuck.h"
#include "GreenDuck.h"
#include "GaGa.h"
#include "GuaGua.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	RedDuck *pRedDuck = new RedDuck;
	GreenDuck *pGreenDuck = new GreenDuck;

	cout << "红头鸭叫" << endl;
	pRedDuck->Quack();
	cout << "绿头鸭叫" << endl;
	pGreenDuck->Quack();

	cout << "修改红头鸭叫声为呱呱" << endl;
	pRedDuck->SetQuack( new GuaGua );
	cout << "红头鸭叫" << endl;
	pRedDuck->Quack();

	system("pause");
	return 0;
}

