/*
	5���� ���� �Է½�Ų �� ���� ����(Selection Sort)�� �̿�
	�������� �����ϴ� ���α׷�
*/
#include <stdio.h>

void main(void)
{
	//[1] Input
	int intNum[] = { 33, 21, 17, 5, 40 };
	int i, j, temp;

	printf("�ʱ� ������ : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");

	//[2] Process : ����
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
	printf("���ĵ� ������ : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");
}
