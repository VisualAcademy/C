/*
정렬(Sort) 알고리즘 : 데이터를 순서대로 정렬
*/
#include <stdio.h>

int main(void)
{
	//[1] Input
	int intNum[5] = { 2, 3, 1, 5, 4 };
	int i, j, temp;

	//[2] Process : Selection Sort(선택 정렬)
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
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", intNum[i]);
	}

	return 0; 
}
