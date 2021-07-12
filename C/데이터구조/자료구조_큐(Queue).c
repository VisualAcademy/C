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

	puts("������ 1*2ó�� �Է��ϰ� ����Ű�� ġ����.");
	puts("�ƹ��͵� �Է����� ������ ����� ����˴ϴ�.");

	while (1)
	{
		printf("���� : ");
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
			puts("�߸��� �����ڸ� ����Ͽ����ϴ�.");
			continue;
		}

		if (add(value1) == -1)
		{
			puts("�� �̻� �߰��� �� �����ϴ�.");
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

	printf("����� ������ %d �Դϴ�.\n", value1);
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