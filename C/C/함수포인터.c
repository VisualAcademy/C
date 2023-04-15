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
	// 함수포인터
	void (*ptr)(int a, int b);

	// 함수포인터 배열
	void (*ptr2[2])(int a, int b);

	int a = 3;
	int b = 5;

	ptr = add;

	ptr2[0] = add;
	ptr2[1] = sub;

	ptr(3, 5); // 대리자

	ptr2[0](a, b);
	ptr2[1](a, b);

	// 함수포인터 매개변수
	calc(add, 5, 5);

	return 0;
}

