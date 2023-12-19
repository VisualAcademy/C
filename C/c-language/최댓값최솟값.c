#include <stdio.h>
#include <limits.h> // INT_MAX, INT_MIN

main()
{
	//[1] Input
	int intNum[5] = { -3,-2,-4,-5,-1 };
	int i;
	int intMax = INT_MIN;//가장 작은 정수값 또는 주어진 자료의 범위 중 가장 작은 값으로 초기화
	int intMin = INT_MAX;//가장 큰 정수값
	//[2] Process : 
	//[a] 최댓값 알고리즘
	for (i = 0; i < 5; i++) {
		if (intMax < intNum[i]) {
			intMax = intNum[i];
		}
	}
	//[b] 최솟값 알고리즘
	for (i = 0; i < 5; i++) {
		if (intMin > intNum[i]) {
			intMin = intNum[i];
		}
	}
	//[3] Output
	printf("최댓값 : %d\n", intMax);//-1
	printf("최솟값 : %d\n", intMin);//-5
}
