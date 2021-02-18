#pragma once
#include "colleague.h"

//ͬ���ࡪ��CPU

class CPU :
	public Colleague
{
public:
	CPU(Mediator *pMediator);
	~CPU(void);
	//��ȡ������������Ƶ����
	string GetVideoData();

	//��ȡ������������������
	string GetSoundData();

	//�������ݣ��ֽ����Ƶ���ݺ���������
	void ParseData(string sData);

private:
	string _sVideoData; //������������Ƶ����
	string _sSoundData; //������������������
};
