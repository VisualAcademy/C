#include <stdio.h>
#include <stdlib.h>

// ���� ��� ����
typedef struct Node
{
    int data;          // ��� ������
    struct Node* next; // ���� ��� ������
} Node;

// �ֻ�� ��� ������ �ʱ�ȭ
Node* top = NULL;

// ���� �ֻ�ܿ� ��� �߰�
void push(int data)
{
    // �� ��� ���� �Ҵ�
    Node* new_node = (Node*)malloc(sizeof(Node));

    // ������ ���� �� ���� top ����Ű��
    new_node->data = data;
    new_node->next = top;

    // �ֻ�� ��� ������Ʈ
    top = new_node;
}

// ���� �ֻ�� ��� ����
void pop()
{
    // ���� ����ִ� ��� �޽��� ��� �� ����
    if (top == NULL)
    {
        printf("������ ����ֽ��ϴ�\n");
        return;
    }

    // ������ ��� ����Ű�� �ӽ� ������
    Node* temp = top;

    // top�� ���� ���� �̵�
    top = temp->next;

    // ������ ��� �޸� ����
    free(temp);
}

// ���� �ֻ�� ��� Ȯ��(���� X)
int peek()
{
    // ������ ������� ���� ��� top ��ȯ
    if (top != NULL)
    {
        return top->data;
    }

    // ������ ����ִ� ��� �޽��� ��� �� -1 ��ȯ
    printf("������ ����ֽ��ϴ�\n");
    return -1;
}

// ���� �׽�Ʈ ���� �Լ�
int main()
{
    push(1);
    push(2);
    push(3);
    printf("�ֻ��� ��Ҵ� %d�Դϴ�.\n", peek());
    pop();
    printf("�ֻ��� ��Ҵ� %d�Դϴ�.\n", peek());
    pop();
    printf("�ֻ��� ��Ҵ� %d�Դϴ�.\n", peek());
    return 0;
}
