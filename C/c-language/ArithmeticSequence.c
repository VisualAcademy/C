//[?] 1부터 20까지의 정수 중 홀수의 합을 구하는 프로그램 
// 1, 3, 5, 7, 9, ... 
#include <stdio.h>

// 등차수열(Arithmetic Sequence): 연속하는 두 수의 차이가 일정한 수열 
main()
{
	//[1] Input
	int sum = 0; // SUM

	//[2] Process
	for (int i = 1; i <= 20; i++) // 주어진 범위 
	{
		if (i % 2 != 0) // 주어진 조건: 필터링(홀수) 
		{
			sum += i; // SUM
			printf("%d ", i); // SEQUENCE -> Arithmetic Sequence
		}
	}

	//[3] Output
	printf("\n1부터 20까지의 홀수의 합: %d\n", sum); // 100
}
