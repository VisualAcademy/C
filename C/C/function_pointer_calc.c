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

// 함수포인터 func_ptr과 정수형 변수 a, b를 매개변수로 받아 
// 함수포인터 func_ptr이 가리키는 함수에 a, b를 전달하여 실행하는 함수
void calc(void (*func_ptr)(int a, int b), int a, int b)
{
	func_ptr(a, b);
}

int main(void)
{
	// 함수포인터 operation_ptr을 정의
	void (*operation_ptr)(int a, int b);

	// 함수포인터 배열 operations를 정의
	void (*operations[2])(int a, int b);

	int a = 3;
	int b = 5;

	// 함수포인터 operation_ptr이 add 함수를 가리키도록 함
	operation_ptr = add;

	// 함수포인터 배열 operations의 첫 번째 원소에 add 함수를, 
	// 두 번째 원소에 sub 함수를 각각 가리키도록 함
	operations[0] = add;
	operations[1] = sub;

	// operation_ptr이 가리키는 함수(add 함수)를 실행함
	operation_ptr(3, 5); // 대리자

	// 함수포인터 배열 operations의 첫 번째 원소(add 함수)와 두 번째 원소(sub 함수)를 각각 실행함
	operations[0](a, b);
	operations[1](a, b);

	// 함수포인터 매개변수로 add 함수와 5, 5를 전달하여 실행함
	calc(add, 5, 5);

	return 0;
}
