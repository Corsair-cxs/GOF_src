#pragma once
#include "os.h"

class LinuxOS :
	public OS
{
public:
	LinuxOS(void);
	~LinuxOS(void);
	void Run();
};
