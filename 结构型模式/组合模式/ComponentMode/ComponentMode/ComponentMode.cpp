//Composite组合模式
//作用：将对象组合成树形结构以表示“部分-整体”的层次结构。Composite使得用户对单个对象和组合对象的使用具有一致性。
//
//在Component中声明所有用来管理子对象的方法，其中包括Add、Remove等，这样实现Component接口的所有子类都具备了Add和Remove。
//这样做的好处就是叶节点和枝节点对于外界没有区别，它们具备 完全一致的行为 接口。
//但问题也很明显，因为Leaf类本身不具备Add()、Remove()方法的 功能，所以实现它是没有意义的。
//
//何时使用组合模式：
//当你发现需求中是体现部分与整体层次的结构时，以及你希望用户可以忽略组合对象与单个对象的不同，统一地使用组合结构中的所有对象时，就应该考虑用组合模式了。
//
//基本对象可以被组合成更复杂的组合对象，而这个组合对象又可以被组合，这样不断地递归下去，客户代码中，任何用到基本对象的地方都可以使用组合对象了。
//
//用户不用关心到底是处理一个叶节点还是处理一个组合组件，也就用不着为定义组合二写一些选择判断语句了。
//
//组合模式让客户可以一致地使用组合结构和单个对象。
//
//抽象基类:
//1)Component:为组合中的对象声明接口，声明了类共有接口的缺省行为(如这里的Add,Remove,GetChild函数)，声明一个接口函数可以访问Component的子组件.
//
//接口函数:
//1)Component::Operatation:定义了各个组件共有的行为接口，由各个组件的具体实现.
//2)Component::Add添加一个子组件
//3)Component::Remove::删除一个子组件.
//4)Component::GetChild:获得子组件的指针.
//
//说明:
//Component模式是为解决组件之间的递归组合提供了解决的办法，它主要分为两个派生类：
//
//1)、Leaf是叶子结点,也就是不含有子组件的结点
//
//2)、Composite是含有子组件的类.
//
//举一个例子来说明这个模式，在UI的设计中,最基本的控件是诸如Button、Edit这样的控件，相当于是这里的Leaf组件，
//而比较复杂的控件比如Panel则可也看做是由这些基本的组件组合起来的控件，相当于这里的Composite，
//它们之间有一些行为含义是相同的，比如在控件上作一个点击,移动操作等等的，这些都可以定义为抽象基类中的接口虚函数，
//由各个派生类去实现之，这些都会有的行为就是这里的Operation函数，而添加、删除等进行组件组合的操作只有非叶子结点才可能有，
//所以虚拟基类中只是提供接口而且默认的实现是什么都不做。

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    //不管是叶子Leaf还是Composite对象都实现了Operation接口，所以可以一致对待，直接调用Operation()
    //体现了“使得用户对单个对象和组合对象的使用具有一致性。”
    Component* pRoot = new Composite();

    //组合对象添加叶子节点
    pRoot->Add(new Leaf());

    Component* pLeaf1 = new Leaf();
    Component* pLeaf2 = new Leaf();

    //这里的叶子再添加叶子是没有意义的。
    //由于叶子与组合对象继承了相同的接口，所以语法上是对的，实际上什么也没做(继承自基类Component的Add方法)。
    //叶子节点只实现了Operation方法，其他Add、Remove、GetChild都继承自基类，没有实际意义。
    pLeaf1->Add(pLeaf2);
    pLeaf1->Remove(pLeaf2);
    //执行叶子Operation操作
    pLeaf1->Operation();

	cout << endl;

    //组合对象实现了基类Component的所有接口，所以可以做各种操作(Add、Remove、GetChild、Operation)。
    Component* pCom = new Composite();
    //组合对象添加叶子节点
    pCom->Add(pLeaf1);
    //组合对象添加叶子节点
    pCom->Add(pLeaf2);
    //执行组合对象Operation操作
    pCom->Operation();

	cout << endl;

    //组合对象添加组合对象
    pRoot->Add(pCom);

    //执行组合对象Operation操作
    pRoot->Operation();

	cout << endl;

    Component* cp = pCom->GetChild(0);
    cp->Operation();

	cout << endl;
	
    pCom->Remove(pLeaf1);

	system("pause");
	return 0;
}

