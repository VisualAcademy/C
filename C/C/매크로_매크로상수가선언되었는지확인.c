#include <stdio.h>

//[1] 매크로 선언
//#define HI "안녕하세요"

//[2] 매크로 선언 확인
#if ! defined HI
#define HI "반갑습니다"
#endif

int main(void)
{
	printf("%s\n", HI);
}