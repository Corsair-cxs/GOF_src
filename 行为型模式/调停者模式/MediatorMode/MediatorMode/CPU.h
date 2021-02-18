#pragma once
#include "colleague.h"

//同事类——CPU

class CPU :
	public Colleague
{
public:
	CPU(Mediator *pMediator);
	~CPU(void);
	//读取解析出来的视频数据
	string GetVideoData();

	//读取解析出来的声音数据
	string GetSoundData();

	//解析数据，分解成视频数据和声音数据
	void ParseData(string sData);

private:
	string _sVideoData; //解析出来的视频数据
	string _sSoundData; //解析出来的声音数据
};
