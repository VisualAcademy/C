#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
typedef struct Node
{
    int data;               // 노드에 저장되는 정수 데이터
    struct Node* next;      // 다음 노드를 가리키는 포인터
} Node;

int main(void)
{
    Node* head = NULL;      // 연결 리스트의 헤드 노드 초기화
    Node* new_node, * temp; // 새 노드와 임시 노드 포인터 선언
    int num;

    printf("정수를 입력하세요(0을 입력하면 종료): ");
    while (scanf("%d", &num) && num != 0) // 0이 입력될 때까지 정수를 입력받음
    {
        // 새 노드 생성 및 초기화
        new_node = (Node*)malloc(sizeof(Node));
        new_node->data = num;
        new_node->next = NULL;

        // 연결 리스트에 새 노드 추가
        if (head == NULL)
        {
            head = new_node; // 헤드 노드가 비어 있는 경우, 새 노드를 헤드 노드로 설정
        }
        else
        {
            // 헤드 노드부터 시작하여 노드를 순회하며 마지막 노드를 찾음
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node; // 마지막 노드의 다음 노드로 새 노드 설정
        }
        printf("정수를 입력하세요(0을 입력하면 종료): ");
    }

    // 입력된 정수 출력
    printf("입력된 정수 출력: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data); // 현재 노드의 데이터 출력
        temp = temp->next;          // 다음 노드로 이동
    }
    printf("\n");

    // 연결 리스트의 메모리 해제
    while (head != NULL)
    {
        temp = head;           // 임시 포인터에 헤드 노드의 주소 저장
        head = head->next;     // 헤드 노드를 다음 노드로 이동
        free(temp);            // 임시 포인터가 가리키는 노드 메모리 해제
    }
    return 0;
}
