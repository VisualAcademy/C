// 
#include <stdio.h>

void main()
{
	//[1] Input
	int intNum[] = { 3, 2, 4, 5, 1 };
	int intSum = 0;//����
	int intCount = 0;//ī��Ʈ
	double dblAvg = 0.0;//���
	int i;
	//[2] Process : �հ�, ī��Ʈ, ��� �˰���
	for (i = 0; i < 5; i++)
	{
		if (intNum[i] % 2 == 0)
		{
			intSum += intNum[i];
			intCount++;
		}
	}
	dblAvg = intSum / (double)intCount;
	//[3] Output
	printf("¦�� ������ ���� : %d, �Ǽ� : %d, ��� : %.2f\n"
		, intSum, intCount, dblAvg);
}
