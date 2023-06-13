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
    printf("파일이 성공적으로 저장되었습니다.\n");
}

void read_linked_list()
{
    FILE* file = fopen("data.bin", "rb");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다\n");
        return;
    }

    Address* temp = (Address*)malloc(sizeof(Address));
    while (fread(temp, sizeof(Address), 1, file))
    {
        add(temp);
        temp = (Address*)malloc(sizeof(Address));
    }

    fclose(file);
    printf("파일이 성공적으로 읽혔습니다.\n");
}

int main(void)
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

    // 파일에서 연결 리스트 읽어오기
    read_linked_list();

    // 읽어온 연결 리스트 출력
    Address* current = head;
    while (current != NULL)
    {
        printf("이름: %s\n전화번호: %s\n이메일: %s\n\n", current->name, current->phone, current->email);
        current = current->next;
    }

    return 0;
}
