/*
	데이터구조 : 리스트(List) : FIFO형 리스트
*/
#include <stdio.h>
#include <malloc.h>

// 단일 링크드 리스트용 구조체
struct Node
{
	char Name[20];			//이름
	char Phone[20];			//전화번호
	struct Node* NextNode;	//재귀 : 다음 노드를 가리키는 포인터
};

struct Node* GetNode(void);

// 메인 함수
int main(void)
{
	int i = 0;
	struct Node* head, * current, * old;

	printf("데이터 입력 : \n");
	head = GetNode();
	scanf("%s %s", head->Name, head->Phone); //미리 데이터 입력

	old = head;//old포인터 : 이전 노드를 가리키는 포인터
	for (i = 0; i < 2; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		old->NextNode = current;
		old = current;
	}
	old->NextNode = NULL; // 마지막 포인터에 NULL로 리스트 종료

	printf("데이터 출력 : \n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s \n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

// 메모리 할당 함수
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}