#pragma once
#include "colleague.h"

//ͬ���ࡪ������

class SoundCard :
	public Colleague
{
public:
	SoundCard(Mediator *pMediator);
	~SoundCard(void);
	
	//��������
	void ShowSound(string sSoundData);
};
