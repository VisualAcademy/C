//[?] 주어진(지정한 범위) 데이터의 순위(등수)를 구하는 로직
#include <stdio.h>

// 순위 알고리즘(Rank Algorithm): 점수 데이터에 대한 순위 구하기
main()
{
	//[1] Input
	int scores[5] = { 90, 87, 100, 95, 80 }; // 등수: 3, 4, 1, 2, 5
	int rankings[5] = { 0, }; // 모두 0으로 초기화
	int N = sizeof(scores) / sizeof(int); 

	//[2] Process: RANK
	for (int i = 0; i < N; i++)
	{
		rankings[i] = 1; // 1등으로 초기화, 순위 배열을 매 회전마다 1등으로 초기화
		for (int j = 0; j < N; j++)
		{
			if (scores[i] < scores[j]) // 현재(i)와 나머지들(j) 비교
			{
				rankings[i]++; // RANK: 나보다 큰 점수가 나오면 순위 1증가
			}
		}
	}

	//[3] Output
	for (int i = 0; i < N; i++)
	{
		printf("%3d점: %d등\n", scores[i], rankings[i]);
	}
}
