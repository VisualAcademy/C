#include <stdio.h>
#include <stdlib.h>

// 노드 구조를 정의합니다.
struct Node
{
    int data;  // 노드가 저장할 데이터
    struct Node* next;  // 다음 노드를 가리키는 포인터(자기 참조 구조체)
};

int main(void)
{
    // 링크드 리스트의 head를 선언하고 초기화합니다.
    struct Node* head = NULL;

    // head 노드에 대해 메모리를 동적으로 할당합니다.
    head = (struct Node*)malloc(sizeof(struct Node));

    // 할당된 메모리 공간에 접근이 가능한지 확인합니다.
    if (head == NULL)
    {
        printf("head 노드 메모리 할당 실패.\n");
        return -1;
    }

    // head 노드의 데이터를 설정하고, 다음 노드를 가리키는 포인터를 NULL로 설정합니다.
    head->data = 1;
    head->next = NULL;

    // head 노드의 데이터를 출력합니다.
    printf("head 노드의 데이터: %d\n", head->data);

    // 메모리 해제
    free(head);

    return 0;
}
