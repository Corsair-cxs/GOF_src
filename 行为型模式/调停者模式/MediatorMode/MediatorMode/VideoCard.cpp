#include "StdAfx.h"
#include "VideoCard.h"

VideoCard::VideoCard(Mediator *pMediator) : Colleague(pMediator)
{
}

VideoCard::~VideoCard(void)
{
}

void VideoCard::ShowData(string sVideoData)
{
	cout << "��ʾ��" << sVideoData << endl;
}