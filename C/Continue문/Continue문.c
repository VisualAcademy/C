// continue 문 : 반복문으로 이동
// break 문 : 반복문을 빠져나감
// 문제: 1~100까지의 정수 중에서 3의 배수 또는 7의 배수를 제외한 수의 합
#include <stdio.h>

int main(void)
{
	//[1] Input / Initialize
	int i, j, k = 0;
	int sum = 0;
	//[2] Process
	for (i = 1; i <= 1000; i++)
	{
		if (i > 100)
		{
			break;
			printf("실행되지 않음\n");
		}
		if (i % 3 == 0 || i % 7 == 0)
		{
			// 3의 배수 또는 7의 배수
			continue;
			printf("실행되지 않음\n");
		}
		sum += i;
	}
	//[3] Output
	printf("합 : %d\n", sum);
}
