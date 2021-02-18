#pragma once

#include <iostream>

using namespace std;

class Hand
{
public:
	void Get()
	{
		cout << "取东西" << "\t";
	}
};

class Leg
{
public:
	void Run()
	{
		cout << "奔跑" << "\t";
	}
};

class Eyes
{
public:
	void See()
	{
		cout << "看" << "\t";
	}
};

class Mouth
{
public:
	void Eat()
	{
		cout << "吃东西" << "\t";
	}
};

class Person
{
public:
	Person(void);
	~Person(void);

	void Eat()
	{
		cout << "开始进食" << endl;
		hand->Get();
		mouth->Eat();
		cout << endl;
	}

	void Run()
	{
		cout << "开始跑步" << endl;
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
