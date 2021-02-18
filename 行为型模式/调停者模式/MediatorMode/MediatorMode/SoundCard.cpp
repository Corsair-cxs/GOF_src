#include "StdAfx.h"
#include "SoundCard.h"

SoundCard::SoundCard(Mediator *pMediator) : Colleague(pMediator)
{
}

SoundCard::~SoundCard(void)
{
}

void SoundCard::ShowSound(string sSoundData)
{
	cout << "ÉùÒô£º" << sSoundData << endl;
}