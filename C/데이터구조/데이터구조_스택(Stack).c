/*
	Stack : 스택에 데이터를 저장하는 Push 함수와 데이터를 추출하는 Pop 함수를 작성한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MaxSize 3		/* 스택 크기 */
int stack[MaxSize];		/* 스택 */
int sp = 0;				/* 스택 포인터 */

int Push(int);
int Pop(int*);

//메인 함수
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
				printf("스택이 가득 찼습니다.(Overflow)\n");
			}
		}
		if (c == 'o' || c == 'O')
		{
			if (Pop(&n) == -1)
			{
				printf("스택이 비었습니다.(Underflow)\n");
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

//스택에 데이터를 저장하는 함수
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
		return -1;//스택이 가득 찼을 때
	}
}

//스택에서 데이터를 추출하는 함수
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
		return -1;//스택이 비었을 때
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
스택이 가득 찼습니다
>o
stack data--> 30
>o
stack data--> 20
>o
stack data--> 10
>o
스택이 비었습니다.
>
*/
