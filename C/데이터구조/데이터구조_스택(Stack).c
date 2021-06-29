/*
	Stack : ���ÿ� �����͸� �����ϴ� Push �Լ��� �����͸� �����ϴ� Pop �Լ��� �ۼ��Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MaxSize 3		/* ���� ũ�� */
int stack[MaxSize];		/* ���� */
int sp = 0;				/* ���� ������ */

int Push(int);
int Pop(int*);

//���� �Լ�
int main(void)
{
	int c, n;
	printf(">");
	while ((c = getchar()) != EOF)
	{
		if (c == '\n') continue;
		if (c == 'i' || c == 'I')
		{
			printf("data--> ");
			scanf("%d", &n);
			if (Push(n) == -1)
			{
				printf("������ ���� á���ϴ�.(Overflow)\n");
			}
		}
		if (c == 'o' || c == 'O')
		{
			if (Pop(&n) == -1)
			{
				printf("������ ������ϴ�.(Underflow)\n");
			}
			else
			{
				printf("stack data--> %d\n", n);
			}
		}
		printf(">");
	}

	return 0;
}

//���ÿ� �����͸� �����ϴ� �Լ�
int Push(int n)
{
	if (sp < MaxSize)
	{
		stack[sp] = n;
		sp++;
		return 0;
	}
	else
	{
		return -1;//������ ���� á�� ��
	}
}

//���ÿ��� �����͸� �����ϴ� �Լ�
int Pop(int* n)
{
	if (sp > 0)
	{
		sp--;
		*n = stack[sp];
		return 0;
	}
	else
	{
		return -1;//������ ����� ��
	}
}

/*
>i
data--> 10
>i
data--> 20
>i
data--> 30
>i
data--> 40
������ ���� á���ϴ�
>o
stack data--> 30
>o
stack data--> 20
>o
stack data--> 10
>o
������ ������ϴ�.
>
*/
