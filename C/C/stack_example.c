#define _CRT_SECURE_NO_WARNINGS // ��� �����ϴ� ��ũ��
#include <stdio.h>               // ǥ������� ���̺귯�� �������
#include <stdlib.h>              // ǥ�� ���̺귯�� �������

#define MAX 5                    // ������ �ִ� ũ�� ����

// Stack ����ü ����
typedef struct
{
    int top;                    // ������ �ֻ�� �ε����� ����Ŵ
    int data[MAX];              // ���ÿ� ����Ǵ� ������ �迭
} Stack;

// ���ÿ� ������ ����(push) �Լ�
void push(Stack* s, int num)
{
    if (s->top < MAX - 1)
    {
        s->data[++s->top] = num; // ������ ���� �� top �ε��� ����
    }
    else
    {
        printf("������ ���� á���ϴ�.\n"); // ������ ���� �� ��� �޽��� ���
    }
}

// ���ÿ��� ������ ����(pop) �Լ�
int pop(Stack* s)
{
    if (s->top >= 0)
    {
        return s->data[s->top--]; // ������ ���� �� top �ε��� ����
    }
    else
    {
        printf("������ ����ֽ��ϴ�.\n"); // ������ ����ִ� ��� �޽��� ���
        return -1;
    }
}

int main(void)
{
    Stack s;                    // Stack ����ü ���� ����
    s.top = -1;                 // ���� �ʱ�ȭ (top�� -1�� ����)
    int num;

    printf("0���� 9 ������ ������ �Է��ϼ���. (0�� �Է��ϸ� �����մϴ�.): ");
    while (scanf("%d", &num) && num != 0)
    {
        push(&s, num);          // ���ÿ� �Է��� ������ ����
        printf("0���� 9 ������ ������ �Է��ϼ���. (0�� �Է��ϸ� �����մϴ�.): ");
    }

    printf("���ÿ��� ������ �����ϴ�: ");
    while ((num = pop(&s)) != -1) // ������ ������� ���� ���� �ݺ�
    {
        printf("%d ", num);      // ���ÿ��� ������ ���� ���
    }
    printf("\n");

    return 0;
}
