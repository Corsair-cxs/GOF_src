//备忘录模式：在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。
//这样以后就可将该对象恢复到原先保存的状态。举个简单的例子，我们玩游戏时都会保存进度，
//所保存的进度以文件的形式存在。这样下次就可以继续玩，而不用从头开始。
//这里的进度其实就是游戏的内部状态，而这里的文件相当于是在游戏之外保存状态。
//这样，下次就可以从文件中读入保存的进度，从而恢复到原来的状态。这就是备忘录模式。

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "GamePlayer.h"
#include "Archive.h""
#include "Memento.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Archive archive; //创建档案册
	GamePlayer play;
	cout << "第一个人物" << endl;
	play.SetState("张飞", "2", "狼牙棒");
	play.ShowState();
	
	cout << endl;

	// 保存当前存档到档案册
	cout << "保存第一个人物存档" << endl << endl;
	archive.AddArchive(play.Save());
	
	cout << "第二个人物" << endl;
	play.SetState("关羽", "5", "左轮手枪");
	play.ShowState();

	cout << endl;

	cout << "加载第一个人物存档" << endl << endl;
	play.Load(archive.LoadArchive(0));

	cout << "显示加载存档后的人物" << endl;
	play.ShowState();


	system("pause");
	return 0;
}

