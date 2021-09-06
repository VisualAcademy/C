// for문 == while문 == do문
#include <stdio.h>

int main(void)
{
	int i, j, k = 0;
	int sum = 0;

	// for문을 사용하여 1~100까지 합
	for (i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);

	// do문을 사용하여 1~100까지 합
	sum = 0;
	i = 1;							// 초기식
	do								// do문 : 선 실행 후 조건 확인
	{
		sum += i;					// 실행문
		i++;						// 증감식
	} while (i <= 100);				// 조건식
	printf("%d\n", sum);
}
