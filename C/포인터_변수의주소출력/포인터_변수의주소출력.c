/*
	&�����ڿ� %#x : ������ �ּ�(����) ���
*/
#include <stdio.h>

void main(void)
{
	int i = 10;
	int j = 20;
	int k = 30;

	printf("%d, %x, %#x\n", i, i, &i); // %d : 10����
	printf("%d, %x, %#x\n", j, j, &j); // %x : 16����
	printf("%d, %x, %#x\n", k, k, &k); // %#x : ������ �ּ�(����;Address) ���
}
