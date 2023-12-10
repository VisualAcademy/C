/*
	 5개의 수를 입력시킨 후 순위(Rank)를 구하는 프로그램
*/
#include <stdio.h>

int main(void)
{
	int intNum[] = { 33, 21, 17, 5, 40 };
	int i, j;
	int intRank, rankArray[5];

	printf("초기 데이터 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");

	//순위 알고리즘
	for (i = 0; i < 5; i++)
	{
		intRank = 1;          //매 회전마다 1등으로 초기화
		for (j = 0; j < 5; j++)
		{
			if (intNum[i] < intNum[j])
			{
				intRank += 1;
			}
			rankArray[i] = intRank;
		}
	}

	printf("  점 수   순 위 \n");
	for (i = 0; i < 5; i++)
	{
		printf("%7d %7d\n", intNum[i], rankArray[i]);
	}
	printf("\n");
}
