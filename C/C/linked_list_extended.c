#include <stdio.h>
#include <stdlib.h>

// typedef�� ����� struct Node�� Node�� ����
typedef struct Node
{
    int data;
    struct Node* next;
} Node;

// create_node(): ��带 �����ϴ� �Լ�
Node* create_node(int data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));

    // �޸� �Ҵ� ���н� ���� �޽��� ��� �� ����
    if (new_node == NULL)
    {
        printf("�޸� �Ҵ� ����\n");
        exit(0);
    }

    new_node->data = data;   // ��忡 ������ �Ҵ�
    new_node->next = NULL;   // ���� ��带 NULL�� ����
    return new_node;
}

// insert_node(): ��带 �����ϴ� �Լ�
void insert_node(Node** head_ref, int new_data)
{
    // �� ��� ����
    Node* new_node = create_node(new_data);

    // �� ��带 ����Ʈ�� �� �տ� ����
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// remove_node(): ��带 �����ϴ� �Լ�
void remove_node(Node** head_ref, int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;

    // Ű�� ��� ����� �����Ϳ� ��ġ�ϴ� ���
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Ű�� ��ġ�ϴ� ��带 ã�� ���� ����Ʈ ��ȸ
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // Ű�� ã�� ���� ���
    if (temp == NULL)
    {
        printf("�־��� Ű�� ���� ��带 ã�� ���߽��ϴ�\n");
        return;
    }

    // ��� ����
    prev->next = temp->next;
    free(temp);
}

// print_node(): ����Ʈ�� ��� ��带 ����ϴ� �Լ�
void print_node(Node* node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
}

int main(void)
{
    Node* head = NULL;

    insert_node(&head, 1);  // ��� ����
    insert_node(&head, 2);  // ��� ����
    insert_node(&head, 3);  // ��� ����
    printf("�ʱ� ��ũ�� ����Ʈ: \n");
    print_node(head);       // ����Ʈ ���

    remove_node(&head, 2);  // ��� ����
    printf("��� ���� �� ��ũ�� ����Ʈ: \n");
    print_node(head);       // ����Ʈ ���

    return 0;
}
