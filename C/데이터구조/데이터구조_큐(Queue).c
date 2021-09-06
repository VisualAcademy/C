/*
	ť : FIFO ���Լ��� ����� ������ ����
*/
#include <stdio.h>

#define MaxSize 3	// ť ũ��

int queue[MaxSize];	// �迭�� ����� ť �����
int head = 0;		// ù��° �����͸� ����Ű�� ������
int tail = 0;		// ������ �����͸� ����Ű�� ������

int Enqueue(int); // ť�� �����͸� �Է��ϴ� �Լ�
int Dequeue(int*); // ť���� �����͸� ����ϴ� �Լ�

//���� �Լ�
int main(void)
{
	int c, n;

	printf("ť�� �����͸� �Է��Ͻ÷���, E(e) Ű�� �Է��Ͻð�, \n"
		"ť���� �����͸� ����Ϸ���, D(d) Ű�� �Է��ϼ���.\n");
	printf("]");

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			continue;
		}

		if (c == 'x' || c == 'X')
		{
			exit(1);
		}

		if (c == 'e' || c == 'E')
		{
			printf("data--> ");
			scanf("%d", &n);
			if (Enqueue(n) == -1)
			{
				printf("ť�� ���� á���ϴ�.\n");
			}
		}

		if (c == 'd' || c == 'D')
		{
			if (Dequeue(&n) == -1) {
				puts("ť�� ����ֽ��ϴ�.\n");
			}
			else {
				printf("queue data--> %d\n", n);
			}
		}

		printf("ť�� �����͸� �Է��Ͻ÷���, E(e) Ű�� �Է��Ͻð�, \n"
			"ť���� �����͸� ����Ϸ���, D(d) Ű�� �Է��ϼ���.\n");
		printf("]");
	}
}

//ť�� �����͸� �Է��ϴ� �Լ�
int Enqueue(int n)
{
	if ((tail + 1) % MaxSize != head)
	{
		queue[tail] = n;
		tail++;
		tail = tail % MaxSize;
		return 0;
	}
	else
	{
		return -1;	//ť�� ���� á�� ��
	}
}

//ť���� �����͸� ����ϴ� �Լ�
int Dequeue(int* n)
{
	if (tail != head)
	{
		*n = queue[head];
		head++;
		head = head % MaxSize;
		return 0;
	}
	else
	{
		return -1;	//ť�� ������� ��
	}
}