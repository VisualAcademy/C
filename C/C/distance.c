#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, y1, x2, y2, distance;

	printf("첫 번째 점의 x 좌표를 입력하세요: ");
	scanf("%lf", &x1);

	printf("첫 번째 점의 y 좌표를 입력하세요: ");
	scanf("%lf", &y1);

	printf("두 번째 점의 x 좌표를 입력하세요: ");
	scanf("%lf", &x2);

	printf("두 번째 점의 y 좌표를 입력하세요: ");
	scanf("%lf", &y2);

	// distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	printf("두 점 사이의 거리는 %lf입니다.\n", distance);

	return 0;
}
