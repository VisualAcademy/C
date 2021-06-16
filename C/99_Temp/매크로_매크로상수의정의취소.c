#include <stdio.h>

//#define HI "안녕"

#if defined HI		//정의 확인
#undef HI			//정의 취소
#define HI "방가"	//재정의
#else
#define HI "안녕"	//매크로 정의
#endif

void main(void)
{
	printf("%s \n", HI);
}