// 3차원 배열 : 층*행*열 : int kor[2][2][2] : 2 * 2 * 2 = 8
#include <stdio.h>

int main(void)
{
	int i, j, k = 0;

	//// 3차원 배열 선언
	//int num[2][2][2];

	//num[0][0][0] = 1;
	//num[0][0][1] = 2;
	//num[0][1][0] = 3;
	//num[0][1][1] = 4;

	//num[1][0][0] = 5;
	//num[1][0][1] = 6;
	//num[1][1][0] = 7;
	//num[1][1][1] = 8;

	int num[2][2][2] = { {{1, 2}, {3, 4}}, {{5, 6}, {7, 8}} };

	for (i = 0; i < 2; i++)						// 층 반복
	{
		for (j = 0; j < 2; j++)					// 행 반복
		{
			for (k = 0; k < 2; k++)				// 열 반복
			{
				printf("%d\t", num[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
