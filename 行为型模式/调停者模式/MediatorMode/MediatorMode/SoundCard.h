#pragma once
#include "colleague.h"

//同事类——声卡

class SoundCard :
	public Colleague
{
public:
	SoundCard(Mediator *pMediator);
	~SoundCard(void);
	
	//发出声音
	void ShowSound(string sSoundData);
};
