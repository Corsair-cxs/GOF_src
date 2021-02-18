//职责链模式：
//使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。
//将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止。其思想很简单，考虑员工要求加薪。
//公司的管理者一共有三级，总经理、总监、经理，如果一个员工要求加薪，应该向主管的经理申请，
//如果加薪的数量在经理的职权内，那么经理可以直接批准，否则将申请上交给总监。总监的处理方式也一样，
//总经理可以处理所有请求。这就是典型的职责链模式，请求的处理形成了一条链，直到有一个对象处理请求。

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Manager.h"
#include "GeneralManager.h"
#include "Majordomo.h"
#include "CommonManager.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Manager *pGeneralManager = new GeneralManager("李总");
	Manager *pMajordomo = new Majordomo("张总监", pGeneralManager);
	Manager *pCommonManager = new CommonManager("王经理", pMajordomo);

	cout << "小赵申请涨工资300元" <<endl;
	pCommonManager->GetRequest("小赵", 300);

	cout << endl;

	cout << "小刘申请涨工资800元" <<endl;
	pCommonManager->GetRequest("小刘", 800);

	cout << endl;

	cout << "小周申请涨工资1600元" <<endl;
	pCommonManager->GetRequest("小周", 1600);

	cout << endl;

	delete pCommonManager;	
	pCommonManager = NULL;
 
	system("pause");
	return 0;
}

