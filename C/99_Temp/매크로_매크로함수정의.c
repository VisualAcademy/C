/*
	매크로(Macro) : 매크로 함수를 사용, 최대값, 최소값 구함
	매크로 상수
	매크로 함수
*/
#include <stdio.h>

#define CMain void main(void)
#define max(x, y) x > y ? x : y
#define min(x, y) x > y ? y : x

CMain
{
	printf("최대값 : %d\n", max(3, 5));//5
	printf("최소값 : %d\n", min(-3, -5));//-5
}