//����¼ģʽ���ڲ��ƻ���װ�Ե�ǰ���£�����һ��������ڲ�״̬�����ڸö���֮�Ᵽ�����״̬��
//�����Ժ�Ϳɽ��ö���ָ���ԭ�ȱ����״̬���ٸ��򵥵����ӣ���������Ϸʱ���ᱣ����ȣ�
//������Ľ������ļ�����ʽ���ڡ������´ξͿ��Լ����棬�����ô�ͷ��ʼ��
//����Ľ�����ʵ������Ϸ���ڲ�״̬����������ļ��൱��������Ϸ֮�Ᵽ��״̬��
//�������´ξͿ��Դ��ļ��ж��뱣��Ľ��ȣ��Ӷ��ָ���ԭ����״̬������Ǳ���¼ģʽ��

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "GamePlayer.h"
#include "Archive.h""
#include "Memento.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Archive archive; //����������
	GamePlayer play;
	cout << "��һ������" << endl;
	play.SetState("�ŷ�", "2", "������");
	play.ShowState();
	
	cout << endl;

	// ���浱ǰ�浵��������
	cout << "�����һ������浵" << endl << endl;
	archive.AddArchive(play.Save());
	
	cout << "�ڶ�������" << endl;
	play.SetState("����", "5", "������ǹ");
	play.ShowState();

	cout << endl;

	cout << "���ص�һ������浵" << endl << endl;
	play.Load(archive.LoadArchive(0));

	cout << "��ʾ���ش浵�������" << endl;
	play.ShowState();


	system("pause");
	return 0;
}

