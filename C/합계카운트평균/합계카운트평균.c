//�˰���
//�հ�(Sum), ī��Ʈ(Count), ���(Avg)
#include <stdio.h>

void main(void)
{
	//[1] Init
	int i = 0;
	int intSum = 0;//�հ�
	int intCount = 0;//ī��Ʈ
	double intAvg = 0;//���
	//5���� ���� ����
	int intNum[5] = { 21, 50, 100, 45, 7 };

	//[2] Process
	for (i = 0; i < 5; i++) {
		intSum += intNum[i];//����(����)
		intCount = intCount + 1;//����.
	}
	//���.
	intAvg = (double)(intSum / intCount);

	//[3] Output
	printf("�հ� : %d\n", intSum);
	printf("ī��Ʈ : %d\n", intCount);
	printf("��� : %.2f\n", intAvg);
}
