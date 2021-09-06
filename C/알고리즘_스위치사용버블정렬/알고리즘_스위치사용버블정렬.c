/*
	5개의 수를 입력시킨 후 스위치를 사용한 버블 정렬(Bubble Sort)을 이용
	오름차순 정렬하는 프로그램
*/
#include <stdio.h>

int main(void)
{
	int intNum[] = { 33, 21, 17, 5, 40 };
	int i, j, temp;
	int intSwitch;

	printf("초기 데이터 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");

	//정렬
	for (i = 0; i < 5 - 1; i++)
	{
		intSwitch = 0;
		for (j = 0; j < 5 - i; j++)
		{
			if (intNum[j] > intNum[j + 1])
			{
				temp = intNum[i];
				intNum[i] = intNum[j + 1];
				intNum[j + 1] = temp;
				intSwitch = 1;
			}
		}
		if (intSwitch == 0)
		{
			break;
		}
	}

	printf("정렬된 데이터 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");
}
