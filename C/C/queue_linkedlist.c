#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

void insert(int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void delete()
{
    Node* temp = front;
    if (front == NULL)
    {
        printf("큐가 비어있습니다\n");
        return;
    }
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    free(temp);
}

void display()
{
    Node* temp = front;
    if (front == NULL)
    {
        printf("큐가 비어있습니다\n");
        return;
    }
    printf("큐의 요소들: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
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
