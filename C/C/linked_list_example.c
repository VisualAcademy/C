#include <stdio.h>
#include <stdlib.h>

// ��ũ�� ����Ʈ�� ��带 ǥ���ϴ� ����ü
struct Node
{
    int data;
    struct Node* next;
};

// �־��� �����ͷ� �� ��带 ����
struct Node* create_new_node(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // �޸� �Ҵ� Ȯ��
    if (new_node == NULL)
    {
        printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
        exit(0);
    }

    new_node->data = data;   // ������ �Ҵ�
    new_node->next = NULL;   // ���� ��带 NULL�� ����
    return new_node;
}

// ��ũ�� ����Ʈ�� ��� ��带 ��ȸ�ϸ� �����͸� ���
void print_list(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
}

// ���α׷��� �������� main �Լ�
int main(void)
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // ��� ����
    head = create_new_node(1);
    second = create_new_node(2);
    third = create_new_node(3);

    // ��� ����
    head->next = second;
    second->next = third;

    // ����Ʈ ���
    printf("��ũ�� ����Ʈ�� ����:\n");
    print_list(head);

    // �޸� ����
    free(third);
    free(second);
    free(head);

    return 0;
}
