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
int main(void)
{
	int i = 0;
	struct Node* head, * tail, * current;

	tail = NULL;	//역방향 리스트 생성
	for (i = 0; i < 3; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		current->PrevNode = tail;
		tail = current;
	}

	current = tail;	//정방향 리스트 생성
	head = NULL;
	for (i = 0; i < 3; i++)
	{
		current->NextNode = head;
		head = current;
		current = current->PrevNode;
	}

	printf("\n정방향 리스트\n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}

	printf("\n역방향 리스트\n");
	current = tail;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->PrevNode;
	}
}

// 구조체 크기만큼 메모리 할당
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}
/*
aaa 111
bbbb 2222
ccccc 33333

정방향 리스트
aaa 111
bbbb 2222
ccccc 33333

역방향 리스트
ccccc 33333
bbbb 2222
aaa 111
Press any key to continue
*/