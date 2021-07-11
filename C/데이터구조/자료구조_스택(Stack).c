#include <stdio.h>		//puts, gets, printf
#include <string.h>		//strlen, memset, memcpy
#include <stdlib.h>		//atoi

int Push(int value);	//���ÿ� ������ �Է��ϴ� �Լ�
int Pop(int* value);	//���ÿ��� ������ ����ϴ� �Լ�

#define STACK_MAX 100 //���� �ִ밪

typedef struct tagStack
{
	int Array[STACK_MAX];
	int Top;
	int Bottom;
}Stack;

Stack _stack;//���� �ν��Ͻ� ����

void main(void)
{
	char buffer[100], temp[100];
	char* opr = "+-*/%";
	int index;
	int value1 = 0, value2 = 0;

	_stack.Top = STACK_MAX;

	puts("������ 1*2ó�� �Է��ϰ� ����Ű�� ġ����.");
	puts("�ƹ��͵� �Է����� ������ ����� ����˴ϴ�.");

	for (;;)
	{
		printf("���� : ");
		gets(buffer);

		if (strlen(buffer) == 0) break;

		memset(temp, 0, sizeof(temp));

		index = strcspn(buffer, opr);

		memcpy(temp, buffer, index);

		value1 = atoi(temp);
		value2 = atoi(&buffer[index + 1]);

		switch (buffer[index])
		{
		case '+': value1 += value2; break;
		case '-': value1 -= value2; break;
		case '*': value1 *= value2; break;
		case '/': value1 /= value2; break;
		case '%': value1 %= value2; break;
		default:
			puts("�߸��� �����ڸ� ����Ͽ����ϴ�.");
			continue;
		}

		if (Push(value1) == -1)
		{
			puts("�� �̻� ������ �� �����ϴ�.");
		}

		printf("%s = %d, _stack.Top = %d\n\n"
			, buffer, value1, _stack.Top);
	}

	value1 = 0;

	for (;;)
	{
		if (Pop(&value2) == -1) break;
		value1 += value2;
	}

	printf("����� ������ %d�Դϴ�.\n", value1);
}

int Push(int value)
{
	if (_stack.Top == 0) return -1;//Overflow
	_stack.Array[--_stack.Top] = value;
	return 0;
}

int Pop(int* value)
{
	if (_stack.Top == STACK_MAX)
		return -1;//Underflow
	*value = _stack.Array[_stack.Top++];
	return 0;
}
