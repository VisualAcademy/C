/*
	����_���ǳ��̿͵ѷ�����.c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��� ����: PI = 3.141592654...
#define PI 3.141592654f

int main(void)
{
	// ���� ����
	float r;

	// ����ڷκ��� ������ �Է�
	printf("������: ");
	scanf("%f", &r);

	// ó�� �� ���
	printf("���� ����: %f\n", (r * r * PI));
	printf("���� �ѷ� ����: %f\n", (2 * r * PI));

	return 0;
}
