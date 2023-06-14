#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    struct Node* next;
} Node;

// 노드를 생성하는 함수
Node* create_node(int id)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->id = id;
    new_node->next = NULL;
    return new_node;
}

// 리스트에 노드를 삽입하는 함수
void insert_node(Node** head, Node* new_node)
{
    new_node->next = *head;
    *head = new_node;
}

// 리스트에서 노드를 제거하는 함수
void remove_node(Node** head, int id)
{
    Node* temp = *head, * prev = NULL; // prev를 NULL로 초기화

    if (temp != NULL && temp->id == id)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

// 모든 노드를 출력하는 함수
void print_node(Node* n)
{
    while (n != NULL)
    {
        printf(" %d ", n->id);
        n = n->next;
    }
    printf("\n");
}

int main(void)
{
    Node* head = NULL;

    insert_node(&head, create_node(1));
    insert_node(&head, create_node(2));
    insert_node(&head, create_node(3));

    printf("초기 연결 리스트\n");
    print_node(head);  // 초기 연결 리스트 출력

    remove_node(&head, 2);  // id가 2인 노드 제거

    printf("id 2인 노드를 제거한 후의 연결 리스트\n");
    print_node(head);  // 노드를 제거한 후 연결 리스트 출력

    return 0;
}
