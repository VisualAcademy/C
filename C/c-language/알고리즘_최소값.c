#include <stdio.h>
#include <limits.h>

int main(void)
{
	//[1] Input
	int intNum[5] = { -33, -22, -44, -5, -11 };
	int intMin = INT_MAX;//�������� ���� �� �ִ� ���� ū ��
	int i = 0;

	//[2] Process : �ּڰ�(MIN) �˰���
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
	printf("�ּڰ� : %d\n", intMin);// -44

	return 0;
}
