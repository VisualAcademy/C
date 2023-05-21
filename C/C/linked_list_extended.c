#include <stdio.h>
#include <stdlib.h>

// typedef를 사용해 struct Node를 Node로 선언
typedef struct Node
{
    int data;
    struct Node* next;
} Node;

// create_node(): 노드를 생성하는 함수
Node* create_node(int data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));

    // 메모리 할당 실패시 오류 메시지 출력 후 종료
    if (new_node == NULL)
    {
        printf("메모리 할당 실패\n");
        exit(0);
    }

    new_node->data = data;   // 노드에 데이터 할당
    new_node->next = NULL;   // 다음 노드를 NULL로 설정
    return new_node;
}

// insert_node(): 노드를 삽입하는 함수
void insert_node(Node** head_ref, int new_data)
{
    // 새 노드 생성
    Node* new_node = create_node(new_data);

    // 새 노드를 리스트의 맨 앞에 삽입
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// remove_node(): 노드를 삭제하는 함수
void remove_node(Node** head_ref, int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;

    // 키가 헤드 노드의 데이터와 일치하는 경우
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // 키와 일치하는 노드를 찾기 위해 리스트 순회
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // 키를 찾지 못한 경우
    if (temp == NULL)
    {
        printf("주어진 키를 가진 노드를 찾지 못했습니다\n");
        return;
    }

    // 노드 삭제
    prev->next = temp->next;
    free(temp);
}

// print_node(): 리스트의 모든 노드를 출력하는 함수
void print_node(Node* node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
}

int main(void)
{
    Node* head = NULL;

    insert_node(&head, 1);  // 노드 삽입
    insert_node(&head, 2);  // 노드 삽입
    insert_node(&head, 3);  // 노드 삽입
    printf("초기 링크드 리스트: \n");
    print_node(head);       // 리스트 출력

    remove_node(&head, 2);  // 노드 삭제
    printf("노드 삭제 후 링크드 리스트: \n");
    print_node(head);       // 리스트 출력

    return 0;
}
