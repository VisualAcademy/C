/*
	공용체를 사용한 가변형 데이터 타입 선언
*/
#include <stdio.h>

typedef union Variable
{
	int i;
	double d;
}var;

void main(void)
{
	var va;

	va.i = 5;

	printf("va.i의 값 : %d\n", va.i);

	va.d = 3.141592;

	printf("va.d의 값 : %f\n", va.d);

	printf("va.i의 값 : %d\n", va.i);
}