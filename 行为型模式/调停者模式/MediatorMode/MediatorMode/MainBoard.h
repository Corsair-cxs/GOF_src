#pragma once
#include "mediator.h"

//具体调停者类——主板

class Driver;
class CPU;
class VideoCard;
class SoundCard;

class MainBoard :
	public Mediator
{
public:
	MainBoard(void);
	~MainBoard(void);
	void SetDriver(Driver *pDriver);
	void SetCPU(CPU *pCPU);
	void SetVideoCard(VideoCard *pVideoCard);
	void SetSoundCard(SoundCard *pSoundCard);
	void Change(Colleague *pColleague);
private:
	Driver *_pDriver;//需要知道要交互的同事类——光驱类
	CPU *_pCPU;//需要知道要交互的同事类——CPU类
	VideoCard *_pVideoCard;//需要知道要交互的同事类——显卡类
	SoundCard *_pSoundCard;//需要知道要交互的同事类——声卡类
};
