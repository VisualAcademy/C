// getch_function.c
// getch(), _getch(): 키보드로부터 하나의 문자 입력
#include <stdio.h>

int main(void)
{
	char grade;

	printf("C 언어 프로그래밍 학점: _\b");

	grade = _getch();

	printf("\n%c 학점입니다.\n", grade);

	return 0;
}
