#include <stdio.h>
#include <stdlib.h>

// Node라는 이름의 구조체 정의
typedef struct Node
{
    int id;
    struct Node* prev;
    struct Node* next;
} Node;

Node* head = NULL; // 리스트의 첫번째 노드를 가리키는 포인터
Node* tail = NULL; // 리스트의 마지막 노드를 가리키는 포인터

// 첫 번째 위치에 노드 삽입 함수
void insert_first(int id)
{
    Node* new_node = (Node*)malloc(sizeof(Node)); // 새 노드 생성
    new_node->id = id;
    new_node->prev = NULL;
    new_node->next = head;
    if (head != NULL)
    {
        head->prev = new_node;
    }
    else
    {
        tail = new_node; // tail이 NULL일 때, 이 노드를 tail로 설정
    }
    head = new_node; // head 갱신
}

// 마지막 위치에 노드 삽입 함수
void insert_last(int id)
{
    Node* new_node = (Node*)malloc(sizeof(Node)); // 새 노드 생성
    new_node->id = id;
    new_node->next = NULL;
    new_node->prev = tail;
    if (tail != NULL)
    {
        tail->next = new_node;
    }
    else
    {
        head = new_node; // head가 NULL일 때, 이 노드를 head로 설정
    }
    tail = new_node; // tail 갱신
}

// 특정 노드 제거 함수
void remove_node(Node* n)
{
    if (n == head)
    {
        head = n->next; // n이 head라면, head를 갱신
    }
    if (n == tail)
    {
        tail = n->prev; // n이 tail이라면, tail을 갱신
    }
    if (n->prev != NULL)
    {
        n->prev->next = n->next; // n의 이전 노드의 next를 갱신
    }
    if (n->next != NULL)
    {
        n->next->prev = n->prev; // n의 다음 노드의 prev를 갱신
    }
    free(n); // n 노드 메모리 해제
}

// 모든 노드 출력 함수
void print_node()
{
    Node* temp = head; // head부터 시작
    while (temp != NULL)
    {
        printf("%d\n", temp->id); // 노드의 id 출력
        temp = temp->next; // 다음 노드로 이동
    }
}

int main(void)
{
    insert_first(1); // id가 1인 노드를 처음에 삽입
    insert_first(2); // id가 2인 노드를 처음에 삽입
    insert_last(3);  // id가 3인 노드를 마지막에 삽입
    print_node();    // 현재 리스트 출력. 출력: 2 1 3

    Node* node_to_remove = head->next; // id가 1인 노드를 제거하기 위한 준비
    remove_node(node_to_remove); // 노드 제거
    print_node(); // 현재 리스트 출력. 출력: 2 3

    return 0;
}
