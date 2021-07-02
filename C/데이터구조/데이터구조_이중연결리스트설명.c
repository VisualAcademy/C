/*
	이중 연결 리스트(Doubly Linked List) :
	선형 리스트는 역방향 조회를 할 수 없는 단점이 있다.
	이를 개선한 데이터 구조가 이중 연결 리스트이다.
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// 이중 연결 링크드 리스트용 구조체
struct Node
{
	struct Node* PrevNode;		//역방향 포인터
	char Name[20];			//이름
	char Phone[20];			//전화번호
	struct Node* NextNode;	//정방향 포인터
};

struct Node* GetNode(void);

// 메인 함수
void main(void)
{
	int i = 0;
	struct Node* head, * tail, * current;

	//역방향 리스트 생성
	tail = NULL;

	current = GetNode();
	strcpy(current->Name, "aa");
	strcpy(current->Phone, "11");

	current->PrevNode = tail;
	tail = current;

	current = GetNode();
	strcpy(current->Name, "bb");
	strcpy(current->Phone, "22");

	current->PrevNode = tail;
	tail = current;

	current = GetNode();
	strcpy(current->Name, "cc");
	strcpy(current->Phone, "33");

	current->PrevNode = tail;
	tail = current;

	// 정방향 리스트 생성
	current = tail;
	head = NULL;

	current->NextNode = head;
	head = current;
	current = current->PrevNode;

	current->NextNode = head;
	head = current;
	current = current->PrevNode;

	current->NextNode = head;
	head = current;
	current = current->PrevNode;

	// 정방향 리스트 출력
	current = head;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->NextNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->NextNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->NextNode;

	// 역방향 리스트 출력
	current = tail;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->PrevNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->PrevNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->PrevNode;
}

// 구조체 크기만큼 메모리 할당
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}