#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 // ���� ũ�� ����

int top = -1; // ���� �� �� ����Ű�� 'top'
int stack[SIZE]; // ���� ����

void push(); // ���� ���� �Լ�
void pop(); // ���� ���� �Լ�
void show(); // ���� ��� �Լ�

int main(void)
{
    int choice;

    while (1)
    {
        printf("���� �۾� ����(1.���� ���� 2.���� ���� 3.���� ��� 4.����): _\b");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: push(); // ���� ���� ����
            break;
        case 2: pop(); // ���� ���� ����
            break;
        case 3: show(); // ���� ��� ����
            break;
        case 4: exit(0);
        default: printf("�߸��� �����Դϴ�.\n");
        }
    }
}

void push() // ���� ����
{
    int x;

    if (top == SIZE - 1) // ���� ���� ��
    {
        printf("�����÷ο�\n");
    }
    else
    {
        printf("���ÿ� ������ ���� �Է�: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x; // ���� ����
    }
}

void pop() // ���� ����
{
    if (top == -1) // ���� �������
    {
        printf("����÷ο�\n");
    }
    else
    {
        printf("����� ����: %d\n", stack[top]); // ���� ���
        top = top - 1; // top ��ġ �̵�
    }
}

void show() // ���� ���
{
    if (top == -1) // ���� �������
    {
        printf("����÷ο�\n");
    }
    else
    {
        printf("���ÿ� �ִ� ���ҵ�: \n");
        for (int i = top; i >= 0; --i) // ���� ���
        {
            printf("%d\n", stack[i]);
        }
    }
}
