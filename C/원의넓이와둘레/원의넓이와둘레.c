/*
	문제: 원의 반지름(r)을 키보드로부터 입력받아 원의 넓이와 둘레를 구하는 프로그램을 작성하시오.
	공식 : 원의 넓이 : 파이알제곱, 원의 둘레 : 2파이알
*/
#include <stdio.h>

void main(void)
{
	double r = 0.0; // 반지름 
	double a = 0.0; // 넓이
	double l = 0.0; // 둘레
	double PI = 3.141592; // 원주율

	printf("원의 반지름을 입력하시오. _\b");
	scanf_s("%lf", &r); // %f : float, %lf : double

	// 계산
	a = PI * r * r;
	l = 2 * PI * r;

	// 출력
	printf("원의 지름 : %.5f\n", r * 2);
	printf("원의 넓이 : %.5f\n", a);
	printf("원의 둘레 : %.5f\n", l);
}
