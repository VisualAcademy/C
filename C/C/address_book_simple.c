#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 주소 정보를 저장할 구조체
typedef struct
{
    char name[50];
    char address[100];
    char phoneNumber[15];
} Address;

// 연결 리스트의 노드를 정의하는 구조체
typedef struct node
{
    Address data;
    struct node* next;
} Node;

// 연결 리스트의 첫 노드를 가리키는 포인터
Node* head = NULL;

// 주소 정보를 입력받아 연결 리스트에 추가하는 함수
void insert_address()
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;

    printf("이름 입력: ");
    scanf("%s", newNode->data.name);
    printf("주소 입력: ");
    scanf("%s", newNode->data.address);
    printf("전화번호 입력: ");
    scanf("%s", newNode->data.phoneNumber);

    if (head == NULL)
    {
        head = newNode; // 리스트가 비어 있으면 head에 새 노드를 추가
    }
    else
    {
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next; // 리스트의 마지막 노드를 찾음
        }
        temp->next = newNode; // 마지막 노드 뒤에 새 노드를 추가
    }
}

// 연결 리스트의 모든 주소 정보를 출력하는 함수
void print_address()
{
    Node* temp = head;
    while (temp != NULL)
    {
        printf("이름: %s\n", temp->data.name);
        printf("주소: %s\n", temp->data.address);
        printf("전화번호: %s\n", temp->data.phoneNumber);
        temp = temp->next;
    }
}

// 사용자에게 메뉴를 보여주고 입력을 받는 메인 함수
int main()
{
    int choice;
    while (1)
    {
        printf("*** 주소록 ***\n");
        printf("1. 주소 입력\n");
        printf("2. 주소록 출력\n");
        printf("3. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_address(); // 주소 입력 선택시
            break;
        case 2:
            print_address(); // 주소록 출력 선택시
            break;
        case 3:
            exit(0); // 종료 선택시
        default:
            printf("잘못된 선택입니다!\n"); // 다른 번호 입력시
        }
    }
    return 0;
}
