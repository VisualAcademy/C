#define _CRT_SECURE_NO_WARNINGS // 경고를 무시하는 매크로
#include <stdio.h>               // 표준입출력 라이브러리 헤더파일
#include <stdlib.h>              // 표준 라이브러리 헤더파일

#define MAX 5                    // 스택의 최대 크기 정의

// Stack 구조체 정의
typedef struct
{
    int top;                    // 스택의 최상단 인덱스를 가리킴
    int data[MAX];              // 스택에 저장되는 데이터 배열
} Stack;

// 스택에 데이터 삽입(push) 함수
void push(Stack* s, int num)
{
    if (s->top < MAX - 1)
    {
        s->data[++s->top] = num; // 데이터 삽입 및 top 인덱스 증가
    }
    else
    {
        printf("스택이 가득 찼습니다.\n"); // 스택이 가득 찬 경우 메시지 출력
    }
}

// 스택에서 데이터 추출(pop) 함수
int pop(Stack* s)
{
    if (s->top >= 0)
    {
        return s->data[s->top--]; // 데이터 추출 및 top 인덱스 감소
    }
    else
    {
        printf("스택이 비어있습니다.\n"); // 스택이 비어있는 경우 메시지 출력
        return -1;
    }
}

int main(void)
{
    Stack s;                    // Stack 구조체 변수 선언
    s.top = -1;                 // 스택 초기화 (top을 -1로 설정)
    int num;

    printf("0에서 9 사이의 정수를 입력하세요. (0을 입력하면 종료합니다.): ");
    while (scanf("%d", &num) && num != 0)
    {
        push(&s, num);          // 스택에 입력한 정수를 삽입
        printf("0에서 9 사이의 정수를 입력하세요. (0을 입력하면 종료합니다.): ");
    }

    printf("스택에서 정수를 꺼냅니다: ");
    while ((num = pop(&s)) != -1) // 스택이 비어있지 않을 동안 반복
    {
        printf("%d ", num);      // 스택에서 추출한 정수 출력
    }
    printf("\n");

    return 0;
}
