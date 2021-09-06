#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ���� ��� �Լ�
void MakeButterflyLeft(int row)
{
	int i, j = 0; // i������ ��ݺ�, j������ ���ݺ� ��
	int mid = row / 2; // �߰���(����)

	// ��ݺ� : i������ ������ �� �ݺ�(0~row-1)
	for (i = 0; i < row; i++)
	{
		if (i < mid + 1)		// �߰��������� ��ǥ�� ����
		{
			// ���ݺ�
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
		}
		else					// �߰��� ���ķδ� ��ǥ�� ����
		{
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

// ������ ���� ��� �Լ�
void MakeButterflyRight(int row)
{
	int i, j = 0; // i������ ��ݺ�, j������ ���ݺ� ��
	int mid = row / 2; // �߰���(����)

	// ��ݺ� : i������ ������ �� �ݺ�(0~row-1)
	for (i = 0; i < row; i++)
	{
		if (i < mid + 1)		// �߰��������� ��ǥ�� ����
		{
			// ���� ���(���� ����)
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("-");
			}
			// ���ݺ�(��ǥ ����)
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
		}
		else					// �߰��� ���ķδ� ��ǥ�� ����
		{
			// ���� ���(���� ����)
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("-");
			}
			// ���ݺ�(��ǥ ����)
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

// ���� ���� ��� �Լ�
void MakeButterflyAll(int row)
{
	int i, j = 0; // i������ ��ݺ�, j������ ���ݺ� ��
	int mid = row / 2; // �߰���(����)

	// ��ݺ� : i������ ������ �� �ݺ�(0~row-1)
	for (i = 0; i < row; i++)
	{
		if (i < mid + 1)		// �߰��������� ��ǥ�� ����
		{
			// ����
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
			// ���� ���(���� ����)
			for (j = 0; j < (mid - i); j++) // row->mid
			{
				printf(" ");
			}
			// ������
			printf(" ");
			// ������
			// ���� ���(���� ����)
			for (j = 0; j < (mid - i); j++) // row->mid
			{
				printf(" ");
			}
			// ���ݺ�(��ǥ ����)
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
		}
		else					// �߰��� ���ķδ� ��ǥ�� ����
		{
			// ����
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
			// ���� ���(���� ����)
			for (j = 0; j < (i - mid); j++) // (i + 1) : 1~5
			{
				printf(" ");
			}
			// ������
			printf(" ");
			// ������
			// ���� ���(���� ����)
			for (j = 0; j < (i - mid); j++) // (i + 1) : 1~5
			{
				printf(" ");
			}
			// ���ݺ�(��ǥ ����)
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

// ���� �Լ�
int main(void)
{
	int row = 0; // ��� ����

	// �ݺ��ؼ� �޴� ���
	while (1 == 1) // ���� ����
	{
		printf("�ﰢ�� ��ǥ�� ����� ����� �Է��ϼ���(����: 0) : _\b");
		scanf("%d", &row);

		// ���� ����
		if (row == 0)
		{
			printf("\n\n���α׷��� �����մϴ�.\n");
			break; // while�� ����
		}

		// ���� ó�� : ����� �Է�
		if (row < 0)
		{
			printf("\n\n����� ����� �Է��� �����մϴ�.\n\n\n");
		}
		// ���� ó�� : Ȧ���� �Է�
		else if (row % 2 == 0)
		{
			printf("\n\n����� Ȧ���� �Է��� �����մϴ�.\n\n\n");
		}
		// ���������� ������ ���
		else
		{
			MakeButterflyLeft(row); // ���� ���� ���
			MakeButterflyRight(row); // ������ ���� ���
			MakeButterflyAll(row); // ���� ���� ���
		}
	} // end while
}
