#include <stdio.h>
#include <stdlib.h>

// 노드 구조를 정의합니다.
typedef struct Node
{
    int data;             // 노드의 데이터 부분
    struct Node* next;    // 다음 노드를 가리키는 포인터
} Node;

int main(void)
{
    Node* firstNode = NULL;   // 첫 번째 노드의 포인터를 초기화합니다.
    Node* secondNode = NULL;  // 두 번째 노드의 포인터를 초기화합니다.
    Node* thirdNode = NULL;   // 세 번째 노드의 포인터를 초기화합니다.

    // 첫 번째 노드를 할당하고 데이터를 설정합니다.
    firstNode = (Node*)malloc(sizeof(Node));  // 메모리를 동적으로 할당합니다.
    if (firstNode == NULL)
    {
        printf("첫 번째 노드에 대한 메모리 할당 실패.\n");
        return -1;
    }
    firstNode->data = 1;  // 첫 번째 노드의 데이터 값을 설정합니다.

    // 두 번째 노드를 할당하고 데이터를 설정합니다.
    secondNode = (Node*)malloc(sizeof(Node));  // 메모리를 동적으로 할당합니다.
    if (secondNode == NULL)
    {
        printf("두 번째 노드에 대한 메모리 할당 실패.\n");
        return -1;
    }
    secondNode->data = 2;  // 두 번째 노드의 데이터 값을 설정합니다.

    // 세 번째 노드를 할당하고 데이터를 설정합니다.
    thirdNode = (Node*)malloc(sizeof(Node));  // 메모리를 동적으로 할당합니다.
    if (thirdNode == NULL)
    {
        printf("세 번째 노드에 대한 메모리 할당 실패.\n");
        return -1;
    }
    thirdNode->data = 3;  // 세 번째 노드의 데이터 값을 설정합니다.

    // 노드를 연결합니다.
    firstNode->next = secondNode;   // 첫 번째 노드가 두 번째 노드를 가리키게 합니다.
    secondNode->next = thirdNode;   // 두 번째 노드가 세 번째 노드를 가리키게 합니다.
    thirdNode->next = NULL;         // 세 번째 노드가 마지막이므로, next는 NULL로 설정합니다.

    // 링크드 리스트의 노드를 출력합니다.
    Node* node = firstNode;   // 첫 번째 노드에서 시작합니다.
    while (node != NULL)      // 노드가 NULL이 될 때까지(리스트의 끝) 반복합니다.
    {
        printf("%d\n", node->data);  // 현재 노드의 데이터를 출력합니다.
        node = node->next;           // 다음 노드로 이동합니다.
    }

    // 링크드 리스트의 메모리를 해제합니다.
    free(firstNode);   // 첫 번째 노드의 메모리를 해제합니다.
    free(secondNode);  // 두 번째 노드의 메모리를 해제합니다.
    free(thirdNode);   // 세 번째 노드의 메모리를 해제합니다.

    return 0;
}
