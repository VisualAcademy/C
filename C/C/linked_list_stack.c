#include <stdio.h>
#include <stdlib.h>

// 스택 노드 정의
typedef struct Node
{
    int data;          // 노드 데이터
    struct Node* next; // 다음 노드 포인터
} Node;

// 최상단 노드 포인터 초기화
Node* top = NULL;

// 스택 최상단에 요소 추가
void push(int data)
{
    // 새 노드 동적 할당
    Node* new_node = (Node*)malloc(sizeof(Node));

    // 데이터 설정 및 현재 top 가리키기
    new_node->data = data;
    new_node->next = top;

    // 최상단 노드 업데이트
    top = new_node;
}

// 스택 최상단 요소 제거
void pop()
{
    // 스택 비어있는 경우 메시지 출력 후 종료
    if (top == NULL)
    {
        printf("스택이 비어있습니다\n");
        return;
    }

    // 제거할 노드 가리키는 임시 포인터
    Node* temp = top;

    // top을 다음 노드로 이동
    top = temp->next;

    // 제거할 노드 메모리 해제
    free(temp);
}

// 스택 최상단 요소 확인(제거 X)
int peek()
{
    // 스택이 비어있지 않은 경우 top 반환
    if (top != NULL)
    {
        return top->data;
    }

    // 스택이 비어있는 경우 메시지 출력 후 -1 반환
    printf("스택이 비어있습니다\n");
    return -1;
}

// 스택 테스트 메인 함수
int main()
{
    push(1);
    push(2);
    push(3);
    printf("최상위 요소는 %d입니다.\n", peek());
    pop();
    printf("최상위 요소는 %d입니다.\n", peek());
    pop();
    printf("최상위 요소는 %d입니다.\n", peek());
    return 0;
}
