#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct address 
{
    char name[30];
    char phone[20];
    char email[30];
    struct address* next;
} Address;

Address* head = NULL;

void add(Address* addr)
{
    addr->next = head;
    head = addr;
}

void write_linked_list()
{
    FILE* file = fopen("data.bin", "wb");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�\n");
        return;
    }

    Address* temp = head;
    while (temp != NULL)
    {
        fwrite(temp, sizeof(Address), 1, file);
        temp = temp->next;
    }

    fclose(file);
    printf("������ ���������� ����Ǿ����ϴ�.\n");
}

void read_linked_list()
{
    FILE* file = fopen("data.bin", "rb");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�\n");
        return;
    }

    Address* temp = (Address*)malloc(sizeof(Address));
    while (fread(temp, sizeof(Address), 1, file))
    {
        add(temp);
        temp = (Address*)malloc(sizeof(Address));
    }

    fclose(file);
    printf("������ ���������� �������ϴ�.\n");
}

int main(void)
{
    // �׽�Ʈ�� ���� �ּҷ� ������ �߰�
    Address* addr1 = (Address*)malloc(sizeof(Address));
    strcpy(addr1->name, "ȫ�浿");
    strcpy(addr1->phone, "010-1234-5678");
    strcpy(addr1->email, "hong@example.com");
    add(addr1);

    Address* addr2 = (Address*)malloc(sizeof(Address));
    strcpy(addr2->name, "��ö��");
    strcpy(addr2->phone, "010-9876-5432");
    strcpy(addr2->email, "kim@example.com");
    add(addr2);

    // ���� ����Ʈ�� ���Ͽ� ����
    write_linked_list();

    // ���Ͽ��� ���� ����Ʈ �о����
    read_linked_list();

    // �о�� ���� ����Ʈ ���
    Address* current = head;
    while (current != NULL)
    {
        printf("�̸�: %s\n��ȭ��ȣ: %s\n�̸���: %s\n\n", current->name, current->phone, current->email);
        current = current->next;
    }

    return 0;
}
