// ���糯¥�׽ð����ϱ�.c
/*
	��¥ �� ���ϱ� : time(), localtime()
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

void main(void)
{
	//����
	time_t now;
	struct tm t;

	//��ü �ð��� ��
	time(&now);

	//�ʰ��� �������� ����ð��� ����
	t = *localtime(&now);

	//��¥/�ð� ���
	printf("Now : %4d�� %d�� %d�� %d�� %d�� %d��\n"
		, t.tm_year + 1900
		, t.tm_mon + 1
		, t.tm_mday
		, t.tm_hour
		, t.tm_min
		, t.tm_sec
	);

	return 0; 
}
