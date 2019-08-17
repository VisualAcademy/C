/*
	5개의 수를 입력시킨 후 선택 정렬(Selection Sort)을 이용
	오름차순 정렬하는 프로그램
*/
#include <stdio.h>

void main(void)
{
	//[1] Input
	int intNum[] = { 33, 21, 17, 5, 40 };
	int i, j, temp;

	printf("초기 데이터 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");

	//[2] Process : 정렬
	for (i = 0; i < 5 - 1; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (intNum[i] > intNum[j])
			{
				temp = intNum[i];
				intNum[i] = intNum[j];
				intNum[j] = temp;
			}
		}
	}

	//[3] Output
	printf("정렬된 데이터 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");
}
