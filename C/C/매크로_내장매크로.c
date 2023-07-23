#include <stdio.h>

int main(void)
{
	printf("현재 파일명 : %s\n", __FILE__);
	printf("현재 컴파일 날짜 : %s\n", __DATE__);
	printf("현재 컴파일 시간 : %s\n", __TIME__);
	printf("현재 코드의 라인번호 : %d\n", __LINE__);//8

	return 0; 
}
