// continue �� : �ݺ������� �̵�
// break �� : �ݺ����� ��������
// ����: 1~100������ ���� �߿��� 3�� ��� �Ǵ� 7�� ����� ������ ���� ��
#include <stdio.h>

int main(void)
{
	//[1] Input / Initialize
	int i, j, k = 0;
	int sum = 0;
	//[2] Process
	for (i = 1; i <= 1000; i++)
	{
		if (i > 100)
		{
			break;
			printf("������� ����\n");
		}
		if (i % 3 == 0 || i % 7 == 0)
		{
			// 3�� ��� �Ǵ� 7�� ���
			continue;
			printf("������� ����\n");
		}
		sum += i;
	}
	//[3] Output
	printf("�� : %d\n", sum);
}
