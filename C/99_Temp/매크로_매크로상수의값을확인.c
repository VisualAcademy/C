//��� �� ����.
#include <stdio.h>

//��ũ�� ����
#define PI 314

//��ũ�� ���� Ȯ��
#if PI != 314
#error "PI != 314"
#endif

void main(void)
{
	printf("%.2f\n", PI);
}