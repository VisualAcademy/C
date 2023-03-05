/*
	예제_원의넓이와둘레길이.c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 상수 선언: PI = 3.141592654...
#define PI 3.141592654f

int main(void)
{
	// 변수 선언
	float r;

	// 사용자로부터 반지름 입력
	printf("반지름: ");
	scanf("%f", &r);

	// 처리 및 출력
	printf("원의 넓이: %f\n", (r * r * PI));
	printf("원의 둘레 길이: %f\n", (2 * r * PI));

	return 0;
}
