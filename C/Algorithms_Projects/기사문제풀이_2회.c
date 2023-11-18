// 1부터 1000까지 홀수의 합 : ?
// 1부터 1000까지 짝수의 합 : ?
#include <stdio.h>

int main(void)
{
	//[1] Input
	int intSum1 = 0;//홀수합
	int intSum2 = 0;//짝수합
	int i;

	//[2] Process
	i = 1;					//초기식
	do
	{
		if (i % 2 != 0)		//필터링+실행문
		{
			intSum1 += i;
		}
		else
		{
			intSum2 += i;
		}
		i++;				//증감식
	} while (i <= 1000);		//조건식

	//[3] Output
	printf("홀수합 : %d\n", intSum1);
	printf("짝수합 : %d\n", intSum2);

	return 0; 
}
