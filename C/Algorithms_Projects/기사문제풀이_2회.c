// 1���� 1000���� Ȧ���� �� : ?
// 1���� 1000���� ¦���� �� : ?
#include <stdio.h>

int main(void)
{
	//[1] Input
	int intSum1 = 0;//Ȧ����
	int intSum2 = 0;//¦����
	int i;

	//[2] Process
	i = 1;					//�ʱ��
	do
	{
		if (i % 2 != 0)		//���͸�+���๮
		{
			intSum1 += i;
		}
		else
		{
			intSum2 += i;
		}
		i++;				//������
	} while (i <= 1000);		//���ǽ�

	//[3] Output
	printf("Ȧ���� : %d\n", intSum1);
	printf("¦���� : %d\n", intSum2);

	return 0; 
}
