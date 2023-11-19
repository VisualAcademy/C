// 1/2 - 2/3 + ... + 98/99 - 99/100 = ?
#include <stdio.h>

int main(void)
{
	//[1] Input
	double dblNum = 0.0;//전체 합
	int i = 0;
	//[2] Process
	i = 1;
	while (i <= 99)
	{
		if (i % 2 == 1)
		{
			dblNum += i / (double)(i + 1);
		}
		else
		{
			dblNum -= i / (double)(i + 1);
		}
		i++;
	}
	//[3] Output
	printf("결과값 : %.4f\n", dblNum);

	return 0;
}
