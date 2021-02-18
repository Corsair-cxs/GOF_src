#include "StdAfx.h"
#include "AmericaPizza.h"

AmericaPizza::AmericaPizza(void)
{
	cout << "生产美国比萨" << endl;
}

AmericaPizza::~AmericaPizza(void)
{
	cout << "销毁美国比萨" << endl;
}

void AmericaPizza::Prepare()
{
	cout << "加奶酪，加草莓，加奶油" << endl;
}

void AmericaPizza::Bake()
{
	cout << "小火烤半小时" << endl;
}

void AmericaPizza::Box()
{
	cout << "装入圆形盒子中" << endl;
}