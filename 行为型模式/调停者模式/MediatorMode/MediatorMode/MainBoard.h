#pragma once
#include "mediator.h"

//�����ͣ���ࡪ������

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
	Driver *_pDriver;//��Ҫ֪��Ҫ������ͬ���ࡪ��������
	CPU *_pCPU;//��Ҫ֪��Ҫ������ͬ���ࡪ��CPU��
	VideoCard *_pVideoCard;//��Ҫ֪��Ҫ������ͬ���ࡪ���Կ���
	SoundCard *_pSoundCard;//��Ҫ֪��Ҫ������ͬ���ࡪ��������
};
