// ��ó���� ���ù� == ��ũ�� �Լ�
#include <stdio.h>

#define MAX(f, s) ((f > s) ? f : s )
#define MIN(f, s) ((f < s) ? (f) : (s))

void main(void)
{
	int f, s;

	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &f, &s);

	printf("\n �ִ� : %d\n", MAX(f, s));
	printf("\n �ּڰ� : %d\n", MIN(f, s));
}
