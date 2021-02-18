#pragma once

//类模式，适配器类，通过public继承获得接口继承的效果，通过private继承获得实现继承的效果
#include "Target.h"
#include "Adaptee.h"
 
class Adapter_1 : public Target, private Adaptee
{
public:
	Adapter_1(void);
	~Adapter_1(void);
	 void Request();//实现Target定义的Request接口
};
