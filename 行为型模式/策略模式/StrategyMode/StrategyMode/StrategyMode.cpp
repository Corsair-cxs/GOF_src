//�������:
//����ģʽ������һϵ�е��㷨,��ÿһ���㷨��װ����, ����ʹ���ǿ��໥�滻����ģʽʹ���㷨�ɶ�����ʹ�����Ŀͻ����仯��Ҳ��Ϊ����ģʽ(Policy)��
//����ģʽ�Ѷ����������������ֿ������书�ܷǳ�ǿ����Ϊ������ģʽ����ĺ���˼�������������̵Ķ����Ե�˼�롣
//
//������:
//�������������ʱʹ��Strategyģʽ
//1�������ص����������Ϊ���졣 �����ԡ��ṩ��һ���ö����Ϊ�е�һ����Ϊ������һ����ķ�������һ��ϵͳ��Ҫ��̬���ڼ����㷨��ѡ��һ�֡�
//2����Ҫʹ��һ���㷨�Ĳ�ͬ���塣���磬����ܻᶨ��һЩ��ӳ��ͬ�Ŀռ� /ʱ��Ȩ����㷨������Щ����ʵ��Ϊһ���㷨������ʱ ,����ʹ�ò���ģʽ��
//3���㷨ʹ�ÿͻ���Ӧ��֪�������ݡ���ʹ�ò���ģʽ�Ա��Ⱪ¶���ӵġ����㷨��ص����ݽṹ��
//4��һ���ඨ���˶�����Ϊ , ������Щ��Ϊ�������Ĳ������Զ������������ʽ���֡�����ص�������֧�������Ǹ��Ե�Strategy�����Դ�����Щ������䡣

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "RedDuck.h"
#include "GreenDuck.h"
#include "GaGa.h"
#include "GuaGua.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	RedDuck *pRedDuck = new RedDuck;
	GreenDuck *pGreenDuck = new GreenDuck;

	cout << "��ͷѼ��" << endl;
	pRedDuck->Quack();
	cout << "��ͷѼ��" << endl;
	pGreenDuck->Quack();

	cout << "�޸ĺ�ͷѼ����Ϊ����" << endl;
	pRedDuck->SetQuack( new GuaGua );
	cout << "��ͷѼ��" << endl;
	pRedDuck->Quack();

	system("pause");
	return 0;
}

