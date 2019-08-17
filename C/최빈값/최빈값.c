/*
	최빈값(MODE) 알고리즘 : 주어진 조건내에게 가장 많이 나타나는 값
	빈도의 카운트(COUNT)의 최대값(MAX)
*/
#include <stdio.h>
#include <math.h>
#include <limits.h>	//INT_MAX

#define N 10

void main(void)
{
	//[1] Init/Input
	//원본 데이터
	int intData[N] = { 1, 4, 5, 4, 7, 10, 10, 7, 8, 10 };
	int intMode[N + 1] = { 0, }; //0부터 10까지 : N = 11
	int i = 0;
	int intMax = 0;
	int intIndex = 0;

	//[2] Process
	//[a] Index -> Count
	for (i = 0; i < N; i++)
	{
		intMode[intData[i]] = intMode[intData[i]] + 1;
	}

	for (i = 0; i <= N; i++)
	{
		printf("%d ", intMode[i]);
	}

	//[b] Count -> Max
	intMax = intMode[0];
	for (i = 0; i < N; i++)
	{
		if (intMode[intData[i]] > intMax)
		{
			intMax = intMode[intData[i]];
			intIndex = intData[i];
		}
	}

	//[3] Output
	printf("%d이(가) %d번 나타남.\n", intIndex, intMax);
}
