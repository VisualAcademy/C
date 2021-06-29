/*
	리스트(List) : 배열에 비해서 데이터의 입력과 삭제가 용이한 데이터 구조
	(입력한 순서와 반대로 구성된 리스트 작성)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

// 단일 링크드 리스트용 구조체
struct Node
{
	char Name[20];			//이름
	char Phone[20];			//전화번호
	struct Node* NextNode;	//다음 노드를 가리키는 포인터
};

struct Node* GetNode(void);

// 메인 함수
void main(void)
{
	register int i = 0;	// 반복용
	struct Node* head; // 첫 번째 노드
	struct Node* current; // 새롭게 추가되는 현재 노드

	printf("데이터입력 : \n");

	head = NULL; // 첫번째 데이터의 링크를 널로 초기화
	for (i = 0; i < 3; i++)
	{
		current = GetNode(); // 새 노드 생성
		scanf("%s %s", current->Name, current->Phone); // 값 대입
		current->NextNode = head; // 새 노드의 포인터에 첫번째 노드 지정
		head = current; // 방금전 노드에 현재 값 대입
	}

	printf("데이터출력 : \n");

	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

// 메모리 할당 함수
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}

/*
데이터입력 :
aaa 111
bbb 222
ccc 333
데이터출력 :
ccc 333
bbb 222
aaa 111
Press any key to continue
*/
