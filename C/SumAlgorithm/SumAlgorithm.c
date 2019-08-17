//[?] n명의 국어 점수 중에서 80점 이상인 점수의 합계
#include <stdio.h>

// 합계 알고리즘(Sum Algorithm): 주어진 범위에 주어진 조건에 해당하는 자료들의 합계
main()
{
	//[0] Initialize
	int sum = 0; // 합계 

	//[1] Input: 입력: n명의 국어 점수
	int scores[6] = { 100, 75, 50, 37, 90, 95 };
	int N = sizeof(scores) / sizeof(int); // 의사코드(슈도코드)

	//[2] Process: 처리: 합계 알고리즘 영역: 주어진 범위에 주어진 조건(필터링)
	for (int i = 0; i < N; i++)
	{
		if (scores[i] >= 80)
		{
			sum += scores[i]; // SUM
		}
	}

	//[3] Output: 출력
	printf("%d명의 점수 중 80점 이상의 총점: %d\n", N, sum);
}
