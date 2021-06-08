/*
	매크로(Macro) 상수 정의하기
*/
#include <stdio.h>

//매크로 정의 : #define
#define CMain void main(void)
#define MAX 100
#define MIN 0
#define PI 3.141592654

CMain
{
	printf("MAX : %d, MIN : %d \n"
		, MAX, MIN);
	printf("PI : %f\n", PI);
}
