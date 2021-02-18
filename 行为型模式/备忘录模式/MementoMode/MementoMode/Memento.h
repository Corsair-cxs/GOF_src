#pragma once

#include <string>

using namespace std;

class Memento
{
public:
	Memento(string sName, string sLevel, string sEquipment);
	~Memento(void);

	Memento & operator= (const Memento &m);

	string _sName; //名字
	string _sLevel; //等级
	string _sEquipment; //装备
};
