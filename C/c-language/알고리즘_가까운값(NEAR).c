#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>	//INT_MAX

int main(void)
{
	//[1] Init/Input
	//���� ������
	int intData[] = { 33, 23, 22, 34, 36 };

	//���� �˰���
	//Ÿ�� ������ : �־��� ��(�� ���� ���� ����� ������ �˻�)
	int intTargetData = 1;
	int intDiff = 0;//���̰�
	int intDiffMin = INT_MAX;//���� �ּҰ�
	int intNear = 0;//����� ��
	int i = 0;

	//[2] Process
	//����(�ٻ簪;NEAR) �˰��� ����
	for (i = 0; i < 5; i++)
	{
		intDiff = intData[i] - intTargetData;
		if (abs(intDiffMin) > abs(intDiff))
		{
			intDiffMin = intDiff;
			intNear = intData[i];
		}
	}

	//[3] Output
	printf("���� ������ : \n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intData[i]);
	}
	printf("\n%d�� ���� ����� �� : %d\n"
		, intTargetData, intNear);

	return 0; 
}
