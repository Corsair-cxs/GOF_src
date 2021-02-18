//定义了一个操作中的算法的骨架，而将部分步骤的实现在子类中完成。
//模板方法模式使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。

//模板方法模式是一种基于继承的代码复用技术，它是一种类行为型模式。
//模板方法模式是结构最简单的行为型设计模式，在其结构中只存在父类与子类之间的继承关系。
//通过使用模板方法模式，可以将一些复杂流程的实现步骤封装在一系列基本方法中，
//在抽象父类中提供一个称之为模板方法的方法来定义这些基本方法的执行次序，而通过其子类来覆盖某些步骤，
//从而使得相同的算法框架可以有不同的执行结果。模板方法模式提供了一个模板方法来定义算法框架，而某些具体步骤的实现可以在其子类中完成。

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "AbstractClass.h"
#include "ConcreteClass_1.h"
#include "ConcreteClass_2.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//使用第一个算法集合ConcreteClass_1
	AbstractClass *pClass_1 = new ConcreteClass_1;
	pClass_1->TemplateMethod();

	cout << endl;

	//使用第二个算法集合ConcreteClass_2
	AbstractClass *pClass_2 = new ConcreteClass_2;
	pClass_2->TemplateMethod();
 
	system("pause");
	return 0;
}

