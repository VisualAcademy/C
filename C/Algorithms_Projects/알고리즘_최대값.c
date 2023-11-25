#include <stdio.h>
#include <limits.h> // INT_MIN, INT_MAX값 저장된 헤더파일

main()
{
	//[1] Input
	int intNum[5] = { -33, -22, -44, -5, -11 };
	int intMax = INT_MIN; // INT_MIN : 정수형 중 가장 작은값
	int i = 0;
	//[2] Process : 최대값(MAX) 알고리즘
	for (i = 0; i < 5; i++)
	{
		if (intMax < intNum[i])     // 최대값변수보다 큰 데이터
		{
			intMax = intNum[i];     // 해당 데이터를 최대값으로 설정
		}
	}
	//[3] Output
	printf("최대값 : %d\n", intMax);// -5
}
