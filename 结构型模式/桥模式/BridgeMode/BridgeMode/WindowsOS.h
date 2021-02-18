#pragma once
#include "os.h"

class WindowsOS :
	public OS
{
public:
	WindowsOS(void);
	~WindowsOS(void);
	void Run();
};
