// 2~9단까지 구구단을 출력하는 프로그램을 작성하시오.
// 세로로
// 2 * 1 = 2
// ...
// 9 * 9 = 81
#include <stdio.h>

void main(void)
{
	int i, j, k = 0;

	// 2단만 출력
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("2 * %d = %2d\n", i, (2 * i));
	//}

	// 2단~9단 : 다중 for문
	for (i = 2; i <= 9; i++)		// 2단~9단
	{
		for (j = 1; j <= 9; j++)	// 1~9까지 수
		{
			printf("%d * %d = %2d\n", i, j, (i * j));
		}
		printf("\n"); // 한 단이 끝나면 줄바꿈
	}

	system("pause");
}