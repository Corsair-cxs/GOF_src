//定义：将一个请求封装成一个对象，从而让你使用不同的请求把客户端参数化，对请求排队或者记录请求日志，可以提供命令的撤销和恢复功能。

//命令模式的结构：
//顾名思义，命令模式就是对命令的封装，首先来看一下命令模式类图中的基本结构：
//Command类：是一个抽象类，类中对需要执行的命令进行声明，一般来说要对外公布一个execute方法用来执行命令。
//ConcreteCommand类：Command类的实现类，对抽象类中声明的方法进行实现。
//Client类：最终的客户端调用类。
//以上三个类的作用应该是比较好理解的，下面我们重点说一下Invoker类和Recevier类。
//Invoker类：调用者，负责调用命令。
//Receiver类：接收者，负责接收命令并且执行命令。
//所谓对命令的封装，说白了，无非就是把一系列的操作写到一个方法中，然后供客户端调用就行了，反映到类图上，
//只需要一个ConcreteCommand类和Client类就可以完成对命令的封装，即使再进一步，为了增加灵活性，可以再增加一个Command类进行适当地抽象，
//这个调用者和接收者到底是什么作用呢？
//其实大家可以换一个角度去想：假如仅仅是简单地把一些操作封装起来作为一条命令供别人调用，
//怎么能称为一种模式呢？命令模式作为一种行为类模式，首先要做到低耦合，耦合度低了才能提高灵活性，而加入调用者和接收者两个角色的目的也正是为此。

#include "stdafx.h"
#include <iostream>
#include "Receiver.h"
#include "ConcreteCommand.h"
#include "Sender.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//创建一个命令接收者
	Receiver *pReceiver = new Receiver();
	//创建命令对象，命令对象封装了接收者和一个或一组动作
	Command *pCommand = new ConcreteCommand( pReceiver );
	//创建发送者
	Sender *pSender = new Sender();
	//给发送者设置命令
	pSender->SetCommand( pCommand );
	//发送者只负责发送命令，无需知道怎么执行的
	pSender->SendCommand();

	system("pause");
	return 0;
}

