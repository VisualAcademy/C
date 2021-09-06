// 가까운 값 : 차이의 절대값의 최소값
#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void)
{
	//[1] Input
	int intNum[5] = { 1, 4, 8, 10, 15 };
	int intTarget = 6;//11과 가장 가까운 값
	int intDiff = 0;//차이값
	int intDiffMin = INT_MAX;
	int intNear = 0;//근사값
	int i;
	//[2] Process : 알고리즘(Algorithm)
	for (i = 0; i < 5; i++)
	{
		intDiff = intTarget - intNum[i];
		if (intDiffMin > abs(intDiff))
		{
			intDiffMin = abs(intDiff);//최소값
			intNear = intNum[i];//최소값일때의 데이터
		}
	}
	//[3] Output
	printf("%d와 가장 가까운 값 : %d\n",
		intTarget, intNear);
}
