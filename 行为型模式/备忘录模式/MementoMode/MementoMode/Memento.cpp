#include "StdAfx.h"
#include "Memento.h"

Memento::Memento(string sName, string sLevel, string sEquipment) : _sName(sName), _sLevel(sLevel), _sEquipment(sEquipment)
{
}

Memento::~Memento(void)
{
}

Memento & Memento::operator= (const Memento &m)
{
	_sName = m._sName;
	_sLevel = m._sLevel;
	_sEquipment = m._sEquipment;
	return *this;
}