/*
	 5���� ���� �Է½�Ų �� ����(Rank)�� ���ϴ� ���α׷�
*/
#include <stdio.h>

int main(void)
{
	int intNum[] = { 33, 21, 17, 5, 40 };
	int i, j;
	int intRank, rankArray[5];

	printf("�ʱ� ������ : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");

	//���� �˰���
	for (i = 0; i < 5; i++)
	{
		intRank = 1;          //�� ȸ������ 1������ �ʱ�ȭ
		for (j = 0; j < 5; j++)
		{
			if (intNum[i] < intNum[j])
			{
				intRank += 1;
			}
			rankArray[i] = intRank;
		}
	}

	printf("  �� ��   �� �� \n");
	for (i = 0; i < 5; i++)
	{
		printf("%7d %7d\n", intNum[i], rankArray[i]);
	}
	printf("\n");
}
