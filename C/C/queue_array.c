#include <stdio.h>

#define MAX 2
int front = -1, rear = -1;
int queue[MAX];

void insert(int data)
{
    if (rear == MAX - 1)
    {
        printf("큐가 가득 찼습니다\n");
        return;
    }
    queue[++rear] = data;
    printf("%d이(가) 큐에 삽입되었습니다\n", data);
}

void delete()
{
    if (front == rear)
    {
        printf("큐가 비어있습니다\n");
        return;
    }
    printf("%d이(가) 큐에서 제거되었습니다\n", queue[++front]);
}

void display()
{
    int i;
    if (front == rear)
    {
        printf("큐가 비어있습니다\n");
        return;
    }
    printf("큐의 요소들: ");
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
