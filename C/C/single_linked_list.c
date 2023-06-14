#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    struct Node* next;
} Node;

// ��带 �����ϴ� �Լ�
Node* create_node(int id)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->id = id;
    new_node->next = NULL;
    return new_node;
}

// ����Ʈ�� ��带 �����ϴ� �Լ�
void insert_node(Node** head, Node* new_node)
{
    new_node->next = *head;
    *head = new_node;
}

// ����Ʈ���� ��带 �����ϴ� �Լ�
void remove_node(Node** head, int id)
{
    Node* temp = *head, * prev = NULL; // prev�� NULL�� �ʱ�ȭ

    if (temp != NULL && temp->id == id)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

// ��� ��带 ����ϴ� �Լ�
void print_node(Node* n)
{
    while (n != NULL)
    {
        printf(" %d ", n->id);
        n = n->next;
    }
    printf("\n");
}

int main(void)
{
    Node* head = NULL;

    insert_node(&head, create_node(1));
    insert_node(&head, create_node(2));
    insert_node(&head, create_node(3));

    printf("�ʱ� ���� ����Ʈ\n");
    print_node(head);  // �ʱ� ���� ����Ʈ ���

    remove_node(&head, 2);  // id�� 2�� ��� ����

    printf("id 2�� ��带 ������ ���� ���� ����Ʈ\n");
    print_node(head);  // ��带 ������ �� ���� ����Ʈ ���

    return 0;
}
