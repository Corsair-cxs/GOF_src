#include "StdAfx.h"
#include "ChinaPizza.h"

ChinaPizza::ChinaPizza(void)
{
	cout << "生产中国比萨" << endl;
}

ChinaPizza::~ChinaPizza(void)
{
	cout << "销毁中国比萨" << endl;
}

void ChinaPizza::Prepare()
{
	cout << "奶油，加苹果，加盐" << endl;
}

void ChinaPizza::Bake()
{
	cout << "大火烤一小时" << endl;
}

void ChinaPizza::Box()
{
	cout << "装入方形盒子中" << endl;
}