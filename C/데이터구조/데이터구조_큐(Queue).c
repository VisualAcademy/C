/*
	큐 : FIFO 선입선출 방식의 데이터 구조
*/
#include <stdio.h>

#define MaxSize 3	// 큐 크기

int queue[MaxSize];	// 배열을 사용한 큐 만들기
int head = 0;		// 첫번째 데이터를 가리키는 포인터
int tail = 0;		// 마지막 데이터를 가리키는 포인터

int Enqueue(int); // 큐에 데이터를 입력하는 함수
int Dequeue(int*); // 큐에서 데이터를 출력하는 함수

//메인 함수
int main(void)
{
	int c, n;

	printf("큐에 데이터를 입력하시려면, E(e) 키를 입력하시고, \n"
		"큐에서 데이터를 출력하려면, D(d) 키를 입력하세요.\n");
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
				printf("큐가 가득 찼습니다.\n");
			}
		}

		if (c == 'd' || c == 'D')
		{
			if (Dequeue(&n) == -1) {
				puts("큐가 비어있습니다.\n");
			}
			else {
				printf("queue data--> %d\n", n);
			}
		}

		printf("큐에 데이터를 입력하시려면, E(e) 키를 입력하시고, \n"
			"큐에서 데이터를 출력하려면, D(d) 키를 입력하세요.\n");
		printf("]");
	}
}

//큐에 데이터를 입력하는 함수
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
		return -1;	//큐가 가득 찼을 때
	}
}

//큐에서 데이터를 출력하는 함수
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
		return -1;	//큐가 비어있을 때
	}
}