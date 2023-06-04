#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 // 스택 크기 정의

int top = -1; // 스택 맨 위 가리키는 'top'
int stack[SIZE]; // 스택 구현

void push(); // 원소 삽입 함수
void pop(); // 원소 추출 함수
void show(); // 스택 출력 함수

int main(void)
{
    int choice;

    while (1)
    {
        printf("스택 작업 선택(1.원소 삽입 2.원소 추출 3.스택 출력 4.종료): _\b");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: push(); // 원소 삽입 선택
            break;
        case 2: pop(); // 원소 추출 선택
            break;
        case 3: show(); // 스택 출력 선택
            break;
        case 4: exit(0);
        default: printf("잘못된 선택입니다.\n");
        }
    }
}

void push() // 원소 삽입
{
    int x;

    if (top == SIZE - 1) // 스택 가득 참
    {
        printf("오버플로우\n");
    }
    else
    {
        printf("스택에 삽입할 원소 입력: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x; // 원소 삽입
    }
}

void pop() // 원소 추출
{
    if (top == -1) // 스택 비어있음
    {
        printf("언더플로우\n");
    }
    else
    {
        printf("추출된 원소: %d\n", stack[top]); // 원소 출력
        top = top - 1; // top 위치 이동
    }
}

void show() // 스택 출력
{
    if (top == -1) // 스택 비어있음
    {
        printf("언더플로우\n");
    }
    else
    {
        printf("스택에 있는 원소들: \n");
        for (int i = top; i >= 0; --i) // 원소 출력
        {
            printf("%d\n", stack[i]);
        }
    }
}
