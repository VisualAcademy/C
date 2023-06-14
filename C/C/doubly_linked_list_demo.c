#include <stdio.h>
#include <stdlib.h>

// Node��� �̸��� ����ü ����
typedef struct Node
{
    int id;
    struct Node* prev;
    struct Node* next;
} Node;

Node* head = NULL; // ����Ʈ�� ù��° ��带 ����Ű�� ������
Node* tail = NULL; // ����Ʈ�� ������ ��带 ����Ű�� ������

// ù ��° ��ġ�� ��� ���� �Լ�
void insert_first(int id)
{
    Node* new_node = (Node*)malloc(sizeof(Node)); // �� ��� ����
    new_node->id = id;
    new_node->prev = NULL;
    new_node->next = head;
    if (head != NULL)
    {
        head->prev = new_node;
    }
    else
    {
        tail = new_node; // tail�� NULL�� ��, �� ��带 tail�� ����
    }
    head = new_node; // head ����
}

// ������ ��ġ�� ��� ���� �Լ�
void insert_last(int id)
{
    Node* new_node = (Node*)malloc(sizeof(Node)); // �� ��� ����
    new_node->id = id;
    new_node->next = NULL;
    new_node->prev = tail;
    if (tail != NULL)
    {
        tail->next = new_node;
    }
    else
    {
        head = new_node; // head�� NULL�� ��, �� ��带 head�� ����
    }
    tail = new_node; // tail ����
}

// Ư�� ��� ���� �Լ�
void remove_node(Node* n)
{
    if (n == head)
    {
        head = n->next; // n�� head���, head�� ����
    }
    if (n == tail)
    {
        tail = n->prev; // n�� tail�̶��, tail�� ����
    }
    if (n->prev != NULL)
    {
        n->prev->next = n->next; // n�� ���� ����� next�� ����
    }
    if (n->next != NULL)
    {
        n->next->prev = n->prev; // n�� ���� ����� prev�� ����
    }
    free(n); // n ��� �޸� ����
}

// ��� ��� ��� �Լ�
void print_node()
{
    Node* temp = head; // head���� ����
    while (temp != NULL)
    {
        printf("%d\n", temp->id); // ����� id ���
        temp = temp->next; // ���� ���� �̵�
    }
}

int main(void)
{
    insert_first(1); // id�� 1�� ��带 ó���� ����
    insert_first(2); // id�� 2�� ��带 ó���� ����
    insert_last(3);  // id�� 3�� ��带 �������� ����
    print_node();    // ���� ����Ʈ ���. ���: 2 1 3

    Node* node_to_remove = head->next; // id�� 1�� ��带 �����ϱ� ���� �غ�
    remove_node(node_to_remove); // ��� ����
    print_node(); // ���� ����Ʈ ���. ���: 2 3

    return 0;
}
