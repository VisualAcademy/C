//[?] 주어진 데이터에서 가장 많이 나타난(중복된) 값
#include <stdio.h>
#include <limits.h>

#define N 5

// 최빈값 알고리즘(Mode Algorithm): 점수 인덱스(0~n)의 개수(COUNT)의 최댓값(MAX)
main()
{
	//[1] Input: 범위는 0부터 n점까지의 점수만 들어온다고 가정
	int scores[N] = { 1, 3, 4, 3, 5 }; // 0~5까지만 들어온다고 가정
	int indexes[N + 1] = { 0, }; // 0~5까지 점수 인덱스의 개수 저장
	int max = INT_MIN; // MAX 알고리즘 적용
	int mode = 0; // 최빈값이 담길 그릇

	//[2] Process: Data -> Index -> Count -> Max -> Mode
	for (int i = 0; i < N; i++)
	{
		indexes[scores[i]]++; // COUNT
	}
	for (int i = 0; i < N + 1; i++)
	{
		if (indexes[i] > max)
		{
			max = indexes[i]; // MAX(2)
			mode = i; // MODE(3)
		}
	}

	//[3] Output
	printf("최빈값: %d -> %d번 나타남\n", mode, max);
}
