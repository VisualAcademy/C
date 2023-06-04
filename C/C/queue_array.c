#include <stdio.h>

#define MAX 2
int front = -1, rear = -1;
int queue[MAX];

void insert(int data)
{
    if (rear == MAX - 1)
    {
        printf("ť�� ���� á���ϴ�\n");
        return;
    }
    queue[++rear] = data;
    printf("%d��(��) ť�� ���ԵǾ����ϴ�\n", data);
}

void delete()
{
    if (front == rear)
    {
        printf("ť�� ����ֽ��ϴ�\n");
        return;
    }
    printf("%d��(��) ť���� ���ŵǾ����ϴ�\n", queue[++front]);
}

void display()
{
    int i;
    if (front == rear)
    {
        printf("ť�� ����ֽ��ϴ�\n");
        return;
    }
    printf("ť�� ��ҵ�: ");
    for (i = front + 1; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(void) 
{
    insert(1);
    insert(2);
    insert(3);
    display();
    delete();
    display();
    return 0;
}
