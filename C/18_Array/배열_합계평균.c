#include <stdio.h>

void main()
{
	int kor[3];
	int sum;
	float avg;

	kor[0] = 100;
	kor[1] = 90;
	kor[2] = 80;

	sum = kor[0] + kor[1] + kor[2];  // ����
	avg = sum / (float)3.0;			 // ���

	printf("�հ�: %d, ���: %.2f\n", sum, avg);
}
