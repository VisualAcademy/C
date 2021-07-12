#include <stdio.h>	//puts, gets, printf
#include <string.h>	//strlen, memset, memcpy
#include <stdlib.h>	//atoi

int add(int value);
int delete(int* value);

#define QUEUE_MAX 100

typedef struct tagQueue
{
	int array[QUEUE_MAX];
	int front;
	int rear;
}Queue;

Queue queue;

void main(void)
{
	char buff[100], temp[100];
	char* op = "+-*/%";
	int index;
	int value1 = 0, value2 = 0;

	queue.front = queue.rear = 0;

	puts("계산식을 1*2처럼 입력하고 엔터키를 치세요.");
	puts("아무것도 입력하지 않으면 계산이 종료됩니다.");

	while (1)
	{
		printf("계산식 : ");
		gets(buff);

		if (strlen(buff) == 0)
		{
			break;
		}

		memset(temp, 0, sizeof(temp));

		index = strcspn(buff, op);

		memcpy(temp, buff, index);

		value1 = atoi(temp);
		value2 = atoi(&buff[index + 1]);

		switch (buff[index])
		{
		case '+': value1 += value2; break;
		case '-': value1 -= value2; break;
		case '*': value1 *= value2; break;
		case '/': value1 /= value2; break;
		case '%': value1 %= value2; break;
		defalut:
			puts("잘못된 연산자를 사용하였습니다.");
			continue;
		}

		if (add(value1) == -1)
		{
			puts("더 이상 추가할 수 없습니다.");
		}

		printf("%s = %d, queue.rear = %d\n\n", buff, value1, queue.rear);
	}

	value1 = 0;

	while (1)
	{
		if (delete(&value2) == -1)
		{
			break;
		}

		value1 += value2;
	}

	printf("계산의 총합은 %d 입니다.\n", value1);
}

int add(int value)
{
	if (queue.rear == QUEUE_MAX)
		return -1;
	queue.array[queue.rear++] = value;
	return 0;
}

int delete(int* value)
{
	if (queue.front == queue.rear || queue.front == QUEUE_MAX) return -1;

	*value = queue.array[queue.front++];
	return 0;
}