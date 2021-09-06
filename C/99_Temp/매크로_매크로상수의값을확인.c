//결과 안 나옴.
#include <stdio.h>

//매크로 선언
#define PI 314

//매크로 값을 확인
#if PI != 314
#error "PI != 314"
#endif

int main(void)
{
	printf("%.2f\n", PI);
}