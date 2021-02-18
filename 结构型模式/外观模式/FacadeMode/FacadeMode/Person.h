#pragma once

#include <iostream>

using namespace std;

class Hand
{
public:
	void Get()
	{
		cout << "ȡ����" << "\t";
	}
};

class Leg
{
public:
	void Run()
	{
		cout << "����" << "\t";
	}
};

class Eyes
{
public:
	void See()
	{
		cout << "��" << "\t";
	}
};

class Mouth
{
public:
	void Eat()
	{
		cout << "�Զ���" << "\t";
	}
};

class Person
{
public:
	Person(void);
	~Person(void);

	void Eat()
	{
		cout << "��ʼ��ʳ" << endl;
		hand->Get();
		mouth->Eat();
		cout << endl;
	}

	void Run()
	{
		cout << "��ʼ�ܲ�" << endl;
		eyes->See();
		leg->Run();
		cout << endl;
	}
private:
	Hand *hand;
	Eyes *eyes;
	Mouth *mouth;
	Leg *leg;
};
