#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, y1, x2, y2, distance;

	printf("ù ��° ���� x ��ǥ�� �Է��ϼ���: ");
	scanf("%lf", &x1);

	printf("ù ��° ���� y ��ǥ�� �Է��ϼ���: ");
	scanf("%lf", &y1);

	printf("�� ��° ���� x ��ǥ�� �Է��ϼ���: ");
	scanf("%lf", &x2);

	printf("�� ��° ���� y ��ǥ�� �Է��ϼ���: ");
	scanf("%lf", &y2);

	// distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", distance);

	return 0;
}
