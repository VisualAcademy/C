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
			intSum++;//¦���϶����� 1�� ����
		}
	}
	//[3] Output
	printf("Ȧ���� �� : %d\n", intSum);//?
}
