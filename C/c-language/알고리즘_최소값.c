#include <stdio.h>
#include <limits.h>

int main(void)
{
	//[1] Input
	int intNum[5] = { -33, -22, -44, -5, -11 };
	int intMin = INT_MAX;//정수형이 가질 수 있는 가장 큰 값
	int i = 0;

	//[2] Process : 최솟값(MIN) 알고리즘
	i = 0;
	while (i < 5)
	{
		if (intMin > intNum[i])
		{
			intMin = intNum[i];
		}
		i++;
	}

	//[3] Output
	printf("최솟값 : %d\n", intMin);// -44

	return 0;
}
