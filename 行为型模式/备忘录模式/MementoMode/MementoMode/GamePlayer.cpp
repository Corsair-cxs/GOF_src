#include "StdAfx.h"
#include "GamePlayer.h"
#include "Memento.h"

GamePlayer::GamePlayer(void)
{
}

GamePlayer::~GamePlayer(void)
{
}

Memento GamePlayer::Save()
{
	Memento m(_sName, _sLevel, _sEquipment);
	return m;
}

void GamePlayer::Load(Memento m)
{
	_sName = m._sName;
	_sLevel = m._sLevel;
	_sEquipment = m._sEquipment;
}

void GamePlayer::SetState(string sName, string sLevel, string sEquipment)
{
	 _sName = sName;
	 _sLevel = sLevel;
	 _sEquipment = sEquipment;
}

void GamePlayer::ShowState()
{
	cout << "人名：" << _sName << endl << "等级：" << _sLevel << endl << "装备：" << _sEquipment << endl;
}