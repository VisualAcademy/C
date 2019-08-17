//알고리즘
//합계(Sum), 카운트(Count), 평균(Avg)
#include <stdio.h>

void main(void)
{
	//[1] Init
	int i = 0;
	int intSum = 0;//합계
	int intCount = 0;//카운트
	double intAvg = 0;//평균
	//5개의 정수 대입
	int intNum[5] = { 21, 50, 100, 45, 7 };

	//[2] Process
	for (i = 0; i < 5; i++) {
		intSum += intNum[i];//누적(총합)
		intCount = intCount + 1;//증가.
	}
	//평균.
	intAvg = (double)(intSum / intCount);

	//[3] Output
	printf("합계 : %d\n", intSum);
	printf("카운트 : %d\n", intCount);
	printf("평균 : %.2f\n", intAvg);
}
