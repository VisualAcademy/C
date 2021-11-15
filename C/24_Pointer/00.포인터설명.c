// pointer_variable_five.c
/*
값(Value)형 변수/배열
포인터(참조;Reference)형 변수/배열
*/
#include <stdio.h>

main()
{
	// Value Type 변수
	int a = 10;

	// Reference Type 변수 : 포인터형 변수
	int* pa;

	// 참조 추가
	pa = &a;

	*pa = 20;

	// 값형 변수 표현
	printf("%d\n", a);//20
	printf("%d\n", &a);//1244992번지

	// 포인터형 변수 표현
	printf("%d\n", pa);//1244992번지
	printf("%d\n", &pa);//1244980번지
	printf("%d\n", *pa);//20
}
