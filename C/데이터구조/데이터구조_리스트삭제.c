/*
	리스트에서 데이터를 삭제하는 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// 연결리스트 생성용 구조체
struct Node
{
	char Name[20];		//이름
	char Phone[20];		//전화번호
	struct Node* NextNode;	//다음 노드를 가리키는 포인터
}*head;

// 함수 원형
struct Node* GetNode(void);
void Add(void);
void Print(void);
void Delete(char*);

// 메인 함수
int main(void)
{
	char key[32];

	Add(); // 2개의 노드 생성
	Print(); // 2개의 노드 출력

	printf("삭제할 데이터 : ");
	scanf("%s", key);
	Delete(key);
	printf("\n");
	Print();
}

void Add(void)
{
	int i = 0;
	struct Node* current;

	printf("리스트에 데이터 추가 : \n");
	head = NULL;
	for (i = 0; i < 2; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		current->NextNode = head;
		head = current;
	}
}

void Print(void)
{
	struct Node* current;

	printf("리스트에서 데이터 출력 : \n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

void Delete(char* key)
{
	struct Node* current, * old;

	current = old = head;
	while (current != NULL)
	{
		if (strcmp(key, current->Name) == 0)
		{
			if (current == head)
			{
				head = current->NextNode;
			}
			else
			{
				old->NextNode = current->NextNode;
			}
			return;
		}
		old = current;
		current = current->NextNode;
	}
	printf("키 데이터를 찾을 수 없습니다.\n");
}

struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}

/*
리스트에 데이터 추가 :
aaa 111
bbb 222
리스트에서 데이터 출력 :
bbb 222
aaa 111
삭제할 데이터 : aaa

리스트에서 데이터 출력 :
bbb 222
Press any key to continue
*/