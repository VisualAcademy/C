#include <stdio.h>
#include <limits.h>

main()
{
	//[1] Input
	int intNum[5] = { -33, -22, -44, -5, -11 };
	int intMin = INT_MAX;//�������� ���� �� �ִ� ���� ū ��
	int i = 0;
	//[2] Process : �ּҰ�(MIN) �˰���
	i = 0;
	while (i < 5)
	{
		if (intMin > intNum[i])
		{
			intMin = intNum[i];
		}
		i++;
	}
	//[3] Output
	printf("�ּҰ� : %d\n", intMin);// -44
}
