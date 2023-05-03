#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
#include <stdio.h>
#include <stdlib.h>

// ��� ����ü ����
typedef struct Node
{
    int data;               // ��忡 ����Ǵ� ���� ������
    struct Node* next;      // ���� ��带 ����Ű�� ������
} Node;

int main(void)
{
    Node* head = NULL;      // ���� ����Ʈ�� ��� ��� �ʱ�ȭ
    Node* new_node, * temp; // �� ���� �ӽ� ��� ������ ����
    int num;

    printf("������ �Է��ϼ���(0�� �Է��ϸ� ����): ");
    while (scanf("%d", &num) && num != 0) // 0�� �Էµ� ������ ������ �Է¹���
    {
        // �� ��� ���� �� �ʱ�ȭ
        new_node = (Node*)malloc(sizeof(Node));
        new_node->data = num;
        new_node->next = NULL;

        // ���� ����Ʈ�� �� ��� �߰�
        if (head == NULL)
        {
            head = new_node; // ��� ��尡 ��� �ִ� ���, �� ��带 ��� ���� ����
        }
        else
        {
            // ��� ������ �����Ͽ� ��带 ��ȸ�ϸ� ������ ��带 ã��
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node; // ������ ����� ���� ���� �� ��� ����
        }
        printf("������ �Է��ϼ���(0�� �Է��ϸ� ����): ");
    }

    // �Էµ� ���� ���
    printf("�Էµ� ���� ���: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data); // ���� ����� ������ ���
        temp = temp->next;          // ���� ���� �̵�
    }
    printf("\n");

    // ���� ����Ʈ�� �޸� ����
    while (head != NULL)
    {
        temp = head;           // �ӽ� �����Ϳ� ��� ����� �ּ� ����
        head = head->next;     // ��� ��带 ���� ���� �̵�
        free(temp);            // �ӽ� �����Ͱ� ����Ű�� ��� �޸� ����
    }
    return 0;
}
