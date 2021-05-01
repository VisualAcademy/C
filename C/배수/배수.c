// 1~100까지 3의 배수 또는 4의 배수의 합 : for, while, do
#include <stdio.h>

void main(void)
{
	//[1] Input
	int i, j, k = 0;
	int sum = 0;
	//[2] Process : 알고리즘(문제 해결 능력) : (for + if)
	//// for문 사용
	//for (i = 1; i <= 100; i++)			// 초기식; 조건식; 증감식
	//{
	//	if (i % 3 == 0 || i % 4 == 0)	// 필터링(조건처리)
	//	{
	//		sum += i;					// 실행문
	//	}
	//}
	//// while문 사용
	//i = 1;								// 초기식
	//while (i <= 100)					// 조건식
	//{
	//	if (i % 3 == 0 || i % 4 == 0)	// 필터링
	//	{
	//		sum += i;					// 실행문
	//	}
	//	i++;							// 증감식
	//}

	// do문 사용
	i = 1;									// 초기식
	do
	{
		if (i % 3 == 0 || i % 4 == 0)		// 필터링
		{
			sum += i;						// 실행문
		}
		i++;								// 증감식
	} while (i <= 100);						// 조건식

	//[3] Output
	printf("배수의 합 : %d\n", sum);
}
