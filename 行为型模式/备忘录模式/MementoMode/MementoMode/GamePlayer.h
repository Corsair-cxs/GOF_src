#pragma once

#include <string>
#include <iostream>

class Memento;

using namespace std;

class GamePlayer
{
public:
	GamePlayer(void);
	~GamePlayer(void);

	Memento Save();
	void Load(Memento m);
	void SetState(string sName, string sLevel, string sEquipment);
	void ShowState();

private:
	string _sName; //名字
	string _sLevel; //等级
	string _sEquipment; //装备
};
