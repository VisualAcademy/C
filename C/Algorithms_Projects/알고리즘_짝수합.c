#include <stdio.h>

main()
{
	//[1] Init / Input
	int intNum[5] = { 3, 4, 2, 2, 1 };
	int intSum = 0;
	int i;
	//[2] Process
	for (i = 0; i < 5; i++)
	{
		if (intNum[i] % 2 == 0)
		{
			intSum++;//짝수일때마다 1씩 증가
		}
	}
	//[3] Output
	printf("홀수의 합 : %d\n", intSum);//?
}
