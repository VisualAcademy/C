// ����� �� : ������ ���밪�� �ּҰ�
#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void)
{
	//[1] Input
	int intNum[5] = { 1, 4, 8, 10, 15 };
	int intTarget = 6;//11�� ���� ����� ��
	int intDiff = 0;//���̰�
	int intDiffMin = INT_MAX;
	int intNear = 0;//�ٻ簪
	int i;
	//[2] Process : �˰���(Algorithm)
	for (i = 0; i < 5; i++)
	{
		intDiff = intTarget - intNum[i];
		if (intDiffMin > abs(intDiff))
		{
			intDiffMin = abs(intDiff);//�ּҰ�
			intNear = intNum[i];//�ּҰ��϶��� ������
		}
	}
	//[3] Output
	printf("%d�� ���� ����� �� : %d\n",
		intTarget, intNear);
}
