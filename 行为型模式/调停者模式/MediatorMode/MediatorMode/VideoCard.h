#pragma once
#include "colleague.h"

//ͬ���ࡪ���Կ�

class VideoCard :
	public Colleague
{
public:
	VideoCard(Mediator *pMediator);
	~VideoCard(void);

	//��ʾ����
	void ShowData(string sVideoData);
};
