// array_total_avg.c
#include <stdio.h>

int main(void)
{
	int kor[3];
	int sum;
	float avg;

	kor[0] = 100;
	kor[1] = 90;
	kor[2] = 80;

	sum = kor[0] + kor[1] + kor[2];  // ÃÑÁ¡
	avg = sum / (float)3.0;			 // Æò±Õ

	printf("ÇÕ°è: %d, Æò±Õ: %.2f\n", sum, avg);

	return 0; 
}
