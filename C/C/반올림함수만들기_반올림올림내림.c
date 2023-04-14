/*
	�ݿø�, �ø�, ����
*/
#include <stdio.h>

// Round() �Լ�
// value : ��ȯ��ų ��
// digits : �ڸ���
double Round(double value, int digits)
{
	int i = 0;
	double p = 0.5;
	double m = 1;
	if (digits >= 2)
	{
		for (i = 0; i < digits - 1; i++)
		{
			p /= 10.0;
			m *= 10.0;
		}
	}
	return ((int)((value + p) * m) / (double)m);
}

int main(void)
{
	double dblTemp = 0.0;//�ӽú���
	double dblNum = 3.777;
	printf("%.3f\n", Round(3.777, 3));
	printf("�⺻ : %f\n"
		, dblNum);//3.777000
	printf("������ ��ȯ : %d\n"
		, (int)dblNum);//3
	dblTemp = //1�ڸ� �ݿø�
		(int)(dblNum + 0.5);
	printf("�Ҽ��� 1�ڸ� �ݿø� : %.3f\n"
		, dblTemp);//4.0
	dblTemp = //2�ڸ� �ݿø� : 3.777->3.8
		(int)((dblNum + 0.05) * 10) / 10.0;
	printf("�Ҽ��� 2�ڸ� �ݿø� : %.3f\n"
		, dblTemp);//3.8
	dblTemp = //3�ڸ� �ݿø� : 3.777->3.78
		(int)((dblNum + 0.005) * 100) / 100.0;
	printf("�Ҽ��� 3�ڸ� �ݿø� : %.3f\n"
		, dblTemp);//3.78
	dblTemp = //2�ڸ����� �ø� : 3.777->3.80
		(int)((dblNum + 0.09) * 10) / 10.0;
	printf("�Ҽ��� 2�ڸ� �ø� : %.3f\n"
		, dblTemp);//3.80
	dblTemp = //2�ڸ����� ���� : 3.777->3.70
		(int)(dblNum * 10) / 10.0;
	printf("�Ҽ��� 2�ڸ� ���� : %.3f\n"
		, dblTemp);//3.70

	return 0;
}
