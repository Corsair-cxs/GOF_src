#pragma once
#include "colleague.h"

//同事类——显卡

class VideoCard :
	public Colleague
{
public:
	VideoCard(Mediator *pMediator);
	~VideoCard(void);

	//显示数据
	void ShowData(string sVideoData);
};
