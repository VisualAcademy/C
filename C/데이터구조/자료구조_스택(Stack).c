#include <stdio.h>		//puts, gets, printf
#include <string.h>		//strlen, memset, memcpy
#include <stdlib.h>		//atoi

int Push(int value);	//스택에 데이터 입력하는 함수
int Pop(int* value);	//스택에서 데이터 출력하는 함수

#define STACK_MAX 100 //스택 최대값

typedef struct tagStack
{
	int Array[STACK_MAX];
	int Top;
	int Bottom;
}Stack;

Stack _stack;//스택 인스턴스 생성

void main(void)
{
	char buffer[100], temp[100];
	char* opr = "+-*/%";
	int index;
	int value1 = 0, value2 = 0;

	_stack.Top = STACK_MAX;

	puts("계산식을 1*2처럼 입력하고 엔터키를 치세요.");
	puts("아무것도 입력하지 않으면 계산이 종료됩니다.");

	for (;;)
	{
		printf("계산식 : ");
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
			puts("잘못된 연산자를 사용하였습니다.");
			continue;
		}

		if (Push(value1) == -1)
		{
			puts("더 이상 저장할 수 없습니다.");
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

	printf("계산의 총합은 %d입니다.\n", value1);
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
