#include <stdio.h>

void add(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

void sub(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

void calc(void (*ptr)(int a, int b), int a, int b)
{
	ptr(a, b);
}

int main(void)
{
	// �Լ�������
	void (*ptr)(int a, int b);

	// �Լ������� �迭
	void (*ptr2[2])(int a, int b);

	int a = 3;
	int b = 5;

	ptr = add;

	ptr2[0] = add;
	ptr2[1] = sub;

	ptr(3, 5); // �븮��

	ptr2[0](a, b);
	ptr2[1](a, b);

	// �Լ������� �Ű�����
	calc(add, 5, 5);

	return 0;
}

