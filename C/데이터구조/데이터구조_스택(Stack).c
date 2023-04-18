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

//함수명: Push
//인자: 정수형 변수 n (스택에 저장할 데이터)
//반환값: 정수형 변수
//기능: 스택에 데이터를 저장하는 함수

int Push(int n)
{
	if (sp < MaxSize) // 스택이 꽉 차지 않은 경우
	{
		stack[sp] = n; // 스택에 데이터를 저장
		sp++; // 스택 포인터를 증가시킴
		return 0; // 저장이 성공적으로 이루어졌을 때 반환값
	}
	else // 스택이 꽉 찬 경우
	{
		return -1; // 스택이 가득 찼다는 오류 코드를 반환
	}
}

// 함수명: Pop
// 인자: 정수형 포인터 n (추출한 데이터를 저장할 변수)
// 반환값: 정수형 변수
// 기능: 스택에서 데이터를 추출하는 함수

int Pop(int* n)
{
	if (sp > 0) // 스택이 비어있지 않은 경우
	{
		sp--; // 스택 포인터를 감소시킴
		*n = stack[sp]; // 추출한 데이터를 n이 가리키는 변수에 저장
		return 0; // 추출이 성공적으로 이루어졌을 때 반환값
	}
	else // 스택이 비어있는 경우
	{
		return -1; // 스택이 비어있다는 오류 코드를 반환
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
