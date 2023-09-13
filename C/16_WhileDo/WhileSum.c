//[?] while 문을 사용하여 1부터 100까지의 합을 구하는 프로그램
#include <stdio.h>

main()
{
	int i = 0;
	int sum = 0;

	i = 1;
	while (i <= 100)
	{
		sum += i;
		i++;
	}

	printf("1부터 100까지의 합: %d\n", sum); // 5050
}
