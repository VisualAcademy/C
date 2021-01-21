// 두 수의 차이 구하기 
#include <stdio.h>

main()
{
	int first = 3;
	int second = 5;
	int diff = 0;

	if (first > second)
	{
		diff = first - second;
	}
	else
	{
		diff = second - first;
	}

	printf("%d와 %d의 차이: %d\n", first, second, diff);
}
