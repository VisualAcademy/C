/*
	3.8. 예제. 시프트 연산자 : 시프트연산자.c
*/

#include <stdio.h>

int main(void) {
	// 변수 a를 정수 5로 초기화합니다.
	int a = 5, b;

	// a << 3은 a의 비트열을 왼쪽으로 3번 이동한 결과입니다.
	// 이진수로 나타내면 a * 2^3과 같은 연산입니다.
	b = a << 3;
	printf("a = %d, a << 3 = %d\n", a, b);

	// a >> 2는 a의 비트열을 오른쪽으로 2번 이동한 결과입니다.
	// 이진수로 나타내면 a / 2^2와 같은 연산입니다.
	b = a >> 2;
	printf("a = %d, a >> 2 = %d\n", a, b);

	return 0;
}
