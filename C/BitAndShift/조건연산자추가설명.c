/*
조건(3항 연산자) : if~else문으로 대체
?: 연산자 : 항이 3개여서 3항연산자
(조건식) ? 구문1 : 구문2;
*/
#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = 3; b = 5;
	c =
		(a > b) // 조건식
		?
		1       // 조건식이 참이면 1이 c에 저장
		:
		0       // 조건식이 거짓이면 0이 c에 저장
		;
	printf("c : %d\n", c); // 0 

	//system("pause");
	return 0; 
}
