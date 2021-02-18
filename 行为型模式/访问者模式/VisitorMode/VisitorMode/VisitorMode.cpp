//概述：
//我们去银行柜台办业务，一般情况下会开几个个人业务柜台的，你去其中任何一个柜台办理都是可以的。
//我们的访问者模式可以很好付诸在这个场景中：对于银行柜台来说，他们是不用变化的，就是说今天和明天提供个人业务的柜台是不需要有变化的。
//而我们作为访问者，今天来银行可能是取消费流水，明天来银行可能是去办理手机银行业务，这些是我们访问者的操作，一直是在变化的。
//
//访问者模式就是表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作。 

//抽象访问者（Visitor）角色：声明了一个或者多个访问操作，形成所有的具体元素角色必须实现的接口。
//具体访问者（ConcreteVisitor）角色：实现抽象访问者角色所声明的接口，也就是抽象访问者所声明的各个访问操作。
//抽象节点（Element）角色：声明一个接受操作，接受一个访问者对象作为一个参量。
//具体节点（ConcreteElement）角色：实现了抽象元素所规定的接受操作。
//结构对象（ObiectStructure）角色：有如下的一些责任，可以遍历结构中的所有元素；
//如果需要，提供一个高层次的接口让访问者对象可以访问每一个元素；
//如果需要，可以设计成一个复合对象或者一个聚集，如列（List）或集合（Set）。 

//访问者模式有如下的优点：
//
//1，访问者模式使得增加新的操作变得很容易。如果一些操作依赖于一个复杂的结构对象的话，
//那么一般而言，增加新的操作会很复杂。而使用访问者模式，增加新的操作就意味着增加一个新的访问者类，
//因此，变得很容易。
//
//2，访问者模式将有关的行为集中到一个访问者对象中，而不是分散到一个个的节点类中。
//
//3，访问者模式可以跨过几个类的等级结构访问属于不同的等级结构的成员类。
//迭代子只能访问属于同一个类型等级结构的成员对象，而不能访问属于不同等级结构的对象。访问者模式可以做到这一点。
//
//4，积累状态。每一个单独的访问者对象都集中了相关的行为，从而也就可以在访问的过程中将执行操作的状态积累在自己内部，
//而不是分散到很多的节点对象中。这是有益于系统维护的优点。
//
//访问者模式有如下的缺点：
//
//1，增加新的节点类变得很困难。每增加一个新的节点都意味着要在抽象访问者角色中增加一个新的抽象操作，
//并在每一个具体访问者类中增加相应的具体操作。
//
//2，破坏封装。访问者模式要求访问者对象访问并调用每一个节点对象的操作，
//这隐含了一个对所有节点对象的要求：它们必须暴露一些自己的操作和内部状态。
//不然，访问者的访问就变得没有意义。由于访问者对象自己会积累访问操作所需的状态，
//从而使这些状态不再存储在节点对象中，这也是破坏封装的。


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Visitor.h"
#include "Element.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitorA.h"
#include "ConcreteVisitorB.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//创建访问者pVisitorA，它访问pElementA和pElementB两个元素
	//pElementA和pElementB可以看成银行柜台的取钱和办理网银的两个窗口
	//pVisitorA在不同的窗口可以办理不同的业务
	Element *pElementA = new ConcreteElementA;
	Element *pElementB = new ConcreteElementB;

	Visitor *pVisitorA = new ConcreteVisitorA;
	pElementA->Accept(pVisitorA);
	pElementB->Accept(pVisitorA);

	cout << endl;

	Visitor *pVisitorB = new ConcreteVisitorB;
	pElementA->Accept(pVisitorB);
	pElementB->Accept(pVisitorB);


	system("pause");
	return 0;
}

