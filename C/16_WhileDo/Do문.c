// for�� == while�� == do��
#include <stdio.h>

int main(void)
{
	int i, j, k = 0;
	int sum = 0;

	// for���� ����Ͽ� 1~100���� ��
	for (i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);

	// do���� ����Ͽ� 1~100���� ��
	sum = 0;
	i = 1;							// �ʱ��
	do								// do�� : �� ���� �� ���� Ȯ��
	{
		sum += i;					// ���๮
		i++;						// ������
	} while (i <= 100);				// ���ǽ�
	printf("%d\n", sum);
}
