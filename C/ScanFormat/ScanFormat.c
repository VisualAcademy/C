#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main()
{
	int num;
	int r; 

	printf("���� �ϳ��� �Է��ϼ���. _\b");

	r = scanf("%d", &num);

	printf("%d�� �Էµ�: %d\n", r, num);

	return 0; 
}
