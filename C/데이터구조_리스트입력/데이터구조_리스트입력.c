/*
	리스트에 데이터 입력하기
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// 연결리스트 생성용 구조체
struct Node
{
	char Name[20];		//이름
	char Phone[20];		//전화번호
	struct Node* NextNode;	//다음 노트를 가리키는 포인터
}*head;

// 함수 원형
struct Node* GetNode(void);
void Add(void);
void Print(void);
void Insert(char*);

// 메인 함수
void main(void)
{
	char key[32];

	Add();
	Print();

	//리스트에 데이터 추가
	printf("어느 데이터 뒤에 추가할것인지 ? ");
	scanf("%s", key);
	Insert(key);
	printf("\n");
	Print();
}

//리스트 2개 생성
void Add(void)
{
	int i = 0;
	struct Node* current;

	printf("데이터 2개 입력 : (이름) (전화번호)\n");
	head = NULL;
	for (i = 0; i < 2; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		current->NextNode = head;
		head = current;
	}
}

//리스트 2개 출력 함수
void Print(void)
{
	struct Node* current;

	printf("데이터 출력 : (이름) (전화번호)\n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

//리스트의 특정 이름 뒤에 데이터 추가
void Insert(char* key)
{
	struct Node* current, * n;

	n = GetNode();
	printf("추가할 데이터 : ");
	scanf("%s %s", n->Name, n->Phone);

	current = head;
	while (current != NULL)
	{
		if (strcmp(key, current->Name) == 0)
		{
			n->NextNode = current->NextNode;
			current->NextNode = n;
			return;
		}
		current = current->NextNode;
	}
	printf("해당되는 데이터가 없습니다.\n");
}

//구조체 크기만큼 메모리 할당하는 함수
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}
/*
데이터 2개 입력 : (이름) (전화번호)
aaa 111
bbb 222
데이터 출력 : (이름) (전화번호)
bbb 222
aaa 111
어느 데이터 뒤에 추가할것인지 ? aaa
추가할 데이터 : ccc 333

데이터 출력 : (이름) (전화번호)
bbb 222
aaa 111
ccc 333
Press any key to continue
*/