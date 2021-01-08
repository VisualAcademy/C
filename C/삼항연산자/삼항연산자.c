// 3항(조건) 연산자 : ?:
// (조건식) ? 참일때 : 거짓일때;
#include <stdio.h>

void main(void)
{
	int a = 3;
	char r;

	// 3항 연산자로 조건 처리
	r = (a % 2 == 0) ? 'T' : 'F';





	printf("%c\n", r); // F
}
