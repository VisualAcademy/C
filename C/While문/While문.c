// for문(어디부터 어디까지) == while문(조건을 만족하는 동안)
#include <stdio.h>

void main(void)
{
	int i, j, k = 0; // 반복용 변수
	int sum = 0;

	// for문을 통해서 1부터 5까지 출력
	for (i = 1; i <= 5; i++)			// (초기식; 조건식; 증감식)
	{
		printf("%d\t", i);
	}
	printf("\n");

	// while문을 통해서 1부터 5까지 출력
	i = 1;								// 초기식
	while (i <= 5)						// 조건식
	{
		printf("%d\t", i);				// 실행문
		i++;							// 증감식 : 증감식이 없으면 무한루프에 빠짐
	}
	printf("\n");

	// while문을 사용하여 1~100까지 합 출력
	i = 1;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	printf("1~100까지 합 : %d\n", sum);
}