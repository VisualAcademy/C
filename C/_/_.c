/*
	#define
	#if ! defined
	#error
*/
#include <stdio.h>

//매크로 정의
//#define HELLO "안녕하세요..."

//매크로 정의되지 않았을 때 에러 발생
#if ! defined HELLO
#error "HELLO라는 매크로가 정의되지 않았습니다."
#endif

int main(void)
{
	printf("%s\n", HELLO);
}