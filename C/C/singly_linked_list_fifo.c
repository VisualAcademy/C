// singly_linked_list_fifo.c

/*
    ����Ʈ(List) : �迭�� ���ؼ� �������� �Է°� ������ ������ ������ ����
    (�Է��� ������ �ݴ�� ������ ����Ʈ �ۼ�)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���� ��ũ�� ����Ʈ�� ����ü
typedef struct Node {
    char Name[20];          // �̸�
    char Phone[20];         // ��ȭ��ȣ
    struct Node* NextNode;  // ���� ��带 ����Ű�� ������
} Node;

Node* GetNode(void);

// ���� �Լ�
int main(void)
{
    int i;               // �ݺ���
    Node* head = NULL;   // ù ��° ���
    Node* current;       // ���Ӱ� �߰��Ǵ� ���� ���

    printf("������ �Է�:\n");

    // ��� �߰�
    for (i = 0; i < 3; i++) {
        current = GetNode();                // �� ��� ����
        scanf("%s %s", current->Name, current->Phone); // �� ����
        current->NextNode = head;           // �� ����� �����Ϳ� ù��° ��� ����
        head = current;                     // �� ��带 ù��° ���� ����
    }

    printf("������ ���:\n");

    // ��� ���
    current = head;
    while (current != NULL) {
        printf("%s %s\n", current->Name, current->Phone);
        current = current->NextNode;
    }

    // �޸� ����
    current = head;
    while (current != NULL) {
        Node* next = current->NextNode;
        free(current);
        current = next;
    }

    return 0;
}

// �޸� �Ҵ� �Լ�
Node* GetNode(void)
{
    return (Node*)malloc(sizeof(Node));
}
