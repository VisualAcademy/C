/*
	�̺� Ž���� : �����Ͱ� ���ĵǾ� ���� �� ��ȿ��
*/
#include <stdio.h>

#define N 5 //������ ��

int main(void)
{
	static int intNum[] = { 21, 33, 35, 47, 59 };//���ĵǾ� �־�� ��.
	int key = 0; // �˻��� Ű(������) ����
	int low = 0; // ���� �ε���
	int high = 0; // ������ �ε���
	int mid = 0; // ��� �ε��� : N / 2
	int flag = 0; // �� �Ǵ� ����

	printf("Ž���� ������ : "); scanf("%d", &key);
	low = 0; high = N - 1;
	while (low <= high)
	{
		printf("�ݺ�....\n");
		mid = (low + high) / 2;
		if (intNum[mid] == key)
		{
			printf("%d�� %d ��°�� �ֽ��ϴ�.\n", intNum[mid], mid);
			flag = 1;
			break;
		}
		if (intNum[mid] < key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (flag != 1)
	{
		printf("ã�� �� �����ϴ�.\n");
	}
}
