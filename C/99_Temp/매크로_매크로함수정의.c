/*
	��ũ��(Macro) : ��ũ�� �Լ��� ���, �ִ밪, �ּҰ� ����
	��ũ�� ���
	��ũ�� �Լ�
*/
#include <stdio.h>

#define CMain void main(void)
#define max(x, y) x > y ? x : y
#define min(x, y) x > y ? y : x

CMain
{
	printf("�ִ밪 : %d\n", max(3, 5));//5
	printf("�ּҰ� : %d\n", min(-3, -5));//-5
}