#include <stdio.h>
#include <stdlib.h>

// 링크드 리스트의 노드를 표현하는 구조체
struct Node
{
    int data;
    struct Node* next;
};

// 주어진 데이터로 새 노드를 생성
struct Node* create_new_node(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 메모리 할당 확인
    if (new_node == NULL)
    {
        printf("메모리 할당에 실패하였습니다.\n");
        exit(0);
    }

    new_node->data = data;   // 데이터 할당
    new_node->next = NULL;   // 다음 노드를 NULL로 설정
    return new_node;
}

// 링크드 리스트의 모든 노드를 순회하며 데이터를 출력
void print_list(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
}

// 프로그램의 진입점인 main 함수
int main(void)
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // 노드 생성
    head = create_new_node(1);
    second = create_new_node(2);
    third = create_new_node(3);

    // 노드 연결
    head->next = second;
    second->next = third;

    // 리스트 출력
    printf("링크드 리스트의 내용:\n");
    print_list(head);

    // 메모리 해제
    free(third);
    free(second);
    free(head);

    return 0;
}
