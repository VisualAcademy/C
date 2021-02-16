// for 문을 사용하여 1부터 4까지의 팩토리얼 값을 출력하는 프로그램
#include <stdio.h>

void main()
{
	int i, j;
	int fact;

	for (i = 1; i <= 4; i++)
	{
		printf("%2d! -> ", i);
		fact = 1; // 1로 초기화
		for (j = 1; j <= i; j++)
		{
			fact = fact * j; // 1 * (1 * 2 * 3 * 4)
		}
		printf("%2d\n", fact);
	}

	//getchar();
}
