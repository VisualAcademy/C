/*
	��ó����(PreProcessor): ������ ��� �Ǵ� ���� �̸� ����
*/
#include <stdio.h>

#define HI "�ȳ��ϼ���."
#define F 10
#define S 20
#define T 30
#define Write printf
#define MAX 100
#define MIN 0

void main(void)
{
	const int NUM = 10; // ���(Constant)

	printf("%s\n", HI);
	printf("%d + %d + %d = %d\n", F, S, T, (F + S + T)); // 10 + 20 + 30 = 60
	Write("%s\n", HI);
}
