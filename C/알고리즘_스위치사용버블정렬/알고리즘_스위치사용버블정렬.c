/*
	5���� ���� �Է½�Ų �� ����ġ�� ����� ���� ����(Bubble Sort)�� �̿�
	�������� �����ϴ� ���α׷�
*/
#include <stdio.h>

int main(void)
{
	int intNum[] = { 33, 21, 17, 5, 40 };
	int i, j, temp;
	int intSwitch;

	printf("�ʱ� ������ : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");

	//����
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

	printf("���ĵ� ������ : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intNum[i]);
	}
	printf("\n");
}
