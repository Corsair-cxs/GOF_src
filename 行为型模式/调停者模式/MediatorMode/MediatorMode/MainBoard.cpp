#include "StdAfx.h"
#include "MainBoard.h"
#include "Driver.h"
#include "CPU.h"
#include "VideoCard.h"
#include "SoundCard.h"

MainBoard::MainBoard(void):_pDriver(NULL), _pCPU(NULL), _pVideoCard(NULL), _pSoundCard(NULL)
{
}

MainBoard::~MainBoard(void)
{
}

void MainBoard::SetDriver(Driver *pDriver)
{
	_pDriver = pDriver;
}

void MainBoard::SetCPU(CPU *pCPU)
{
	_pCPU = pCPU;
}

void MainBoard::SetVideoCard(VideoCard *pVideoCard)
{
	_pVideoCard = pVideoCard;
}

void MainBoard::SetSoundCard(SoundCard *pSoundCard)
{
	_pSoundCard = pSoundCard;
}

void MainBoard::Change(Colleague *pColleague)
{
	if(pColleague == _pDriver)
	{
		//��DVDȡ����������CPU����
		string sData = _pDriver->GetData();
		_pCPU->ParseData(sData);
	}
	else if(pColleague == _pCPU)
	{
		//ȡ��CPU���������
		string sVideo = _pCPU->GetVideoData();
		string sSound = _pCPU->GetSoundData();
		//��ȡ�������ݽ����Կ���������ʾ
		_pVideoCard->ShowData(sVideo);
		_pSoundCard->ShowSound(sSound);
	}
}

