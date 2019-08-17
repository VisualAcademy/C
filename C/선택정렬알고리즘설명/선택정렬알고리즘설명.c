#include <stdio.h>
#define N 5
void main()
{
	//[1] Input
	int intNum[N] = { 3, 2, 1, 4, 5 };
	int k;
	//[2] Process : Algorithm : Selection Sort
	int i, j, temp;
	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			// > ��������(Ascending), < ��������(Descending)
			if (intNum[i] > intNum[j])
			{
				temp = intNum[i];
				intNum[i] = intNum[j];
				intNum[j] = temp;
			}
		}
		printf("%dȸ�� : ", i + 1);
		for (k = 0; k < 5; k++)
		{
			printf("%d\t", intNum[k]);
		}printf("\n");
	}
	//[3] Output
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", intNum[i]);
	}printf("\n");
}
