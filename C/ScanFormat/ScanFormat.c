#define _CRT_SECURE_NO_WARNINGS
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
