#include <stdio.h>

void main()
{
	//[1] Init/Input
	int intSum = 0;
	int i;
	//[2] Process : �˰���(�����ذ�ɷ�) : for+if
	for (
		i = 1;							//[1] �ʱ�� 
		i <= 100;						//[2] ���ǽ�
		i++								//[3] ������
		)
	{
		if (i % 3 == 0 || i % 4 == 0)	//[4] ���͸�(���ǽ�)
		{
			intSum += i;				//[!] ���๮(����)
		}
	}
	//[3] Output
	printf("����� : %d\n", intSum);
}
