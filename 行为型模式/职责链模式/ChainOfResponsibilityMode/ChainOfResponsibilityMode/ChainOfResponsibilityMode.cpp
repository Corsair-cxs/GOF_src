//ְ����ģʽ��
//ʹ��������л��ᴦ�����󣬴Ӷ���������ķ����ߺͽ�����֮�����Ϲ�ϵ��
//����Щ��������һ���������������������ݸ�����ֱ����һ����������Ϊֹ����˼��ܼ򵥣�����Ա��Ҫ���н��
//��˾�Ĺ�����һ�����������ܾ����ܼࡢ�������һ��Ա��Ҫ���н��Ӧ�������ܵľ������룬
//�����н�������ھ����ְȨ�ڣ���ô�������ֱ����׼�����������Ͻ����ܼࡣ�ܼ�Ĵ���ʽҲһ����
//�ܾ�����Դ���������������ǵ��͵�ְ����ģʽ������Ĵ����γ���һ������ֱ����һ������������

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Manager.h"
#include "GeneralManager.h"
#include "Majordomo.h"
#include "CommonManager.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Manager *pGeneralManager = new GeneralManager("����");
	Manager *pMajordomo = new Majordomo("���ܼ�", pGeneralManager);
	Manager *pCommonManager = new CommonManager("������", pMajordomo);

	cout << "С�������ǹ���300Ԫ" <<endl;
	pCommonManager->GetRequest("С��", 300);

	cout << endl;

	cout << "С�������ǹ���800Ԫ" <<endl;
	pCommonManager->GetRequest("С��", 800);

	cout << endl;

	cout << "С�������ǹ���1600Ԫ" <<endl;
	pCommonManager->GetRequest("С��", 1600);

	cout << endl;

	delete pCommonManager;	
	pCommonManager = NULL;
 
	system("pause");
	return 0;
}

