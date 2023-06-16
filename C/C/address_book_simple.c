#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �ּ� ������ ������ ����ü
typedef struct
{
    char name[50];
    char address[100];
    char phoneNumber[15];
} Address;

// ���� ����Ʈ�� ��带 �����ϴ� ����ü
typedef struct node
{
    Address data;
    struct node* next;
} Node;

// ���� ����Ʈ�� ù ��带 ����Ű�� ������
Node* head = NULL;

// �ּ� ������ �Է¹޾� ���� ����Ʈ�� �߰��ϴ� �Լ�
void insert_address()
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;

    printf("�̸� �Է�: ");
    scanf("%s", newNode->data.name);
    printf("�ּ� �Է�: ");
    scanf("%s", newNode->data.address);
    printf("��ȭ��ȣ �Է�: ");
    scanf("%s", newNode->data.phoneNumber);

    if (head == NULL)
    {
        head = newNode; // ����Ʈ�� ��� ������ head�� �� ��带 �߰�
    }
    else
    {
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next; // ����Ʈ�� ������ ��带 ã��
        }
        temp->next = newNode; // ������ ��� �ڿ� �� ��带 �߰�
    }
}

// ���� ����Ʈ�� ��� �ּ� ������ ����ϴ� �Լ�
void print_address()
{
    Node* temp = head;
    while (temp != NULL)
    {
        printf("�̸�: %s\n", temp->data.name);
        printf("�ּ�: %s\n", temp->data.address);
        printf("��ȭ��ȣ: %s\n", temp->data.phoneNumber);
        temp = temp->next;
    }
}

// ����ڿ��� �޴��� �����ְ� �Է��� �޴� ���� �Լ�
int main()
{
    int choice;
    while (1)
    {
        printf("*** �ּҷ� ***\n");
        printf("1. �ּ� �Է�\n");
        printf("2. �ּҷ� ���\n");
        printf("3. ����\n");
        printf("����: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_address(); // �ּ� �Է� ���ý�
            break;
        case 2:
            print_address(); // �ּҷ� ��� ���ý�
            break;
        case 3:
            exit(0); // ���� ���ý�
        default:
            printf("�߸��� �����Դϴ�!\n"); // �ٸ� ��ȣ �Է½�
        }
    }
    return 0;
}
