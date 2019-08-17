#include <stdio.h>

void main()
{
	//[1] Init/Input
	int intSum = 0;
	int i;
	//[2] Process : 알고리즘(문제해결능력) : for+if
	for (
		i = 1;							//[1] 초기식 
		i <= 100;						//[2] 조건식
		i++								//[3] 증감식
		)
	{
		if (i % 3 == 0 || i % 4 == 0)	//[4] 필터링(조건식)
		{
			intSum += i;				//[!] 실행문(누적)
		}
	}
	//[3] Output
	printf("결과값 : %d\n", intSum);
}
