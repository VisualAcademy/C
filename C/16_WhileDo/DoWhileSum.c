//[?] do ���� ����Ͽ� 1���� 5������ ��
#include <stdio.h>

main()
{
	int sum = 0;

	int i = 1;					// �ʱ��
	do
	{
		sum += i;				// ���๮
		i++;					// ������
	} while (i <= 5);			// ���ǽ�
	printf("�հ�: %d\n", sum);	// 15
}
