// function_pointer_calc.c

#include <stdio.h>

// 정수형 변수 a와 b를 더한 값을 출력하는 함수
void add(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

// 정수형 변수 a와 b를 뺀 값을 출력하는 함수
void sub(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

// 함수포인터 ptr과 정수형 변수 a, b를 매개변수로 받아 
// 함수포인터 ptr이 가리키는 함수에 a, b를 전달하여 실행하는 함수
void calc(void (*ptr)(int a, int b), int a, int b)
{
	ptr(a, b);
}

int main(void)
{
	// 함수포인터 ptr을 정의
	void (*ptr)(int a, int b);

	// 함수포인터 배열 ptr2를 정의
	void (*ptr2[2])(int a, int b);

	int a = 3;
	int b = 5;

	// 함수포인터 ptr이 add 함수를 가리키도록 함
	ptr = add;

	// 함수포인터 배열 ptr2의 첫 번째 원소에 add 함수를, 
	// 두 번째 원소에 sub 함수를 각각 가리키도록 함
	ptr2[0] = add;
	ptr2[1] = sub;

	// ptr이 가리키는 함수(add 함수)를 실행함
	ptr(3, 5); // 대리자

	// 함수포인터 배열 ptr2의 첫 번째 원소(add 함수)와 두 번째 원소(sub 함수)를 각각 실행함
	ptr2[0](a, b);
	ptr2[1](a, b);

	// 함수포인터 매개변수로 add 함수와 5, 5를 전달하여 실행함
	calc(add, 5, 5);

	return 0;
}
