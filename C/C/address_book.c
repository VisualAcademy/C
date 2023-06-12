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
        printf("파일을 열 수 없습니다\n");
        return;
    }

    Address* temp = head;
    while (temp != NULL)
    {
        fwrite(temp, sizeof(Address), 1, file);
        temp = temp->next;
    }

    fclose(file);
    printf("파일에 성공적으로 쓰여졌습니다.\n");
}

int main()
{
    // 테스트를 위한 주소록 데이터 추가
    Address* addr1 = (Address*)malloc(sizeof(Address));
    strcpy(addr1->name, "홍길동");
    strcpy(addr1->phone, "010-1234-5678");
    strcpy(addr1->email, "hong@example.com");
    add(addr1);

    Address* addr2 = (Address*)malloc(sizeof(Address));
    strcpy(addr2->name, "김철수");
    strcpy(addr2->phone, "010-9876-5432");
    strcpy(addr2->email, "kim@example.com");
    add(addr2);

    // 연결 리스트를 파일에 저장
    write_linked_list();

    return 0;
}
