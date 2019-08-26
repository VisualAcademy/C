//[?] 1부터 1,000까지의 정수 중 13의 배수의 개수(건수, 횟수)
#include <stdio.h>

// 개수 알고리즘(Count Algorithm): 주어진 범위에 주어진 조건에 해당하는 자료들의 개수
main()
{
	//[1] Input: 1부터 1,000까지의 데이터
	int count = 0; // 개수를 저장할 변수는 0으로 초기화

	//[2] Process: 개수 알고리즘 영역: 주어진 범위에 주어진 조건(필터링)
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 13 == 0)
		{
			//count = count + 1;
			//count += 1;
			count++; // COUNT
		}
	}

	//[3] Output
	printf("1부터 1,000까지의 정수 중 13의 배수의 개수: %d\n", count);
}
