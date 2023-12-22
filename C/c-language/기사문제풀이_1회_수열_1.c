//1 - 2 + 3 - 4 + ... + 999 - 1000 = ?
#include <stdio.h>

void main()
{
	//[1] Input
	int intSum = 0;
	int i;
	//[2] Process
	for (i = 1; i <= 1000; i++)
	{
		if (i % 2 == 1) // È¦¼ö¹øÂ°
		{
			intSum += i;
		}
		else
		{
			intSum -= i;
		}
	}
	//[3] Output
	printf("1-2+3-4+...+999-1000=%d\n", intSum);//-500
}
