// pointer_variable_five.c
/*
��(Value)�� ����/�迭
������(����;Reference)�� ����/�迭
*/
#include <stdio.h>

main()
{
	// Value Type ����
	int a = 10;

	// Reference Type ���� : �������� ����
	int* pa;

	// ���� �߰�
	pa = &a;

	*pa = 20;

	// ���� ���� ǥ��
	printf("%d\n", a);//20
	printf("%d\n", &a);//1244992����

	// �������� ���� ǥ��
	printf("%d\n", pa);//1244992����
	printf("%d\n", &pa);//1244980����
	printf("%d\n", *pa);//20
}
