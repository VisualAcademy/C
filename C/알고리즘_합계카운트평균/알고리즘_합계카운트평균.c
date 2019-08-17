// 
#include <stdio.h>

void main()
{
	//[1] Input
	int intNum[] = { 3, 2, 4, 5, 1 };
	int intSum = 0;//총점
	int intCount = 0;//카운트
	double dblAvg = 0.0;//평균
	int i;
	//[2] Process : 합계, 카운트, 평균 알고리즘
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
	printf("짝수 점수의 총점 : %d, 건수 : %d, 평균 : %.2f\n"
		, intSum, intCount, dblAvg);
}
