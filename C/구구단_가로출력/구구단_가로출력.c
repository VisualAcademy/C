#include <stdio.h>

void main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) // 행(세로) 출력
	{
		for (j = 2; j <= 9; j++) // 열(가로) 출력
		{
			printf("%d*%d=%2d  ", j, i, (j * i));
		}
		printf("\n"); // 1줄 출력 후 줄바꿈
	}

	system("pause");
}
