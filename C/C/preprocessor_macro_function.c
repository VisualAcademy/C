// ��ó���� ���ù� == ��ũ�� �Լ�
#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

#define MAX(f, s) ((f > s) ? f : s )
#define MIN(f, s) ((f < s) ? (f) : (s))

int main(void)
{
	int f, s;

	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &f, &s);

	printf("�ִ� : %d\n", MAX(f, s));
	printf("�ּڰ� : %d\n", MIN(f, s));

	return 0; 
}
