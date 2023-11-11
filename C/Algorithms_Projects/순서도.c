// 1부터 100까지 짝수의 합을 구하는 프로그램.
#include <stdio.h>

int main(void)
{
	//[1] Init
	int sum;
	int i;

	//[2] Input
	sum = 0;
	i = 0;

	//[3] Process : Algorithm : 반복문+조건문
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	//[4] Output
	printf("짝수의 합 : %d\n", sum);

	return 0;
}
