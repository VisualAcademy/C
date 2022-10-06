/*
	변수(일반, 포인터)의 주소 출력: &
*/
#include <stdio.h>

int main(void)
{
	int i;
	int* p;

	i = 100;
	p = &i;

	printf("일반변수 i의 값: %d\n", i); // 100
	printf("포인터변수 p가 참조하고 있는 변수의 값: %d\n", *p); // 100

	printf("일반변수 i의 주소값: %u\n", &i); // %u(unsigned): 부호없는 정수
	printf("포인터변수 p의 주소값: %u\n", &p); // 
	printf("포인터변수 p의 값: %u\n", p); // i변수의 주솟값과 동일

	return 0;
}
