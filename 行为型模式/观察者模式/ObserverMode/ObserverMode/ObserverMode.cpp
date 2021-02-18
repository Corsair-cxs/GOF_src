//�۲���ģʽ��
//�۲���ģʽ������һ��һ�Զ��������ϵ���ö���۲��߶���ͬʱ����ĳһ���������
//������������״̬�Ϸ����仯ʱ����֪ͨ���й۲��߶����������ܹ��Զ������Լ���
//
//�۲���ģʽ����ɣ�
//���������ɫ�������жԹ۲��߶�������ñ�����һ�������У�ÿ�����������ɫ�����������������Ĺ۲��ߡ����������ṩһ���ӿڣ��������Ӻ�ɾ���۲��߽�ɫ��һ����һ��������ͽӿ���ʵ�֡�
//����۲��߽�ɫ��Ϊ���о���Ĺ۲��߶���һ���ӿڣ��ڵõ������֪ͨʱ�����Լ���
//���������ɫ���ھ��������ڲ�״̬�ı�ʱ�������еǼǹ��Ĺ۲��߷���֪ͨ�����������ɫͨ����һ������ʵ�֡�
//����۲��߽�ɫ���ý�ɫʵ�ֳ���۲��߽�ɫ��Ҫ��ĸ��½ӿڣ��Ա�ʹ�����״̬�������״̬��Э����
//ͨ����һ������ʵ�֡������Ҫ������۲��߽�ɫ���Ա���һ��ָ����������ɫ�����á�

#include "stdafx.h"
#include <stdlib.h>

#include "WeatherData.h"
#include "Observer.h"
#include "WenDuDisplay.h"
#include "ShiDuDisplay.h"

int _tmain(int argc, _TCHAR* argv[])
{
	WeatherData *pWeatherData = new WeatherData;
	WenDuDisplay *pWenDu = new WenDuDisplay( pWeatherData );
	ShiDuDisplay *pShiDu = new ShiDuDisplay( pWeatherData );

	pWeatherData->AddObserver( pWenDu );
	pWeatherData->AddObserver( pShiDu );

	cout << "�����¶�30��ʪ��10������֪ͨ�۲���" << endl;
	pWeatherData->SetData( "30", "10" );
	pWeatherData->Notify();

	cout << "�����¶�20ʪ��5" <<endl;
	pWeatherData->SetData( "20", "5" );

	cout << "�¶����������ȡ�¶�" << endl;
	pWenDu->GetWenDu();

	cout << "ʪ�����������ȡʪ��" << endl;
	pShiDu->GetShiDu();

	cout << "ʪ�ȹ۲����˳��۲�" << endl;
	pShiDu->ExitObserver();

	cout << "�����¶�26ʪ��8������֪ͨ�۲���" <<endl;
	pWeatherData->SetData( "26", "8" );
	pWeatherData->Notify();

	cout << "ɾ������" <<endl;
	delete pWeatherData;
	pWeatherData = NULL;

	system("pause");
	return 0;
}

