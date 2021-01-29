// 반복문에서 continue 문을 사용하여 다음 반복으로 이동하기
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 == 0)
		{
			continue; // 짝수 건너뛰기
		}
		printf("%d\n", i);
	}

	return 0;
}
