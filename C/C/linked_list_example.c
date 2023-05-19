#include <stdio.h>
#include <stdlib.h>

/** @brief 링크드 리스트의 노드를 표현하는 구조체.
 *
 *  각 노드는 정수형 데이터와 다음 노드를 가리키는 포인터를 가진다.
 */
struct Node
{
    int data;
    struct Node* next;
};

/** @brief 주어진 데이터로 새 노드를 생성한다.
 *
 *  이 함수는 새 Node에 대한 메모리를 할당하고 주어진 데이터를 할당한다.
 *
 *  @param data 노드에 저장될 데이터.
 *  @return 새로 생성된 노드의 포인터.
 */
struct Node* create_new_node(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 메모리 할당 확인
    if (new_node == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }

    new_node->data = data;   // 데이터 할당
    new_node->next = NULL;   // 다음 노드를 NULL로 설정
    return new_node;
}

/** @brief 링크드 리스트의 모든 노드를 순회하며 데이터를 출력한다.
 *
 *  이 함수는 매개변수로 노드의 포인터를 받아,
 *  그 노드부터 리스트의 끝까지 각 노드의 데이터를 출력한다.
 *
 *  @param n 데이터를 출력할 리스트의 첫 노드.
 */
void print_list(struct Node* n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
    printf("\n");
}

/** @brief 프로그램의 진입점인 main 함수.
 *
 *  이 함수에서는 세 개의 노드를 생성하고 이를 연결하여 링크드 리스트를 만든다.
 *  그 후, print_list 함수를 사용하여 리스트의 내용을 출력한다.
 */
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
    print_list(head);

    // 메모리 해제
    free(third);
    free(second);
    free(head);

    return 0;
}
