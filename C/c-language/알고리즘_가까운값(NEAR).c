#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>	//INT_MAX

int main(void)
{
	//[1] Init/Input
	//원본 데이터
	int intData[] = { 33, 23, 22, 34, 36 };

	//가까운값 알고리즘
	//타겟 데이터 : 주어진 값(이 값에 가장 가까운 데이터 검색)
	int intTargetData = 1;
	int intDiff = 0;//차이값
	int intDiffMin = INT_MAX;//차이 최소값
	int intNear = 0;//가까운 값
	int i = 0;

	//[2] Process
	//가까운값(근사값;NEAR) 알고리즘 적용
	for (i = 0; i < 5; i++)
	{
		intDiff = intData[i] - intTargetData;
		if (abs(intDiffMin) > abs(intDiff))
		{
			intDiffMin = intDiff;
			intNear = intData[i];
		}
	}

	//[3] Output
	printf("원본 데이터 : \n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", intData[i]);
	}
	printf("\n%d와 가장 가까운 값 : %d\n"
		, intTargetData, intNear);

	return 0; 
}
