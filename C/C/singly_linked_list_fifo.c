// singly_linked_list_fifo.c

/*
    리스트(List) : 배열에 비해서 데이터의 입력과 삭제가 용이한 데이터 구조
    (입력한 순서와 반대로 구성된 리스트 작성)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 단일 링크드 리스트용 구조체
typedef struct Node {
    char Name[20];          // 이름
    char Phone[20];         // 전화번호
    struct Node* NextNode;  // 다음 노드를 가리키는 포인터
} Node;

Node* GetNode(void);

// 메인 함수
int main(void)
{
    int i;               // 반복용
    Node* head = NULL;   // 첫 번째 노드
    Node* current;       // 새롭게 추가되는 현재 노드

    printf("데이터 입력:\n");

    // 노드 추가
    for (i = 0; i < 3; i++) {
        current = GetNode();                // 새 노드 생성
        scanf("%s %s", current->Name, current->Phone); // 값 대입
        current->NextNode = head;           // 새 노드의 포인터에 첫번째 노드 지정
        head = current;                     // 새 노드를 첫번째 노드로 설정
    }

    printf("데이터 출력:\n");

    // 노드 출력
    current = head;
    while (current != NULL) {
        printf("%s %s\n", current->Name, current->Phone);
        current = current->NextNode;
    }

    // 메모리 해제
    current = head;
    while (current != NULL) {
        Node* next = current->NextNode;
        free(current);
        current = next;
    }

    return 0;
}

// 메모리 할당 함수
Node* GetNode(void)
{
    return (Node*)malloc(sizeof(Node));
}
