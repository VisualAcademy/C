/*
���ù� : switch~case��
*/
#include <stdio.h>

void main(void)
{
	int NOW = 17; // Hour

	switch (NOW)
	{
	case 1: printf("�߽��� �ð�..."); break;
	case 2: printf("��� �ѱ׸�..."); break;
	case 17: printf("�Ϸ� ����..."); break;
	case 21: printf("9�ô����� �����Ϳ�?"); break;
	default: printf("��Ÿ �ð���"); break;
	}
	printf("\n");
}
