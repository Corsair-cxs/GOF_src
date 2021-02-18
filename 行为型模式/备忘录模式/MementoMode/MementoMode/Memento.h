#pragma once

#include <string>

using namespace std;

class Memento
{
public:
	Memento(string sName, string sLevel, string sEquipment);
	~Memento(void);

	Memento & operator= (const Memento &m);

	string _sName; //����
	string _sLevel; //�ȼ�
	string _sEquipment; //װ��
};
