#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main()
{
	int num;
	int r; 

	printf("정수 하나를 입력하세요. _\b");

	r = scanf("%d", &num);

	printf("%d개 입력됨: %d\n", r, num);

	return 0; 
}
